/*
 * XREFs of PfpReadSupportCleanup @ 0x1406340E4
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x140633C60 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1408DF8B0 (PfpPrefetchFiles.c)
 * Callees:
 *     PfpOpenHandleClose @ 0x1406339C0 (PfpOpenHandleClose.c)
 *     NtClose @ 0x14063E0A0 (NtClose.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PfpReadSupportCleanup(__int64 a1, __int64 a2)
{
  void *v4; // rcx

  v4 = *(void **)(a2 + 40);
  if ( v4 )
    NtClose(v4);
  if ( *(_QWORD *)a2 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
  if ( (*(_QWORD *)(a2 + 32) & 0x400000000LL) != 0 )
    PfpOpenHandleClose((_QWORD *)(a2 + 8), a1);
}
