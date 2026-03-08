/*
 * XREFs of HvlFlushRangeListTb @ 0x1403C689C
 * Callers:
 *     KeFlushSingleTb @ 0x140211E60 (KeFlushSingleTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140387610 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushSingleCurrentTb @ 0x140387AD4 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeTb @ 0x14038C374 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     HvlpFlushRangeListTb @ 0x1403C68E4 (HvlpFlushRangeListTb.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1403C6E70 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFlushRangeListTbEx @ 0x1405476CC (HvlpFlushRangeListTbEx.c)
 */

char __fastcall HvlFlushRangeListTb(int a1, __int64 a2, int a3, int a4, char a5, int a6, __int64 a7)
{
  int v7; // r10d
  char v8; // bl

  v7 = a1;
  if ( a2 && (unsigned __int8)HvlpUseExtendedProcessorSetHypercalls() )
  {
    v8 = a5;
    HvlpFlushRangeListTbEx(v7, a2, a3, a4, a5, a6, a7);
  }
  else
  {
    v8 = a5;
    HvlpFlushRangeListTb(v7, a2, a3, a4, a5, a6, a7);
  }
  return v8;
}
