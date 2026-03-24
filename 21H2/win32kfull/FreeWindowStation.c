/*
 * XREFs of FreeWindowStation @ 0x1C0123A60
 * Callers:
 *     <none>
 * Callees:
 *     xxxCloseClipboard @ 0x1C002FE50 (xxxCloseClipboard.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C004F094 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0123C38 (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxEmptyClipboard @ 0x1C0123C80 (xxxEmptyClipboard.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall FreeWindowStation(__int64 *a1)
{
  __int64 v1; // rsi
  void *v2; // rcx
  int v3; // eax
  struct _RTL_ATOM_TABLE *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  _QWORD *v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rdi
  _QWORD v13[7]; // [rsp+20h] [rbp-38h] BYREF
  int v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  v15 = 0LL;
  *(_DWORD *)(v1 + 64) |= 0x10u;
  v2 = *(void **)(v1 + 208);
  v3 = *(_DWORD *)(v1 + 64);
  if ( v2 )
  {
    Win32FreePool(v2);
    v3 = *(_DWORD *)(v1 + 64);
    *(_QWORD *)(v1 + 208) = 0LL;
    *(_DWORD *)(v1 + 200) = 0;
  }
  if ( (v3 & 4) == 0 && gpEventSwitchDesktop )
  {
    KeSetEvent((PRKEVENT)gpEventSwitchDesktop, 1, 0);
    ObfDereferenceObject(gpEventSwitchDesktop);
    gpEventSwitchDesktop = 0LL;
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v14);
  v4 = *(struct _RTL_ATOM_TABLE **)(v1 + 168);
  if ( v4 )
    RtlDestroyAtomTable(v4);
  *(_QWORD *)(v1 + 80) = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  HMAssignmentUnlock(v1 + 112);
  HMAssignmentUnlock(v1 + 104);
  HMAssignmentUnlock(v1 + 96);
  xxxEmptyClipboard((PVOID)v1);
  if ( (*(_DWORD *)(v1 + 64) & 0x10) == 0 )
    xxxCloseClipboard((struct tagWINDOWSTATION *)v1);
  CloseClipboardToken((struct tagWINDOWSTATION *)v1);
  while ( *(_QWORD *)(v1 + 152) )
  {
    v15 = *(_QWORD *)(v1 + 152);
    *(_QWORD *)(v1 + 152) = *(_QWORD *)(v15 + 240);
    *(_QWORD *)(v15 + 240) = 0LL;
    *(_DWORD *)(*(_QWORD *)(v15 + 40) + 232LL) &= ~1u;
    HMAssignmentUnlock(&v15);
  }
  if ( (*(_DWORD *)(v1 + 64) & 4) == 0 )
  {
    v8 = (_QWORD *)(v1 + 72);
    v9 = *(_QWORD *)(v1 + 72);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 24);
      while ( v9 != v10 )
      {
        v11 = *v8;
        v12 = *(_QWORD *)(*v8 + 16LL);
        HMMarkObjectDestroy(*v8);
        *(_DWORD *)(v11 + 32) |= 0x20000000u;
        v13[0] = v1 + 72;
        v13[1] = v12;
        HMAssignmentLock(v13);
        v9 = *v8;
      }
      HMMarkObjectDestroy(v9);
      *(_DWORD *)(v9 + 32) |= 0x20000000u;
      HMAssignmentUnlock(v1 + 72);
      gdwHydraHint |= 0x10000u;
    }
  }
  v5 = *(void **)(v1 + 192);
  if ( v5 )
  {
    Win32FreePool(v5);
    *(_QWORD *)(v1 + 192) = 0LL;
  }
  ExReleaseRundownProtection(gWinstaRunRef);
  if ( !v14 )
    UserSessionSwitchLeaveCrit(v6);
  return 0LL;
}
