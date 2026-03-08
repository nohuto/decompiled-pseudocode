/*
 * XREFs of ?VidSchiUpdateFlipQueueLogAtISR@@YAEPEAX@Z @ 0x1C004AEF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall VidSchiUpdateFlipQueueLogAtISR(char *a1)
{
  *((_DWORD *)a1 + 5) = DxgCoreInterface[65](
                          *(ADAPTER_DISPLAY **)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 2920LL),
                          (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)(a1 + 8));
  return 1;
}
