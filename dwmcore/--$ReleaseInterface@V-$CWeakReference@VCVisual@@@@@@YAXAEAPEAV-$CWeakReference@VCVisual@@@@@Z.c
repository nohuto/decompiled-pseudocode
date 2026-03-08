/*
 * XREFs of ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x1800E7EB8
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x1800E4A54 (--1CInteraction@@MEAA@XZ.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x1800E7E28 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UnRegisterNotifiers@CInteraction@@UEAAXXZ @ 0x180209B00 (-UnRegisterNotifiers@CInteraction@@UEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<CWeakReference<CVisual>>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *a1 = 0LL;
  }
  return result;
}
