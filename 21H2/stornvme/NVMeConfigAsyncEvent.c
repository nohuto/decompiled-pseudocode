/*
 * XREFs of NVMeConfigAsyncEvent @ 0x1C0009184
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C0005FFC (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeConfigAsyncEvent(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // ecx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1640);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    *(_BYTE *)(a1 + 867) = 0;
    memset(*(void **)(a1 + 952), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
    v3 = *(_QWORD *)(a1 + 952);
    *(_QWORD *)(a1 + 920) = v3;
    *(_DWORD *)(a1 + 856) = 1;
    *(_BYTE *)(v3 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
    v4 = *(_QWORD *)(a1 + 952);
    v5 = *(_DWORD *)(a1 + 68) & (*(_DWORD *)(v1 + 92) & 0x300 | ((*(_BYTE *)(v1 + 261) & 8) << 7) | 0x1F);
    *(_DWORD *)(a1 + 4032) = v5;
    *(_DWORD *)(v4 + 4140) = v5;
    *(_BYTE *)(v4 + 4096) = 9;
    *(_BYTE *)(v4 + 4136) = 11;
    ProcessCommand(a1, a1 + 864);
    return WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return result;
}
