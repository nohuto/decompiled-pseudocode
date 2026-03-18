/*
 * XREFs of FreeWindowStation @ 0x1C011E7C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00791A0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     xxxEmptyClipboard @ 0x1C00C9B80 (xxxEmptyClipboard.c)
 *     xxxCloseClipboard @ 0x1C00CCFD0 (xxxCloseClipboard.c)
 *     ?CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00CD83C (-CloseClipboardToken@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall FreeWindowStation(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rcx
  int v3; // eax
  struct _RTL_ATOM_TABLE *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdi
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  v16 = 0LL;
  *(_DWORD *)(v1 + 64) |= 0x10u;
  v2 = *(_QWORD *)(v1 + 208);
  v3 = *(_DWORD *)(v1 + 64);
  if ( v2 )
  {
    Win32FreePool(v2);
    v3 = *(_DWORD *)(v1 + 64);
    *(_QWORD *)(v1 + 208) = 0LL;
    *(_DWORD *)(v1 + 200) = 0;
  }
  if ( (v3 & 4) == 0 && WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc )
  {
    KeSetEvent((PRKEVENT)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 1, 0);
    ObfDereferenceObject(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
    WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = 0LL;
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v15);
  v4 = *(struct _RTL_ATOM_TABLE **)(v1 + 168);
  if ( v4 )
    RtlDestroyAtomTable(v4);
  *(_QWORD *)(v1 + 80) = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  HMAssignmentUnlock(v1 + 112);
  HMAssignmentUnlock(v1 + 104);
  HMAssignmentUnlock(v1 + 96);
  xxxEmptyClipboard((struct tagWINDOWSTATION *)v1);
  if ( (*(_DWORD *)(v1 + 64) & 0x10) == 0 )
    xxxCloseClipboard((struct tagWINDOWSTATION *)v1, v5);
  CloseClipboardToken((struct tagWINDOWSTATION *)v1);
  while ( *(_QWORD *)(v1 + 152) )
  {
    v16 = *(_QWORD *)(v1 + 152);
    *(_QWORD *)(v1 + 152) = *(_QWORD *)(v16 + 240);
    *(_QWORD *)(v16 + 240) = 0LL;
    *(_DWORD *)(v16 + 320) &= ~0x800000u;
    HMAssignmentUnlock(&v16);
  }
  if ( (*(_DWORD *)(v1 + 64) & 4) == 0 )
  {
    v6 = (_QWORD *)(v1 + 72);
    v7 = *(_QWORD *)(v1 + 72);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 24);
      while ( v7 != v8 )
      {
        v12 = *v6;
        v13 = *(_QWORD *)(*v6 + 16LL);
        HMMarkObjectDestroy(*v6);
        *(_DWORD *)(v12 + 32) |= 0x20000000u;
        v14[0] = v1 + 72;
        v14[1] = v13;
        HMAssignmentLock(v14, 0LL);
        v7 = *v6;
      }
      HMMarkObjectDestroy(v7);
      *(_DWORD *)(v7 + 32) |= 0x20000000u;
      HMAssignmentUnlock(v1 + 72);
      gdwHydraHint |= 0x10000u;
    }
  }
  v9 = *(_QWORD *)(v1 + 192);
  if ( v9 )
  {
    Win32FreePool(v9);
    *(_QWORD *)(v1 + 192) = 0LL;
  }
  ExReleaseRundownProtection(gWinstaRunRef);
  if ( !v15 )
    UserSessionSwitchLeaveCrit(v10);
  return 0LL;
}
