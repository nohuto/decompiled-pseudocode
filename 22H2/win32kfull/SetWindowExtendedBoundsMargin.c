/*
 * XREFs of SetWindowExtendedBoundsMargin @ 0x1C003807C
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x1C0037A00 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004FBD0 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     _GetWindowCompositionInfo @ 0x1C006DE10 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall SetWindowExtendedBoundsMargin(struct tagTHREADINFO **a1, _WORD *a2)
{
  _QWORD *v5; // rbx
  _OWORD v6[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v7; // [rsp+60h] [rbp-10h]
  __int64 v8; // [rsp+90h] [rbp+20h]

  if ( !(unsigned int)IsProcessDwm(**(_QWORD **)(gptiCurrent + 424LL)) )
    return 3221225506LL;
  memset(v6, 0, sizeof(v6));
  v7 = 0LL;
  if ( !(unsigned int)GetWindowCompositionInfo(a1, v6) )
    return 3221225480LL;
  LOWORD(v8) = *a2;
  WORD1(v8) = a2[4];
  WORD2(v8) = a2[2];
  HIWORD(v8) = a2[6];
  if ( *a2 == (_WORD)v7 && __PAIR32__(a2[2], a2[4]) == *(_DWORD *)((char *)&v7 + 2) && a2[6] == HIWORD(v7) )
    return 0LL;
  v5 = (_QWORD *)Win32AllocPool(8LL, 2020832085LL);
  if ( !v5 )
    return 3221225495LL;
  *v5 = v8;
  if ( (unsigned int)PostEventMessageEx(
                       a1[2],
                       *((struct tagQ **)a1[2] + 54),
                       0x1Cu,
                       (struct tagWND *)a1,
                       0,
                       (unsigned __int64)v5,
                       0LL,
                       0LL) )
    return 0LL;
  Win32FreePool(v5);
  return 3221225473LL;
}
