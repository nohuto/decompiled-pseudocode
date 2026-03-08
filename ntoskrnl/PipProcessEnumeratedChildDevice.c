/*
 * XREFs of PipProcessEnumeratedChildDevice @ 0x14068571C
 * Callers:
 *     PipEnumerateCompleted @ 0x140685510 (PipEnumerateCompleted.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PpDevNodeInsertIntoTree @ 0x1402FB13C (PpDevNodeInsertIntoTree.c)
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PipSetDevNodeFlags @ 0x1406857DC (PipSetDevNodeFlags.c)
 *     PipAllocateDeviceNode @ 0x14078BC8C (PipAllocateDeviceNode.c)
 *     PipSetDevNodeProblem @ 0x1408667BC (PipSetDevNodeProblem.c)
 *     PpProfileCancelTransitioningDock @ 0x140960BA8 (PpProfileCancelTransitioningDock.c)
 */

__int64 __fastcall PipProcessEnumeratedChildDevice(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // rsi
  __int64 v5; // rsi
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rsi
  int v9; // ebp
  __int64 v10; // rcx
  _WORD *v11; // rcx
  __int64 v12; // rcx
  unsigned __int16 *v13; // rsi
  _WORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 312);
  if ( (*(_DWORD *)(v2 + 32) & 2) != 0 )
  {
    IoAddTriageDumpDataBlock(a2, (PVOID)*(unsigned __int16 *)(a2 + 2));
    v10 = *(_QWORD *)(a2 + 8);
    if ( v10 )
    {
      IoAddTriageDumpDataBlock(v10, (PVOID)(unsigned int)*(__int16 *)(v10 + 2));
      v11 = (_WORD *)(*(_QWORD *)(a2 + 8) + 56LL);
      if ( *v11 )
      {
        IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a2 + 8) + 56LL));
      }
    }
    v12 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
    if ( v12 )
    {
      v13 = (unsigned __int16 *)(v12 + 40);
      IoAddTriageDumpDataBlock(v12, (PVOID)0x388);
      if ( *v13 )
      {
        IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v13 + 1), (PVOID)*v13);
      }
      v14 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL);
      if ( *v14 )
      {
        IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 56LL));
      }
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
      if ( v15 && *(_WORD *)(v15 + 56) )
      {
        IoAddTriageDumpDataBlock(v15 + 56, (PVOID)2);
        v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v16 + 64), (PVOID)*(unsigned __int16 *)(v16 + 56));
      }
    }
    KeBugCheckEx(0xCAu, 4uLL, a2, 0LL, 0LL);
  }
  v5 = *(_QWORD *)(v2 + 40);
  v17 = v5;
  if ( v5 )
  {
    PipSetDevNodeFlags(v5, 16LL);
    if ( *(_DWORD *)(v5 + 568) == 4 )
      PpProfileCancelTransitioningDock(v5);
    return ObfDereferenceObject((PVOID)a2);
  }
  v7 = PipAllocateDeviceNode(a2, &v17);
  v8 = v17;
  v9 = v7;
  if ( !v17 )
    return ObfDereferenceObject((PVOID)a2);
  PipSetDevNodeFlags(v17, 16LL);
  *(_DWORD *)(a2 + 48) |= 0x1000u;
  result = PpDevNodeInsertIntoTree(a1, v8);
  if ( v9 == -1073740946 )
    return PipSetDevNodeProblem(v8, 49LL, 3221226350LL);
  return result;
}
