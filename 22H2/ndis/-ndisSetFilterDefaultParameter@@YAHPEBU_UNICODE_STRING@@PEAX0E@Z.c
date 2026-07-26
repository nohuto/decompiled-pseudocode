/*
 * XREFs of ?ndisSetFilterDefaultParameter@@YAHPEBU_UNICODE_STRING@@PEAX0E@Z @ 0x1C006A37C
 * Callers:
 *     ?ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z @ 0x1C006A06C (-ndisSetAllFilterDefaultParameters@@YAHPEBU_UNICODE_STRING@@00E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C000E1D0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0026070 (WPP_RECORDER_SF_dd_ea_1C0026070.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

__int64 __fastcall ndisSetFilterDefaultParameter(
        const struct _UNICODE_STRING *a1,
        const WCHAR *a2,
        const struct _UNICODE_STRING *a3,
        unsigned __int8 a4)
{
  int v5; // r15d
  unsigned int v7; // edi
  char v9; // si
  int v10; // edx
  NTSTATUS RegistryValues; // ebx
  wchar_t *Buffer; // rcx
  unsigned int v13; // ebx
  const WCHAR *v14; // rdx
  NTSTATUS v15; // eax
  int v16; // ecx
  char v18[8]; // [rsp+30h] [rbp-D0h]
  ULONG Value; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING String; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING String2; // [rsp+78h] [rbp-88h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[5]; // [rsp+90h] [rbp-70h] BYREF

  v5 = a4;
  v7 = 0;
  *(_QWORD *)&String.Length = 0LL;
  String.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v9 = 1;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  Value = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x54u,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].Name = a3->Buffer;
  QueryTable[1].QueryRoutine = 0LL;
  QueryTable[2].QueryRoutine = 0LL;
  QueryTable[3].QueryRoutine = 0LL;
  QueryTable[1].Name = L"Optional";
  QueryTable[4].Name = 0LL;
  QueryTable[1].Flags = (_BYTE)v5 != 0 ? 288 : 32;
  QueryTable[1].EntryContext = &String;
  QueryTable[2].Flags = QueryTable[1].Flags;
  QueryTable[2].Name = L"Default";
  QueryTable[3].Flags = QueryTable[1].Flags;
  QueryTable[2].EntryContext = &DestinationString;
  QueryTable[0].Flags = 1;
  QueryTable[3].Name = L"Type";
  QueryTable[3].EntryContext = &String2;
  QueryTable[1].DefaultType = (_BYTE)v5 != 0 ? 0x1000000 : 0;
  QueryTable[2].DefaultType = QueryTable[1].DefaultType;
  QueryTable[3].DefaultType = QueryTable[1].DefaultType;
  RegistryValues = RtlQueryRegistryValuesEx(0x40000000u, a2, QueryTable, 0LL, 0LL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v18 = v5;
    WPP_RECORDER_SF_dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      1u,
      0x55u,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      RegistryValues,
      *(_QWORD *)v18);
  }
  if ( RegistryValues )
  {
    v7 = -1073741823;
  }
  else
  {
    if ( String.Buffer )
      RtlUnicodeStringToInteger(&String, 0xAu, &Value);
    if ( !Value )
    {
      Buffer = DestinationString.Buffer;
      if ( !DestinationString.Buffer )
      {
        if ( !String2.Buffer )
          goto LABEL_17;
        v13 = 0;
        while ( RtlCompareUnicodeString((PCUNICODE_STRING)((char *)&unk_1C00CA220 + 24 * v13), &String2, 1u) )
        {
          if ( ++v13 >= 6 )
            goto LABEL_17;
        }
        v14 = (const WCHAR *)&unk_1C00CA700;
        if ( (unsigned int)(*((_DWORD *)&unk_1C00CA220 + 6 * v13 + 4) - 4) > 1 )
LABEL_17:
          v14 = L"0";
        RtlInitUnicodeString(&DestinationString, v14);
        Buffer = DestinationString.Buffer;
        v9 = 0;
      }
      v15 = RtlWriteRegistryValue(1u, (PCWSTR)a1->Buffer, (PCWSTR)a3->Buffer, 1u, Buffer, DestinationString.Length + 2);
      v16 = 0;
      if ( v15 )
        v16 = -1073741823;
      v7 = v16;
    }
  }
  if ( String.Buffer )
    ExFreePoolWithTag(String.Buffer, 0);
  if ( DestinationString.Buffer && v9 )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( String2.Buffer )
    ExFreePoolWithTag(String2.Buffer, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      1u,
      0x56u,
      (struct _GUID *)&WPP_125e9d697bc337c6a80f18e042a909af_Traceguids,
      (char)a1,
      (char)a2,
      (char)a3,
      v7);
  return v7;
}
