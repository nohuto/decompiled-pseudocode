/*
 * XREFs of MiClearFilePointer @ 0x1402F50B8
 * Callers:
 *     MiCheckControlArea @ 0x140295130 (MiCheckControlArea.c)
 *     MiCheckForControlAreaDeletion @ 0x1402F4FB8 (MiCheckForControlAreaDeletion.c)
 *     MiDestroySection @ 0x14037EADC (MiDestroySection.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall MiClearFilePointer(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rbx
  _QWORD *v4; // rcx

  v1 = *(_DWORD *)(a1 + 56);
  if ( (v1 & 0x80000) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    *(_DWORD *)(a1 + 56) = v1 | 0x80000;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4C980);
    v4 = *(_QWORD **)((v3 & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      v4[2] = 0LL;
    else
      *v4 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C980);
  }
}
