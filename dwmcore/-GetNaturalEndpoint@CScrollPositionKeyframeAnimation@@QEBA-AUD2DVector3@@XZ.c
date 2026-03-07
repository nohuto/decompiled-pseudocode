__int64 __fastcall CScrollPositionKeyframeAnimation::GetNaturalEndpoint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_BYTE *)(a1 + 668) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      190LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
      a4);
  if ( *(_DWORD *)(a1 + 664) != 52 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      191LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollpositionkeyframeanimation.cpp",
      a4);
  v4 = *(_DWORD *)(a1 + 600);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 592);
  *(_DWORD *)(a2 + 8) = v4;
  return a2;
}
