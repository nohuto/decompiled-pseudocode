/*
 * XREFs of NVMeSetArbitration @ 0x1C0008F6C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

void __fastcall NVMeSetArbitration(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // bl
  unsigned __int8 v4; // al
  void *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx

  v2 = *(_QWORD *)(a1 + 1640);
  v3 = 0;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    v4 = *(_BYTE *)(a1 + 54);
    if ( v4 == 0xFF )
    {
      v3 = *(_BYTE *)(v2 + 72);
    }
    else
    {
      if ( v4 <= 1u )
      {
LABEL_6:
        v5 = *(void **)(a1 + 952);
        *(_BYTE *)(a1 + 867) = 0;
        memset(v5, 0, 0x10A0uLL);
        *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
        v6 = *(_QWORD *)(a1 + 952);
        *(_QWORD *)(a1 + 920) = v6;
        *(_DWORD *)(a1 + 856) = 1;
        *(_BYTE *)(v6 + 4253) |= 1u;
        *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) &= ~2u;
        *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
        v7 = *(_QWORD *)(a1 + 952);
        LODWORD(v6) = (*(_DWORD *)(v7 + 4140) ^ v3) & 7;
        *(_BYTE *)(v7 + 4096) = 9;
        *(_DWORD *)(v7 + 4140) ^= v6;
        *(_BYTE *)(v7 + 4136) = 1;
        ProcessCommand(a1, a1 + 864);
        WaitForCommandCompleteWithCustomTimeout(a1);
        return;
      }
      do
      {
        v4 >>= 1;
        ++v3;
      }
      while ( v4 > 1u );
    }
    if ( v3 >= 7u )
      v3 = 7;
    goto LABEL_6;
  }
}
