/*
 * XREFs of IopInitializeTriageDumpData @ 0x14084C360
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x1402E8DA0 (KeRegisterBugCheckReasonCallback.c)
 *     KeAddTriageDumpDataBlock @ 0x1403A29E0 (KeAddTriageDumpDataBlock.c)
 *     KeInitializeTriageDumpDataArray @ 0x1403A2D10 (KeInitializeTriageDumpDataArray.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void IopInitializeTriageDumpData()
{
  struct _KTRIAGE_DUMP_DATA_ARRAY *Pool2; // rax
  SIZE_T v1; // r9
  unsigned int v2; // ebx

  if ( !IopTriageDumpDataArray )
  {
    Pool2 = (struct _KTRIAGE_DUMP_DATA_ARRAY *)ExAllocatePool2(64LL, 16432LL, 1918136137LL);
    IopTriageDumpDataArray = Pool2;
    if ( Pool2 )
    {
      if ( KeInitializeTriageDumpDataArray(Pool2, 0x4030u) < 0 )
        goto LABEL_9;
      if ( IopNumTriageDumpDataBlocks )
      {
        v2 = 0;
        do
        {
          KeAddTriageDumpDataBlock(
            IopTriageDumpDataArray,
            IopTriageDumpDataBlocks[v2].m128i_i64[0],
            (PVOID)(_mm_srli_si128(IopTriageDumpDataBlocks[v2], 8).m128i_u64[0]
                  - IopTriageDumpDataBlocks[v2].m128i_i64[0]),
            v1);
          ++v2;
        }
        while ( v2 < IopNumTriageDumpDataBlocks );
      }
      IopBugCheckTriageDumpDataCallbackRecord.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &IopBugCheckTriageDumpDataCallbackRecord,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)IoBugCheckTriageDumpDataCallback,
              KbCallbackTriageDumpData,
              (PUCHAR)"IoTriageDumpData") )
      {
LABEL_9:
        if ( IopTriageDumpDataArray )
        {
          ExFreePoolWithTag(IopTriageDumpDataArray, 0x72546F49u);
          IopTriageDumpDataArray = 0LL;
        }
      }
    }
  }
}
