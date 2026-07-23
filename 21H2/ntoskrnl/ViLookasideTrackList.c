/*
 * XREFs of ViLookasideTrackList @ 0x1409E27BC
 * Callers:
 *     VerifierExInitializeNPagedLookasideList @ 0x1409E22F0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1409E2410 (VerifierExInitializePagedLookasideList.c)
 * Callees:
 *     ViLookasideAdd @ 0x1409E25B4 (ViLookasideAdd.c)
 */

void __fastcall ViLookasideTrackList(ULONG_PTR a1, int a2)
{
  PVOID (__stdcall *v2)(POOL_TYPE, SIZE_T, ULONG); // rax
  PVOID (__fastcall *v3)(__int32, ULONG_PTR, ULONG); // rax

  if ( a2 && *(void (__stdcall **)(PVOID, ULONG))(a1 + 56) == ExFreePoolWithTag )
  {
    v2 = *(PVOID (__stdcall **)(POOL_TYPE, SIZE_T, ULONG))(a1 + 48);
    if ( v2 == ExAllocatePoolWithTag )
    {
      v3 = VerifierExAllocatePoolWithTag;
LABEL_7:
      *(_QWORD *)(a1 + 48) = v3;
      *(_QWORD *)(a1 + 56) = VerifierExFreePool;
      goto LABEL_8;
    }
    if ( v2 == ExAllocatePoolWithQuotaTag )
    {
      v3 = VerifierExAllocatePoolWithQuotaTag;
      goto LABEL_7;
    }
  }
LABEL_8:
  ViLookasideAdd(a1);
}
