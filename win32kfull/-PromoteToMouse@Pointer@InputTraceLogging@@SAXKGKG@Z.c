/*
 * XREFs of ?PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z @ 0x1C01494D2
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01F9BE8 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C01F9E6C (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Pointer::PromoteToMouse(int a1)
{
  unsigned __int16 v2; // r9
  int v3; // r10d
  __int16 v4; // r11
  __int16 v5; // [rsp+30h] [rbp-29h] BYREF
  int v6; // [rsp+34h] [rbp-25h] BYREF
  int v7; // [rsp+38h] [rbp-21h] BYREF
  int v8; // [rsp+3Ch] [rbp-1Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-19h] BYREF
  int *v10; // [rsp+60h] [rbp+7h]
  __int64 v11; // [rsp+68h] [rbp+Fh]
  __int16 *v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  int *v14; // [rsp+80h] [rbp+27h]
  __int64 v15; // [rsp+88h] [rbp+2Fh]
  int *v16; // [rsp+90h] [rbp+37h]
  __int64 v17; // [rsp+98h] [rbp+3Fh]

  if ( (unsigned int)dword_1C035C080 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C035C080, 32LL) )
    {
      v6 = v2;
      v7 = v3;
      v16 = &v6;
      v5 = v4;
      v14 = &v7;
      v8 = a1;
      v12 = &v5;
      v10 = &v8;
      v17 = 4LL;
      v15 = 4LL;
      v13 = 2LL;
      v11 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C035C080,
        (unsigned __int8 *)dword_1C031D923,
        0LL,
        0LL,
        6u,
        &v9);
    }
  }
}
