/*
 * XREFs of ?ndisCreateFilterDriverRegistry@@YAHPEBU_UNICODE_STRING@@E@Z @ 0x1C002F9D0
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C002F530 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0026070 (WPP_RECORDER_SF_dd_ea_1C0026070.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     ?ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z @ 0x1C006A06C (-ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z.c)
 */

__int64 __fastcall ndisCreateFilterDriverRegistry(const struct _UNICODE_STRING *a1, unsigned __int8 a2)
{
  int v2; // r14d
  unsigned int v4; // ebx
  wchar_t *PoolWithTag; // rax
  int v6; // edx
  NTSTATUS RegistryValues; // esi
  NTSTATUS v9; // eax
  int v10; // ecx
  __int64 v11; // [rsp+30h] [rbp-59h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+50h] [rbp-39h] BYREF
  int ValueData; // [rsp+100h] [rbp+77h] BYREF

  v2 = a2;
  if ( RtlIsStateSeparationEnabled() )
    return 0LL;
  DestinationString.Length = 0;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v4 = 0;
  DestinationString.Buffer = 0LL;
  ValueData = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x4Bu,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      a1);
  DestinationString.MaximumLength = ndisParameterStr.Length + a1->Length + 2;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, DestinationString.MaximumLength, 0x2020444Eu);
  DestinationString.Buffer = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, DestinationString.MaximumLength);
    RtlCopyUnicodeString(&DestinationString, a1);
    RtlAppendUnicodeStringToString(&DestinationString, &ndisParameterStr);
    if ( RtlCheckRegistryKey(1u, (PWSTR)DestinationString.Buffer)
      && RtlCreateRegistryKey(1u, (PWSTR)DestinationString.Buffer) )
    {
      v4 = -1073741823;
    }
    else
    {
      memset(QueryTable, 0, sizeof(QueryTable));
      QueryTable[1].Name = 0LL;
      QueryTable[0].Name = (wchar_t *)L"DefaultFilterSettings";
      QueryTable[0].EntryContext = &ValueData;
      QueryTable[0].Flags = (_BYTE)v2 != 0 ? 292 : 36;
      QueryTable[0].DefaultType = (_BYTE)v2 != 0 ? 0x4000000 : 0;
      RegistryValues = RtlQueryRegistryValuesEx(1u, (PCWSTR)DestinationString.Buffer, QueryTable, 0LL, 0LL);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v6,
          1u,
          0x4Cu,
          (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
          RegistryValues,
          v2);
      if ( RegistryValues )
      {
        if ( RegistryValues == -1073741772 )
        {
          v4 = ndisSetAllFilterDefaultParameters(a1, &DestinationString, &ndisFilterDriverParamsStr, v2);
          if ( !v4 )
          {
            ValueData = 1;
            v9 = RtlWriteRegistryValue(
                   1u,
                   (PCWSTR)DestinationString.Buffer,
                   L"DefaultFilterSettings",
                   4u,
                   &ValueData,
                   4u);
            v10 = 0;
            if ( v9 )
              v10 = -1073741823;
            v4 = v10;
          }
        }
        else
        {
          v4 = -1073741823;
        }
      }
    }
    if ( DestinationString.Buffer )
      ExFreePoolWithTag(DestinationString.Buffer, 0);
  }
  else
  {
    v4 = -1073741670;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = v4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x4Du,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      (char)a1,
      v11);
  }
  return v4;
}
