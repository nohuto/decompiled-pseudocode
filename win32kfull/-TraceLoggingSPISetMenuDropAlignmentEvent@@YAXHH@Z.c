/*
 * XREFs of ?TraceLoggingSPISetMenuDropAlignmentEvent@@YAXHH@Z @ 0x1C00F4890
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingSPISetMenuDropAlignmentEvent()
{
  char v0; // r9
  char v1; // r10
  char v2; // [rsp+30h] [rbp-19h] BYREF
  char v3; // [rsp+31h] [rbp-18h] BYREF
  __int64 v4; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v6; // [rsp+60h] [rbp+17h]
  __int64 v7; // [rsp+68h] [rbp+1Fh]
  char *v8; // [rsp+70h] [rbp+27h]
  __int64 v9; // [rsp+78h] [rbp+2Fh]
  char *v10; // [rsp+80h] [rbp+37h]
  __int64 v11; // [rsp+88h] [rbp+3Fh]

  if ( (unsigned int)dword_1C0357098 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C0357098, 0x200000000000LL) )
    {
      v2 = v0;
      v10 = &v2;
      v3 = v1;
      v8 = &v3;
      v4 = 0x1000000LL;
      v6 = &v4;
      v11 = 1LL;
      v9 = 1LL;
      v7 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0357098, (int)&dword_1C031E316, 0, 0, 5u, &v5);
    }
  }
}
