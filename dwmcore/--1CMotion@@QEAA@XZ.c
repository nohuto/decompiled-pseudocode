/*
 * XREFs of ??1CMotion@@QEAA@XZ @ 0x180263224
 * Callers:
 *     ??_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z @ 0x180263290 (--_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x1802639B0 (--_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
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
