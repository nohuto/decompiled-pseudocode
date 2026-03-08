/*
 * XREFs of RtlDeleteAtomFromAtomTable @ 0x1407DBF30
 * Callers:
 *     NtDeleteAtom @ 0x1407DCF30 (NtDeleteAtom.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlpLookupLowBox @ 0x140354C6C (RtlpLookupLowBox.c)
 *     RtlpDereferenceAtom @ 0x140355550 (RtlpDereferenceAtom.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1407D8D38 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlpLockAtomTable @ 0x1407DA790 (RtlpLockAtomTable.c)
 */

__int64 __fastcall RtlDeleteAtomFromAtomTable(__int64 a1, unsigned __int16 a2)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rax
  __int64 v6; // rbp
  __int64 *v7; // rax

  if ( !RtlpLockAtomTable((_DWORD *)a1) )
    return 3221225485LL;
  v4 = -1073741816;
  if ( a2 < 0xC000u )
  {
    if ( a2 )
      v4 = 0;
  }
  else
  {
    v5 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
    v6 = v5;
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 10) == a2 )
      {
        v7 = RtlpLookupLowBox(a1, v5, 1);
        if ( v7 )
        {
          v4 = 0;
          if ( (*((_BYTE *)v7 + 22) & 1) != 0 )
            v4 = 1073741849;
          else
            RtlpDereferenceAtom(v6, v7, a1);
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KeLeaveCriticalRegion();
  return v4;
}
