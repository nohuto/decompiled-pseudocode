/*
 * XREFs of VfTargetDriversAdd @ 0x1402D8104
 * Callers:
 *     VfDriverLoadImage @ 0x140A7C1B8 (VfDriverLoadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x140A9A8F8 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1402D81DC (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x1402D8234 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x1402D83B4 (VfAvlReserveNode.c)
 *     DifAddPerDriverDataForPlugins @ 0x140604308 (DifAddPerDriverDataForPlugins.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     VfThunkAddTargetNotify @ 0x140A7C024 (VfThunkAddTargetNotify.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140A8B104 (ViTargetDriversAllocateVerifiedData.c)
 */

__int64 __fastcall VfTargetDriversAdd(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 VerifiedData; // rax
  int v13; // eax
  unsigned int v14; // eax
  _OWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  v5 = a2;
  v8 = 1;
  if ( VfSafeMode || !ViTargetInitialized )
    return 0;
  if ( a4 )
  {
    VerifiedData = ViTargetDriversAllocateVerifiedData(a4);
    v4 = VerifiedData;
    if ( !VerifiedData )
      return 0;
    v13 = *(_DWORD *)(VerifiedData + 32);
    v14 = (_DWORD)InitializationPhase ? v13 & 0xFFFFFFFD : v13 | 2;
    *(_DWORD *)(v4 + 32) = v14;
    if ( (int)DifAddPerDriverDataForPlugins(v4 + 96) < 0 )
    {
LABEL_9:
      ExFreePoolWithTag((PVOID)v4, 0x44566656u);
      return 0;
    }
  }
  v9 = VfAvlReserveNode(&ViTargetDriversAvl, a1, v5);
  v10 = v9;
  if ( !v9 )
  {
    _InterlockedExchange(&ViTargetAllocationFailures, 1);
    v8 = 0;
    if ( !v4 )
      return v8;
    goto LABEL_9;
  }
  *(_QWORD *)(v9 + 56) = v4;
  *(_OWORD *)(v9 + 24) = 0LL;
  *(_QWORD *)(v9 + 40) = 0LL;
  VfThunkAddTargetNotify(v9);
  v15[0] = 0LL;
  BYTE9(v15[0]) = 4;
  VfAvlInsertReservedTreeNode(&ViTargetDriversAvl, v15, v10);
  if ( v4 )
  {
    ++dword_140C1B248;
    *(_BYTE *)(v4 + 48) = a3;
  }
  VfAvlCleanupLockContext(v15);
  return v8;
}
