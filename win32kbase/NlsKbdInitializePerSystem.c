void __fastcall NlsKbdInitializePerSystem(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  wchar_t **v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  UNICODE_STRING String1; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING v33; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v34; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v36; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING v37; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING String2; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING v39; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v40; // [rsp+B0h] [rbp-50h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v42; // [rsp+F8h] [rbp-8h]
  int v43; // [rsp+100h] [rbp+0h]
  const wchar_t *v44; // [rsp+108h] [rbp+8h]
  UNICODE_STRING *v45; // [rsp+110h] [rbp+10h]
  int v46; // [rsp+118h] [rbp+18h]
  struct _UNICODE_STRING *v47; // [rsp+120h] [rbp+20h]
  int v48; // [rsp+128h] [rbp+28h]
  __int64 v49; // [rsp+130h] [rbp+30h]
  int v50; // [rsp+138h] [rbp+38h]
  const wchar_t *v51; // [rsp+140h] [rbp+40h]
  UNICODE_STRING *v52; // [rsp+148h] [rbp+48h]
  int v53; // [rsp+150h] [rbp+50h]
  struct _UNICODE_STRING *v54; // [rsp+158h] [rbp+58h]
  int v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]
  int v57; // [rsp+170h] [rbp+70h]
  __int64 v58; // [rsp+178h] [rbp+78h]

  DestinationString = 0LL;
  String2 = 0LL;
  v36 = 0LL;
  v39 = 0LL;
  v37 = 0LL;
  v40 = 0LL;
  String1 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( *(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 12568) == 3 )
  {
    v12 = SGDGetUserSessionState(v5, v4, v6, v7);
    v5 = &gapulCvt_VK_84;
    *(_QWORD *)(v12 + 13760) = &gapulCvt_VK_84;
  }
  if ( *(_BYTE *)(SGDGetUserSessionState(v5, v4, v6, v7) + 12568) == 7
    && *(_BYTE *)(SGDGetUserSessionState(v9, v8, v10, v11) + 12569) == 3 )
  {
    *(_QWORD *)(SGDGetUserSessionState(v14, v13, v15, v16) + 13760) = &gapulCvt_VK_IBM02;
  }
  NlsSetKeyStateToggle(0xF0u);
  NlsSetKeyStateToggle(0xF3u);
  NlsSetKeyStateToggle(0xF6u);
  NlsSetKeyStateToggle(0xFBu);
  RtlInitUnicodeString(&DestinationString, L"end");
  RtlInitUnicodeString(&String2, L"help");
  RtlInitUnicodeString(&v36, L"yes");
  RtlInitUnicodeString(&v39, L"no");
  RtlInitUnicodeString(&v37, L"home");
  RtlInitUnicodeString(&v40, L"clear");
  RtlInitUnicodeString(&String1, 0LL);
  RtlInitUnicodeString(&v33, 0LL);
  RtlInitUnicodeString(&v34, 0LL);
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultLength = 0;
  v42 = 0LL;
  v48 = 0;
  v49 = 0LL;
  v55 = 0;
  v56 = 0LL;
  v57 = 0;
  v58 = 0LL;
  QueryTable.Name = L"helpkey";
  QueryTable.EntryContext = &String1;
  QueryTable.DefaultData = &DestinationString;
  v44 = L"KanaHelpKey";
  v45 = &v33;
  v47 = &v36;
  v51 = L"clrkey";
  v52 = &v34;
  QueryTable.Flags = 32;
  QueryTable.DefaultType = 16777217;
  v43 = 32;
  v46 = 16777217;
  v50 = 32;
  v53 = 16777217;
  v54 = &v37;
  if ( RtlQueryRegistryValues(3u, L"WOW\\keyboard", &QueryTable, 0LL, 0LL) >= 0 )
  {
    if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
    {
      v21 = SGDGetUserSessionState(v18, v17, v19, v20);
      *(_BYTE *)(v21 + 13989) &= ~2u;
    }
    if ( RtlEqualUnicodeString(&v33, &v39, 1u) )
    {
      v26 = SGDGetUserSessionState(v23, v22, v24, v25);
      *(_BYTE *)(v26 + 13989) &= ~1u;
    }
    if ( RtlEqualUnicodeString(&v34, &v40, 1u) )
    {
      v31 = SGDGetUserSessionState(v28, v27, v29, v30);
      *(_BYTE *)(v31 + 13989) &= ~4u;
    }
    ExFreePoolWithTag(String1.Buffer, 0);
    ExFreePoolWithTag(v33.Buffer, 0);
    ExFreePoolWithTag(v34.Buffer, 0);
  }
}
