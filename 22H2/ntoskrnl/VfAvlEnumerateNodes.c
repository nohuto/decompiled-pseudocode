/*
 * XREFs of VfAvlEnumerateNodes @ 0x140ADD2A4
 * Callers:
 *     ViTargetFreeContiguousMemory @ 0x140ACCAC0 (ViTargetFreeContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140ACCEB8 (ViTargetWMIDeregister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140ADB44C (VfSuspectDriversGetVerifierInformation.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14020A484 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlRaiseIrqlSafe @ 0x14020A4B8 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14020A4F0 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     RtlEnumerateGenericTableAvl @ 0x1403710D0 (RtlEnumerateGenericTableAvl.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

void __fastcall VfAvlEnumerateNodes(__int64 a1, __int64 a2, unsigned int (__fastcall *a3)(PVOID, __int64), __int64 a4)
{
  unsigned int v7; // ebp
  __int64 i; // rbx
  __int64 v9; // rdi
  BOOLEAN j; // dl
  PVOID v11; // rax

  ViAvlRaiseIrqlSafe(a2);
  v7 = dword_140C37338;
  for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
  {
    v9 = 192 * i;
    ViAvlAcquireTableLockAtDpcLevelSafe(192 * i + qword_140C37330, a2);
    for ( j = 1; ; j = 0 )
    {
      v11 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(v9 + qword_140C37330), j);
      if ( !v11 )
        break;
      if ( !a3(v11, a4) )
        return;
    }
    ViAvlReleaseTableLockFromDpcLevel(v9 + qword_140C37330, a2);
  }
}
