/*
 * XREFs of ??1CMotion@@QEAA@XZ @ 0x180266924
 * Callers:
 *     ??_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z @ 0x180266990 (--_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x1802670B0 (--_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F3C10 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CMotion::~CMotion(CMotion *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 12);
  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
}
