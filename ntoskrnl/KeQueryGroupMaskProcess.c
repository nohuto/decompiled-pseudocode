/*
 * XREFs of KeQueryGroupMaskProcess @ 0x1402961A4
 * Callers:
 *     MmCreatePeb @ 0x140706A60 (MmCreatePeb.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupMaskProcess(__int64 a1)
{
  return *(unsigned int *)(a1 + 636);
}
