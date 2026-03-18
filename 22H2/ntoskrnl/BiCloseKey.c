/*
 * XREFs of BiCloseKey @ 0x1408077DC
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x14037431C (BiSetFirmwareModifiedFromObject.c)
 *     BiOpenStoreKeyFromObject @ 0x1403744EC (BiOpenStoreKeyFromObject.c)
 *     BiSetObjectDescription @ 0x140804A48 (BiSetObjectDescription.c)
 *     BiCloseStore @ 0x140804B8C (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x140804BEC (BiAddStoreFromFile.c)
 *     BiCreateObject @ 0x14080581C (BiCreateObject.c)
 *     BiOpenSystemStore @ 0x140805A48 (BiOpenSystemStore.c)
 *     BiDeleteElement @ 0x140805C00 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x140805E5C (BiDeleteKey.c)
 *     BiSetRegistryValue @ 0x140805FA0 (BiSetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x14080669C (BcdSetElementDataWithFlags.c)
 *     BiBuildIdentifierList @ 0x140806BE8 (BiBuildIdentifierList.c)
 *     BiGetObjectDescription @ 0x14080716C (BiGetObjectDescription.c)
 *     BcdGetElementDataWithFlags @ 0x14080723C (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x140807480 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1408074C4 (BcdOpenObject.c)
 *     BiCleanupLoadedStores @ 0x14080A164 (BiCleanupLoadedStores.c)
 *     BcdEnumerateObjects @ 0x140A5C4A0 (BcdEnumerateObjects.c)
 *     BiUnloadHiveByHandle @ 0x140A5D574 (BiUnloadHiveByHandle.c)
 *     BiIsPortableWorkspaceBoot @ 0x140A5D71C (BiIsPortableWorkspaceBoot.c)
 * Callees:
 *     BiZwSetSecurityObject @ 0x140374434 (BiZwSetSecurityObject.c)
 *     CmSiCloseSection @ 0x140374450 (CmSiCloseSection.c)
 *     BiCreateKeySecurityDescriptor @ 0x140807830 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall BiCloseKey(void *a1)
{
  void *KeySecurityDescriptor; // rax
  __int64 v3; // rdx
  void *v4; // rbx

  KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(393241);
  v4 = KeySecurityDescriptor;
  if ( KeySecurityDescriptor )
  {
    BiZwSetSecurityObject(a1, v3, KeySecurityDescriptor);
    ExFreePoolWithTag(v4, 0x4B444342u);
  }
  return CmSiCloseSection(a1);
}
