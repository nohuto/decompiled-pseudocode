/*
 * XREFs of CmShutdownCmRM @ 0x14074C37C
 * Callers:
 *     CmpTryToRundownHive @ 0x1402BFA88 (CmpTryToRundownHive.c)
 *     CmShutdownSystem1 @ 0x140613784 (CmShutdownSystem1.c)
 * Callees:
 *     CmpStopRMLog @ 0x14074C3C4 (CmpStopRMLog.c)
 *     CmpRunDownCmRM @ 0x14074C420 (CmpRunDownCmRM.c)
 */

__int64 __fastcall CmShutdownCmRM(__int64 a1, __int64 a2)
{
  char v2; // di

  v2 = a2;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 64) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 64));
      if ( !*(_DWORD *)(a1 + 64) )
        CmpStopRMLog(a1);
    }
  }
  LOBYTE(a2) = v2;
  return CmpRunDownCmRM(a1, a2);
}
