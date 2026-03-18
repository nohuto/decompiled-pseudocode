/*
 * XREFs of _RegisterHotKey @ 0x1C009E114
 * Callers:
 *     RawInputThread @ 0x1C005CC60 (RawInputThread.c)
 *     ?SetPenHotKeys@@YAXXZ @ 0x1C009A5B8 (-SetPenHotKeys@@YAXXZ.c)
 *     ?SetWindowArrangementHotKeys@@YAXXZ @ 0x1C009A76C (-SetWindowArrangementHotKeys@@YAXXZ.c)
 *     ?SetWinlogonHotKeys@@YAXXZ @ 0x1C009ABC8 (-SetWinlogonHotKeys@@YAXXZ.c)
 *     NtUserRegisterHotKey @ 0x1C009DDD0 (NtUserRegisterHotKey.c)
 *     xxxSetShellWindow @ 0x1C00F1340 (xxxSetShellWindow.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00F1804 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 *     SetDebugHotKeys @ 0x1C01216B8 (SetDebugHotKeys.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsShellProcess @ 0x1C007B10C (IsShellProcess.c)
 *     ?FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAUtagHOTKEY@@@Z @ 0x1C009E480 (-FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIPEAPEAUtagHOTKEY@@@Z.c)
 *     ?NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z @ 0x1C009E5D8 (-NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C009EAE0 (CheckWinstaAttributeAccess.c)
 *     ?HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HG@Z @ 0x1C011D800 (-HKAddChildHotkey@@YA_NPEAUtagTHREADINFO@@PEAUtagHOTKEY@@PEAUtagWND@@HG@Z.c)
 *     ?HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C01E5844 (-HKRemoveMatchingChildHotkeys@@YA_NPEAUtagHOTKEY@@PEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryT.c)
 */

_BOOL8 __fastcall RegisterHotKey(struct tagWND *a1, __int64 a2, int a3, __int16 a4, ULONG_PTR BugCheckParameter2)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r15d
  __int64 v11; // rcx
  __int16 v12; // si
  unsigned int v13; // ebp
  unsigned __int16 v14; // si
  __int16 v15; // r12
  int HotKey; // eax
  int v17; // r8d
  struct tagHOTKEY *v18; // rbx
  __int64 v19; // rbx
  __int16 v20; // ax
  __int64 v21; // rcx
  struct tagHOTKEY * near *j; // rbx
  __int16 v24; // ax
  __int64 v25; // rax
  int *i; // rcx
  __int64 v27; // rcx
  struct tagHOTKEY *v28; // [rsp+40h] [rbp-48h] BYREF
  struct tagWND *v29; // [rsp+48h] [rbp-40h]

  v28 = 0LL;
  if ( PsGetCurrentProcess(a1, a2) != gpepCSRSS && grpWinStaList && !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    || (_DWORD)BugCheckParameter2 == 231 )
  {
    return 0LL;
  }
  if ( (a4 & 0x8000) == 0 || (v10 = 1, PsGetCurrentProcess(v9, v8) != gpepCSRSS) )
    v10 = 0;
  v11 = *(_QWORD *)(gptiCurrent + 424LL);
  v12 = a4;
  v13 = a4 & 0xF;
  v14 = v12 & 0x7A00;
  if ( *(int *)(v11 + 12) < 0 )
  {
    v14 |= 0x2000u;
  }
  else if ( (v14 & 0x2000) != 0 && !(unsigned int)IsShellProcess(v11) && !a2 )
  {
    v27 = 5LL;
LABEL_50:
    UserSetLastError(v27, v8);
    return 0LL;
  }
  if ( (unsigned __int64)a1 >= 2 && *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    v27 = 1408LL;
    goto LABEL_50;
  }
  v15 = v14 & 0x200;
  if ( (v14 & 0x200) != 0 && (v10 || a1 == (struct tagWND *)1) )
    return 0LL;
  HotKey = FindHotKey(gptiCurrent, a1, a3, v13, BugCheckParameter2, &v28);
  v8 = 0LL;
  if ( !HotKey )
  {
    v18 = v28;
    if ( v28 )
    {
      if ( *((__int16 *)v28 + 13) < 0 || v10 )
        KeBugCheckEx(
          0x164u,
          0x10uLL,
          *((unsigned int *)v28 + 7) | 0x80000000LL,
          *((unsigned __int16 *)v28 + 12),
          *((unsigned __int16 *)v28 + 13));
      *((_WORD *)v28 + 13) = v14;
      if ( *((_WORD *)v18 + 12) != (_WORD)v13 || *((_DWORD *)v18 + 7) != (_DWORD)BugCheckParameter2 || !v15 )
        HKRemoveMatchingChildHotkeys(v18, 0LL, 0LL, 0LL, 4);
      *((_WORD *)v18 + 12) = v13;
      *((_DWORD *)v18 + 7) = BugCheckParameter2;
      goto LABEL_21;
    }
    v19 = Win32AllocPoolZInit(64LL, 1802007381LL);
    if ( v19 )
    {
      if ( v10 )
      {
        v25 = 0LL;
        for ( i = dword_1C0334F7C; *i; i += 2 )
        {
          v25 = (unsigned int)(v25 + 1);
          if ( (unsigned int)v25 >= 2 )
          {
            Win32FreePool(v19);
            KeBugCheckEx(0x164u, 0x10uLL, (unsigned int)BugCheckParameter2, v13, v14);
          }
        }
        dword_1C0334F7C[2 * v25] = BugCheckParameter2;
        *((_DWORD *)&gSasKeyList + 2 * v25) = v13;
      }
      *(_QWORD *)v19 = gptiCurrent;
      if ( (unsigned __int64)a1 < 2 )
      {
        *(_QWORD *)(v19 + 16) = a1;
      }
      else
      {
        v29 = a1;
        *(_QWORD *)(v19 + 16) = 0LL;
        v28 = (struct tagHOTKEY *)(v19 + 16);
        HMAssignmentLock(&v28, 0LL);
      }
      *(_DWORD *)(v19 + 32) = a3;
      if ( v10 )
      {
        v20 = 0x8000;
        *(_WORD *)(v19 + 26) = 0x8000;
      }
      else
      {
        *(_WORD *)(v19 + 26) = 0;
        v20 = 0;
      }
      *(_WORD *)(v19 + 26) = v14 | v20;
      *(_WORD *)(v19 + 24) = v13;
      *(_DWORD *)(v19 + 28) = BugCheckParameter2;
      *(_QWORD *)(v19 + 8) = a2;
      *(_QWORD *)(v19 + 56) = v19 + 48;
      *(_QWORD *)(v19 + 48) = v19 + 48;
      v21 = *(_BYTE *)(v19 + 28) & 0x7F;
      *(_QWORD *)(v19 + 40) = (&gphkHashTable)[v21];
      (&gphkHashTable)[v21] = (struct tagHOTKEY * near *)v19;
      NotifyHotKeyRegistrationChanged((struct tagHOTKEY *const)v19, 0LL, 1);
LABEL_21:
      qword_1C0335C80 = 0LL;
      return 1LL;
    }
    return 0LL;
  }
  if ( a2 || v10 || a1 == (struct tagWND *)1 )
    return 0LL;
  for ( j = (&gphkHashTable)[BugCheckParameter2 & 0x7F];
        j && __PAIR64__(*((_DWORD *)j + 7), *((unsigned __int16 *)j + 12)) != __PAIR64__(BugCheckParameter2, v13);
        j = (struct tagHOTKEY * near *)j[5] )
  {
    ;
  }
  if ( !j || (v24 = *((_WORD *)j + 13), (v24 & 0x200) == 0) )
  {
    v27 = 1409LL;
    goto LABEL_50;
  }
  if ( v15 )
  {
    if ( (v24 & 0x100) != 0 )
    {
      if ( a1 )
      {
        v29 = a1;
        j[2] = 0LL;
        v28 = (struct tagHOTKEY *)(j + 2);
        HMAssignmentLock(&v28, 0LL);
        v17 = a3;
      }
      else
      {
        j[2] = 0LL;
      }
      *((_WORD *)j + 13) = v14;
      *j = (struct tagHOTKEY *)gptiCurrent;
      j[1] = 0LL;
      *((_DWORD *)j + 8) = v17;
      NotifyHotKeyRegistrationChanged((struct tagHOTKEY *const)j, 0LL, 1);
      return 1LL;
    }
    return 0LL;
  }
  return HKAddChildHotkey(gptiCurrent, (struct tagHOTKEY *)j, a1, v17, v14);
}
