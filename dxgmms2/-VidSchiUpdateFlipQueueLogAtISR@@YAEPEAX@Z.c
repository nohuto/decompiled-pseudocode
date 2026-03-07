unsigned __int8 __fastcall VidSchiUpdateFlipQueueLogAtISR(char *a1)
{
  *((_DWORD *)a1 + 5) = DxgCoreInterface[65](
                          *(ADAPTER_DISPLAY **)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 2920LL),
                          (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)(a1 + 8));
  return 1;
}
