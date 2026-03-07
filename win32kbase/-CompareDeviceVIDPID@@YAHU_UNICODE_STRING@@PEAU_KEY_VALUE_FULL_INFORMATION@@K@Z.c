__int64 __fastcall CompareDeviceVIDPID(struct _UNICODE_STRING *a1, struct _KEY_VALUE_FULL_INFORMATION *a2, int a3)
{
  unsigned int v3; // edi
  WCHAR *Name; // rsi
  WCHAR *v6; // r9
  ULONG NameLength; // ecx
  int v8; // r10d
  WCHAR v9; // dx
  unsigned int v10; // eax
  ULONG v11; // ecx
  int v12; // r8d
  unsigned int v13; // ecx

  v3 = 0;
  Name = a2->Name;
  v6 = a2->Name;
  NameLength = a2->NameLength;
  v8 = 0;
  v9 = a2->Name[0];
  v10 = 0;
  v11 = NameLength >> 1;
  v12 = a3 + 1;
  while ( v9 )
  {
    if ( v10 > v11 )
      break;
    if ( v10 >= 0x45 )
      break;
    if ( v9 == 38 && ++v8 == v12 )
      break;
    ++v10;
    v9 = *++v6;
  }
  v13 = 2 * v10;
  if ( 2 * v10 >= 0x2A && a1->Length >= v13 && RtlCompareMemory(a1->Buffer, Name, v13) == v13 )
    return 1;
  return v3;
}
