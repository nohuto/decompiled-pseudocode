/*
 * XREFs of ??$HandleDisplayChanged@AEB_NAEB_NAEB_NAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEB_N00AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800D20F4
 * Callers:
 *     ?HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800D2580 (-HandleDisplayChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1803BEE90 (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall TouchKeyboardExperienceTelemetryLogger::HandleDisplayChanged<bool const &,bool const &,bool const &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
        char *a1,
        char *a2,
        char *a3,
        char *a4)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r10
  char v10; // cl
  char v12; // [rsp+38h] [rbp-29h] BYREF
  char v13; // [rsp+39h] [rbp-28h] BYREF
  char v14; // [rsp+3Ah] [rbp-27h] BYREF
  char v15; // [rsp+3Bh] [rbp-26h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+48h] [rbp-19h] BYREF
  char *v17; // [rsp+68h] [rbp+7h]
  __int64 v18; // [rsp+70h] [rbp+Fh]
  char *v19; // [rsp+78h] [rbp+17h]
  __int64 v20; // [rsp+80h] [rbp+1Fh]
  char *v21; // [rsp+88h] [rbp+27h]
  __int64 v22; // [rsp+90h] [rbp+2Fh]
  char *v23; // [rsp+98h] [rbp+37h]
  __int64 v24; // [rsp+A0h] [rbp+3Fh]

  v8 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v8 > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn((__int64)v8, 16LL);
    if ( (_BYTE)v8 )
    {
      v10 = *a4;
      v13 = *a3;
      v14 = *a2;
      v15 = *a1;
      v23 = &v12;
      v21 = &v13;
      v19 = &v14;
      v17 = &v15;
      v12 = v10;
      v24 = 1LL;
      v22 = 1LL;
      v20 = 1LL;
      v18 = 1LL;
      LOBYTE(v8) = tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_180595F2C, 0LL, 0LL, 6u, &v16);
    }
  }
  return (char)v8;
}
