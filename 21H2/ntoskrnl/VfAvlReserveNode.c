/*
 * XREFs of VfAvlReserveNode @ 0x1402D83B4
 * Callers:
 *     VfTargetDriversAdd @ 0x1402D8104 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x140A91A50 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140A91C30 (VerifierIoInitializeRemoveLockEx.c)
 *     VfLookasideAdd @ 0x140A9F0C0 (VfLookasideAdd.c)
 *     VfTrackResource @ 0x140AA16A4 (VfTrackResource.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140202234 (ExAllocateFromNPagedLookasideList.c)
 *     ViAvlNodeInitializeSessionId @ 0x1402D8440 (ViAvlNodeInitializeSessionId.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall VfAvlReserveNode(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 Pool2; // rax
  __int64 v8; // rbx

  v3 = *((_DWORD *)a1 + 8);
  if ( v3 == 1 )
    Pool2 = (__int64)ExAllocateFromNPagedLookasideList(&ViAvlNodeLookaside);
  else
    Pool2 = ExAllocatePool2(64LL, v3, 1413572182LL);
  if ( !Pool2 )
    return 0LL;
  v8 = Pool2 + 32;
  *(_QWORD *)(Pool2 + 32) = a2;
  if ( !a3 )
    a3 = *a1;
  *(_QWORD *)(Pool2 + 40) = a3;
  if ( *((_BYTE *)a1 + 28) )
    ViAvlNodeInitializeSessionId(a1, Pool2 + 32);
  return v8;
}
