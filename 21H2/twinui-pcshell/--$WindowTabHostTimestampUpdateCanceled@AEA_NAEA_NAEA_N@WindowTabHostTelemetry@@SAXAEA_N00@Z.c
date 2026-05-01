/*
 * XREFs of ??$WindowTabHostTimestampUpdateCanceled@AEA_NAEA_NAEA_N@WindowTabHostTelemetry@@SAXAEA_N00@Z @ 0x1800E4264
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$2 @ 0x1800E9050 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_1800E9050.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18021A904 (-Provider@WindowManagementLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall WindowTabHostTelemetry::WindowTabHostTimestampUpdateCanceled<bool &,bool &,bool &>(
        char *a1,
        char *a2,
        char *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r10
  char v8; // cl
  char v10; // [rsp+38h] [rbp-29h] BYREF
  char v11; // [rsp+39h] [rbp-28h] BYREF
  char v12; // [rsp+3Ah] [rbp-27h] BYREF
  __int64 v13; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+48h] [rbp-19h] BYREF
  char *v15; // [rsp+68h] [rbp+7h]
  __int64 v16; // [rsp+70h] [rbp+Fh]
  char *v17; // [rsp+78h] [rbp+17h]
  __int64 v18; // [rsp+80h] [rbp+1Fh]
  char *v19; // [rsp+88h] [rbp+27h]
  __int64 v20; // [rsp+90h] [rbp+2Fh]
  __int64 *v21; // [rsp+98h] [rbp+37h]
  __int64 v22; // [rsp+A0h] [rbp+3Fh]

  v6 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v6, 0x400000000000LL);
    if ( (_BYTE)v6 )
    {
      v8 = *a3;
      v11 = *a2;
      v12 = *a1;
      v21 = &v13;
      v19 = &v10;
      v17 = &v11;
      v15 = &v12;
      v10 = v8;
      v13 = 0x2000000LL;
      v22 = 8LL;
      v20 = 1LL;
      v18 = 1LL;
      v16 = 1LL;
      LOBYTE(v6) = tlgWriteTransfer_EventWriteTransfer(v7, (unsigned __int8 *)dword_18059F6BB, 0LL, 0LL, 6u, &v14);
    }
  }
  return (char)v6;
}
