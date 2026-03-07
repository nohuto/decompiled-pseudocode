__int64 __fastcall lambda_5d5aaaad4d10f157f91a33890a246c1f_::operator()(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int TargetFromSource; // eax
  int v5; // eax
  unsigned int v6; // ebx
  int v8[4]; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+34h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(unsigned int *)(a2 + 32);
  v9 = 0;
  v10 = 0;
  *(_OWORD *)v8 = *(_OWORD *)&_xmm;
  TargetFromSource = CExternalEffectGraph::CGraphRenderingContext::MakeTargetFromSource(
                       (CExternalEffectGraph::CGraphRenderingContext *)a2,
                       v2,
                       (const struct D2D_RECT_F *)v8);
  *(_BYTE *)(104 * v2 + *(_QWORD *)(a2 + 48) + 100) = 1;
  v5 = CExternalEffectGraph::CGraphRenderingContext::PushTarget(
         (CExternalEffectGraph::CGraphRenderingContext *)a2,
         TargetFromSource);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x14F,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\effects\\gaussianblur.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
