/*
 * XREFs of BiResolveLocateDevice @ 0x14096F658
 * Callers:
 *     BiConvertRegistryDataToElement @ 0x140784CB0 (BiConvertRegistryDataToElement.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14032EAB0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1403FA1C0 (ZwQueryAttributesFile.c)
 *     BcdGetElementData @ 0x14096F478 (BcdGetElementData.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiResolveLocateDevice(HANDLE BcdObjectHandle, _DWORD *a2)
{
  __int64 v2; // r14
  const WCHAR *v3; // r14
  WCHAR *v6; // rsi
  int v7; // eax
  ULONG v8; // edx
  unsigned int ElementData; // ebx
  WCHAR *PoolWithTag; // rax
  const WCHAR *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  ULONG BufferSize; // [rsp+20h] [rbp-49h] BYREF
  UNICODE_STRING Destination; // [rsp+28h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-31h] BYREF
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+68h] [rbp-1h] BYREF

  v2 = (unsigned int)a2[6];
  BufferSize = 0;
  v3 = (const WCHAR *)((char *)a2 + v2);
  memset(&FileInformation, 0, sizeof(FileInformation));
  v6 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Destination = 0LL;
  if ( *(_DWORD *)v3 != 2 )
    goto LABEL_16;
  v7 = a2[5];
  if ( !v7 )
  {
    v8 = a2[7];
    if ( (v8 & 0xF000000) == 0x2000000 )
    {
      ElementData = BcdGetElementData(BcdObjectHandle, v8, 0LL, &BufferSize);
      if ( ElementData != -1073741789 )
        goto LABEL_17;
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, BufferSize, 0x4B444342u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
      {
        ElementData = -1073741670;
        goto LABEL_17;
      }
      BcdGetElementData(BcdObjectHandle, a2[7], PoolWithTag, &BufferSize);
      v11 = v6;
      goto LABEL_10;
    }
LABEL_16:
    ElementData = -1073741637;
    goto LABEL_17;
  }
  if ( v7 != 1 )
    goto LABEL_16;
  v11 = (const WCHAR *)(a2 + 8);
LABEL_10:
  v12 = -1LL;
  v13 = -1LL;
  do
    ++v13;
  while ( v3[v13 + 10] );
  do
    ++v12;
  while ( v11[v12] );
  Destination.MaximumLength = 2 * (v12 + v13 + 1);
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)(2 * (v13 + v12) + 2), 0x4B444342u);
  if ( !Destination.Buffer )
  {
    ElementData = -1073741670;
    goto LABEL_19;
  }
  RtlAppendUnicodeToString(&Destination, v3 + 10);
  RtlAppendUnicodeToString(&Destination, v11);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ElementData = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
LABEL_17:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x4B444342u);
LABEL_19:
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  return ElementData;
}
