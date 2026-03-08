/*
 * XREFs of SeLocateProcessImageName @ 0x1407E7600
 * Callers:
 *     <none>
 * Callees:
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1407E7618 (PsGetAllocatedFullProcessImageNameEx.c)
 */

NTSTATUS __stdcall SeLocateProcessImageName(PEPROCESS Process, PUNICODE_STRING *pImageFileName)
{
  return PsGetAllocatedFullProcessImageNameEx(Process, pImageFileName);
}
