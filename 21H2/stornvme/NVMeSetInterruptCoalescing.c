/*
 * XREFs of NVMeSetInterruptCoalescing @ 0x1C001B7A4
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DDD0 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 */

_UNKNOWN **__fastcall NVMeSetInterruptCoalescing(__int64 a1)
{
  _UNKNOWN **result; // rax
  char v3; // di
  char v4; // bl
  __int64 v5; // rax
  char v6; // al
  _BYTE *v7; // rcx
  char v8; // al
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    v3 = *(_BYTE *)(a1 + 44);
    v4 = *(_BYTE *)(a1 + 45);
    *(_BYTE *)(a1 + 851) = 0;
    memset(*(void **)(a1 + 936), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 936) + 4232LL) = 0LL;
    v5 = *(_QWORD *)(a1 + 936);
    *(_QWORD *)(a1 + 904) = v5;
    *(_DWORD *)(a1 + 840) = 1;
    *(_BYTE *)(v5 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 936) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 936) + 4244LL) = 0;
    v6 = v4;
    v7 = *(_BYTE **)(a1 + 936);
    if ( !v4 )
      v6 = 0;
    v7[4140] = v6;
    v8 = v3;
    if ( !v3 )
      v8 = 0;
    v7[4096] = 9;
    v7[4141] = v8;
    v7[4136] = 8;
    ProcessCommand(a1, a1 + 848);
    return (_UNKNOWN **)WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return result;
}
