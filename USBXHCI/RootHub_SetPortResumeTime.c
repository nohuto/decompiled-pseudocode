/*
 * XREFs of RootHub_SetPortResumeTime @ 0x1C003FC7C
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x1C001D43C (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C00182B0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C00182F4 (RootHub_AcquireReadModifyWriteLock.c)
 */

char __fastcall RootHub_SetPortResumeTime(__int64 a1, int a2, __int16 a3)
{
  unsigned int v3; // edi
  __int64 v6; // rbx

  v3 = a2 - 1;
  v6 = *(_QWORD *)(a1 + 48) + 120LL * (unsigned int)(a2 - 1);
  RootHub_AcquireReadModifyWriteLock(a1, a2 - 1);
  ++*(_DWORD *)(v6 + 48);
  *(_WORD *)(v6 + 52) = a3;
  return RootHub_ReleaseReadModifyWriteLock(a1, v3);
}
