/*
 * XREFs of PspInitializeSyscallProvider @ 0x1405A27E0
 * Callers:
 *     PsRegisterSyscallProvider @ 0x1409B15C0 (PsRegisterSyscallProvider.c)
 * Callees:
 *     ExInitializePushLock @ 0x140238200 (ExInitializePushLock.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall PspInitializeSyscallProvider(__int64 a1, void *a2, __int128 *a3, __int64 a4)
{
  __int128 v8; // xmm0
  __int64 result; // rax

  memset((void *)a1, 0, 0x60uLL);
  v8 = *a3;
  *(_QWORD *)(a1 + 32) = a2;
  *(_OWORD *)(a1 + 16) = v8;
  ObfReferenceObjectWithTag(a2, 0x63537350u);
  *(_QWORD *)(a1 + 40) = a4;
  *(_QWORD *)(a1 + 48) = 1LL;
  ExInitializePushLock((PEX_RUNDOWN_REF)(a1 + 56));
  *(_QWORD *)(a1 + 64) = 0LL;
  result = a1 + 72;
  *(_QWORD *)(a1 + 80) = a1 + 72;
  *(_QWORD *)(a1 + 72) = a1 + 72;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = -1;
  return result;
}
