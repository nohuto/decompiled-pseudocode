/*
 * XREFs of PiDqQueryRelease @ 0x14078773C
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1407869A0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqDispatch @ 0x1407F9510 (PiDqDispatch.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x1407FB79C (PiDqObjectManagerUnregisterQuery.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1405611A0 (McTemplateK0p_EtwWriteTransfer.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     PiDqQueryFreeActiveData @ 0x1407E02C8 (PiDqQueryFreeActiveData.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqQueryRelease(PVOID P)
{
  void *v2; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 53, 0xFFFFFFFF) == 1 )
  {
    if ( (byte_140C0E20A & 0x40) != 0 )
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
