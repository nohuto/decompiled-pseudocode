/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x14089A950
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x1402D2170 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
