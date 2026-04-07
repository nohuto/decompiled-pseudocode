/*
 * XREFs of ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180040300
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180013F7C (-InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180027E20 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CRenderDataVisual::CloneVisualTree(__int64 a1, CBaseObject **a2)
{
  int v4; // eax
  CBaseObject *v5; // rbx
  unsigned int v6; // edi
  CBaseObject *v7; // rax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CRenderDataVisual *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  *a2 = 0LL;
  v4 = CRenderDataVisual::Create(&v11);
  v5 = v11;
  v6 = v4;
  if ( v4 < 0 )
  {
    v9 = 164LL;
  }
  else
  {
    v4 = CRenderDataVisual::InitializeVisualTreeClone(a1, v11);
    v6 = v4;
    if ( v4 >= 0 )
    {
      v7 = v5;
      v5 = 0LL;
      v6 = 0;
      *a2 = v7;
      goto LABEL_4;
    }
    v9 = 165LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"clientcore\\windows\\dwm\\udwm\\renderdatavisual.cpp",
    (const char *)(unsigned int)v4);
LABEL_4:
  if ( v5 )
    CBaseObject::Release(v5);
  return v6;
}
