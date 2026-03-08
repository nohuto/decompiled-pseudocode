/*
 * XREFs of ?CreateResource@CFilterEffect@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x180218DA0
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x180218EBC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDe.c)
 * Callees:
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x1800168B0 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::CreateResource(CFilterEffect *this, struct CD3DDevice *a2, struct CD2DEffect **a3)
{
  const struct _GUID *v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct CD2DEffect *v9; // rcx
  struct CD2DEffect *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v5 = (const struct _GUID *)(*(__int64 (__fastcall **)(CFilterEffect *))(*(_QWORD *)this + 200LL))(this);
  v6 = CD2DContext::CreateD2DEffect((struct CD3DDevice *)((char *)a2 + 16), v5, &v11);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x2FEu, 0LL);
    v9 = v11;
  }
  else
  {
    *a3 = v11;
    v9 = 0LL;
  }
  if ( v9 )
    (*(void (__fastcall **)(struct CD2DEffect *))(*(_QWORD *)v9 + 16LL))(v9);
  return v8;
}
