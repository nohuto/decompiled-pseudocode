/*
 * XREFs of WmipAllocGuidEntry @ 0x14075DFE4
 * Callers:
 *     WmipLinkDataSourceToList @ 0x14075DEAC (WmipLinkDataSourceToList.c)
 *     WmipOpenBlock @ 0x140783428 (WmipOpenBlock.c)
 * Callees:
 *     WmipAllocEntry @ 0x14075E074 (WmipAllocEntry.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

_QWORD *WmipAllocGuidEntry()
{
  _QWORD *v0; // rbx
  _QWORD *PoolWithTag; // rdi
  _QWORD *v2; // rax

  v0 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70696D57u);
  if ( PoolWithTag )
  {
    v2 = (_QWORD *)WmipAllocEntry(&WmipGEChunkInfo);
    v0 = v2;
    if ( v2 )
    {
      v2[12] = PoolWithTag;
      v2[8] = v2 + 7;
      v2[7] = v2 + 7;
      v2[6] = v2 + 5;
      v2[5] = v2 + 5;
      v2[18] = v2 + 17;
      v2[17] = v2 + 17;
      PoolWithTag[3] = 0LL;
      PoolWithTag[5] = WmipLegacyEtwWorker;
      PoolWithTag[6] = v2;
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, 0x70696D57u);
    }
  }
  return v0;
}
