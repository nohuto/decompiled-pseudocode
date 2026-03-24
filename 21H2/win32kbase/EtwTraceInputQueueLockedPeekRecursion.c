/*
 * XREFs of EtwTraceInputQueueLockedPeekRecursion @ 0x1C00AB3C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cpq_EtwWriteTransfer @ 0x1C0124D1C (McTemplateK0cpq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceInputQueueLockedPeekRecursion(__int64 a1)
{
  char v1; // di
  PETHREAD *v2; // rcx
  char ThreadId; // bl
  int v4; // r9d
  int v5; // ecx
  int v6; // r8d

  v1 = a1;
  v2 = *(PETHREAD **)(a1 + 64);
  if ( v2 )
    ThreadId = (unsigned __int8)PsGetThreadId(*v2);
  else
    ThreadId = 0;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
    McTemplateK0cpq_EtwWriteTransfer(v5, (unsigned int)&InputQueueLockedPeekRecursion, v6, v4, v1, ThreadId);
  }
}
