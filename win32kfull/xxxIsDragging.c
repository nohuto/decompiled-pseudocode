/*
 * XREFs of xxxIsDragging @ 0x1C0232C4C
 * Callers:
 *     xxxSysCommand @ 0x1C00DE67C (xxxSysCommand.c)
 *     NtUserDragDetect @ 0x1C01CF8A0 (NtUserDragDetect.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C00108E8 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00109E4 (xxxSetCapture.c)
 *     xxxSleepThread2 @ 0x1C006D200 (xxxSleepThread2.c)
 *     xxxInternalGetMessage @ 0x1C00946B0 (xxxInternalGetMessage.c)
 *     PtInRect @ 0x1C00A34E8 (PtInRect.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C01098A8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     xxxSleepThread @ 0x1C01B48DC (xxxSleepThread.c)
 */

__int64 __fastcall xxxIsDragging(__int64 a1, __int64 a2)
{
  int v5; // r12d
  int v6; // edx
  int v7; // r8d
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r14
  int v14; // [rsp+38h] [rbp-29h] BYREF
  __int64 v15; // [rsp+40h] [rbp-21h] BYREF
  __int64 v16; // [rsp+48h] [rbp-19h]
  __int128 v17; // [rsp+50h] [rbp-11h] BYREF
  __int128 v18; // [rsp+60h] [rbp-1h]
  __int128 v19; // [rsp+70h] [rbp+Fh]
  _QWORD v20[3]; // [rsp+80h] [rbp+1Fh] BYREF

  v20[2] = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( (_GetKeyState(1LL) & 0x8000u) == 0LL )
    return 0LL;
  xxxSetCapture(a1);
  v5 = 1;
  v15 = a2;
  v16 = a2;
  v6 = *(_DWORD *)(gpsi + 2168LL);
  v7 = *(_DWORD *)(gpsi + 2172LL);
  HIDWORD(v15) = HIDWORD(a2) - v7;
  HIDWORD(v16) = v7 + HIDWORD(a2);
  LODWORD(v15) = a2 - v6;
  LODWORD(v16) = a2 + v6;
  v8 = 0;
  v20[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v20;
  v20[1] = a1;
  if ( a1 )
    HMLockObject(a1);
  v9 = gptiCurrent + 432LL;
  do
  {
    while ( 1 )
    {
      v13 = gptiCurrent + 432LL;
      while ( (unsigned int)xxxInternalGetMessage(&v17, 0LL, 0x200u, 0x20Eu, 1, 0)
           || (unsigned int)xxxInternalGetMessage(&v17, 0LL, 0x23u, 0x23u, 1, 0)
           || (unsigned int)xxxInternalGetMessage(&v17, 0LL, 0x100u, 0x109u, 1, 0)
           || *(_QWORD *)(*(_QWORD *)v13 + 112LL) != a1 )
      {
        v13 = gptiCurrent + 432LL;
        if ( *(_QWORD *)(*(_QWORD *)v9 + 112LL) == a1 && DWORD2(v17) != 514 )
        {
          if ( DWORD2(v17) == 35 )
          {
            xxxCallHook(2LL, 0LL, 0LL, 5);
          }
          else if ( DWORD2(v17) == 256 )
          {
            if ( (_QWORD)v18 == 27LL )
              goto LABEL_13;
          }
          else if ( DWORD2(v17) == 512 && !PtInRect(&v15, *(unsigned __int64 *)((char *)&v19 + 4)) )
          {
            v8 = 1;
            v5 = 0;
          }
          if ( v5 )
            continue;
        }
        goto LABEL_13;
      }
      if ( *(_QWORD *)(gptiCurrent + 1432LL) )
        break;
      if ( !(unsigned int)xxxSleepThread(7u, 0x1F4u, 1, 0) )
        goto LABEL_12;
    }
    v14 = 0;
  }
  while ( (unsigned int)xxxSleepThread2(7u, 0x1F4u, 1, 0, (enum SLEEP_STATUS *)&v14) && !v14 );
LABEL_12:
  v8 = 1;
LABEL_13:
  v12 = *(_QWORD *)v9;
  if ( *(_QWORD *)(*(_QWORD *)v9 + 112LL) == a1 )
    xxxReleaseCapture();
  ThreadUnlock1(v12, v10, v11);
  return v8;
}
