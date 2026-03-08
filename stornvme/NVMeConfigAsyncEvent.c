/*
 * XREFs of NVMeConfigAsyncEvent @ 0x1C001C480
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000DCDC (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeConfigAsyncEvent(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  int v4; // ecx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1840);
  if ( !*(_BYTE *)(a1 + 20) )
  {
    LocalCommandReuse(a1, a1 + 944);
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
    v3 = *(_QWORD *)(a1 + 1040);
    v4 = *(_DWORD *)(a1 + 68) & (*(_DWORD *)(v1 + 92) & 0x300 | ((*(_BYTE *)(v1 + 261) & 8) << 7) | 0x1F);
    *(_DWORD *)(a1 + 4232) = v4;
    *(_DWORD *)(v3 + 4140) = v4;
    *(_BYTE *)(v3 + 4096) = 9;
    *(_BYTE *)(v3 + 4136) = 11;
    ProcessCommand(a1, a1 + 952);
    return WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return result;
}
