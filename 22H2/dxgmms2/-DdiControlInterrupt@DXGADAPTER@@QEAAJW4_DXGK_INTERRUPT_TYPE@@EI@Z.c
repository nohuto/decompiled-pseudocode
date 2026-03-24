/*
 * XREFs of ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@EI@Z @ 0x1C0002730
 * Callers:
 *     VidSchiControlVSync @ 0x1C0079384 (VidSchiControlVSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt(DXGADAPTER *this, enum _DXGK_INTERRUPT_TYPE a2)
{
  return ((__int64 (__fastcall *)(DXGADAPTER *, __int64))DxgCoreInterface[12])(this, 3LL);
}
