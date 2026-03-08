/*
 * XREFs of PopDiagTraceDisplayBurstWin32kCallout @ 0x14098B884
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDisplayBurstWin32kCallout(__int64 a1, __int64 a2, char a3)
{
  char result; // al
  char v4; // [rsp+30h] [rbp-19h] BYREF
  char v5; // [rsp+31h] [rbp-18h] BYREF
  char v6; // [rsp+32h] [rbp-17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+40h] [rbp-9h] BYREF
  char *v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  char *v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  char *v12; // [rsp+80h] [rbp+37h]
  __int64 v13; // [rsp+88h] [rbp+3Fh]

  result = PopConsoleExternalDisplayConnected;
  if ( (unsigned int)dword_140C03928 > 5 )
  {
    v5 = PopConsoleExternalDisplayConnected;
    v4 = PopLidOpened;
    v10 = &v5;
    v8 = &v4;
    v12 = &v6;
    v6 = a3;
    v9 = 1LL;
    v11 = 1LL;
    v13 = 1LL;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140C03928,
             (unsigned __int8 *)byte_14002E629,
             0LL,
             0LL,
             5u,
             &v7);
  }
  return result;
}
