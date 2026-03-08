/*
 * XREFs of RIMCloseDev @ 0x1C00308E4
 * Callers:
 *     rimOnPnpRemoveComplete @ 0x1C0030730 (rimOnPnpRemoveComplete.c)
 *     RIMUnregisterForInput @ 0x1C00326C0 (RIMUnregisterForInput.c)
 *     rimOnPnpArrived @ 0x1C00889C0 (rimOnPnpArrived.c)
 *     RIMOpenDev @ 0x1C0089058 (RIMOpenDev.c)
 *     rimFakePnpRemoveComplete @ 0x1C01C8360 (rimFakePnpRemoveComplete.c)
 *     rimOnPnpQueryRemove @ 0x1C01C854C (rimOnPnpQueryRemove.c)
 * Callees:
 *     ??0PoWin32CalloutDeadlockTracker@@QEAA@W4_POPWIN32CALLOUT_WATCHDOG_STATE_INDEX@@@Z @ 0x1C00DCD58 (--0PoWin32CalloutDeadlockTracker@@QEAA@W4_POPWIN32CALLOUT_WATCHDOG_STATE_INDEX@@@Z.c)
 *     ??1PoWin32CalloutDeadlockTracker@@QEAA@XZ @ 0x1C00DCDE8 (--1PoWin32CalloutDeadlockTracker@@QEAA@XZ.c)
 */

__int64 __fastcall RIMCloseDev(__int64 a1)
{
  unsigned int v2; // edi
  void *v3; // rcx
  NTSTATUS v4; // eax
  void *v5; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  PoWin32CalloutDeadlockTracker::PoWin32CalloutDeadlockTracker(&v8, 4LL);
  v3 = *(void **)(a1 + 224);
  if ( v3 )
  {
    IoStatusBlock = 0LL;
    ZwCancelIoFile(v3, &IoStatusBlock);
    v4 = ZwClose(*(HANDLE *)(a1 + 224));
    v5 = *(void **)(a1 + 232);
    v2 = v4;
    if ( v5 )
    {
      ObfDereferenceObject(v5);
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    *(_QWORD *)(a1 + 224) = 0LL;
    *(_DWORD *)(a1 + 184) &= 0xFFFFFE7F;
  }
  PoWin32CalloutDeadlockTracker::~PoWin32CalloutDeadlockTracker((PoWin32CalloutDeadlockTracker *)&v8);
  return v2;
}
