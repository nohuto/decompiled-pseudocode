/*
 * XREFs of BiOpenKey @ 0x14082E7AC
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1403904AC (BiOpenStoreKeyFromObject.c)
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
 *     BcdOpenObject @ 0x14082E620 (BcdOpenObject.c)
 *     BiGetRegistryValue @ 0x14082EB20 (BiGetRegistryValue.c)
 *     BiDeleteRegistryValue @ 0x14083089C (BiDeleteRegistryValue.c)
 *     BiCleanupLoadedStores @ 0x1408311C8 (BiCleanupLoadedStores.c)
 *     BcdEnumerateObjects @ 0x140A597EC (BcdEnumerateObjects.c)
 *     BiIsPortableWorkspaceBoot @ 0x140A5A244 (BiIsPortableWorkspaceBoot.c)
 * Callees:
 *     CmSiCloseSection @ 0x1402F8438 (CmSiCloseSection.c)
 *     BiSanitizeHandle @ 0x1402FDDE8 (BiSanitizeHandle.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     BiZwOpenKey @ 0x1403903E4 (BiZwOpenKey.c)
 *     BiZwSetSecurityObject @ 0x14039040C (BiZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x14082E98C (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiOpenKey(__int64 a1, const WCHAR *a2, ACCESS_MASK a3, _QWORD *a4)
{
  unsigned int i; // esi
  void *KeySecurityDescriptor; // r14
  ACCESS_MASK v10; // edx
  NTSTATUS v11; // ebx
  __int64 v13; // rdx
  HANDLE v14; // [rsp+28h] [rbp-90h] BYREF
  HANDLE v15; // [rsp+30h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES v17[2]; // [rsp+48h] [rbp-70h] BYREF
  void *v18; // [rsp+C0h] [rbp+8h]

  v15 = 0LL;
  DestinationString = 0LL;
  *(&v17[0].Length + 1) = 0;
  *(&v17[0].Attributes + 1) = 0;
  for ( i = 0; ; ++i )
  {
    v14 = 0LL;
    KeySecurityDescriptor = 0LL;
    RtlInitUnicodeString(&DestinationString, a2);
    v18 = (void *)BiSanitizeHandle(a1);
    a3 |= 0x40000u;
    v17[0].Length = 48;
    v17[0].RootDirectory = v18;
    v17[0].Attributes = 576;
    v17[0].ObjectName = &DestinationString;
    *(_OWORD *)&v17[0].SecurityDescriptor = 0LL;
    v10 = 0x40000;
    if ( (a3 & 0x60019) == a3 )
      v10 = a3;
    v11 = BiZwOpenKey(&v14, v10, v17);
    if ( v11 >= 0 )
    {
      if ( (a3 & 0x60019) == a3 )
        goto LABEL_6;
      KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(983103);
      v11 = BiZwSetSecurityObject(v14, v13, KeySecurityDescriptor);
      if ( v11 >= 0 )
      {
        v11 = BiZwOpenKey(&v15, a3, v17);
        if ( v11 >= 0 )
        {
          CmSiCloseSection(v14);
          v14 = v15;
LABEL_6:
          *a4 = v14;
        }
      }
    }
    if ( v11 < 0 && v14 )
      CmSiCloseSection(v14);
    if ( KeySecurityDescriptor )
      ExFreePoolWithTag(KeySecurityDescriptor, 0x4B444342u);
    if ( v11 == -1073741443 )
    {
      __debugbreak();
      a1 = (__int64)v18;
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v11;
}
