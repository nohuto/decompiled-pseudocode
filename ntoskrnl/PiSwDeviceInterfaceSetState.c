__int64 __fastcall PiSwDeviceInterfaceSetState(__int64 a1, __int64 a2, char a3)
{
  WCHAR *v3; // rbx
  __int64 v5; // rax
  int v6; // edi
  __int64 v9; // rax
  int PWSTR; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  v5 = *(_QWORD *)(a1 + 120);
  v6 = 0;
  if ( !v5 || (v9 = *(_QWORD *)(v5 + 64)) == 0 || (*(_DWORD *)(v9 + 8) & 1) == 0 || *(_BYTE *)(a2 + 36) == a3 )
  {
LABEL_10:
    *(_BYTE *)(a2 + 36) = a3;
    goto LABEL_11;
  }
  PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 16), 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)&SourceString);
  v3 = (WCHAR *)SourceString;
  v6 = PWSTR;
  if ( PWSTR >= 0 )
  {
    v6 = CmSetDeviceInterfacePathFormat(v11, (__int64 *)SourceString, 1);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, v3);
      v6 = IoSetDeviceInterfaceState(&DestinationString, a3);
      if ( v6 >= 0 )
      {
        if ( (byte_140C0E10C & 8) != 0 )
          McTemplateK0zzzt_EtwWriteTransfer(
            v13,
            v12,
            v14,
            *(const wchar_t **)(a1 + 8),
            *(const wchar_t **)(a1 + 16),
            v3,
            a3);
        goto LABEL_10;
      }
    }
  }
LABEL_11:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x57706E50u);
  return (unsigned int)v6;
}
