/*
 * XREFs of RtlPinAtomInAtomTable @ 0x1407DBE40
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlpLookupLowBox @ 0x140354C6C (RtlpLookupLowBox.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1407D8D38 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlpLockAtomTable @ 0x1407DA790 (RtlpLockAtomTable.c)
 */

__int64 __fastcall RtlPinAtomInAtomTable(__int64 a1, unsigned __int16 a2)
{
  int v4; // eax
  unsigned __int64 v5; // rax
  _QWORD *v6; // rax
  unsigned int v8; // [rsp+20h] [rbp-28h]

  if ( !RtlpLockAtomTable((_DWORD *)a1) )
    return 3221225485LL;
  v4 = -1073741816;
  v8 = -1073741816;
  if ( a2 < 0xC000u )
  {
    if ( a2 )
      v4 = 0;
    v8 = v4;
  }
  else
  {
    v5 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 10) == a2 )
      {
        v6 = RtlpLookupLowBox(a1, v5, 0);
        if ( v6 )
        {
          v8 = 0;
          *((_WORD *)v6 + 11) |= 1u;
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KeLeaveCriticalRegion();
  return v8;
}
