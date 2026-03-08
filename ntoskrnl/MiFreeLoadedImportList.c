/*
 * XREFs of MiFreeLoadedImportList @ 0x1407F6CA0
 * Callers:
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MiActOnPatchInAllSessions @ 0x140A31950 (MiActOnPatchInAllSessions.c)
 *     MiApplyDriverHotPatch @ 0x140A31BB8 (MiApplyDriverHotPatch.c)
 *     MiMapAndApplyPatchInSession @ 0x140A37338 (MiMapAndApplyPatchInSession.c)
 *     MiShutdownSystem @ 0x140AA8A00 (MiShutdownSystem.c)
 *     MiInitializeLoadedModuleList @ 0x140B5D84C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeLoadedImportList(void *a1)
{
  if ( a1 != (void *)-2LL && a1 != (void *)1 && ((unsigned __int8)a1 & 1) == 0 )
    ExFreePoolWithTag(a1, 0);
}
