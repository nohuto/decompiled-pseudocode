__int64 __fastcall CCompositionTextLine::GetBounds(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 (__fastcall ***v3)(_QWORD); // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 80) )
  {
    v3 = (__int64 (__fastcall ***)(_QWORD))(*(_QWORD *)(a1 + 104)
                                          + 64LL
                                          + *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8LL));
    v4 = (**v3)(v3);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositiontextline.cpp",
        (const char *)(unsigned int)v4);
      return v5;
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
