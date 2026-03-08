/*
 * XREFs of MiDeleteNewlyCreatedPartialVads @ 0x140A44E38
 * Callers:
 *     MiAllocateSplitVads @ 0x14076003C (MiAllocateSplitVads.c)
 * Callees:
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     MiComputeVadCharges @ 0x14034CBC4 (MiComputeVadCharges.c)
 *     MiUpControlAreaRefs @ 0x140623ABC (MiUpControlAreaRefs.c)
 *     MiFreePlaceholderStorage @ 0x1406800F8 (MiFreePlaceholderStorage.c)
 *     MiRemoveSharedCommitNode @ 0x1407D6770 (MiRemoveSharedCommitNode.c)
 *     MiFreeRotateView @ 0x140A2E638 (MiFreeRotateView.c)
 *     MiReturnVadCharges @ 0x140A39830 (MiReturnVadCharges.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteNewlyCreatedPartialVads(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  _KPROCESS *Process; // rbp
  __int64 v4; // rsi
  void *v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)a1;
  v2 = *(_DWORD *)(a1 + 40);
  v6 = 0LL;
  v7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v1 )
  {
    do
    {
      v4 = *(_QWORD *)v1;
      MiComputeVadCharges(v1, (__int64)&v6);
      if ( !v4 && (v2 & 2) == 0 )
      {
        v7 = 0LL;
        *((_QWORD *)&v6 + 1) = 0LL;
      }
      MiReturnVadCharges(&v6);
      if ( v4 || (v2 & 2) != 0 )
      {
        if ( (*(_DWORD *)(v1 + 48) & 0x200000) == 0 )
        {
          v5 = *(void **)(v1 + 128);
          if ( v5 )
            ObfReferenceObject(v5);
          if ( !v4 && (v2 & 4) == 0 )
            goto LABEL_14;
          MiUpControlAreaRefs(v1, 0);
        }
        if ( v4 )
          goto LABEL_15;
      }
LABEL_14:
      if ( (v2 & 1) != 0 )
      {
LABEL_15:
        if ( (*(_DWORD *)(v1 + 48) & 0x200000) == 0 )
          MiRemoveSharedCommitNode(**(_QWORD **)(v1 + 72), (unsigned __int64)Process, 0);
      }
      MiFreeRotateView(v1);
      MiFreePlaceholderStorage(v1);
      ExFreePoolWithTag((PVOID)v1, 0);
      v1 = v4;
    }
    while ( v4 );
  }
}
