/*
 * XREFs of ??$SearchAppExperienceManager_AllowSearchSuspension@AEA_NAEA_K@CortanaProactiveTelemetry@@SAXAEA_NAEA_K@Z @ 0x18009D9CC
 * Callers:
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180027034 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 * Callees:
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180011F00 (-Provider@CortanaProactiveLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

char __fastcall CortanaProactiveTelemetry::SearchAppExperienceManager_AllowSearchSuspension<bool &,unsigned __int64 &>(
        char *a1,
        __int64 *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // rcx
  char v7; // [rsp+30h] [rbp-29h] BYREF
  __int64 v8; // [rsp+38h] [rbp-21h] BYREF
  __int64 v9; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-9h] BYREF
  char *v11; // [rsp+70h] [rbp+17h]
  __int64 v12; // [rsp+78h] [rbp+1Fh]
  __int64 *v13; // [rsp+80h] [rbp+27h]
  __int64 v14; // [rsp+88h] [rbp+2Fh]
  __int64 *v15; // [rsp+90h] [rbp+37h]
  __int64 v16; // [rsp+98h] [rbp+3Fh]

  v4 = CortanaProactiveLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v9 = *a2;
      v7 = *a1;
      v15 = &v8;
      v13 = &v9;
      v11 = &v7;
      v8 = 0x1000000LL;
      v16 = 8LL;
      v14 = 8LL;
      v12 = 1LL;
      LOBYTE(v4) = tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_18057D381, 0LL, 0LL, 5u, &v10);
    }
  }
  return (char)v4;
}
