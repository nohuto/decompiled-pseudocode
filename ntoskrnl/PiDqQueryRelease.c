/*
 * XREFs of PiDqQueryRelease @ 0x140689C8C
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x140688EF0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqDispatch @ 0x140745C20 (PiDqDispatch.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x140747D8C (PiDqObjectManagerUnregisterQuery.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14055ED00 (McTemplateK0p_EtwWriteTransfer.c)
 *     PiDqQueryFreeActiveData @ 0x1407910F8 (PiDqQueryFreeActiveData.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqQueryRelease(PVOID P)
{
  void *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 53, 0xFFFFFFFF) == 1 )
  {
    if ( (byte_140C0E10A & 0x40) != 0 )
      McTemplateK0p_EtwWriteTransfer(
        (__int64)P,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_DevQuery_QueryStop,
        *((const GUID **)P + 3),
        P);
    PiDqQueryFreeActiveData(P);
    v2 = (void *)*((_QWORD *)P + 3);
    if ( v2 )
      ExFreePoolWithTag(v2, 0x6370726Bu);
    if ( *((_QWORD *)P + 2) )
      MesHandleFree();
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)P + 1);
    ExFreePoolWithTag(P, 0x58706E50u);
  }
}
