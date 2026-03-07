__int64 __fastcall DT_GetExtentMinusPrefixes(
        Gre::Base *a1,
        WCHAR *a2,
        unsigned int a3,
        int a4,
        int a5,
        struct DRAWTEXTDATA *a6,
        int a7)
{
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rbp
  __int64 v13; // r8
  struct tagSIZE v15[2]; // [rsp+50h] [rbp-18h] BYREF

  v15[0] = 0LL;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v12 = PtiCurrentShared(v11);
  GetPrefixCount(a2, a3, 0LL, 0LL);
  if ( *((_DWORD *)a6 + 15) && (unsigned int)CALL_LPK((__int64)v12) )
    return xxxClientLpkDrawTextEx(a1, 0, 0, a2, a3, 0, a4, v13, 1, a7);
  if ( (unsigned int)CALL_LPK((__int64)v12) )
    xxxClientGetTextExtentPointW(a1, a2, a3, v15);
  else
    GreGetTextExtentW((HDC)a1, a2, a3, v15);
  return (unsigned int)v15[0].cx;
}
