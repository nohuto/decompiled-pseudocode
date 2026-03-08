/*
 * XREFs of SeClearLearningModeObjectInformation @ 0x140265EF0
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x1403A70B0 (RtlpAllowsLowBoxAccess.c)
 *     ObReferenceObjectByName @ 0x140698F90 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x1406E7F70 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 *     ObReferenceObjectByNameEx @ 0x140710ADC (ObReferenceObjectByNameEx.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 */

void SeClearLearningModeObjectInformation()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // ecx
  struct _LIST_ENTRY *Blink; // rdx

  CurrentThread = KeGetCurrentThread();
  if ( KeGetCurrentIrql() )
    v1 = 2;
  else
    v1 = (KeGetCurrentThread()->ApcState.InProgressFlags & 1) != 0;
  Blink = CurrentThread[1].WaitBlock[1].WaitListEntry.Blink;
  if ( Blink )
  {
    if ( LODWORD(Blink->Blink) == v1 )
    {
      CurrentThread[1].WaitBlock[1].WaitListEntry.Blink = Blink->Flink;
      if ( Blink[2].Flink )
      {
        if ( Blink[3].Flink )
          RtlFreeUnicodeString((PUNICODE_STRING)&Blink[2].Blink);
      }
    }
  }
}
