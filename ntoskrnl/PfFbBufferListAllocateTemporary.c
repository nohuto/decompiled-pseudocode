/*
 * XREFs of PfFbBufferListAllocateTemporary @ 0x14035B4C8
 * Callers:
 *     PfpEventHandleOutOfBuffers @ 0x14035B4A0 (PfpEventHandleOutOfBuffers.c)
 *     PfpSectInfoHandleOutOfBuffers @ 0x14079C670 (PfpSectInfoHandleOutOfBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x14035B6E4 (PfFbBufferListInsertInFree.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PfFbBufferListAllocateTemporary(PEX_RUNDOWN_REF RunRef, signed int a2)
{
  void *Pool2; // rax
  __int64 result; // rax

  if ( a2 + _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[14], a2) > SLODWORD(RunRef[11].Count) )
  {
    result = 3221225773LL;
  }
  else
  {
    Pool2 = (void *)ExAllocatePool2(RunRef[9].Count, a2, HIDWORD(RunRef[8].Ptr));
    if ( Pool2 )
    {
      PfFbBufferListInsertInFree(RunRef, Pool2, 0);
      return 0LL;
    }
    result = 3221225626LL;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[14], -a2);
  return result;
}
