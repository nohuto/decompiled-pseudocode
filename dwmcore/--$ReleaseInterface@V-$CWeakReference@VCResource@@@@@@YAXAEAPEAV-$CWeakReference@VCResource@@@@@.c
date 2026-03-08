/*
 * XREFs of ??$ReleaseInterface@V?$CWeakReference@VCResource@@@@@@YAXAEAPEAV?$CWeakReference@VCResource@@@@@Z @ 0x1800BC4E4
 * Callers:
 *     ??1CExpression@@MEAA@XZ @ 0x1800BC92C (--1CExpression@@MEAA@XZ.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x180261254 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x180270AE4 (--1InteractionSourceManager@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ReleaseInterface<CWeakReference<CResource>>(__int64 *a1)
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
