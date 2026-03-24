/*
 * XREFs of xxxIsDragging @ 0x1C0248D98
 * Callers:
 *     xxxSysCommand @ 0x1C0130714 (xxxSysCommand.c)
 *     NtUserDragDetect @ 0x1C01F7D10 (NtUserDragDetect.c)
 * Callees:
 *     PtInRect @ 0x1C004DEBC (PtInRect.c)
 *     xxxSleepThread2 @ 0x1C0058750 (xxxSleepThread2.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B900 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxInternalGetMessage @ 0x1C00D9FB0 (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C00DAE50 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00DAF80 (xxxSetCapture.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     xxxSleepThread @ 0x1C01D3500 (xxxSleepThread.c)
 */

__int64 __fastcall xxxIsDragging(__int64 a1, __int64 a2)
{
  int v5; // r14d
  int v6; // edx
  int v7; // r8d
  unsigned int v8; // ebx
  __int64 v9; // rcx
  BOOL v10; // eax
  int v11; // [rsp+38h] [rbp-29h] BYREF
  __int64 v12; // [rsp+40h] [rbp-21h] BYREF
  __int64 v13; // [rsp+48h] [rbp-19h]
  __int128 v14; // [rsp+50h] [rbp-11h] BYREF
  __int128 v15; // [rsp+60h] [rbp-1h]
  __int128 v16; // [rsp+70h] [rbp+Fh]
  _QWORD v17[3]; // [rsp+80h] [rbp+1Fh] BYREF

  v17[2] = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( (_GetKeyState(1LL) & 0x8000u) == 0LL )
    return 0LL;
  xxxSetCapture(a1);
  v5 = 1;
  v12 = a2;
  v13 = a2;
  v6 = *(_DWORD *)(gpsi + 2168LL);
  v7 = *(_DWORD *)(gpsi + 2172LL);
  HIDWORD(v12) = HIDWORD(a2) - v7;
  HIDWORD(v13) = v7 + HIDWORD(a2);
  LODWORD(v12) = a2 - v6;
  LODWORD(v13) = a2 + v6;
  v8 = 0;
  v17[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v17;
  v17[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  do
  {
    while ( 1 )
    {
      while ( (unsigned int)xxxInternalGetMessage(&v14, 0LL, 0x200u, 0x20Eu, 1, 0)
           || (unsigned int)xxxInternalGetMessage(&v14, 0LL, 0x23u, 0x23u, 1, 0)
           || (unsigned int)xxxInternalGetMessage(&v14, 0LL, 0x100u, 0x109u, 1, 0)
           || *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) != a1 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) != a1 || DWORD2(v14) == 514 )
        {
          v5 = 0;
        }
        else
        {
          switch ( DWORD2(v14) )
          {
            case 0x23:
              xxxCallHook(2, 0LL, 0LL, 5);
              break;
            case 0x100:
              if ( (_QWORD)v15 == 27LL )
                goto LABEL_12;
              break;
            case 0x200:
              v10 = PtInRect(&v12, *(unsigned __int64 *)((char *)&v16 + 4));
              if ( !v10 )
                v8 = 1;
              v5 = v10 ? v5 : 0;
              break;
          }
        }
        if ( !v5 )
          goto LABEL_12;
      }
      if ( *(_QWORD *)(gptiCurrent + 1392LL) )
        break;
      if ( !(unsigned int)xxxSleepThread(7u, 0x1F4u, 1, 0) )
        goto LABEL_11;
    }
    v11 = 0;
  }
  while ( (unsigned int)xxxSleepThread2(7u, 0x1F4u, 1, 0, (enum SLEEP_STATUS *)&v11) && !v11 );
LABEL_11:
  v8 = 1;
LABEL_12:
  v9 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(v9 + 104) == a1 )
    xxxReleaseCapture();
  ThreadUnlock1(v9);
  return v8;
}
