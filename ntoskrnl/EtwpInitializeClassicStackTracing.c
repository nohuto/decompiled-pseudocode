/*
 * XREFs of EtwpInitializeClassicStackTracing @ 0x1409E5CE4
 * Callers:
 *     EtwpUpdateStackTracing @ 0x1409E5DD8 (EtwpUpdateStackTracing.c)
 * Callees:
 *     EtwpAllocateStackwalkApcPool @ 0x1409E5C44 (EtwpAllocateStackwalkApcPool.c)
 *     EtwpReferenceStackLookasideList @ 0x1409E5D6C (EtwpReferenceStackLookasideList.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpInitializeClassicStackTracing(__int64 a1)
{
  unsigned int v2; // edi
  __int64 Pool2; // rax
  __int64 v4; // rcx

  v2 = 0;
  EtwpAllocateStackwalkApcPool(a1);
  Pool2 = ExAllocatePool2(64LL, 1024LL, 1836545093LL);
  if ( Pool2 )
  {
    *(_QWORD *)(a1 + 1000) = Pool2;
    *(_DWORD *)(a1 + 992) = 0x2000;
    _m_prefetchw((const void *)(a1 + 816));
    v4 = *(_DWORD *)(a1 + 816) | 0x2000u;
    if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x2000u) & 0x2000) == 0 )
      EtwpReferenceStackLookasideList(v4, 0x2000LL);
    _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x80u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
