/*
 * XREFs of EtwpCCSwapStart @ 0x14080E634
 * Callers:
 *     EtwpUpdateSelectedGroupMasks @ 0x14037F908 (EtwpUpdateSelectedGroupMasks.c)
 * Callees:
 *     KeGetPrcb @ 0x140234AE0 (KeGetPrcb.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCCSwapStart(unsigned int a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 Pool2; // rax
  unsigned int i; // ebp
  __int64 v8; // rbx

  v1 = KeNumberProcessors_0;
  v2 = a1;
  if ( CCSwapNumLoggersPerClockType[a1] || (v3 = 0, !(_DWORD)KeNumberProcessors_0) )
  {
LABEL_6:
    ++CCSwapNumLoggersPerClockType[v2];
    return 0LL;
  }
  while ( 1 )
  {
    v4 = *(_QWORD *)(KeGetPrcb(v3) + 34472);
    if ( *(_QWORD *)(v4 + 8 * v2 + 392) )
    {
      *(_BYTE *)(v2 + v4 + 384) = 0;
      goto LABEL_5;
    }
    Pool2 = ExAllocatePool2(64LL, 1024LL, 2004042563LL);
    *(_QWORD *)(v4 + 8 * v2 + 392) = Pool2;
    if ( !Pool2 )
      break;
LABEL_5:
    ++v3;
    **(_DWORD **)(v4 + 8 * v2 + 392) = 0;
    if ( v3 >= v1 )
      goto LABEL_6;
  }
  for ( i = 0; i < v3; ++i )
  {
    v8 = *(_QWORD *)(KeGetPrcb(i) + 34472);
    ExFreePoolWithTag(*(PVOID *)(v8 + 8 * v2 + 392), 0);
    *(_QWORD *)(v8 + 8 * v2 + 392) = 0LL;
  }
  return 3221225495LL;
}
