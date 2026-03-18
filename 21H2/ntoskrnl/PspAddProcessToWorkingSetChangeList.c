/*
 * XREFs of PspAddProcessToWorkingSetChangeList @ 0x1409AFDD8
 * Callers:
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     PspSetJobLimitsProcessCallback @ 0x1406E7D70 (PspSetJobLimitsProcessCallback.c)
 * Callees:
 *     MmEnforceWorkingSetLimit @ 0x1402091B0 (MmEnforceWorkingSetLimit.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

char __fastcall PspAddProcessToWorkingSetChangeList(_KPROCESS *Object)
{
  __int64 PoolWithTag; // rax
  unsigned __int64 v3; // rdi
  __int64 *v4; // rcx

  LODWORD(PoolWithTag) = Object[1].DirectoryTableBase;
  if ( (PoolWithTag & 1) == 0 )
  {
    v3 = Object[1].Affinity.StaticBitmap[16];
    if ( (*(_DWORD *)(v3 + 1040) & 1) != 0 )
    {
      LOBYTE(PoolWithTag) = ObReferenceObjectSafeWithTag((__int64)Object);
      if ( (_BYTE)PoolWithTag )
      {
        PoolWithTag = (__int64)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x72437350u);
        if ( PoolWithTag )
        {
          *(_QWORD *)(PoolWithTag + 16) = Object;
          *(_QWORD *)(PoolWithTag + 32) = *(_QWORD *)(v3 + 992);
          *(_QWORD *)(PoolWithTag + 24) = *(_QWORD *)(v3 + 984);
          v4 = (__int64 *)qword_140CF5E68;
          if ( *(__int64 **)qword_140CF5E68 != &PspWorkingSetChangeHead )
            __fastfail(3u);
          *(_QWORD *)PoolWithTag = &PspWorkingSetChangeHead;
          *(_QWORD *)(PoolWithTag + 8) = v4;
          *v4 = PoolWithTag;
          qword_140CF5E68 = PoolWithTag;
        }
        else
        {
          LOBYTE(PoolWithTag) = ObfDereferenceObjectWithTag(Object, 0x624A7350u);
        }
      }
    }
    else
    {
      LOBYTE(PoolWithTag) = MmEnforceWorkingSetLimit(Object, 2);
    }
  }
  return PoolWithTag;
}
