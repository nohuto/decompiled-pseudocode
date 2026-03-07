unsigned __int8 __fastcall VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR3(char *a1)
{
  *((_DWORD *)a1 + 530) = DxgCoreInterface[63](
                            *(ADAPTER_DISPLAY **)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 2920LL),
                            (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)(a1 + 8));
  return 1;
}
