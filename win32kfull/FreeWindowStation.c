// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall FreeWindowStation(__int64 *a1)
{
  __int64 v1; // rdi
  void *v2; // rcx
  struct _RTL_ATOM_TABLE *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbp
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rbx
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF
  char v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  v13 = 0LL;
  *(_DWORD *)(v1 + 64) |= 0x10u;
  v2 = *(void **)(v1 + 208);
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)(v1 + 208) = 0LL;
    *(_DWORD *)(v1 + 200) = 0;
  }
  if ( (*(_DWORD *)(v1 + 64) & 4) == 0 && gpEventSwitchDesktop )
  {
    KeSetEvent(gpEventSwitchDesktop, 1, 0);
    ObfDereferenceObject(gpEventSwitchDesktop);
    gpEventSwitchDesktop = 0LL;
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v12);
  v3 = *(struct _RTL_ATOM_TABLE **)(v1 + 168);
  if ( v3 )
    RtlDestroyAtomTable(v3);
  *(_QWORD *)(v1 + 80) = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  HMAssignmentUnlock(v1 + 112);
  HMAssignmentUnlock(v1 + 104);
  HMAssignmentUnlock(v1 + 96);
  xxxEmptyClipboard((PVOID)v1);
  if ( (*(_DWORD *)(v1 + 64) & 0x10) == 0 )
    xxxCloseClipboard((struct tagWINDOWSTATION *)v1);
  CloseClipboardToken((struct tagWINDOWSTATION *)v1);
  while ( 1 )
  {
    v4 = *(_QWORD *)(v1 + 152);
    if ( !v4 )
      break;
    v13 = *(_QWORD *)(v1 + 152);
    *(_QWORD *)(v1 + 152) = *(_QWORD *)(v4 + 240);
    *(_QWORD *)(v13 + 240) = 0LL;
    *(_DWORD *)(v13 + 320) &= ~0x800000u;
    HMAssignmentUnlock(&v13);
  }
  if ( (*(_DWORD *)(v1 + 64) & 4) == 0 )
  {
    v5 = *(_QWORD *)(v1 + 72);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 24);
      while ( v5 != v6 )
      {
        v10 = *(_QWORD *)(v5 + 16);
        HMMarkObjectDestroy(v5);
        *(_DWORD *)(v5 + 32) |= 0x20000000u;
        v11[0] = v1 + 72;
        v11[1] = v10;
        HMAssignmentLock(v11, 0LL);
        v5 = *(_QWORD *)(v1 + 72);
      }
      HMMarkObjectDestroy(v5);
      *(_DWORD *)(v5 + 32) |= 0x20000000u;
      HMAssignmentUnlock(v1 + 72);
      gdwHydraHint |= 0x10000u;
    }
  }
  v7 = *(void **)(v1 + 192);
  if ( v7 )
  {
    Win32FreePool(v7);
    *(_QWORD *)(v1 + 192) = 0LL;
  }
  ExReleaseRundownProtection(gWinstaRunRef);
  if ( !v12 )
    UserSessionSwitchLeaveCrit(v8);
  return 0LL;
}
