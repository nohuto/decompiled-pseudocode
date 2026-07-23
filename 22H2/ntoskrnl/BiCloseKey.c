/*
 * XREFs of BiCloseKey @ 0x14078448C
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1405C3990 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1405C3A74 (BiSetFirmwareModifiedFromObject.c)
 *     BiUnloadHiveByHandle @ 0x14077926C (BiUnloadHiveByHandle.c)
 *     BiDeleteKey @ 0x140779860 (BiDeleteKey.c)
 *     BiCloseStore @ 0x140781C00 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x140781CD8 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x140781ED8 (BiGetObjectDescription.c)
 *     BiCleanupLoadedStores @ 0x140781FA8 (BiCleanupLoadedStores.c)
 *     BiDeleteElement @ 0x14078309C (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x14078371C (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x140783940 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140783ACC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140783EDC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407840C0 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x140784964 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x14096ED5C (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x14096F018 (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x14096F3EC (BiSetObjectDescription.c)
 *     BiIsPortableWorkspaceBoot @ 0x14096F8F8 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x140970978 (BiBuildIdentifierList.c)
 * Callees:
 *     CmSiCloseSection @ 0x140321658 (CmSiCloseSection.c)
 *     BiZwSetSecurityObject @ 0x14039AEAC (BiZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x1407844E0 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall BiCloseKey(void *a1)
{
  void *KeySecurityDescriptor; // rax
  __int64 v3; // rdx
  void *v4; // rbx

  KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(393241LL);
  v4 = KeySecurityDescriptor;
  if ( KeySecurityDescriptor )
  {
    BiZwSetSecurityObject(a1, v3, KeySecurityDescriptor);
    ExFreePoolWithTag(v4, 0x4B444342u);
  }
  return CmSiCloseSection(a1);
}
