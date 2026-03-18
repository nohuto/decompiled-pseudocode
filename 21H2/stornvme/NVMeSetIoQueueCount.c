/*
 * XREFs of NVMeSetIoQueueCount @ 0x1C0008B98
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeSetIoQueueCount(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbp
  unsigned __int16 v4; // ax
  int v5; // ecx
  unsigned __int16 v6; // bx
  unsigned __int16 v7; // bx
  __int16 v8; // si
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  char v12; // cl
  __int64 result; // rax

  v2 = a2;
  if ( a2 )
  {
    v8 = *(_WORD *)(a1 + 304);
    v6 = *(_WORD *)(a1 + 306);
  }
  else
  {
    *(_DWORD *)(a1 + 304) = 0;
    if ( *(_BYTE *)(a1 + 20) )
    {
      v8 = 1;
      v6 = 1;
    }
    else
    {
      v4 = *(_WORD *)(a1 + 48);
      if ( !v4 )
        v4 = *(_WORD *)(a1 + 234);
      v5 = *(_DWORD *)(a1 + 132);
      if ( v5 )
        v4 += v5;
      v6 = *(_WORD *)(a1 + 50);
      if ( !v6 )
      {
        v7 = *(_WORD *)(a1 + 272);
        if ( v7 <= 1u )
          v6 = 1;
        else
          v6 = v7 - 1;
      }
      if ( v5 )
        v6 += v5;
      v8 = v6;
      if ( v4 > v6 )
        v8 = v4;
    }
  }
  v9 = *(void **)(a1 + 952);
  *(_BYTE *)(a1 + 867) = 0;
  memset(v9, 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
  v10 = *(_QWORD *)(a1 + 952);
  *(_QWORD *)(a1 + 920) = v10;
  *(_DWORD *)(a1 + 856) = 1;
  *(_BYTE *)(v10 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
  v11 = *(_QWORD *)(a1 + 952);
  *(_WORD *)(v11 + 4142) = v6 - 1;
  *(_BYTE *)(v11 + 4096) = 9;
  *(_BYTE *)(v11 + 4136) = 7;
  *(_WORD *)(v11 + 4140) = v8 - 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4224LL) = NVMeSetIoQueueCountCompletion;
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = v2;
  ProcessCommand(a1, a1 + 864);
  WaitForCommandCompleteWithCustomTimeout(a1);
  v12 = *(_BYTE *)(a1 + 867);
  if ( v12 == 1 )
    return 0LL;
  result = 3238002689LL;
  if ( v12 == 5 )
    return 3238002700LL;
  return result;
}
