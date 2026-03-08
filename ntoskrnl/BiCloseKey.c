/*
 * XREFs of BiCloseKey @ 0x14082E938
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1403902F4 (BiSetFirmwareModifiedFromObject.c)
 *     BiOpenStoreKeyFromObject @ 0x1403904AC (BiOpenStoreKeyFromObject.c)
 *     BiSetObjectDescription @ 0x14082BB8C (BiSetObjectDescription.c)
 *     BiCloseStore @ 0x14082BD84 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x14082BDE4 (BiAddStoreFromFile.c)
 *     BiCreateObject @ 0x14082CA14 (BiCreateObject.c)
 *     BiOpenSystemStore @ 0x14082CC40 (BiOpenSystemStore.c)
 *     BiDeleteElement @ 0x14082CDF8 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x14082CF64 (BiDeleteKey.c)
 *     BiSetRegistryValue @ 0x14082D198 (BiSetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x14082D894 (BcdSetElementDataWithFlags.c)
 *     BiBuildIdentifierList @ 0x14082DD44 (BiBuildIdentifierList.c)
 *     BiGetObjectDescription @ 0x14082E2C8 (BiGetObjectDescription.c)
 *     BcdGetElementDataWithFlags @ 0x14082E398 (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x14082E5DC (BcdCloseObject.c)
 *     BcdOpenObject @ 0x14082E620 (BcdOpenObject.c)
 *     BiCleanupLoadedStores @ 0x1408311C8 (BiCleanupLoadedStores.c)
 *     BcdEnumerateObjects @ 0x140A597EC (BcdEnumerateObjects.c)
 *     BiUnloadHiveByHandle @ 0x140A5A09C (BiUnloadHiveByHandle.c)
 *     BiIsPortableWorkspaceBoot @ 0x140A5A244 (BiIsPortableWorkspaceBoot.c)
 * Callees:
 *     CmSiCloseSection @ 0x1402F8438 (CmSiCloseSection.c)
 *     BiZwSetSecurityObject @ 0x14039040C (BiZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x14082E98C (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
