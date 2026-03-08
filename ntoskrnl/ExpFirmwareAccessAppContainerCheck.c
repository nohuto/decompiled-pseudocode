/*
 * XREFs of ExpFirmwareAccessAppContainerCheck @ 0x1409F9A04
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x14075CF50 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x140780E98 (ExpGetSystemFirmwareTableInformation.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1409FD460 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x140204B90 (RtlCheckTokenMembershipEx.c)
 *     RtlSubAuthoritySid @ 0x1402BE740 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x140412730 (ZwQueryInformationToken.c)
 *     RtlInitializeSid @ 0x14068E3A0 (RtlInitializeSid.c)
 *     RtlRunOnceExecuteOnce @ 0x1407A2BE0 (RtlRunOnceExecuteOnce.c)
 *     ExpCapabilityCheck @ 0x1409F8C54 (ExpCapabilityCheck.c)
 */

bool __fastcall ExpFirmwareAccessAppContainerCheck(int a1)
{
  int v1; // ecx
  _BYTE v3[4]; // [rsp+30h] [rbp-D0h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-CCh] BYREF
  ULONG ReturnLength; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE TokenInformation; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v7; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING v9; // [rsp+68h] [rbp-98h] BYREF
  __int128 Sid; // [rsp+78h] [rbp-88h] BYREF
  __int64 v11; // [rsp+88h] [rbp-78h]
  __int64 v12; // [rsp+90h] [rbp-70h] BYREF
  int v13; // [rsp+98h] [rbp-68h]
  wchar_t v14; // [rsp+9Ch] [rbp-64h]
  _OWORD v15[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v16; // [rsp+E0h] [rbp-20h]
  wchar_t v17; // [rsp+E8h] [rbp-18h]
  _OWORD v18[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v19; // [rsp+130h] [rbp+30h]
  int v20; // [rsp+138h] [rbp+38h]

  TokenInformation = 0LL;
  ReturnLength = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v11 = 0LL;
  v13 = *(_DWORD *)L"os";
  v14 = aSmbios[6];
  v9.Buffer = (wchar_t *)&v12;
  v15[1] = *(_OWORD *)L"t.firmwareRead_cw5n1h2txyewy";
  v17 = aMicrosoftFirmw_0[36];
  v15[3] = *(_OWORD *)L"w5n1h2txyewy";
  String2.Buffer = (wchar_t *)v15;
  v18[1] = *(_OWORD *)L"t.firmwareWrite_cw5n1h2txyewy";
  v20 = *(_DWORD *)L"y";
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_QWORD *)&v9.Length = 917516LL;
  *(_QWORD *)&String2.Length = 4849736LL;
  v18[3] = *(_OWORD *)L"cw5n1h2txyewy";
  *(_QWORD *)&v7.Length = 4980810LL;
  v7.Buffer = (wchar_t *)v18;
  Sid = 0LL;
  v12 = *(_QWORD *)L"smbios";
  v15[0] = *(_OWORD *)L"Microsoft.firmwareRead_cw5n1h2txyewy";
  v15[2] = *(_OWORD *)L"reRead_cw5n1h2txyewy";
  v16 = *(_QWORD *)L"yewy";
  v18[0] = *(_OWORD *)L"Microsoft.firmwareWrite_cw5n1h2txyewy";
  v18[2] = *(_OWORD *)L"reWrite_cw5n1h2txyewy";
  v19 = *(_QWORD *)L"xyewy";
  if ( !a1 )
    return ExpCapabilityCheck(&v9);
  v1 = a1 - 1;
  if ( v1 )
  {
    if ( v1 != 1 )
      return 0;
    goto LABEL_6;
  }
  if ( !ExpCapabilityCheck(&String2) )
  {
LABEL_6:
    if ( !ExpCapabilityCheck(&v7) )
      return 0;
  }
  if ( BYTE2(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) != 0x81 )
  {
    RtlRunOnceExecuteOnce(&ExpCheckTestSigningInit, (PRTL_RUN_ONCE_INIT_FN)ExpInitExpCheckTestSigningInfo, 0LL, 0LL);
    if ( !ExpTestSigningEnabled )
      return 0;
  }
  v3[0] = 0;
  RtlInitializeSid(&Sid, &IdentifierAuthority, 2u);
  *RtlSubAuthoritySid(&Sid, 0) = 32;
  *RtlSubAuthoritySid(&Sid, 1u) = 544;
  return ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenLinkedToken, &TokenInformation, 8u, &ReturnLength) >= 0
      && ReturnLength == 8
      && (int)RtlCheckTokenMembershipEx(TokenInformation, &Sid, 1, v3) >= 0
      && v3[0];
}
