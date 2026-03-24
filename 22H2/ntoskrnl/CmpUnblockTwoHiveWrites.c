/*
 * XREFs of CmpUnblockTwoHiveWrites @ 0x1406EB048
 * Callers:
 *     CmpVirtualBranchIsReplicated @ 0x1406EAEDC (CmpVirtualBranchIsReplicated.c)
 *     CmpVirtualPathPresent @ 0x140870EA0 (CmpVirtualPathPresent.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     CmpDeleteHive @ 0x14071BAC4 (CmpDeleteHive.c)
 */

void __fastcall CmpUnblockTwoHiveWrites(char *P, PVOID a2)
{
  char *v4; // rsi
  char v5; // al

  if ( P )
  {
    v4 = P + 72;
    v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)P + 9, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)P + 9);
    KeAbPostRelease((ULONG_PTR)v4);
  }
  if ( a2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a2 + 9);
    KeAbPostRelease((ULONG_PTR)a2 + 72);
  }
  if ( P && !_InterlockedDecrement((volatile signed __int32 *)P + 1068) )
    CmpDeleteHive(P);
  if ( a2 )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)a2 + 1068) )
      CmpDeleteHive(a2);
  }
}
