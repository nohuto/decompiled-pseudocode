__int64 __fastcall WerpParseKeyName(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        _DWORD *a4,
        __int64 a5,
        _DWORD *a6)
{
  _WORD *ReverseCharPosition; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // r9
  _QWORD *v11; // r11
  unsigned int v12; // r10d
  _WORD *v13; // rax
  __int64 v14; // r8

  if ( a1 && a2 && a3 && a4 && a5 && a6 )
  {
    ReverseCharPosition = WerpGetReverseCharPosition(a1, (_WORD *)(2LL * a2 + a1 - 2));
    if ( ReverseCharPosition )
    {
      *v11 = ReverseCharPosition + 1;
      *a6 = (__int64)(v9 + v10 - (_QWORD)(ReverseCharPosition + 1)) >> 1;
      if ( (unsigned __int64)ReverseCharPosition > v9 )
      {
        v13 = WerpGetReverseCharPosition(v9, ReverseCharPosition - 1);
        if ( v13 )
        {
          *a3 = v13 + 1;
          *a4 = ((v14 - (__int64)(v13 + 1)) >> 1) - 1;
          return v12;
        }
        DbgPrintEx(
          0x96u,
          0,
          "WERLIVEKERNELREPORTING:%u: ERROR Could not find \\ in the keyname looking for Report Type\n",
          433LL);
      }
      else
      {
        DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR No report type can be detected\n", 423LL);
      }
    }
    else
    {
      DbgPrintEx(
        0x96u,
        0,
        "WERLIVEKERNELREPORTING:%u: ERROR Could not find \\ in the keyname looking for Reportid\n",
        409LL);
    }
    return (unsigned int)-1073741811;
  }
  return 3221225485LL;
}
