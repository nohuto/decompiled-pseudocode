/*
 * XREFs of ?GetSceneLightRealization@CCompositionDistantLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x180220190
 * Callers:
 *     <none>
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x1800DFB38 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionDistantLight::GetSceneLightRealization(
        CCompositionDistantLight *this,
        const struct CMILMatrix *a2,
        struct ISpectreLightNode **a3)
{
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // ebx
  __int64 v14; // rdx
  struct D2D_VECTOR_3F v15; // [rsp+20h] [rbp-39h] BYREF
  _OWORD v16[4]; // [rsp+30h] [rbp-29h] BYREF
  int v17; // [rsp+70h] [rbp+17h]
  struct D2D_VECTOR_3F v18; // [rsp+80h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a3 = (struct ISpectreLightNode *)*((_QWORD *)this + 22);
  v5 = *((_QWORD *)this + 22);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 80LL))(v5, (char *)this + 264);
    if ( v6 < 0 )
    {
      v7 = 255LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositiondistantlight.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 88LL))(*((_QWORD *)this + 22));
    if ( v6 < 0 )
    {
      v7 = 256LL;
      goto LABEL_4;
    }
    v9 = *(_OWORD *)((char *)this + 184);
    v10 = *(_OWORD *)((char *)this + 200);
    v17 = *((_DWORD *)this + 62);
    v16[0] = v9;
    v11 = *(_OWORD *)((char *)this + 216);
    v16[1] = v10;
    v12 = *(_OWORD *)((char *)this + 232);
    v16[2] = v11;
    v16[3] = v12;
    CMILMatrix::Multiply((CMILMatrix *)v16, a2);
    LODWORD(v12) = *((_DWORD *)this + 71);
    v15.x = *((FLOAT *)this + 70);
    v15.z = *((FLOAT *)this + 72);
    LODWORD(v15.y) = v12;
    CMILMatrix::Transform3DVector((CMILMatrix *)v16, &v18, &v15);
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct D2D_VECTOR_3F *))(**((_QWORD **)this + 22) + 96LL))(
            *((_QWORD *)this + 22),
            0LL,
            &v18);
    if ( v13 >= 0 )
      return 0LL;
    v14 = 261LL;
  }
  else
  {
    v13 = -2147467259;
    v14 = 265LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositiondistantlight.cpp",
    (const char *)(unsigned int)v13);
  return (unsigned int)v13;
}
