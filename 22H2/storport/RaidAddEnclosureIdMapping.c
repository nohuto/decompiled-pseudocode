/*
 * XREFs of RaidAddEnclosureIdMapping @ 0x1C0035470
 * Callers:
 *     RaidLoadEnclosureIdMappings @ 0x1C003592C (RaidLoadEnclosureIdMappings.c)
 *     ShimGetMsftId @ 0x1C0058900 (ShimGetMsftId.c)
 * Callees:
 *     memmove @ 0x1C00201C0 (memmove.c)
 */

__int64 __fastcall RaidAddEnclosureIdMapping(void *Src, size_t Size, _OWORD *a3)
{
  SIZE_T v4; // rsi
  unsigned int v6; // edi
  _OWORD *PoolWithTag; // rbx
  PVOID v8; // rax
  _QWORD *v9; // rax
  void *v10; // rcx

  v4 = (unsigned int)Size;
  v6 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x48536152u);
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    v8 = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x48536152u);
    *((_QWORD *)PoolWithTag + 2) = v8;
    if ( v8 )
    {
      *((_QWORD *)PoolWithTag + 1) = PoolWithTag;
      *(_QWORD *)PoolWithTag = PoolWithTag;
      memmove(v8, Src, v4);
      *(_OWORD *)((char *)PoolWithTag + 24) = *a3;
      v9 = (_QWORD *)qword_1C0069838;
      if ( *(__int64 **)qword_1C0069838 != &EnclosureIdList )
        __fastfail(3u);
      *(_QWORD *)PoolWithTag = &EnclosureIdList;
      *((_QWORD *)PoolWithTag + 1) = v9;
      *v9 = PoolWithTag;
      qword_1C0069838 = (__int64)PoolWithTag;
      PoolWithTag = 0LL;
    }
    else
    {
      v6 = -1073741670;
    }
    if ( PoolWithTag )
    {
      v10 = (void *)*((_QWORD *)PoolWithTag + 2);
      if ( v10 )
        ExFreePoolWithTag(v10, 0x48536152u);
      ExFreePoolWithTag(PoolWithTag, 0x48536152u);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
