/*
 * XREFs of EtwpAllocateLbrData @ 0x1409ED63C
 * Callers:
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1409ED6FC (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x1409ED7C0 (EtwpUpdateLastBranchTracingEvents.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpAllocateLbrData(__int64 a1)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(64LL, 20LL, 2021094469LL);
  if ( !Pool2 )
    return 3221225495LL;
  *(_QWORD *)(a1 + 1024) = Pool2;
  return 0LL;
}
