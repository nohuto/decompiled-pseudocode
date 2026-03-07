__int64 __fastcall CSynchronousSuperWetInk::GetPerFrameDataId(
        CSynchronousSuperWetInk *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // edx
  int v5; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((_DWORD *)this + 43);
  if ( !v4 )
    return CCompositionSurfaceBitmap::GetLastPresentCount(*((CCompositionSurfaceBitmap **)this + 23));
  v5 = v4 - 1;
  if ( !v5 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 23) + 104LL) + 312LL))(*(_QWORD *)(*((_QWORD *)this + 23) + 104LL));
  if ( v5 != 1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      554LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\synchronoussuperwetink.cpp",
      a4);
  return *((unsigned int *)this + 44);
}
