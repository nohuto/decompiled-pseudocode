/*
 * XREFs of KeSetTargetProcessorDpc @ 0x14056FDF0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     KeSetTargetProcessorDpcEx @ 0x1403007C0 (KeSetTargetProcessorDpcEx.c)
 */

void __stdcall KeSetTargetProcessorDpc(PRKDPC Dpc, CCHAR Number)
{
  unsigned __int16 v4; // bx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp+10h] BYREF

  if ( KeForceGroupAwareness )
    v4 = KiActiveGroups - 1;
  else
    v4 = 0;
  if ( Number < KeQueryActiveProcessorCountEx(v4) )
  {
    ProcNumber.Group = v4;
    ProcNumber.Number = Number;
    ProcNumber.Reserved = 0;
    KeSetTargetProcessorDpcEx(Dpc, &ProcNumber);
  }
}
