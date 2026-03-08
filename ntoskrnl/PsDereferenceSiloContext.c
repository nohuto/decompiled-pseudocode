/*
 * XREFs of PsDereferenceSiloContext @ 0x1402FEB00
 * Callers:
 *     ObReferenceObjectByName @ 0x140698F90 (ObReferenceObjectByName.c)
 *     NtWriteFile @ 0x1406B3A60 (NtWriteFile.c)
 *     ObOpenObjectByNameEx @ 0x1406E7F70 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByNameEx @ 0x140710ADC (ObReferenceObjectByNameEx.c)
 *     ObpCloseHandle @ 0x1407C2500 (ObpCloseHandle.c)
 *     ObpDeleteNameCheck @ 0x1407D85E0 (ObpDeleteNameCheck.c)
 *     ObReferenceFileObjectForWrite @ 0x1407DF2CC (ObReferenceFileObjectForWrite.c)
 *     PspAssignSiloSystemRootPath @ 0x1409A99E0 (PspAssignSiloSystemRootPath.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1409AA748 (PspSiloInitializeSystemRootBuffer.c)
 *     ObCreateSiloRootDirectory @ 0x140A70E70 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsDereferenceSiloContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x746C6644u);
}
