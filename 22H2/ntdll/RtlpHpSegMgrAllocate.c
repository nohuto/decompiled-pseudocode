/*
 * XREFs of RtlpHpSegMgrAllocate @ 0x180006584
 * Callers:
 *     RtlpHpSegSegmentAllocate @ 0x180006258 (RtlpHpSegSegmentAllocate.c)
 * Callees:
 *     RtlpHpSegMgrRelease @ 0x180004F04 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegMgrReserve @ 0x18000662C (RtlpHpSegMgrReserve.c)
 *     RtlpHpSegMgrCommit @ 0x180022E90 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x18010F264 (RtlpHpSegMgrVaCtxInsert.c)
 */

void *__fastcall RtlpHpSegMgrAllocate(__int64 a1, int a2, int a3)
{
  void *v6; // rbx
  void *v7; // rdi
  int v9; // [rsp+20h] [rbp-38h]
  unsigned int v10; // [rsp+40h] [rbp-18h] BYREF
  void *v11; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  if ( (int)RtlpHpSegMgrReserve(a1, a3, (unsigned int)&v11, (unsigned int)&v10, (__int64)&v12) < 0 )
  {
    v6 = v11;
    v7 = 0LL;
  }
  else
  {
    v9 = a2;
    v6 = v11;
    if ( (int)RtlpHpSegMgrCommit(a1, v9, 1073745920, a3) < 0 )
    {
      v7 = 0LL;
    }
    else
    {
      if ( v10 < v12 )
        RtlpHpSegMgrVaCtxInsert(a1, v6);
      v7 = v6;
      v6 = 0LL;
    }
  }
  if ( v6 )
    RtlpHpSegMgrRelease(a1, v6, 0);
  return v7;
}
