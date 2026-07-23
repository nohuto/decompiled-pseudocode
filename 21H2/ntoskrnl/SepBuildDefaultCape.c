/*
 * XREFs of SepBuildDefaultCape @ 0x1403CB0CC
 * Callers:
 *     SepBuildDefaultCap @ 0x1407CCDF4 (SepBuildDefaultCap.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepBuildDefaultCape(_QWORD *a1)
{
  unsigned int v1; // ebx
  _QWORD *PoolWithTag; // rax
  __int128 v4; // xmm0
  __int64 v5; // rcx

  v1 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x70536553u);
  if ( PoolWithTag )
  {
    v4 = DefaultCapeName;
    v5 = SeDefaultCapeSd;
    PoolWithTag[2] = 0LL;
    *(_OWORD *)PoolWithTag = v4;
    PoolWithTag[6] = 1LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[5] = 0LL;
    PoolWithTag[4] = v5;
    *a1 = PoolWithTag;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
