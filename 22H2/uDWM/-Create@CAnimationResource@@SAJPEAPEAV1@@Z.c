/*
 * XREFs of ?Create@CAnimationResource@@SAJPEAPEAV1@@Z @ 0x18000795C
 * Callers:
 *     ?GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAnimationResource@@@Z @ 0x1800078A0 (-GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAni.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationResource::Create(struct CAnimationResource **a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx

  if ( a1 )
  {
    v2 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           104LL);
    if ( v2 )
    {
      *(_QWORD *)(v2 + 8) = 0LL;
      *(_QWORD *)v2 = &CAnimationResource::`vftable';
      *(_DWORD *)(v2 + 16) = 1;
      *(_QWORD *)(v2 + 24) = 0LL;
      *(_QWORD *)(v2 + 32) = 0LL;
      *(_QWORD *)(v2 + 40) = 0LL;
      *(_QWORD *)(v2 + 48) = 0LL;
      *(_DWORD *)(v2 + 56) = 0;
      *(_QWORD *)(v2 + 64) = 0LL;
      *(_WORD *)(v2 + 72) = 0;
      *(_QWORD *)(v2 + 80) = 0LL;
      *(_DWORD *)(v2 + 88) = 7;
      *(_QWORD *)(v2 + 96) = 0LL;
    }
    else
    {
      v2 = 0LL;
    }
    if ( v2 )
    {
      *a1 = (struct CAnimationResource *)v2;
      return 0;
    }
    else
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x15u);
      *a1 = 0LL;
    }
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x15u);
  }
  return v3;
}
