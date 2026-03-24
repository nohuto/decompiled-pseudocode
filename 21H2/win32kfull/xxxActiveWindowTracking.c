/*
 * XREFs of xxxActiveWindowTracking @ 0x1C01E2A2C
 * Callers:
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C004B3CC (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00C0B18 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 * Callees:
 *     IsForegroundLocked @ 0x1C003D264 (IsForegroundLocked.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01D28E0 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     GetActiveTrackPwnd @ 0x1C01E1C6C (GetActiveTrackPwnd.c)
 */

__int64 __fastcall xxxActiveWindowTracking(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned __int64 *ActiveTrackPwnd; // rax
  unsigned __int64 *v9; // rdi
  __int64 ThreadWin32Thread; // rax
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL);
  v7 = *(_DWORD *)(v6 + 388);
  if ( (v7 & 0x200000) == 0 )
    return 0LL;
  *(_DWORD *)(v6 + 388) = v7 & 0xFFDFFFFF;
  if ( (unsigned int)IsForegroundLocked() )
    return 0LL;
  ActiveTrackPwnd = GetActiveTrackPwnd((const struct tagWND *)a1);
  v9 = ActiveTrackPwnd;
  if ( !ActiveTrackPwnd )
    return 0LL;
  if ( (unsigned __int64 *)a1 != ActiveTrackPwnd )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v15 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v15;
    *((_QWORD *)&v15 + 1) = v9;
    HMLockObject(v9);
  }
  v11 = xxxSendMessage((unsigned __int64)v9, 0x21u, *v9, (struct _LARGE_STRING *)(a3 | (a2 << 16)));
  v13 = v11;
  if ( v11 <= 0 )
    goto LABEL_9;
  if ( v11 > 2 )
  {
    if ( v11 != 4 )
    {
LABEL_9:
      v13 = 0;
      goto LABEL_10;
    }
LABEL_15:
    v13 = 1;
    goto LABEL_10;
  }
  if ( !xxxTrackingActivateWindow((struct tagWND *)v9) || v13 == 2 )
    goto LABEL_15;
LABEL_10:
  if ( (unsigned __int64 *)a1 != v9 )
    ThreadUnlock1(v12);
  return v13;
}
