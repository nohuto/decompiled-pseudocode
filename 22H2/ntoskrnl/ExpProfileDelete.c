/*
 * XREFs of ExpProfileDelete @ 0x140A042B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x1402CB700 (MmUnmapLockedPages.c)
 *     KeStopProfile @ 0x1405740BC (KeStopProfile.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall ExpProfileDelete(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 48) )
  {
    KeStopProfile(*(_QWORD *)(a1 + 40));
    MmUnmapLockedPages(*(PVOID *)(a1 + 48), *(PMDL *)(a1 + 56));
    MmUnlockPages(*(PMDL *)(a1 + 56));
    ExFreePoolWithTag(*(PVOID *)(a1 + 40), 0);
  }
  if ( *(_QWORD *)a1 )
    ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x66507845u);
}
