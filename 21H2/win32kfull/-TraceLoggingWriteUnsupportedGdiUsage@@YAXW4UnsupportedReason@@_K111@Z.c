/*
 * XREFs of ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015DE30
 * Callers:
 *     NtGdiExtSelectClipRgn @ 0x1C0041BA0 (NtGdiExtSelectClipRgn.c)
 *     GreExcludeClipRect @ 0x1C0088400 (GreExcludeClipRect.c)
 *     GreRectVisible @ 0x1C00885EC (GreRectVisible.c)
 *     GreGetAppClipBox @ 0x1C00889A8 (GreGetAppClipBox.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C008C6C8 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C008CE9C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     NtGdiSelectBitmap @ 0x1C00EB910 (NtGdiSelectBitmap.c)
 *     NtGdiFillRgn @ 0x1C012E830 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C0132220 (NtGdiFrameRgn.c)
 *     NtGdiFillPath @ 0x1C0136730 (NtGdiFillPath.c)
 *     NtGdiSelectClipPath @ 0x1C01376C0 (NtGdiSelectClipPath.c)
 *     NtGdiInvertRgn @ 0x1C0138CF0 (NtGdiInvertRgn.c)
 *     NtGdiOffsetClipRgn @ 0x1C0148150 (NtGdiOffsetClipRgn.c)
 *     GreGetRandomRgn @ 0x1C014B3A0 (GreGetRandomRgn.c)
 *     GreExtSelectClipRgnInternal @ 0x1C014CBF4 (GreExtSelectClipRgnInternal.c)
 *     EngMarkBandingSurface @ 0x1C014F130 (EngMarkBandingSurface.c)
 *     ?GreGetRandomRgn_Unpatched@@YAHPEAUHDC__@@PEAUHRGN__@@H@Z @ 0x1C015F058 (-GreGetRandomRgn_Unpatched@@YAHPEAUHDC__@@PEAUHRGN__@@H@Z.c)
 *     NtGdiPtVisible @ 0x1C029E1B0 (NtGdiPtVisible.c)
 *     NtGdiFlattenPath @ 0x1C02ABDD0 (NtGdiFlattenPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02AC2B0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiWidenPath @ 0x1C02AC590 (NtGdiWidenPath.c)
 *     NtGdiResizePalette @ 0x1C02B6830 (NtGdiResizePalette.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingWriteUnsupportedGdiUsage(int a1)
{
  __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r11
  int v5; // [rsp+30h] [rbp-71h] BYREF
  __int64 v6; // [rsp+38h] [rbp-69h] BYREF
  __int64 v7; // [rsp+40h] [rbp-61h] BYREF
  __int64 v8; // [rsp+48h] [rbp-59h] BYREF
  __int64 v9; // [rsp+50h] [rbp-51h] BYREF
  __int64 v10; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+60h] [rbp-41h] BYREF
  int *v12; // [rsp+80h] [rbp-21h]
  __int64 v13; // [rsp+88h] [rbp-19h]
  __int64 *v14; // [rsp+90h] [rbp-11h]
  __int64 v15; // [rsp+98h] [rbp-9h]
  __int64 *v16; // [rsp+A0h] [rbp-1h]
  __int64 v17; // [rsp+A8h] [rbp+7h]
  __int64 *v18; // [rsp+B0h] [rbp+Fh]
  __int64 v19; // [rsp+B8h] [rbp+17h]
  __int64 *v20; // [rsp+C0h] [rbp+1Fh]
  __int64 v21; // [rsp+C8h] [rbp+27h]
  __int64 *v22; // [rsp+D0h] [rbp+2Fh]
  __int64 v23; // [rsp+D8h] [rbp+37h]

  if ( (unsigned int)dword_1C03263F8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C03263F8, 0x400000000000LL) )
    {
      v7 = v2;
      v23 = 8LL;
      v22 = &v6;
      v21 = 8LL;
      v20 = &v7;
      v19 = 8LL;
      v18 = &v8;
      v16 = &v9;
      v14 = &v10;
      v12 = &v5;
      v17 = 8LL;
      v15 = 8LL;
      v6 = 0LL;
      v8 = v3;
      v9 = v4;
      v10 = 0x2000000LL;
      v5 = a1;
      v13 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C03263F8,
        (unsigned __int8 *)dword_1C02F2547,
        0LL,
        0LL,
        8u,
        &v11);
    }
  }
}
