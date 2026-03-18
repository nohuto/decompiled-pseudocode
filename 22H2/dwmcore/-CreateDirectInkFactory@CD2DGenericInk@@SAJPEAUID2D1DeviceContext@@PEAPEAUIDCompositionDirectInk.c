/*
 * XREFs of ?CreateDirectInkFactory@CD2DGenericInk@@SAJPEAUID2D1DeviceContext@@PEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x18029D080
 * Callers:
 *     ?LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ @ 0x180287BB8 (-LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     GetLPCreateDCompositionDirectInkFactoryPartner @ 0x18029D10C (GetLPCreateDCompositionDirectInkFactoryPartner.c)
 */

__int64 __fastcall CD2DGenericInk::CreateDirectInkFactory(
        struct ID2D1DeviceContext *a1,
        struct IDCompositionDirectInkFactoryPartner **a2)
{
  int LPCreateDCompositionDirectInkFactoryPartner; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  __int64 (__fastcall *v10)(struct ID2D1DeviceContext *, struct IDCompositionDirectInkFactoryPartner **); // [rsp+50h] [rbp+18h] BYREF

  LPCreateDCompositionDirectInkFactoryPartner = GetLPCreateDCompositionDirectInkFactoryPartner(&v10);
  v6 = LPCreateDCompositionDirectInkFactoryPartner;
  if ( LPCreateDCompositionDirectInkFactoryPartner < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, LPCreateDCompositionDirectInkFactoryPartner, 0x36u, 0LL);
  }
  else
  {
    v7 = v10(a1, a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x37u, 0LL);
  }
  return v6;
}
