/*
 * XREFs of ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x180270F44
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x180230098 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1802612EC (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ??0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x180262654 (--0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18012E95E (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180271E58 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

__m128 __fastcall InteractionSourceManager::GetActiveManipulationDelta(InteractionSourceManager *a1)
{
  __m128 v2; // xmm6
  int v3; // r10d
  int v4; // r10d
  struct CManipulation *v5; // rax
  struct CManipulation *v6; // rax
  __m128 v7; // xmm6
  struct CManipulation *ActiveManipulation; // rax
  _DWORD v10[16]; // [rsp+28h] [rbp-19h] BYREF
  __int64 v11; // [rsp+68h] [rbp+27h] BYREF
  int v12; // [rsp+70h] [rbp+2Fh]
  char v13; // [rsp+74h] [rbp+33h]

  v2 = 0LL;
  if ( !InteractionSourceManager::HasActiveManipulation(a1) )
    return v2;
  if ( !v3 )
  {
    memset_0(v10, 0, sizeof(v10));
    v11 = 0LL;
    v12 = 18;
    v13 = 0;
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(a1);
    (*(void (__fastcall **)(struct CManipulation *, __int64, _DWORD *))(*(_QWORD *)ActiveManipulation + 136LL))(
      ActiveManipulation,
      1LL,
      v10);
    v7 = (__m128)v10[0];
    goto LABEL_8;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    memset_0(v10, 0, sizeof(v10));
    v11 = 0LL;
    v12 = 18;
    v13 = 0;
    v6 = InteractionSourceManager::TryGetActiveManipulation(a1);
    (*(void (__fastcall **)(struct CManipulation *, __int64, _DWORD *))(*(_QWORD *)v6 + 136LL))(v6, 1LL, v10);
    v7 = (__m128)v10[1];
LABEL_8:
    v2 = _mm_xor_ps(v7, (__m128)_xmm);
    goto LABEL_9;
  }
  if ( v4 == 1 )
  {
    memset_0(v10, 0, sizeof(v10));
    v11 = 0LL;
    v12 = 18;
    v13 = 0;
    v5 = InteractionSourceManager::TryGetActiveManipulation(a1);
    (*(void (__fastcall **)(struct CManipulation *, __int64, _DWORD *))(*(_QWORD *)v5 + 136LL))(v5, 3LL, v10);
    v2 = (__m128)v10[0];
LABEL_9:
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v11);
  }
  return v2;
}
