void __fastcall EtwpEnumerateAutologgerPath(PCWSTR Path, const WCHAR *a2, RTL_AVL_TABLE *a3)
{
  wchar_t *v5; // rdi
  __int64 v6; // rbx
  ULONG v7; // r13d
  PCWSTR v8; // rax
  size_t v9; // r15
  wchar_t *Pool2; // rbx
  NTSTATUS v11; // esi
  RTL_AVL_TABLE *v12; // rcx
  NTSTATUS v13; // ecx
  const WCHAR *v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  BOOLEAN NewElement[4]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  ULONG ValueData; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  PRTL_AVL_TABLE Table; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD KeyInformation[72]; // [rsp+90h] [rbp-70h] BYREF

  Table = a3;
  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  NewElement[0] = 0;
  v5 = 0LL;
  DestinationString = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v6 = -1LL;
  v7 = 0;
  if ( a2 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a2[v15] );
    v16 = -1LL;
    do
      ++v16;
    while ( Path[v16] );
    v8 = Path;
    if ( v16 <= v15 )
      v8 = a2;
  }
  else
  {
    v8 = Path;
  }
  do
    ++v6;
  while ( v8[v6] );
  RtlInitUnicodeString(&DestinationString, Path);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v9 = (unsigned int)(2 * v6 + 260);
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, v9, 1953985605LL);
    if ( Pool2 )
    {
      if ( !a2 || (v5 = (wchar_t *)ExAllocatePool2(256LL, v9, 1953985605LL)) != 0LL )
      {
        while ( 1 )
        {
          v11 = ZwEnumerateKey(KeyHandle, v7, KeyBasicInformation, KeyInformation, 0x11Eu, &ResultLength);
          if ( v11 < 0 )
          {
            v13 = v11;
            if ( v11 == -2147483622 )
              v13 = 0;
            ValueData = RtlNtStatusToDosError(v13);
            v14 = a2;
            if ( !a2 )
              v14 = Path;
            RtlWriteRegistryValue(0, v14, L"Status", 4u, &ValueData, 4u);
            if ( v11 != -2147483643 && v11 != -1073741789 )
              break;
          }
          else if ( KeyInformation[3] < 0x102u )
          {
            v12 = Table;
            *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
            RtlInsertElementGenericTableAvl(v12, &KeyInformation[4], KeyInformation[3] + 2, NewElement);
            if ( NewElement[0] )
            {
              if ( !RtlStringCbPrintfW(Pool2, v9, L"%ws\\%ws", Path, &KeyInformation[4])
                && (!a2 || !RtlStringCbPrintfW(v5, v9, L"%ws\\%ws", a2, &KeyInformation[4])) )
              {
                EtwStartAutoLogger((PCWSTR)&KeyInformation[4]);
              }
            }
          }
          ++v7;
        }
      }
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
  }
}
