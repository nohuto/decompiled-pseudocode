__int64 __fastcall CD2DContext::UpdateContextOwner(CD2DContext *this, const struct ID2DContextOwner *a2)
{
  int v2; // eax
  _QWORD *v3; // rcx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_DWORD *)this + 88);
  if ( v2 && (v3 = *(_QWORD **)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v2 - 1))) != 0LL )
  {
    *v3 = a2;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x247,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d2dcontext.cpp",
      (const char *)0x88982F04LL,
      v5);
    return 2291674884LL;
  }
}
