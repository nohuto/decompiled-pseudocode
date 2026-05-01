/*
 * XREFs of ??$SafeRelease@VCDummyUnknown@@@@YAXPEAPEAVCDummyUnknown@@@Z @ 0x18014FE70
 * Callers:
 *     BindCtx_AddObjectParam @ 0x180150010 (BindCtx_AddObjectParam.c)
 *     BindCtx_AddObjectParam_0 @ 0x1801600B8 (BindCtx_AddObjectParam_0.c)
 * Callees:
 *     ?Release@CDummyUnknown@@UEAAKXZ @ 0x1801505E0 (-Release@CDummyUnknown@@UEAAKXZ.c)
 */

int __fastcall SafeRelease<CDummyUnknown>(CDummyUnknown **a1)
{
  CDummyUnknown *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    LODWORD(v1) = CDummyUnknown::Release(v1);
  return (int)v1;
}
