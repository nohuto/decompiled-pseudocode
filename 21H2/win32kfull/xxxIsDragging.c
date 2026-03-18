/*
 * XREFs of xxxIsDragging @ 0x1C0244970
 * Callers:
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 *     NtUserDragDetect @ 0x1C01F2750 (NtUserDragDetect.c)
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C004DAF8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSleepThread2 @ 0x1C0052D3C (xxxSleepThread2.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     xxxInternalGetMessage @ 0x1C00A4B4C (xxxInternalGetMessage.c)
 *     xxxReleaseCapture @ 0x1C00AA35C (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00AA44C (xxxSetCapture.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     xxxSleepThread @ 0x1C01D9FC0 (xxxSleepThread.c)
 */

__int64 __fastcall xxxIsDragging(__int64 a1, __int64 a2)
{
  int v5; // r14d
  int v6; // edx
  int v7; // r8d
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  int v12; // [rsp+38h] [rbp-29h] BYREF
  __int64 v13; // [rsp+40h] [rbp-21h] BYREF
  __int64 v14; // [rsp+48h] [rbp-19h]
  __int128 v15; // [rsp+50h] [rbp-11h] BYREF
  __int128 v16; // [rsp+60h] [rbp-1h]
  __int128 v17; // [rsp+70h] [rbp+Fh]
  _QWORD v18[3]; // [rsp+80h] [rbp+1Fh] BYREF

  v18[2] = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( (_GetKeyState(1LL) & 0x8000u) == 0LL )
    return 0LL;
  xxxSetCapture(a1);
  v5 = 1;
  v13 = a2;
  v14 = a2;
  v6 = *(_DWORD *)(gpsi + 2168LL);
  v7 = *(_DWORD *)(gpsi + 2172LL);
  HIDWORD(v13) = HIDWORD(a2) - v7;
  HIDWORD(v14) = v7 + HIDWORD(a2);
  LODWORD(v13) = a2 - v6;
  LODWORD(v14) = a2 + v6;
  v8 = 0;
  v18[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v18;
  v18[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  do
  {
    while ( 1 )
    {
      while ( (unsigned int)xxxInternalGetMessage(&v15, 0LL, 0x200u, 0x20Eu, 1, 0)
           || (unsigned int)xxxInternalGetMessage(&v15, 0LL, 0x23u, 0x23u, 1, 0)
           || (unsigned int)xxxInternalGetMessage(&v15, 0LL, 0x100u, 0x109u, 1, 0)
           || *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) != a1 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) == a1 && DWORD2(v15) != 514 )
        {
          if ( DWORD2(v15) == 35 )
          {
            xxxCallHook(2, 0LL, 0LL, 5);
          }
          else if ( DWORD2(v15) == 256 )
          {
            if ( (_QWORD)v16 == 27LL )
              goto LABEL_12;
          }
          else if ( DWORD2(v15) == 512 && !PtInRect(&v13, *(unsigned __int64 *)((char *)&v17 + 4)) )
          {
            v8 = 1;
            v5 = 0;
          }
          if ( v5 )
            continue;
        }
        goto LABEL_12;
      }
      if ( *(_QWORD *)(gptiCurrent + 1392LL) )
        break;
      if ( !(unsigned int)xxxSleepThread(7u, 0x1F4u, 1, 0) )
        goto LABEL_11;
    }
    v12 = 0;
  }
  while ( (unsigned int)xxxSleepThread2(7u, 0x1F4u, 1, 0, (enum SLEEP_STATUS *)&v12) && !v12 );
LABEL_11:
  v8 = 1;
LABEL_12:
  v11 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(v11 + 104) == a1 )
    xxxReleaseCapture();
  ThreadUnlock1(v11, v9, v10);
  return v8;
}
