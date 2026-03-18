/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x140951090
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x14022EF10 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
