/*
 * XREFs of ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0186930
 * Callers:
 *     GreIntersectClipRect @ 0x1C0056F30 (GreIntersectClipRect.c)
 *     ?MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z @ 0x1C006D528 (-MultiUserGreCleanupHmgRemoveAllLocks@@YAXE@Z.c)
 *     GreSelectPalette @ 0x1C0092ED0 (GreSelectPalette.c)
 *     EngAssociateSurface @ 0x1C00A3DA0 (EngAssociateSurface.c)
 *     GreRestoreOwnedDC @ 0x1C00A46A0 (GreRestoreOwnedDC.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingWriteUnsupportedGdiUsage(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // r11d
  int v9; // [rsp+30h] [rbp-71h] BYREF
  __int64 v10; // [rsp+38h] [rbp-69h] BYREF
  __int64 v11; // [rsp+40h] [rbp-61h] BYREF
  __int64 v12; // [rsp+48h] [rbp-59h] BYREF
  __int64 v13; // [rsp+50h] [rbp-51h] BYREF
  __int64 v14; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+60h] [rbp-41h] BYREF
  int *v16; // [rsp+80h] [rbp-21h]
  int v17; // [rsp+88h] [rbp-19h]
  int v18; // [rsp+8Ch] [rbp-15h]
  __int64 *v19; // [rsp+90h] [rbp-11h]
  int v20; // [rsp+98h] [rbp-9h]
  int v21; // [rsp+9Ch] [rbp-5h]
  __int64 *v22; // [rsp+A0h] [rbp-1h]
  int v23; // [rsp+A8h] [rbp+7h]
  int v24; // [rsp+ACh] [rbp+Bh]
  __int64 *v25; // [rsp+B0h] [rbp+Fh]
  int v26; // [rsp+B8h] [rbp+17h]
  int v27; // [rsp+BCh] [rbp+1Bh]
  __int64 *v28; // [rsp+C0h] [rbp+1Fh]
  int v29; // [rsp+C8h] [rbp+27h]
  int v30; // [rsp+CCh] [rbp+2Bh]
  __int64 *v31; // [rsp+D0h] [rbp+2Fh]
  int v32; // [rsp+D8h] [rbp+37h]
  int v33; // [rsp+DCh] [rbp+3Bh]

  if ( (unsigned int)dword_1C02C93D8 > 5 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
  {
    v33 = 0;
    v30 = 0;
    v27 = 0;
    v24 = 0;
    v21 = 0;
    v18 = 0;
    v10 = a5;
    v31 = &v10;
    v28 = &v11;
    v25 = &v12;
    v22 = &v13;
    v19 = &v14;
    v16 = &v9;
    v11 = v6;
    v12 = v5;
    v32 = 8;
    v29 = 8;
    v26 = 8;
    v23 = 8;
    v20 = 8;
    v13 = v7;
    v14 = 0x2000000LL;
    v9 = v8;
    v17 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C02C93D8, (unsigned __int8 *)dword_1C02956CF, 0LL, 0LL, 8u, &v15);
  }
}
