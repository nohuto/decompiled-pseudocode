/*
 * XREFs of IopLiveDumpPolicyChangeWnfCallback @ 0x14094BB10
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CmIsStateSeparationEnabled @ 0x1402FBD38 (CmIsStateSeparationEnabled.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     IopLiveDumpIsTracingEnabled @ 0x140557990 (IopLiveDumpIsTracingEnabled.c)
 *     IopInitializeDumpPolicySettings @ 0x14085D5A4 (IopInitializeDumpPolicySettings.c)
 */

__int64 __fastcall IopLiveDumpPolicyChangeWnfCallback(__int64 a1, _QWORD *a2)
{
  bool v2; // zf
  char v4; // [rsp+40h] [rbp-C0h] BYREF
  NTSTATUS v5; // [rsp+44h] [rbp-BCh] BYREF
  int Data; // [rsp+48h] [rbp-B8h] BYREF
  NTSTATUS v7; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  NTSTATUS *v14; // [rsp+C0h] [rbp-40h]
  __int64 v15; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR v16[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v17; // [rsp+F0h] [rbp-10h]
  __int64 v18; // [rsp+F8h] [rbp-8h]
  NTSTATUS *v19; // [rsp+100h] [rbp+0h]
  __int64 v20; // [rsp+108h] [rbp+8h]
  char *v21; // [rsp+110h] [rbp+10h]
  __int64 v22; // [rsp+118h] [rbp+18h]

  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v2 = *a2 == WNF_DUMP_ALLOW_LIVEDUMP_POLICY_VALUE_CHANGED;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  ValueName = 0LL;
  v5 = 0;
  memset(&ObjectAttributes, 0, 44);
  if ( v2 )
  {
    IopInitializeDumpPolicySettings(0);
    Data = (unsigned __int8)AllowLiveDump;
    if ( CmIsStateSeparationEnabled() )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\OSBOOT\\System\\CurrentControlSet\\Control\\LiveDump");
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( v5 >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"AllowLiveDump");
        v5 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
      }
    }
    if ( IopLiveDumpIsTracingEnabled() )
    {
      UserData.Ptr = (ULONGLONG)&Data;
      *(_QWORD *)&UserData.Size = 4LL;
      v14 = &v5;
      v15 = 4LL;
      EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_LIVEDUMP_POLICY_VALUE_CHANGED, 0LL, 2u, &UserData);
    }
    if ( (unsigned int)dword_140C06280 > 5 && tlgKeywordOn((__int64)&dword_140C06280, 0x400000000000LL) )
    {
      v9 = 0x1000000LL;
      v17 = &v9;
      v7 = v5;
      v18 = 8LL;
      v19 = &v7;
      v4 = AllowLiveDump;
      v21 = &v4;
      v20 = 4LL;
      v22 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C06280, (unsigned __int8 *)byte_14002B761, 0LL, 0LL, 5u, v16);
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
    return (unsigned int)v5;
  }
  else
  {
    if ( IopLiveDumpIsTracingEnabled() )
    {
      UserData.Ptr = (ULONGLONG)"Invalid notification state name";
      *(_QWORD *)&UserData.Size = 31LL;
      EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_LIVEDUMP_POLICY_OPERATION_FAILURE, 0LL, 2u, &UserData);
    }
    if ( (unsigned int)dword_140C06280 > 5 && tlgKeywordOn((__int64)&dword_140C06280, 0x400000000000LL) )
    {
      v9 = 0x1000000LL;
      v17 = &v9;
      v18 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C06280,
        (unsigned __int8 *)&dword_14002B724,
        0LL,
        0LL,
        3u,
        v16);
    }
    return 3221225485LL;
  }
}
