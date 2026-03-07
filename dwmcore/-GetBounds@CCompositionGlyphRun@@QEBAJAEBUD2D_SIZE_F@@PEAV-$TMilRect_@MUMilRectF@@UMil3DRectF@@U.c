__int64 __fastcall CCompositionGlyphRun::GetBounds(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r9
  __int64 (__fastcall ***v4)(_QWORD); // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    v4 = (__int64 (__fastcall ***)(_QWORD))(v3 + 64 + *(int *)(*(_QWORD *)(v3 + 64) + 8LL));
    v5 = (**v4)(v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionglyphrun.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  else
  {
    a3[3] = 0;
    a3[2] = 0;
    a3[1] = 0;
    *a3 = 0;
  }
  return 0LL;
}
