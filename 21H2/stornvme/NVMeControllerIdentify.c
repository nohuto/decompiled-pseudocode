/*
 * XREFs of NVMeControllerIdentify @ 0x1C0007C08
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C0007384 (NVMeControllerInitPart1.c)
 *     NVMeControllerIdentifyWorkItem @ 0x1C001CA60 (NVMeControllerIdentifyWorkItem.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeControllerIdentify(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rbx

  *(_BYTE *)(a1 + 867) = 0;
  memset(*(void **)(a1 + 952), 0, 0x10A0uLL);
  v2 = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
  *(_QWORD *)(a1 + 920) = *(_QWORD *)(a1 + 952);
  *(_DWORD *)(a1 + 856) = 1;
  do
    *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) |= ++v2;
  while ( v2 < 2 );
  *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
  v3 = *(_QWORD *)(a1 + 952);
  v4 = *(_QWORD *)(a1 + 1648);
  *(_DWORD *)(v3 + 4100) = 0;
  *(_BYTE *)(v3 + 4096) = 6;
  *(_QWORD *)(v3 + 4120) = v4;
  *(_BYTE *)(v3 + 4136) = 1;
  ProcessCommand(a1, a1 + 864);
  result = WaitForCommandCompleteWithCustomTimeout(a1);
  if ( *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209 )
  {
    v6 = *(_QWORD *)(a1 + 1640);
    if ( *(_WORD *)v6 != 0x8086 )
    {
      memset(*(void **)(a1 + 1640), 0, 0x1000uLL);
      *(_BYTE *)(v6 + 261) |= 1u;
      *(_QWORD *)(v6 + 24) = 0x326D616874616843LL;
      result = 1059LL;
      *(_WORD *)(v6 + 73) = 1059;
      *(_DWORD *)v6 = 538017926;
      *(_DWORD *)(v6 + 4) = 842084402;
      *(_BYTE *)(v6 + 64) = 48;
      *(_BYTE *)(v6 + 72) = 1;
      *(_BYTE *)(v6 + 259) = 3;
      *(_WORD *)(v6 + 512) = 17510;
      *(_DWORD *)(v6 + 516) = 1;
    }
  }
  return result;
}
