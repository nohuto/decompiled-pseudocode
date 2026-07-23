/*
 * XREFs of VfAvlReserveNode @ 0x140371840
 * Callers:
 *     VfTargetDriversAdd @ 0x14037158C (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x1409D72CC (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1409D74C0 (VerifierIoInitializeRemoveLockEx.c)
 *     ViLookasideAdd @ 0x1409E25B4 (ViLookasideAdd.c)
 *     VerifierExInitializeResourceLite @ 0x1409E3200 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140213400 (ExAllocateFromNPagedLookasideList.c)
 *     ViAvlNodeInitializeSessionId @ 0x1403718CC (ViAvlNodeInitializeSessionId.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char *__fastcall VfAvlReserveNode(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  _QWORD *PoolWithTag; // rax
  char *v8; // rbx

  v3 = *((_DWORD *)a1 + 8);
  if ( v3 == 1 )
    PoolWithTag = ExAllocateFromNPagedLookasideList(&ViAvlNodeLookaside);
  else
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x54416656u);
  if ( !PoolWithTag )
    return 0LL;
  v8 = (char *)(PoolWithTag + 4);
  PoolWithTag[4] = a2;
  if ( !a3 )
    a3 = *a1;
  PoolWithTag[5] = a3;
  if ( *((_BYTE *)a1 + 28) )
    ViAvlNodeInitializeSessionId(a1, PoolWithTag + 4);
  return v8;
}
