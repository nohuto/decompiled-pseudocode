/*
 * XREFs of ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x1C01168F4
 * Callers:
 *     NdisLWMRegisterMiniportDriver @ 0x1C0061490 (NdisLWMRegisterMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008B64 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x1C010A3B8 (--$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICO.c)
 */

__int64 __fastcall ndisLWMGetServiceKeyFromServiceName(const UNICODE_STRING *a1, void **a2)
{
  WCHAR *Buffer; // rdx
  NTSTATUS v5; // eax
  unsigned int v6; // edi
  int Length; // ecx
  unsigned __int16 v8; // di
  PUNICODE_STRING v9; // rbx
  _UNICODE_STRING *v10; // rcx
  NTSTATUS appended; // eax
  unsigned __int16 v12; // r9
  void *v13; // rcx
  char v15[8]; // [rsp+28h] [rbp-91h]
  UNICODE_STRING Source; // [rsp+40h] [rbp-79h] BYREF
  PUNICODE_STRING Destination[2]; // [rsp+50h] [rbp-69h] BYREF
  _OWORD v18[6]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+7h]
  WCHAR v20; // [rsp+C8h] [rbp+Fh]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x79u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      a1);
  if ( (unsigned __int16)(a1->Length & 0xFFFE) >= (unsigned __int16)(a1->MaximumLength & 0xFFFE)
    || (Buffer = (WCHAR *)a1->Buffer, Buffer[(unsigned __int64)a1->Length >> 1]) )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x7Au,
        (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids);
    v6 = -1073741811;
    goto LABEL_26;
  }
  v5 = RtlCheckRegistryKey(1u, Buffer);
  v6 = v5;
  if ( v5 >= 0 )
  {
    Length = a1->Length;
    v18[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\";
    v20 = aRegistryMachin[52];
    v18[1] = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Services\\";
    v18[2] = *(_OWORD *)L"e\\System\\CurrentControlSet\\Services\\";
    Source.Buffer = (wchar_t *)v18;
    v8 = Length + 106;
    v18[3] = *(_OWORD *)L"\\CurrentControlSet\\Services\\";
    v18[4] = *(_OWORD *)L"ControlSet\\Services\\";
    v18[5] = *(_OWORD *)L"et\\Services\\";
    v19 = *(_QWORD *)L"ces\\";
    *(_QWORD *)&Source.Length = 6946920LL;
    if ( (unsigned int)(Length + 122) < 0x10
      || (MakeSizedPoolPtr<_UNICODE_STRING>(Destination, 104LL, (unsigned int)(Length + 122)),
          (v9 = Destination[0]) == 0LL) )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0x7Cu,
          (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids);
      v6 = -1073741670;
      goto LABEL_26;
    }
    v10 = Destination[0];
    Destination[0]->Buffer = &Destination[0][1].Length;
    v9->Length = 0;
    v9->MaximumLength = v8;
    appended = RtlAppendUnicodeStringToString(v10, &Source);
    v6 = appended;
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeStringToString(v9, a1);
      v6 = appended;
      if ( appended >= 0 )
      {
        v13 = *a2;
        *a2 = v9;
        if ( v13 )
          ExFreePoolWithTag(v13, 0);
        goto LABEL_26;
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
        goto LABEL_14;
      v12 = 126;
    }
    else
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
      {
LABEL_14:
        ExFreePoolWithTag(v9, 0);
        goto LABEL_26;
      }
      v12 = 125;
    }
    *(_DWORD *)v15 = appended;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      v12,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      *(_QWORD *)v15);
    goto LABEL_14;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    return v6;
  *(_DWORD *)v15 = v5;
  WPP_RECORDER_SF_d(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    2u,
    1u,
    0x7Bu,
    (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
    *(_QWORD *)v15);
LABEL_26:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x7Fu,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
      (char)a1,
      v6);
  return v6;
}
