/*
 * XREFs of IoRegisterPriorityCallback @ 0x140388E50
 * Callers:
 *     <none>
 * Callees:
 *     ExInitializePushLock @ 0x140238200 (ExInitializePushLock.c)
 *     ExCompareExchangeCallBack @ 0x140388EF8 (ExCompareExchangeCallBack.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x14078FD20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall IoRegisterPriorityCallback(unsigned __int64 a1, unsigned __int64 a2)
{
  struct _EX_RUNDOWN_REF *Pool2; // rbx
  __int64 v5; // rsi

  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
    return 3221227288LL;
  Pool2 = (struct _EX_RUNDOWN_REF *)ExAllocatePool2(64LL, 40LL, 1648586569LL);
  if ( !Pool2 )
    return 3221225626LL;
  Pool2[2].Count = (unsigned __int64)Pool2;
  Pool2[1].Count = (unsigned __int64)IopBoostThreadCallback;
  Pool2[4].Count = a1;
  Pool2[3].Count = a2;
  ExInitializePushLock(Pool2);
  v5 = 0LL;
  do
  {
    if ( (unsigned __int8)ExCompareExchangeCallBack((char *)&IopUpdatePriorityCallbackRoutine + 8 * v5, Pool2, 0LL) )
    {
      _InterlockedIncrement(&IopUpdatePriorityCallbackRoutineCount);
      *(_DWORD *)(a1 + 16) |= 0x200u;
      return 0LL;
    }
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < 8 );
  SC_ENV::Free(Pool2);
  return 3221225485LL;
}
