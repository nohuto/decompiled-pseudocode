__int64 __fastcall ADAPTER_DISPLAY::DodGetOpmMftContext(ADAPTER_DISPLAY *this, __int64 a2, unsigned __int64 *a3)
{
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(_QWORD, __int64, unsigned __int64 *); // rax
  int v7; // eax
  __int64 v8; // rdi

  v4 = *((_QWORD *)this + 2);
  v5 = *(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64 *))(v4 + 2144);
  if ( v5 )
  {
    v7 = v5(*(_QWORD *)(v4 + 2112), a2, a3);
    v8 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(2LL, v7);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Dod driver failed DodGetOpmMftContext call with 0x%I64x",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v8;
  }
  else
  {
    WdLogSingleEntry1(2LL, v4);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"GetOpmMftContext function not supported by Dod driver",
      *((_QWORD *)this + 2),
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
}
