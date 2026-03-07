NTSTATUS __fastcall ACPIRegDumpAcpiTable(PCSZ SourceString, PVOID Data, ULONG DataSize, __int64 a4)
{
  NTSTATUS result; // eax
  HANDLE v9; // rbx
  HANDLE v10; // rbx
  int v11; // r9d
  HANDLE v12; // [rsp+20h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+28h] [rbp-31h] BYREF
  char pszDest[32]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v15; // [rsp+50h] [rbp-9h]
  __int128 v16; // [rsp+60h] [rbp+7h]
  __int128 v17; // [rsp+70h] [rbp+17h]

  KeyHandle = 0LL;
  v12 = 0LL;
  strcpy(pszDest, "\\Registry\\Machine\\Hardware\\ACPI");
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  result = OSCreateHandle(pszDest, 0LL, &v12);
  if ( result >= 0 )
  {
    if ( (int)OSCreateHandle(SourceString, v12, &KeyHandle) >= 0 )
    {
      if ( !a4 )
        goto LABEL_7;
      OSCloseHandle(v12);
      v9 = KeyHandle;
      v12 = KeyHandle;
      ACPIRegLocalCopyString(pszDest, a4 + 10, 6u);
      if ( (int)OSCreateHandle(pszDest, v9, &KeyHandle) >= 0 )
      {
        OSCloseHandle(v12);
        v10 = KeyHandle;
        v12 = KeyHandle;
        ACPIRegLocalCopyString(pszDest, a4 + 16, 8u);
        if ( (int)OSCreateHandle(pszDest, v10, &KeyHandle) >= 0 )
        {
          OSCloseHandle(v12);
          v11 = *(_DWORD *)(a4 + 24);
          v12 = KeyHandle;
          RtlStringCchPrintfA(pszDest, 0x50uLL, "%.8x", v11);
          if ( (int)OSCreateHandle(pszDest, v12, &KeyHandle) >= 0 )
          {
LABEL_7:
            OSWriteRegValue("00000000", KeyHandle, Data, DataSize);
            OSCloseHandle(KeyHandle);
          }
        }
      }
    }
    return OSCloseHandle(v12);
  }
  return result;
}
