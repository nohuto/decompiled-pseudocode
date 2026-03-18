/*
 * XREFs of MiTerminateEnclave @ 0x140A3E960
 * Callers:
 *     NtTerminateEnclave @ 0x140A3F910 (NtTerminateEnclave.c)
 * Callees:
 *     MiUnlockVad @ 0x140289B80 (MiUnlockVad.c)
 *     MiLockVad @ 0x14029C6B0 (MiLockVad.c)
 *     PsDereferenceVsmEnclave @ 0x1408A61A4 (PsDereferenceVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x1409B78E0 (PsTerminateVsmEnclave.c)
 *     MiTerminateHardwareEnclave @ 0x140AAD7C8 (MiTerminateHardwareEnclave.c)
 */

__int64 __fastcall MiTerminateEnclave(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v8; // rsi
  unsigned int v9; // ebx

  v3 = *(_DWORD *)(a2 + 64);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 8) == 0 )
      MiTerminateHardwareEnclave(a1, a2);
    return 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v8 = *(volatile signed __int64 **)(a2 + 72);
    if ( _InterlockedIncrement64(v8 + 2) <= 1 )
      __fastfail(0xEu);
    MiUnlockVad((__int64)CurrentThread, a2);
    v9 = PsTerminateVsmEnclave((__int64)v8, a3);
    PsDereferenceVsmEnclave((PVOID)v8);
    MiLockVad((__int64)CurrentThread, a2);
    return v9;
  }
}
