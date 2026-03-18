/*
 * XREFs of NVMeSetInterruptCoalescing @ 0x1C0008E58
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
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
  if ( !*(_BYTE *)(a1 + 20) )
  {
    v3 = *(_BYTE *)(a1 + 52);
    v4 = *(_BYTE *)(a1 + 53);
    *(_BYTE *)(a1 + 867) = 0;
    memset(*(void **)(a1 + 952), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
    v5 = *(_QWORD *)(a1 + 952);
    *(_QWORD *)(a1 + 920) = v5;
    *(_DWORD *)(a1 + 856) = 1;
    *(_BYTE *)(v5 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
    v6 = v4;
    v7 = *(_BYTE **)(a1 + 952);
    if ( !v4 )
      v6 = 0;
    v7[4140] = v6;
    v8 = v3;
    if ( !v3 )
      v8 = 0;
    v7[4096] = 9;
    v7[4141] = v8;
    v7[4136] = 8;
    ProcessCommand(a1, a1 + 864);
    return (_UNKNOWN **)WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return result;
}
