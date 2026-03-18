/*
 * XREFs of SeClearLearningModeObjectInformation @ 0x140347840
 * Callers:
 *     RtlpAllowsLowBoxAccess @ 0x140244198 (RtlpAllowsLowBoxAccess.c)
 *     ObReferenceObjectByNameEx @ 0x1406686C8 (ObReferenceObjectByNameEx.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1407CB6C0 (ObpLookupObjectName.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
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
