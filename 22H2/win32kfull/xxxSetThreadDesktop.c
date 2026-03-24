/*
 * XREFs of xxxSetThreadDesktop @ 0x1C00D9270
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00462FC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D84E8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C00D8E60 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C00D90F0 (xxxSetCsrssThreadDesktop.c)
 *     NtUserSetThreadDesktop @ 0x1C00D91C0 (NtUserSetThreadDesktop.c)
 *     xxxNextWindow @ 0x1C01F3B6C (xxxNextWindow.c)
 * Callees:
 *     zzzAttachToQueue @ 0x1C0011EF4 (zzzAttachToQueue.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D1EC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     MapDesktop @ 0x1C004EDB0 (MapDesktop.c)
 *     zzzSetDesktop @ 0x1C0065E20 (zzzSetDesktop.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     MagContextThreadCallout @ 0x1C01CC1F0 (MagContextThreadCallout.c)
 */

__int64 __fastcall xxxSetThreadDesktop(void *a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD v18[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+28h] [rbp-20h]
  __int64 v20; // [rsp+30h] [rbp-18h]
  int v21; // [rsp+38h] [rbp-10h]
  int v22; // [rsp+3Ch] [rbp-Ch]

  v5 = *(__int64 **)(gptiCurrent + 424LL);
  if ( !a2 )
    goto LABEL_3;
  v18[1] = 0;
  v6 = *v5;
  v18[0] = 1;
  v19 = v6;
  v20 = a2;
  v21 = 0;
  v22 = 1;
  result = MapDesktop((__int64)v18);
  if ( (int)result >= 0 )
  {
LABEL_3:
    if ( PsGetCurrentProcess(a1, a2, a3) != gpepCSRSS )
    {
      if ( *(_DWORD *)(gptiCurrent + 896LL)
        || *(_DWORD *)(gptiCurrent + 680LL)
        || (v12 = *(_QWORD *)(gptiCurrent + 456LL)) != 0
        && (v13 = *(_QWORD *)(v12 + 216)) != 0
        && *(_QWORD *)(v13 + 32) == gptiCurrent )
      {
        UserSetLastError(170LL, v8, v9);
        return 2147483665LL;
      }
      if ( !v5[42] && a1 )
      {
        LockObjectAssignment(v5 + 42, a2);
        v5[49] = (__int64)a1;
      }
    }
    v10 = *(_QWORD *)(gptiCurrent + 456LL);
    if ( v10 != a2 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 1232LL) & 8) != 0 )
      {
        MagContextThreadCallout(*(_QWORD *)&gMagnContext, gptiCurrent, 0LL, 1LL);
        v10 = *(_QWORD *)(gptiCurrent + 456LL);
      }
      if ( v10 != a2 )
      {
        v11 = *(_QWORD *)(gptiCurrent + 432LL);
        if ( *(_DWORD *)(v11 + 392) > 1u )
        {
          v15 = AllocQueue(0LL, 0LL);
          if ( !v15 )
          {
            UserSetLastError(8LL, v16, v17);
            return 3221225495LL;
          }
          ++*(_DWORD *)(v15 + 392);
          zzzAttachToQueue(gptiCurrent, (struct tagQ *)v15, 0LL, 0);
        }
        else if ( v11 == gpqForeground )
        {
          xxxSetForegroundWindow2(0LL, gptiCurrent, 0);
        }
        else if ( !v10 )
        {
          v14 = (gdwGTERMFlags & 1) - 1;
          *(_DWORD *)(gptiCurrent + 760LL) = v14;
          *(_DWORD *)(v11 + 384) = v14;
        }
      }
    }
    return zzzSetDesktop(gptiCurrent, a2, a1);
  }
  return result;
}
