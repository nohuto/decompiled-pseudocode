/*
 * XREFs of MiAllocateSplitVads @ 0x14076003C
 * Callers:
 *     MiDeletePartialVad @ 0x1402D5768 (MiDeletePartialVad.c)
 * Callees:
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiUpControlAreaRefs @ 0x140623ABC (MiUpControlAreaRefs.c)
 *     MiInitializePartialVad @ 0x140760134 (MiInitializePartialVad.c)
 *     MiInsertSharedCommitNode @ 0x1407D63F0 (MiInsertSharedCommitNode.c)
 *     MiInsertVadCharges @ 0x1407D6A70 (MiInsertVadCharges.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x140A44E38 (MiDeleteNewlyCreatedPartialVads.c)
 */

__int64 __fastcall MiAllocateSplitVads(__int64 a1)
{
  __int64 v2; // r14
  _KPROCESS *Process; // r13
  unsigned int v4; // r12d
  unsigned __int64 v5; // rbp
  int v6; // r15d
  PVOID Pool; // rax
  __int64 v8; // rsi
  int inserted; // ebx
  void *v11; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = (*(_DWORD *)(a1 + 16) == 3) + 1;
  v5 = -(__int64)((*(_DWORD *)(v2 + 48) & 0x200000) != 0) & 0xFFFFFFFFFFFFFFB8uLL;
  v6 = 0;
  while ( 1 )
  {
    Pool = MiAllocatePool(64, v5 + 136, 0x46646156u);
    v8 = (__int64)Pool;
    if ( !Pool )
      break;
    inserted = MiInitializePartialVad(Pool);
    if ( inserted < 0 )
      goto LABEL_9;
    *(_DWORD *)(a1 + 40) = 0;
    if ( (*(_DWORD *)(v2 + 48) & 0x200000) == 0 )
    {
      inserted = MiInsertSharedCommitNode(**(_QWORD **)(v2 + 72), Process, 0LL);
      if ( inserted < 0 )
        goto LABEL_9;
      *(_DWORD *)(a1 + 40) |= 1u;
    }
    inserted = MiInsertVadCharges(v8, Process);
    if ( inserted < 0 )
      goto LABEL_9;
    *(_DWORD *)(a1 + 40) |= 2u;
    if ( (*(_DWORD *)(v2 + 48) & 0x200000) == 0 )
    {
      v11 = *(void **)(v8 + 128);
      if ( v11 )
        ObfReferenceObject(v11);
      inserted = MiUpControlAreaRefs(v8, 1);
      if ( inserted < 0 )
        goto LABEL_9;
      *(_DWORD *)(a1 + 40) |= 4u;
    }
    if ( ++v6 >= v4 )
      return (unsigned int)inserted;
  }
  inserted = -1073741670;
LABEL_9:
  MiDeleteNewlyCreatedPartialVads(a1);
  return (unsigned int)inserted;
}
