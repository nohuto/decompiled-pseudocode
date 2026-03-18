/*
 * XREFs of ?CreateGenericInk@CD2DContext@@UEAAJPEAPEAVCD2DGenericInk@@@Z @ 0x180286750
 * Callers:
 *     ?CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x18022CF20 (-CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C9C4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ @ 0x180287BB8 (-LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ.c)
 *     ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z @ 0x18029CEE8 (-Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@.c)
 */

__int64 __fastcall CD2DContext::CreateGenericInk(struct CD2DResourceManager **this, struct CD2DGenericInk **a2)
{
  int inited; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  struct CD2DResourceManager *v7; // rdi
  __int64 (__fastcall *v8)(struct CD2DResourceManager *, struct IDCompositionDirectInkWetStrokePartner **); // rbx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  struct IDCompositionDirectInkWetStrokePartner *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0LL;
  inited = CD2DContext::LazyInitDirectInkFactory((CD2DContext *)this);
  v6 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, inited, 0x169u, 0LL);
  }
  else
  {
    v7 = this[40];
    v8 = *(__int64 (__fastcall **)(struct CD2DResourceManager *, struct IDCompositionDirectInkWetStrokePartner **))(*(_QWORD *)v7 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    v9 = v8(v7, &v14);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x16Au, 0LL);
    }
    else
    {
      v11 = CD2DGenericInk::Create(this[21], v14, a2);
      v6 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x16Bu, 0LL);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  return v6;
}
