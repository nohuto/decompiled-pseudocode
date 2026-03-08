/*
 * XREFs of ?GetSwapChainOverlayColor@CDrawingContext@@AEBA?AU_D3DCOLORVALUE@@PEAVISwapChainRealization@@PEBVIBitmapResource@@@Z @ 0x1801B3B30
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z @ 0x1800D87F0 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

struct _D3DCOLORVALUE *__fastcall CDrawingContext::GetSwapChainOverlayColor(
        CDrawingContext *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        struct ISwapChainRealization *a3,
        const struct IBitmapResource *a4)
{
  bool v4; // cf
  char *v8; // rdi
  int (__fastcall *v9)(char *, GUID *, __int64 *); // rbp
  __int64 v10; // rcx
  char v11; // cl
  __int64 v12; // rcx
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  v4 = CCommonRegistryData::m_dwOverlayTestMode == 0;
  *(_OWORD *)&retstr->r = 0LL;
  if ( v4 )
    return retstr;
  v14 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct IBitmapResource *))(*(_QWORD *)a4 + 56LL))(a4) )
  {
    retstr->g = 0.0;
    retstr->b = 0.0;
    retstr->r = 1.0;
    retstr->a = 0.5;
    goto LABEL_12;
  }
  v8 = (char *)a3 + *(int *)(*((_QWORD *)a3 + 1) + 4LL);
  v9 = (int (__fastcall *)(char *, GUID *, __int64 *))**((_QWORD **)v8 + 1);
  if ( v14 )
  {
    v10 = v14 + 8 + *(int *)(*(_QWORD *)(v14 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( v9(v8 + 8, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v14) < 0 )
  {
    v11 = *(_BYTE *)(*((_QWORD *)this + 6) + 11297LL);
    retstr->a = 0.5;
    if ( v11 )
    {
      retstr->r = 1.0;
      retstr->g = 0.77999997;
      retstr->b = 0.055;
      goto LABEL_12;
    }
    retstr->r = 0.0;
    retstr->b = 1.0;
  }
  else
  {
    retstr->b = 0.0;
    retstr->r = 1.0;
    retstr->a = 0.5;
  }
  retstr->g = 1.0;
LABEL_12:
  if ( v14 )
  {
    v12 = *(int *)(*(_QWORD *)(v14 + 8) + 4LL) + v14 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return retstr;
}
