/*
 * XREFs of IopCrashDumpPolicyChangeWnfCallback @ 0x140943B50
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x140212E84 (_tlgKeywordOn.c)
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x140257780 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     CmIsStateSeparationEnabled @ 0x140367128 (CmIsStateSeparationEnabled.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwCreateKey @ 0x14041AA40 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041B2A0 (ZwSetValueKey.c)
 *     IoConfigureCrashDump @ 0x14054FA04 (IoConfigureCrashDump.c)
 *     IopDumpIsTracingEnabled @ 0x1405528E8 (IopDumpIsTracingEnabled.c)
 *     IopInitializeDumpPolicySettings @ 0x140861414 (IopInitializeDumpPolicySettings.c)
 */

__int64 __fastcall IopCrashDumpPolicyChangeWnfCallback(__int64 a1, _QWORD *a2)
{
  bool v2; // zf
  char v4; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v5; // [rsp+44h] [rbp-BCh] BYREF
  int Data; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v7; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int *v13; // [rsp+B8h] [rbp-48h]
  __int64 v14; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v15[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR *p_UserData; // [rsp+F0h] [rbp-10h]
  __int64 v17; // [rsp+F8h] [rbp-8h]
  int *v18; // [rsp+100h] [rbp+0h]
  __int64 v19; // [rsp+108h] [rbp+8h]
  char *v20; // [rsp+110h] [rbp+10h]
  __int64 v21; // [rsp+118h] [rbp+18h]

  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  v2 = *a2 == WNF_DUMP_ALLOW_CRASHDUMP_POLICY_VALUE_CHANGED;
  DestinationString = 0LL;
  KeyHandle = 0LL;
  ValueName = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( v2 )
  {
    IopInitializeDumpPolicySettings(0);
    Data = (unsigned __int8)AllowCrashDump;
    if ( CmIsStateSeparationEnabled() )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\OSBOOT\\System\\CurrentControlSet\\Control\\CrashControl");
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"AllowCrashDump");
        ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
      }
    }
    v5 = IoConfigureCrashDump(AllowCrashDump != 0, 0);
    if ( IopDumpIsTracingEnabled() )
    {
      UserData.Ptr = (ULONGLONG)&Data;
      *(_QWORD *)&UserData.Size = 4LL;
      v13 = &v5;
      v14 = 4LL;
      EtwWrite(IopDumpEtwRegHandle, &DUMP_EVENT_CRASHDUMP_POLICY_VALUE_CHANGED, 0LL, 2u, &UserData);
    }
    if ( (unsigned int)dword_140C062A8 > 5 && tlgKeywordOn((__int64)&dword_140C062A8, 0x400000000000LL) )
    {
      UserData.Ptr = 0x1000000LL;
      p_UserData = &UserData;
      v7 = v5;
      v17 = 8LL;
      v18 = (int *)&v7;
      v4 = AllowCrashDump;
      v20 = &v4;
      v19 = 4LL;
      v21 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C062A8,
        (unsigned __int8 *)&word_14002B7B6,
        0LL,
        0LL,
        5u,
        v15);
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
    return v5;
  }
  else
  {
    if ( IopDumpIsTracingEnabled() )
    {
      UserData.Ptr = (ULONGLONG)"Invalid notification state name";
      *(_QWORD *)&UserData.Size = 31LL;
      EtwWrite(IopDumpEtwRegHandle, &DUMP_EVENT_CRASHDUMP_POLICY_OPERATION_FAILURE, 0LL, 1u, &UserData);
    }
    if ( (unsigned int)dword_140C062A8 > 5 && tlgKeywordOn((__int64)&dword_140C062A8, 0x400000000000LL) )
    {
      UserData.Ptr = 0x1000000LL;
      p_UserData = &UserData;
      v17 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C062A8, (unsigned __int8 *)byte_14002B811, 0LL, 0LL, 3u, v15);
    }
    return 3221225485LL;
  }
}
