/*
 * XREFs of NVMeConfigAsyncEvent @ 0x1C0018014
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000E014 (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeConfigAsyncEvent(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // ecx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1624);
  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 851) = 0;
    memset(*(void **)(a1 + 936), 0, 0x10A0uLL);
    *(_QWORD *)(*(_QWORD *)(a1 + 936) + 4232LL) = 0LL;
    v3 = *(_QWORD *)(a1 + 936);
    *(_QWORD *)(a1 + 904) = v3;
    *(_DWORD *)(a1 + 840) = 1;
    *(_BYTE *)(v3 + 4253) |= 1u;
    *(_BYTE *)(*(_QWORD *)(a1 + 936) + 4253LL) &= ~2u;
    *(_WORD *)(*(_QWORD *)(a1 + 936) + 4244LL) = 0;
    v4 = *(_QWORD *)(a1 + 936);
    v5 = *(_DWORD *)(a1 + 60) & (*(_DWORD *)(v1 + 92) & 0x300 | ((*(_BYTE *)(v1 + 261) & 8) << 7) | 0x1F);
    *(_DWORD *)(a1 + 4016) = v5;
    *(_DWORD *)(v4 + 4140) = v5;
    *(_BYTE *)(v4 + 4096) = 9;
    *(_BYTE *)(v4 + 4136) = 11;
    ProcessCommand(a1, a1 + 848);
    return WaitForCommandCompleteWithCustomTimeout(a1);
  }
  return result;
}
