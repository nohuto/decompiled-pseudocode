/*
 * XREFs of PfpReturnAccessBuffer @ 0x14035B644
 * Callers:
 *     PfpFlushBuffers @ 0x1407E5E50 (PfpFlushBuffers.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     MmFreeAccessPfnBuffer @ 0x14035B5FC (MmFreeAccessPfnBuffer.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall PfpReturnAccessBuffer(struct _SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  if ( !ExAcquireRundownProtection_0(&stru_140D0BE48) )
    goto LABEL_8;
  Alignment_low = LOWORD(stru_140D0BE80.Alignment);
  if ( LOWORD(stru_140D0BE80.Alignment) >= (unsigned int)dword_140D0BE68 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C650D0, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&stru_140D0BE80, P);
    if ( !Event.Header.SignalState && Alignment_low >= 8 )
      KeSetEvent(&Event, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection_0(&stru_140D0BE48);
  if ( !v3 )
LABEL_8:
    MmFreeAccessPfnBuffer(P, 0);
}
