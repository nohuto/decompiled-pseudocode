/*
 * XREFs of KeSelectIdealProcessor @ 0x140359930
 * Callers:
 *     KiReselectIdealProcessorAfterAffinityChange @ 0x14035977C (KiReselectIdealProcessorAfterAffinityChange.c)
 *     KeSelectInitialIdealProcessorForThread @ 0x1403598E0 (KeSelectInitialIdealProcessorForThread.c)
 *     KiAdaptThreadIdealProcessorForProcessIdealSetChange @ 0x140574290 (KiAdaptThreadIdealProcessorForProcessIdealSetChange.c)
 *     ExpNodeCreateSystemThread @ 0x1407DE204 (ExpNodeCreateSystemThread.c)
 *     ExpWorkQueueManagerInitialize @ 0x140848580 (ExpWorkQueueManagerInitialize.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140236BF0 (KeGetProcessorIndexFromNumber.c)
 *     KiSelectIdealProcessor @ 0x1403599D8 (KiSelectIdealProcessor.c)
 */

ULONG __fastcall KeSelectIdealProcessor(__int64 a1, _WORD *a2, _QWORD *a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 *v7; // rdx
  unsigned int v8; // eax
  unsigned __int8 v9; // al
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)a1;
  v7 = &KiGroupBlock[4 * *(unsigned __int16 *)(a1 + 8)];
  if ( (*(_QWORD *)a1 & ~v7[3]) != 0 )
    v4 = *(_QWORD *)a1 & ~v7[3];
  if ( a3 )
  {
    if ( (KiCacheAwareScheduling & 4) != 0 )
    {
      v8 = 0;
      if ( a4 )
      {
        while ( (*a3 & v4) == 0 )
        {
          ++v8;
          ++a3;
          if ( v8 >= a4 )
            goto LABEL_8;
        }
        v4 &= *a3;
      }
    }
  }
LABEL_8:
  v9 = KiSelectIdealProcessor(v4, *v7, v7[2], (unsigned __int16)*a2);
  ProcNumber = 0;
  *a2 = v9;
  ProcNumber.Group = *(_WORD *)(a1 + 8);
  ProcNumber.Number = v9;
  return KeGetProcessorIndexFromNumber(&ProcNumber);
}
