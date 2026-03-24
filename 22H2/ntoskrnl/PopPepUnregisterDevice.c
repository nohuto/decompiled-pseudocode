/*
 * XREFs of PopPepUnregisterDevice @ 0x1407B4CBC
 * Callers:
 *     PopFxUnregisterDevice @ 0x1407B495C (PopFxUnregisterDevice.c)
 * Callees:
 *     PopPepProcessEvent @ 0x1402612E4 (PopPepProcessEvent.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     DbgPrintEx @ 0x14037EFD0 (DbgPrintEx.c)
 *     PopPepUpdateIdleStateRefCount @ 0x1403A0164 (PopPepUpdateIdleStateRefCount.c)
 *     PopPepRemoveDevice @ 0x1403BD4C0 (PopPepRemoveDevice.c)
 *     PopPepWaitForDeviceRelease @ 0x1403BD728 (PopPepWaitForDeviceRelease.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PopPepUnregisterDevice(__int64 *P)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  int v4; // ecx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-18h]

  DbgPrintEx(0x92u, 3u, "PopPep: unregister device (0x%p)\n", P);
  v2 = 0;
  PopPepProcessEvent((__int64)P, 0LL, 6u, 5u, (__int64)Timeout, 0LL);
  KeWaitForSingleObject(P + 5, Executive, 0, 0, 0LL);
  PopPepWaitForDeviceRelease((__int64)P);
  PopPepRemoveDevice(P);
  v3 = *((int *)P + 42);
  v4 = 0;
  if ( (_DWORD)v3 != 4 )
    v4 = *((_DWORD *)P + v3 + 35);
  PopPepUpdateIdleStateRefCount(v4, 0, 0);
  if ( *((_DWORD *)P + 45) )
  {
    do
      PopPepUpdateIdleStateRefCount(*(_DWORD *)(P[25 * v2++ + 47] + 16), 0, 0);
    while ( v2 < *((_DWORD *)P + 45) );
  }
  ExFreePoolWithTag(P, 0x54706550u);
}
