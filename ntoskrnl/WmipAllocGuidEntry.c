/*
 * XREFs of WmipAllocGuidEntry @ 0x140841224
 * Callers:
 *     WmipOpenBlock @ 0x14069AF1C (WmipOpenBlock.c)
 *     WmipLinkDataSourceToList @ 0x1408681AC (WmipLinkDataSourceToList.c)
 * Callees:
 *     WmipAllocEntry @ 0x140868798 (WmipAllocEntry.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

_QWORD *WmipAllocGuidEntry()
{
  _QWORD *v0; // rbx
  _QWORD *Pool2; // rdi
  _QWORD *v2; // rax

  v0 = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 56LL, 1885957463LL);
  if ( Pool2 )
  {
    v2 = (_QWORD *)WmipAllocEntry(&WmipGEChunkInfo);
    v0 = v2;
    if ( v2 )
    {
      v2[12] = Pool2;
      v2[8] = v2 + 7;
      v2[7] = v2 + 7;
      v2[6] = v2 + 5;
      v2[5] = v2 + 5;
      v2[18] = v2 + 17;
      v2[17] = v2 + 17;
      Pool2[3] = 0LL;
      Pool2[5] = WmipLegacyEtwWorker;
      Pool2[6] = v2;
    }
    else
    {
      ExFreePoolWithTag(Pool2, 0x70696D57u);
    }
  }
  return v0;
}
