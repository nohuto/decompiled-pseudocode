/*
 * XREFs of ?VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR@@YAEPEAX@Z @ 0x1C0035A80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall VidSchiExecuteMmIoFlipMultiPlaneOverlayAtISR(char *a1)
{
  *((_DWORD *)a1 + 530) = DxgCoreInterface[45](
                            *(ADAPTER_DISPLAY **)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 2920LL),
                            (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)(a1 + 8));
  return 1;
}
