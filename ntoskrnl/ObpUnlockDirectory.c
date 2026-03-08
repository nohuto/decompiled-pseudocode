/*
 * XREFs of ObpUnlockDirectory @ 0x140699588
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140696BDC (ObpInsertOrLocateNamedObject.c)
 *     NtQueryDirectoryObject @ 0x1406989A0 (NtQueryDirectoryObject.c)
 *     ObReferenceObjectByName @ 0x140698F90 (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x140710ADC (ObReferenceObjectByNameEx.c)
 *     ObpCreateSymbolicLinkName @ 0x1407612D4 (ObpCreateSymbolicLinkName.c)
 *     ObpDeleteDirectoryEntry @ 0x14076F100 (ObpDeleteDirectoryEntry.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x14076F1F8 (ObpMarkDirectoryObjectsTemporary.c)
 *     ObpCloseHandle @ 0x1407C2500 (ObpCloseHandle.c)
 *     ObpDeleteNameCheck @ 0x1407D85E0 (ObpDeleteNameCheck.c)
 *     NtSetInformationObject @ 0x1407DA9A0 (NtSetInformationObject.c)
 *     ObCreateObjectTypeEx @ 0x14080CB20 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x140B403CC (ObInitSystem.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

void __fastcall ObpUnlockDirectory(__int64 a1)
{
  ExReleasePushLockEx((__int64 *)(*(_QWORD *)a1 + 296LL), 0LL);
  if ( *(_BYTE *)(a1 + 22) )
  {
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)a1, 0x554C624Fu);
    *(_BYTE *)(a1 + 22) = 0;
  }
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 21) = 0;
  KeLeaveCriticalRegion();
}
