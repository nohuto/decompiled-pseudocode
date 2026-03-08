/*
 * XREFs of ?Create@?$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z @ 0x180261860
 * Callers:
 *     ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1802619B0 (-Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ?Initialize@InteractionSourceManager@@QEAAXPEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x180271248 (-Initialize@InteractionSourceManager@@QEAAXPEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 * Callees:
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x18009995C (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWeakReference<CInteractionTracker>::Create(
        struct CResource *a1,
        struct CWeakResourceReference **a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  struct CWeakResourceReference *v6; // rcx
  struct CWeakResourceReference *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v3 = CWeakResourceReference::Get(a1, &v8);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x94u, 0LL);
    v6 = v8;
  }
  else
  {
    v6 = 0LL;
    *a2 = v8;
  }
  if ( v6 )
    (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v6 + 8LL))(v6);
  return v5;
}
