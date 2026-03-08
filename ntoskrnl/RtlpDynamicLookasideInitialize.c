/*
 * XREFs of RtlpDynamicLookasideInitialize @ 0x14039D5B0
 * Callers:
 *     ExInitializePoolHeapManagement @ 0x140374D0C (ExInitializePoolHeapManagement.c)
 *     ExInitializePagedHeaps @ 0x140374F94 (ExInitializePagedHeaps.c)
 * Callees:
 *     InitializeSListHead @ 0x1402A8B90 (InitializeSListHead.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __fastcall RtlpDynamicLookasideInitialize(char *a1)
{
  __int64 v2; // rdi
  char *v3; // rbx

  memset(a1, 0, 0x1040uLL);
  *((_DWORD *)a1 + 2) = 63;
  v2 = 64LL;
  *((_DWORD *)a1 + 3) = 16;
  v3 = a1 + 82;
  do
  {
    InitializeSListHead((PSLIST_HEADER)(v3 - 18));
    *(_QWORD *)(v3 - 2) = 0x1000000LL;
    *(_QWORD *)(v3 + 6) = 0LL;
    *(_QWORD *)(v3 + 14) = 0LL;
    *(_DWORD *)(v3 + 22) = 0;
    v3 += 64;
    --v2;
  }
  while ( v2 );
}
