/*
 * XREFs of BiSetRegistryValue @ 0x14082D198
 * Callers:
 *     BiSetFirmwareModified @ 0x140390340 (BiSetFirmwareModified.c)
 *     BiMarkTreatAsSystemStore @ 0x14082B918 (BiMarkTreatAsSystemStore.c)
 *     BiSetObjectDescription @ 0x14082BB8C (BiSetObjectDescription.c)
 *     BiAddStoreFromFile @ 0x14082BDE4 (BiAddStoreFromFile.c)
 *     BcdSetElementDataWithFlags @ 0x14082D894 (BcdSetElementDataWithFlags.c)
 *     BiUpdateBcdObject @ 0x14082DA80 (BiUpdateBcdObject.c)
 *     BcdSetSystemStore @ 0x140A5972C (BcdSetSystemStore.c)
 *     BiCreateEfiEntry @ 0x140A5B13C (BiCreateEfiEntry.c)
 * Callees:
 *     BiSanitizeHandle @ 0x1402FDDE8 (BiSanitizeHandle.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     BiZwSetValueKey @ 0x14039038C (BiZwSetValueKey.c)
 *     BiOpenKey @ 0x14082E7AC (BiOpenKey.c)
 *     BiCloseKey @ 0x14082E938 (BiCloseKey.c)
 */

__int64 __fastcall BiSetRegistryValue(__int64 a1, const WCHAR *a2, __int64 a3, ULONG a4, PVOID a5, ULONG a6)
{
  unsigned int i; // esi
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  NTSTATUS v13; // ebx
  int v15[2]; // [rsp+38h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-48h] BYREF

  DestinationString = 0LL;
  for ( i = 0; ; ++i )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v11 = BiSanitizeHandle(a1);
    a1 = v11;
    *(_QWORD *)v15 = 0LL;
    if ( !a3 )
    {
      *(_QWORD *)v15 = v11;
LABEL_4:
      v13 = BiZwSetValueKey(*(void **)v15, &DestinationString, v12, a4, a5, a6);
      goto LABEL_5;
    }
    v13 = BiOpenKey(v11, a3, 131103LL, v15);
    if ( v13 >= 0 )
      goto LABEL_4;
LABEL_5:
    if ( *(_QWORD *)v15 != a1 && *(_QWORD *)v15 )
      BiCloseKey(*(_QWORD *)v15);
    if ( v13 == -1073741443 )
    {
      __debugbreak();
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v13;
}
