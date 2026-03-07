__int64 __fastcall ScExtractDeviceStrings(
        struct _STORAGE_DEVICE_DESCRIPTOR *a1,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        struct _UNICODE_STRING *a5)
{
  struct _UNICODE_STRING **v5; // rsi
  unsigned int *v6; // rbx
  ULONG Size; // r14d
  unsigned int v9; // r14d
  ULONG SerialNumberOffset; // eax
  int v11; // ecx
  unsigned int v12; // edi
  __int64 v13; // rax
  _DWORD v15[4]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v16[4]; // [rsp+30h] [rbp-58h] BYREF

  v5 = (struct _UNICODE_STRING **)v16;
  v6 = v15;
  v15[0] = a1->VendorIdOffset;
  v15[1] = a1->ProductIdOffset;
  Size = a1->Size;
  v15[2] = a1->ProductRevisionOffset;
  v9 = Size - 1;
  SerialNumberOffset = a1->SerialNumberOffset;
  v11 = 0;
  v12 = 0;
  v15[3] = SerialNumberOffset;
  v16[0] = a2;
  v16[1] = a3;
  v16[2] = a4;
  v16[3] = a5;
  do
  {
    v13 = *v6;
    if ( (unsigned int)v13 >= 0x24 && (unsigned int)v13 <= v9 )
    {
      v11 = ScAnsiToUnicodeString((char *)a1 + v13, *v5);
      if ( v11 < 0 )
        break;
    }
    ++v12;
    ++v6;
    ++v5;
  }
  while ( v12 < 4 );
  return (unsigned int)v11;
}
