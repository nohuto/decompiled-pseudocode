/*
 * XREFs of NVMeIoSubmissionQueueDelete @ 0x1C001A2D4
 * Callers:
 *     IoQueuesDeletion @ 0x1C000C3E0 (IoQueuesDeletion.c)
 *     IoctlCreateReservedQueuePair @ 0x1C0012778 (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C0012BF4 (IoctlDeleteReservedQueuePair.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 */

bool __fastcall NVMeIoSubmissionQueueDelete(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  *(_BYTE *)(a1 + 851) = 0;
  memset(*(void **)(a1 + 936), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 936) + 4232LL) = 0LL;
  v4 = *(_QWORD *)(a1 + 936);
  *(_QWORD *)(a1 + 904) = v4;
  *(_DWORD *)(a1 + 840) = 1;
  *(_BYTE *)(v4 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 936) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 936) + 4244LL) = 0;
  v5 = *(_QWORD *)(a1 + 936);
  *(_WORD *)(v5 + 4136) = a2;
  *(_BYTE *)(v5 + 4096) = 0;
  ProcessCommand(a1, a1 + 848);
  WaitForCommandCompleteWithCustomTimeout(a1);
  return *(_BYTE *)(a1 + 851) == 1;
}
