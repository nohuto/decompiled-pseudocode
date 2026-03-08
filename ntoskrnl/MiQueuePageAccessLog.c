/*
 * XREFs of MiQueuePageAccessLog @ 0x14035B540
 * Callers:
 *     MiEmptyPageAccessLog @ 0x14028C160 (MiEmptyPageAccessLog.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1402DC3D4 (MiCheckAndProcessCcAccessLog.c)
 *     MiReturnCcAccessLog @ 0x1402DC41C (MiReturnCcAccessLog.c)
 *     MiGetCcAccessLog @ 0x14077A724 (MiGetCcAccessLog.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     MmFreeAccessPfnBuffer @ 0x14035B5FC (MmFreeAccessPfnBuffer.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiQueuePageAccessLog(struct _SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  *((_QWORD *)&P[1].Next + 1) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)&P->Next + 3) = dword_140D0BE90;
  if ( !ExAcquireRundownProtection_0(&stru_140D0BE48) )
    goto LABEL_9;
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
LABEL_9:
    MmFreeAccessPfnBuffer(P);
}
