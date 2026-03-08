/*
 * XREFs of ?GetSceneLightRealization@CCompositionEnvironmentLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x18026ABF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionEnvironmentLight::GetSceneLightRealization(
        CCompositionEnvironmentLight *this,
        const struct CMILMatrix *a2,
        struct ISpectreLightNode **a3)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = (struct ISpectreLightNode *)*((_QWORD *)this + 22);
  v4 = *((_QWORD *)this + 22);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, const struct CMILMatrix *))(*(_QWORD *)v4 + 88LL))(v4, a2);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionenvironmentlight.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 22) + 112LL))(
           *((_QWORD *)this + 22),
           (char *)this + 260);
    if ( v8 >= 0 )
      return 0LL;
    v9 = 62LL;
  }
  else
  {
    v8 = -2147467259;
    v9 = 66LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionenvironmentlight.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
