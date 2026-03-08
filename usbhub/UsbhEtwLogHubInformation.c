/*
 * XREFs of UsbhEtwLogHubInformation @ 0x1C005BA60
 * Callers:
 *     UsbhSetFdoPnpState @ 0x1C0044248 (UsbhSetFdoPnpState.c)
 *     UsbhEtwRundown @ 0x1C005BED0 (UsbhEtwRundown.c)
 * Callees:
 *     UsbhEtwWrite @ 0x1C0009AC0 (UsbhEtwWrite.c)
 *     UsbhEtwGetHubInfo @ 0x1C0021B60 (UsbhEtwGetHubInfo.c)
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall UsbhEtwLogHubInformation(__int64 a1, const EVENT_DESCRIPTOR *a2)
{
  NTSTATUS result; // eax
  int v5; // edx
  _DWORD v6[2]; // [rsp+60h] [rbp+7h] BYREF
  int v7; // [rsp+68h] [rbp+Fh] BYREF
  __int16 v8; // [rsp+6Ch] [rbp+13h]
  __int16 v9; // [rsp+6Eh] [rbp+15h]
  __int16 v10; // [rsp+70h] [rbp+17h]
  __int16 v11; // [rsp+72h] [rbp+19h]
  _OWORD v12[2]; // [rsp+78h] [rbp+1Fh] BYREF
  int v13; // [rsp+98h] [rbp+3Fh]

  result = 0;
  v13 = 0;
  memset(v12, 0, sizeof(v12));
  if ( dword_1C006B690 )
  {
    v7 = *(_DWORD *)(a1 + 5192);
    v8 = *(_WORD *)(a1 + 5196);
    v9 = *(_DWORD *)(a1 + 5200);
    v10 = *(_WORD *)(a1 + 5228);
    v11 = *(_WORD *)(a1 + 5230);
    UsbhEtwGetHubInfo(a1, (__int64)v12);
    v5 = *(_DWORD *)(a1 + 4208);
    v6[1] = *(_DWORD *)(a1 + 3124);
    v6[0] = v5;
    return UsbhEtwWrite(a2, 0LL, &v7, 12LL, v12, 36LL, v6, 8LL, a1 + 2936, 71LL, 0LL);
  }
  return result;
}
