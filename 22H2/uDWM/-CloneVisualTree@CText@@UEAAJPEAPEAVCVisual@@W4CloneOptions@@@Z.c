/*
 * XREFs of ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18002BA70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CText@@SAJPEAPEAV1@@Z @ 0x180029764 (-Create@CText@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18002BAF4 (-InitializeVisualTreeClone@CText@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 */

__int64 __fastcall CText::CloneVisualTree(__int64 a1, CBaseObject **a2, unsigned int a3)
{
  int v6; // eax
  CBaseObject *v7; // rbx
  unsigned int v8; // edi
  CBaseObject *v9; // rax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CText *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  *a2 = 0LL;
  v6 = CText::Create(&v13);
  v7 = v13;
  v8 = v6;
  if ( v6 < 0 )
  {
    v11 = 514LL;
  }
  else
  {
    v6 = CText::InitializeVisualTreeClone(a1, v13, a3);
    v8 = v6;
    if ( v6 >= 0 )
    {
      v9 = v7;
      v7 = 0LL;
      v8 = 0;
      *a2 = v9;
      goto LABEL_4;
    }
    v11 = 515LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"clientcore\\windows\\dwm\\udwm\\text.cpp",
    (const char *)(unsigned int)v6);
LABEL_4:
  if ( v7 )
    CBaseObject::Release(v7);
  return v8;
}
