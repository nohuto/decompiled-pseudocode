__int64 __fastcall SdbpGetSystemSdbFilePath(_WORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 *v8; // rax
  int v9; // ebx
  __int64 v10; // r8

  *a1 = 0;
  if ( a3 && a3 < 10 )
  {
    v6 = 1LL;
    v7 = &qword_14000A270;
    while ( *(_DWORD *)v7 != a3 )
    {
      ++v6;
      v7 += 4;
      if ( v6 >= 0xA )
        goto LABEL_8;
    }
    v8 = &qword_14000A250[4 * v6];
    if ( !v8 )
    {
LABEL_8:
      AslLogCallPrintf(1LL);
      return (unsigned int)-1073741275;
    }
    if ( v8[2] )
    {
      v10 = a5;
      if ( !a5 )
        v10 = v8[1];
      v9 = ((__int64 (__fastcall *)(_WORD *, __int64, __int64, __int64))v8[2])(a1, 260LL, v10, a6);
      if ( v9 >= 0 )
        return 0;
      else
        AslLogCallPrintf(1LL);
    }
    else
    {
      AslLogCallPrintf(1LL);
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    return (unsigned int)-1073741583;
  }
  return (unsigned int)v9;
}
