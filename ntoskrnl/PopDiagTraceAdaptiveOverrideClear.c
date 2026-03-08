/*
 * XREFs of PopDiagTraceAdaptiveOverrideClear @ 0x14098959C
 * Callers:
 *     PopAdaptiveConsoleSessionOverrideClear @ 0x140998780 (PopAdaptiveConsoleSessionOverrideClear.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void PopDiagTraceAdaptiveOverrideClear()
{
  int v0; // r9d
  int v1; // r10d
  int v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+34h] [rbp-15h] BYREF
  __int64 v4; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-9h] BYREF
  int *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  int *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  __int64 *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_140C03928 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
    {
      v3 = v0;
      v6 = &v2;
      v2 = v1;
      v8 = &v3;
      v7 = 4LL;
      v10 = &v4;
      v9 = 4LL;
      v4 = 0x1000000LL;
      v11 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03928,
        (unsigned __int8 *)&word_14002F716,
        0LL,
        0LL,
        5u,
        &v5);
    }
  }
}
