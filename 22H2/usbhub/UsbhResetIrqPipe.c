/*
 * XREFs of UsbhResetIrqPipe @ 0x1C0039C58
 * Callers:
 *     UsbhHubResetIrqPipeWorker @ 0x1C0039390 (UsbhHubResetIrqPipeWorker.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     Log @ 0x1C000FD80 (Log.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0015F10 (UsbhSyncSendInternalIoctl.c)
 */

__int64 __fastcall UsbhResetIrqPipe(__int64 a1)
{
  _DWORD *v2; // rdi
  _QWORD *PoolWithTag; // rbx
  NTSTATUS v4; // edi

  v2 = FdoExt(a1);
  PoolWithTag = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0x28uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 1966120LL;
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[3] = *((_QWORD *)v2 + 330);
    v4 = UsbhSyncSendInternalIoctl(a1, 0x220003u, (unsigned __int64)PoolWithTag, 0LL);
    Log(a1, 4, 1937331029, v4, *((int *)PoolWithTag + 1));
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v4;
}
