/*
 * XREFs of ?DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXAEBU_GUID@@@Z @ 0x14000C764
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000D134 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     __security_check_cookie @ 0x140005510 (__security_check_cookie.c)
 *     BlackScreenDiagnostics::TriggerGraphicsCollection @ 0x14000D6A8 (BlackScreenDiagnostics--TriggerGraphicsCollection.c)
 *     _tlgKeywordOn @ 0x14000DB68 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x14000DB9C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000DF68 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

void __fastcall BlackScreenDiagnostics::CBlackScreenDiagnosticReport::DoDisplayModeReset(
        BlackScreenDiagnostics::CBlackScreenDiagnosticReport *this,
        const struct _GUID *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  char v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+34h] [rbp-15h] BYREF
  __int64 v8; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v10; // [rsp+60h] [rbp+17h]
  int v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+6Ch] [rbp+23h]
  const struct _GUID *v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+7Ch] [rbp+33h]
  char *v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+8Ch] [rbp+43h]

  v7 = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v7, 0LL);
  if ( v7 == 16 )
  {
    v4 = RtlPublishWnfStateData(WNF_DWM_DISPLAY_RESET_REQUEST, 0LL, 0LL, 0LL, 0LL) | 0x10000000;
    if ( v4 < 0 )
      MicrosoftTelemetryAssertTriggeredArgs(v5, (unsigned int)v4, 0LL);
  }
  else
  {
    if ( (unsigned int)dword_140016000 > 5 && (unsigned __int8)tlgKeywordOn() )
    {
      v18 = 0;
      v15 = 0;
      v12 = 0;
      v16 = &v6;
      v6 = 1;
      v10 = &v8;
      v8 = 0x1000000LL;
      v17 = 1;
      v13 = a2;
      v14 = 16;
      v11 = 8;
      tlgWriteTransfer_EventWriteTransfer((int)&dword_140016000, (int)&dword_1400113A2, 0, 0, 5u, &v9);
    }
    LOBYTE(v3) = 1;
    BlackScreenDiagnostics::TriggerGraphicsCollection(v3, 0LL, a2);
  }
}
