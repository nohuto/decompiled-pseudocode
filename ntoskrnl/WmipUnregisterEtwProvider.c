/*
 * XREFs of WmipUnregisterEtwProvider @ 0x1409DED20
 * Callers:
 *     WmipUnlinkInstanceSetFromGuidEntry @ 0x14087DFC4 (WmipUnlinkInstanceSetFromGuidEntry.c)
 * Callees:
 *     WmipQueueLegacyEtwWork @ 0x1408507E0 (WmipQueueLegacyEtwWork.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void __fastcall WmipUnregisterEtwProvider(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 Pool2; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( (*(_DWORD *)(v1 + 152))-- == 1 )
  {
    *(_QWORD *)(v1 + 112) = 0LL;
    *(_QWORD *)(v1 + 120) = 0LL;
    Pool2 = ExAllocatePool2(256LL, 24LL, 1885957463LL);
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 16) = 1;
      WmipQueueLegacyEtwWork((_QWORD *)Pool2, v1, 0LL);
    }
  }
}
