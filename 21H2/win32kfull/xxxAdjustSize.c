/*
 * XREFs of xxxAdjustSize @ 0x1C004B2E8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049EC8 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 * Callees:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0064D40 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ConstrainWindowSize @ 0x1C006A22C (ConstrainWindowSize.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

__int64 __fastcall xxxAdjustSize(struct tagWND *a1, int *a2, int *a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int128 v8; // kr00_16
  int v9; // edx
  int v10; // edx
  int v11; // edx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx

  result = 0LL;
  v5 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v5 + 31) & 0xC0) == 0 || (*(_BYTE *)(v5 + 30) & 4) != 0 )
  {
    xxxInitSendValidateMinMaxInfoEx(a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      v8 = 0LL;
    else
      v8 = 0uLL;
    v9 = DWORD2(v8);
    if ( *a2 < SDWORD2(v8) )
      v9 = *a2;
    if ( (int)v8 <= v9 )
    {
      v10 = DWORD2(v8);
      if ( *a2 < SDWORD2(v8) )
        v10 = *a2;
    }
    else
    {
      v10 = v8;
    }
    *a2 = v10;
    v11 = *a3;
    v12 = HIDWORD(*((_QWORD *)&v8 + 1));
    v13 = DWORD1(v8);
    if ( *a3 >= SHIDWORD(v8) )
      v11 = HIDWORD(v8);
    if ( SDWORD1(v8) <= v11 )
    {
      if ( *a3 < SHIDWORD(v8) )
        LODWORD(v12) = *a3;
      LODWORD(v13) = v12;
    }
    *a3 = v13;
    return ConstrainWindowSize(a2, a3);
  }
  return result;
}
