obj-$(CONFIG_SPI_INTEL) += spi_intel.o
ifeq ($(CONFIG_SPI_LEGACY_API),y)
obj-$(CONFIG_SPI_DW) += spi_dw_legacy.o
obj-$(CONFIG_SPI_PPU) += spi_ppu_legacy.o
else
obj-$(CONFIG_SPI_DW) += spi_dw.o
obj-$(CONFIG_SPI_PPU) += spi_ppu.o
endif
obj-$(CONFIG_SPI_MCUX_DSPI) += spi_mcux_dspi.o
obj-$(CONFIG_SPIM_NRF52) += spim_nrf52.o
obj-$(CONFIG_SPIS_NRF5) += spis_nrf5.o
obj-$(CONFIG_SPI_QMSI) += spi_qmsi.o
obj-$(CONFIG_SPI_QMSI_SS) += spi_qmsi_ss.o
obj-$(CONFIG_SPI_STM32) += spi_ll_stm32.o
