/*
 * XREFs of KiIpiUpdateExtendedSupervisorState @ 0x1405705C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG_PTR __fastcall KiIpiUpdateExtendedSupervisorState(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int Number; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  if ( Number < *(_DWORD *)(Argument + 8) && !CurrentPrcb->ExtendedSupervisorState )
    CurrentPrcb->ExtendedSupervisorState = (_XSAVE_AREA_HEADER *)((*(_QWORD *)(*(_QWORD *)Argument + 8LL * Number) + 63LL) & 0xFFFFFFFFFFFFFFC0uLL);
  return 0LL;
}
