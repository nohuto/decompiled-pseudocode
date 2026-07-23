/*
 * XREFs of MiQueuePageAccessLog @ 0x14025B88C
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140208210 (MiTrimOrAgeWorkingSet.c)
 *     MiEmptyPageAccessLog @ 0x14025B4D0 (MiEmptyPageAccessLog.c)
 *     MiReturnCcAccessLog @ 0x1403215BC (MiReturnCcAccessLog.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403A2F14 (MiCheckAndProcessCcAccessLog.c)
 *     MiGetCcAccessLog @ 0x1406901BC (MiGetCcAccessLog.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x14026E7A0 (MmFreeAccessPfnBuffer.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiQueuePageAccessLog(_SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  *((_QWORD *)&P[1].Next + 1) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)&P->Next + 3) = dword_140CEC350;
  if ( !ExAcquireRundownProtection(&RunRef) )
    goto LABEL_9;
  Alignment_low = LOWORD(ListHead.Alignment);
  if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_140CEC328 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C4FED0, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&ListHead, P);
    if ( Alignment_low >= 8 && !Event.Header.SignalState )
      KeSetEvent(&Event, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection(&RunRef);
  if ( !v3 )
LABEL_9:
    MmFreeAccessPfnBuffer(P);
}
