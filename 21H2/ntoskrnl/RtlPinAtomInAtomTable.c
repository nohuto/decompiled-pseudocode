/*
 * XREFs of RtlPinAtomInAtomTable @ 0x14060F540
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLookupLowBox @ 0x14027BFC8 (RtlpLookupLowBox.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     RtlpLockAtomTable @ 0x140685688 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1406856D0 (RtlpAtomMapAtomToHandleEntry.c)
 */

NTSTATUS __cdecl RtlPinAtomInAtomTable(PVOID AtomTableHandle, RTL_ATOM Atom)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rax
  NTSTATUS v8; // [rsp+20h] [rbp-28h]

  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return -1073741811;
  v4 = -1073741816;
  v8 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v4 = 0;
    v8 = v4;
  }
  else
  {
    v5 = RtlpAtomMapAtomToHandleEntry(AtomTableHandle, Atom & 0x3FFF);
    if ( v5 )
    {
      if ( *(_WORD *)(v5 + 10) == Atom )
      {
        v6 = RtlpLookupLowBox((__int64)AtomTableHandle, v5, 0);
        if ( v6 )
        {
          v8 = 0;
          *(_WORD *)(v6 + 22) |= 1u;
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)AtomTableHandle + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((char *)AtomTableHandle + 8);
  KeAbPostRelease((ULONG_PTR)AtomTableHandle + 8);
  KeLeaveCriticalRegion();
  return v8;
}
