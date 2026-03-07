__int64 __fastcall DXG_REGISTRY_KEY_LIST::AppendSubKeys(
        DXG_REGISTRY_KEY_LIST *this,
        void *a2,
        struct _KEY_FULL_INFORMATION *a3,
        struct _UNICODE_STRING *a4)
{
  ULONG MaxNameLen; // eax
  ULONG v7; // ebx
  ULONG Length; // r15d
  __int64 v9; // rdi
  wchar_t *v10; // rsi
  NTSTATUS v11; // eax
  int inserted; // eax
  const wchar_t *v13; // r9
  ULONG ResultLength[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v16; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v17; // [rsp+68h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h]
  struct _UNICODE_STRING *v19; // [rsp+80h] [rbp-80h]
  char v20; // [rsp+90h] [rbp-70h] BYREF

  MaxNameLen = a3->MaxNameLen;
  KeyHandle = a2;
  v7 = 0;
  v19 = a4;
  Length = 2 * MaxNameLen + 24;
  LODWORD(v9) = 0;
  v10 = (wchar_t *)operator new[](Length, 0x4B677844u, 256LL);
  v16.Buffer = (wchar_t *)&v20;
  wcscpy((wchar_t *)ResultLength, L"\\");
  v17.Buffer = (wchar_t *)ResultLength;
  *(_QWORD *)&v16.Length = 34078720LL;
  *(_QWORD *)&v17.Length = 262146LL;
  if ( a3->SubKeys )
  {
    while ( 1 )
    {
      memset(v10, 0, Length);
      ResultLength[1] = 0;
      v11 = ZwEnumerateKey(KeyHandle, v7, KeyBasicInformation, v10, Length, &ResultLength[1]);
      v9 = v11;
      if ( v11 < 0 )
        break;
      RtlUnicodeStringCopy(&v16, v19);
      RtlUnicodeStringCat(&v16, &v17);
      RtlUnicodeStringCatString(&v16, v10 + 8);
      inserted = DXG_REGISTRY_KEY_LIST::InsertTail(this, &v16);
      v9 = inserted;
      if ( inserted < 0 )
      {
        WdLogSingleEntry1(2LL, inserted);
        v13 = L"Failed to insert SubKeyRegistryPath into list for AppendSubKeys (status = 0x%I64x).";
        goto LABEL_8;
      }
      if ( ++v7 >= a3->SubKeys )
        goto LABEL_9;
    }
    WdLogSingleEntry1(2LL, v11);
    v13 = L"Failed to Enumerate Subkeys for AppendSubKeys (status = 0x%I64x).";
LABEL_8:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, v9, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_9:
  operator delete(v10);
  return (unsigned int)v9;
}
