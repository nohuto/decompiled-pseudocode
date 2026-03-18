/*
 * XREFs of TtmpTerminal0PowerSettingCallback @ 0x1409A5F60
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1409A37AC (TtmiTerminalSetDisplayTimeouts.c)
 */

__int64 __fastcall TtmpTerminal0PowerSettingCallback(
        LPCGUID SettingGuid,
        unsigned int *Value,
        ULONG ValueLength,
        _DWORD *Context)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  unsigned int v10; // r8d
  unsigned int v11; // r9d

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
    {
      Context[67] = v10;
      v11 = v10;
      v10 = Context[66];
    }
    else
    {
      v11 = Context[67];
      Context[66] = v10;
    }
    TtmiTerminalSetDisplayTimeouts(Context, *((_QWORD *)Context + 4), v10, v11);
  }
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  return 0LL;
}
