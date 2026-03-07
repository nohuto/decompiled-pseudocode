__int64 __fastcall DisplayDiagnostics::LidStateReliabilityChangeCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        _BYTE *Context)
{
  __int64 v7; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d

  if ( ValueLength < 4 )
  {
    WdLogSingleEntry1(1LL, 63LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v10,
          v9,
          v11,
          0,
          2,
          -1,
          (__int64)L"ValueLength >= sizeof(LONG)",
          63LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *Value > 1u )
  {
    WdLogSingleEntry1(1LL, 64LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v13,
          v12,
          v14,
          0,
          2,
          -1,
          (__int64)L"(*(LONG*)pValue == 0) || (*(LONG*)pValue == 1)",
          64LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v7 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_LIDSWITCH_STATE_RELIABILITY.Data1 )
    v7 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_LIDSWITCH_STATE_RELIABILITY.Data4;
  if ( !v7 )
    Context[152] = *Value != 0;
  return 0LL;
}
