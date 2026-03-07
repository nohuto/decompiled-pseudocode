__int64 __fastcall DT_DrawStr(
        Gre::Base *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        int a5,
        int a6,
        unsigned int a7,
        struct DRAWTEXTDATA *a8,
        int a9)
{
  __int64 v13; // rcx
  unsigned int v14; // r15d
  struct tagTHREADINFO *v15; // rax
  __int64 result; // rax
  int v17; // [rsp+20h] [rbp-48h]

  v14 = a2 - 1;
  if ( (GreGetLayout((HDC)a1) & 1) == 0 )
    v14 = a2;
  if ( *((_DWORD *)a8 + 15) )
  {
    v15 = PtiCurrentShared(v13);
    result = CALL_LPK((__int64)v15);
    if ( (_DWORD)result )
      return xxxClientLpkDrawTextEx(a1, v14, a3, a4, a5, a6, a7, (__int64)a8, 1, a9);
  }
  else
  {
    if ( a6 )
    {
      v17 = a5;
      (*((void (__fastcall **)(Gre::Base *, _QWORD, _QWORD, const unsigned __int16 *))a8 + 6))(a1, v14, a3, a4);
    }
    return (unsigned int)DT_GetExtentMinusPrefixes((HDC)a1, a4, a5, a7, v17, a8, a9) - *((_DWORD *)a8 + 14);
  }
  return result;
}
