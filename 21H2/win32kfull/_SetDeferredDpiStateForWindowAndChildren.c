/*
 * XREFs of _SetDeferredDpiStateForWindowAndChildren @ 0x1C009C90C
 * Callers:
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0003D64 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 *     UpdateWindowMonitor @ 0x1C006BAD0 (UpdateWindowMonitor.c)
 *     xxxNotifyMonitorChanged @ 0x1C007563C (xxxNotifyMonitorChanged.c)
 *     NtUserDeferWindowDpiChanges @ 0x1C00994A0 (NtUserDeferWindowDpiChanges.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     BuildHwndList @ 0x1C0071A90 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00722E0 (FreeHwndList.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetDeferredDpiStateForWindowAndChildren(ShellWindowManagement *this, int a2, int a3)
{
  __int64 v4; // rcx
  __int16 v7; // r12
  struct tagBWL *v8; // rax
  struct tagBWL *v9; // r15
  _QWORD *i; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  _DWORD *v17; // rcx

  v4 = *((_QWORD *)this + 5);
  if ( a2 == (*(_WORD *)(v4 + 286) != 0) || (*((_DWORD *)this + 80) & 0x40) != 0 && !a3 )
    return 0LL;
  v7 = a2 ? *(_WORD *)(v4 + 284) : 0;
  v8 = BuildHwndList(this, (const struct tagWND *)1, 0LL, 1);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  for ( i = (_QWORD *)((char *)v8 + 32); *i != 1LL; ++i )
  {
    v11 = HMValidateHandleNoSecure(*i, 1);
    v13 = v11;
    if ( v11 && ((*(_DWORD *)(v11 + 320) & 0x40) == 0 || a3 || a2) )
    {
      *(_WORD *)(*(_QWORD *)(v11 + 40) + 286LL) = v7;
      v14 = *(_DWORD **)(v11 + 296);
      if ( a2 )
      {
        if ( v14 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
        v15 = (_DWORD *)*((_QWORD *)this + 36);
        *(_QWORD *)(v13 + 296) = v15;
        ++*v15;
      }
      else if ( v14 || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v12), (v14 = *(_DWORD **)(v13 + 296)) != 0LL) )
      {
        --*v14;
        v17 = *(_DWORD **)(v13 + 296);
        if ( !*v17 )
          Win32FreePool(v17);
        *(_QWORD *)(v13 + 296) = 0LL;
      }
    }
  }
  if ( a3 && a2 )
    *((_DWORD *)this + 80) |= 0x40u;
  else
    *((_DWORD *)this + 80) &= ~0x40u;
  FreeHwndList(v9);
  return 1LL;
}
