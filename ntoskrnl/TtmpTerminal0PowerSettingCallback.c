/*
 * XREFs of TtmpTerminal0PowerSettingCallback @ 0x1409A2CA0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1409A8608 (TtmiTerminalSetDisplayTimeouts.c)
 */

__int64 __fastcall TtmpTerminal0PowerSettingCallback(
        LPCGUID SettingGuid,
        int *Value,
        ULONG ValueLength,
        _DWORD *Context)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  int v10; // ecx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  if ( ValueLength == 4 && *((_BYTE *)Context + 240) && (Context[1] & 4) == 0 )
  {
    v9 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1;
    v10 = *Value;
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_VIDEO_DIM_TIMEOUT.Data1 )
      v9 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_VIDEO_DIM_TIMEOUT.Data4;
    if ( v9 )
      Context[67] = v10;
    else
      Context[66] = v10;
    TtmiTerminalSetDisplayTimeouts(
      Context,
      *((_QWORD *)Context + 4),
      (unsigned int)Context[66],
      (unsigned int)Context[67]);
  }
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  return 0LL;
}
