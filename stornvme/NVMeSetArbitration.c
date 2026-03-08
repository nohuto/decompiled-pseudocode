/*
 * XREFs of NVMeSetArbitration @ 0x1C002362C
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000D9F0 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C0001E60 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x1C000C15C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 */

void __fastcall NVMeSetArbitration(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // bl
  unsigned __int8 v4; // al
  __int64 v5; // rcx
  int v6; // eax

  v2 = *(_QWORD *)(a1 + 1840);
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
LABEL_9:
        LocalCommandReuse(a1, a1 + 944);
        *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
        *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
        *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
        v5 = *(_QWORD *)(a1 + 1040);
        v6 = (*(_DWORD *)(v5 + 4140) ^ v3) & 7;
        *(_BYTE *)(v5 + 4096) = 9;
        *(_DWORD *)(v5 + 4140) ^= v6;
        *(_BYTE *)(v5 + 4136) = 1;
        ProcessCommand(a1, a1 + 952);
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
    goto LABEL_9;
  }
}
