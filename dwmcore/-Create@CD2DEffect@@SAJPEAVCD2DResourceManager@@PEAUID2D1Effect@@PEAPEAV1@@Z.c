/*
 * XREFs of ?Create@CD2DEffect@@SAJPEAVCD2DResourceManager@@PEAUID2D1Effect@@PEAPEAV1@@Z @ 0x180016988
 * Callers:
 *     ?CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z @ 0x1800168B0 (-CreateD2DEffect@CD2DContext@@UEAAJAEBU_GUID@@PEAPEAVCD2DEffect@@@Z.c)
 * Callees:
 *     ??0CD2DEffect@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x180016A38 (--0CD2DEffect@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z @ 0x1800EAB60 (-AddResource@CD2DResourceManager@@QEAAXPEAVCD2DResource@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DEffect::Create(struct CD2DResourceManager *a1, struct ID2D1Effect *a2, struct CD2DEffect **a3)
{
  CD2DEffect *v6; // rax
  unsigned int v7; // ecx
  CD2DEffect *v8; // rax
  CD2DEffect *v9; // rbx
  unsigned int v10; // edi

  *a3 = 0LL;
  v6 = (CD2DEffect *)operator new(0x80uLL);
  if ( v6 && (v8 = CD2DEffect::CD2DEffect(v6, a1), (v9 = v8) != 0LL) )
  {
    (*(void (__fastcall **)(CD2DEffect *))(*(_QWORD *)v8 + 8LL))(v8);
    *((_QWORD *)v9 + 10) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct ID2D1Effect *))(*(_QWORD *)a2 + 8LL))(a2);
    CD2DResourceManager::AddResource(*((CD2DResourceManager **)v9 + 3), v9);
    v10 = 0;
    *a3 = v9;
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x15u, 0LL);
  }
  return v10;
}
