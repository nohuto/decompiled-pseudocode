/*
 * XREFs of ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C02651F8
 * Callers:
 *     NtGdiSelectBitmap @ 0x1C008C7F0 (NtGdiSelectBitmap.c)
 *     GreGetAppClipBox @ 0x1C00D9B30 (GreGetAppClipBox.c)
 *     GreRectVisible @ 0x1C00DB850 (GreRectVisible.c)
 *     GreExcludeClipRect @ 0x1C00DBC80 (GreExcludeClipRect.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00DC33C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00FE090 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010CB90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C011A2F0 (GreExtSelectClipRgnInternal.c)
 *     GreGetRandomRgn @ 0x1C0131360 (GreGetRandomRgn.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z @ 0x1C013E398 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z.c)
 *     EngMarkBandingSurface @ 0x1C028E860 (EngMarkBandingSurface.c)
 *     NtGdiFillRgn @ 0x1C02A8FD0 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C02A9590 (NtGdiFrameRgn.c)
 *     NtGdiInvertRgn @ 0x1C02A9D30 (NtGdiInvertRgn.c)
 *     NtGdiOffsetClipRgn @ 0x1C02A9E80 (NtGdiOffsetClipRgn.c)
 *     NtGdiPtVisible @ 0x1C02AA0E0 (NtGdiPtVisible.c)
 *     NtGdiFillPath @ 0x1C02C0DE0 (NtGdiFillPath.c)
 *     NtGdiFlattenPath @ 0x1C02C0F70 (NtGdiFlattenPath.c)
 *     NtGdiSelectClipPath @ 0x1C02C1490 (NtGdiSelectClipPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02C1640 (NtGdiStrokeAndFillPath.c)
 *     NtGdiWidenPath @ 0x1C02C1980 (NtGdiWidenPath.c)
 *     NtGdiResizePalette @ 0x1C02D2760 (NtGdiResizePalette.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0040C00 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingWriteUnsupportedGdiUsage(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  int v9; // [rsp+30h] [rbp-71h] BYREF
  __int64 v10; // [rsp+38h] [rbp-69h] BYREF
  __int64 v11; // [rsp+40h] [rbp-61h] BYREF
  __int64 v12; // [rsp+48h] [rbp-59h] BYREF
  __int64 v13; // [rsp+50h] [rbp-51h] BYREF
  __int64 v14; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+60h] [rbp-41h] BYREF
  int *v16; // [rsp+80h] [rbp-21h]
  __int64 v17; // [rsp+88h] [rbp-19h]
  __int64 *v18; // [rsp+90h] [rbp-11h]
  __int64 v19; // [rsp+98h] [rbp-9h]
  __int64 *v20; // [rsp+A0h] [rbp-1h]
  __int64 v21; // [rsp+A8h] [rbp+7h]
  __int64 *v22; // [rsp+B0h] [rbp+Fh]
  __int64 v23; // [rsp+B8h] [rbp+17h]
  __int64 *v24; // [rsp+C0h] [rbp+1Fh]
  __int64 v25; // [rsp+C8h] [rbp+27h]
  __int64 *v26; // [rsp+D0h] [rbp+2Fh]
  __int64 v27; // [rsp+D8h] [rbp+37h]

  if ( (unsigned int)dword_1C0354098 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0354098, 0x400000000000LL) )
    {
      v10 = a5;
      v11 = v6;
      v26 = &v10;
      v27 = 8LL;
      v24 = &v11;
      v25 = 8LL;
      v22 = &v12;
      v20 = &v13;
      v18 = &v14;
      v16 = &v9;
      v23 = 8LL;
      v21 = 8LL;
      v19 = 8LL;
      v12 = v7;
      v13 = v8;
      v14 = 0x2000000LL;
      v9 = a1;
      v17 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0354098,
        (unsigned __int8 *)dword_1C031E784,
        0LL,
        0LL,
        8u,
        &v15);
    }
  }
}
