/*
 * XREFs of IoGetAffinityInterrupt @ 0x1403B0BF0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x1403644D0 (KeGetProcessorNumberFromIndex.c)
 */

NTSTATUS __stdcall IoGetAffinityInterrupt(PKINTERRUPT InterruptObject, PGROUP_AFFINITY GroupAffinity)
{
  NTSTATUS result; // eax
  unsigned __int16 Group; // ax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcNumber = 0;
  result = KeGetProcessorNumberFromIndex(InterruptObject->Number, &ProcNumber);
  if ( result >= 0 )
  {
    Group = ProcNumber.Group;
    *GroupAffinity = 0LL;
    GroupAffinity->Group = Group;
    GroupAffinity->Mask = InterruptObject[-1].IsrDpcStats.IsrTimeStart;
    return 0;
  }
  return result;
}
