/*
 * XREFs of ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C016A4AC
 * Callers:
 *     GreGetRandomRgn @ 0x1C0042BB0 (GreGetRandomRgn.c)
 *     GreGetAppClipBox @ 0x1C00B6A6C (GreGetAppClipBox.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00B6E98 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     GreRectVisible @ 0x1C00B84E0 (GreRectVisible.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00B889C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreExcludeClipRect @ 0x1C00B9F40 (GreExcludeClipRect.c)
 *     NtGdiSelectBitmap @ 0x1C01011E0 (NtGdiSelectBitmap.c)
 *     NtGdiFrameRgn @ 0x1C013EC70 (NtGdiFrameRgn.c)
 *     NtGdiFillPath @ 0x1C0143B80 (NtGdiFillPath.c)
 *     NtGdiSelectClipPath @ 0x1C0144B80 (NtGdiSelectClipPath.c)
 *     NtGdiFillRgn @ 0x1C0146850 (NtGdiFillRgn.c)
 *     NtGdiInvertRgn @ 0x1C0149310 (NtGdiInvertRgn.c)
 *     NtGdiOffsetClipRgn @ 0x1C0157410 (NtGdiOffsetClipRgn.c)
 *     EngMarkBandingSurface @ 0x1C015EB10 (EngMarkBandingSurface.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z @ 0x1C016A468 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C016CC48 (GreExtSelectClipRgnInternal.c)
 *     NtGdiPtVisible @ 0x1C029F8F0 (NtGdiPtVisible.c)
 *     NtGdiFlattenPath @ 0x1C02AD660 (NtGdiFlattenPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02ADB40 (NtGdiStrokeAndFillPath.c)
 *     NtGdiWidenPath @ 0x1C02ADE20 (NtGdiWidenPath.c)
 *     NtGdiResizePalette @ 0x1C02B86F0 (NtGdiResizePalette.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D21E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

__int64 __fastcall TraceLoggingWriteUnsupportedGdiUsage(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  int v6; // [rsp+30h] [rbp-71h] BYREF
  __int64 v7; // [rsp+38h] [rbp-69h] BYREF
  __int64 v8; // [rsp+40h] [rbp-61h] BYREF
  __int64 v9; // [rsp+48h] [rbp-59h] BYREF
  __int64 v10; // [rsp+50h] [rbp-51h] BYREF
  __int64 v11; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+60h] [rbp-41h] BYREF
  int *v13; // [rsp+80h] [rbp-21h]
  __int64 v14; // [rsp+88h] [rbp-19h]
  __int64 *v15; // [rsp+90h] [rbp-11h]
  __int64 v16; // [rsp+98h] [rbp-9h]
  __int64 *v17; // [rsp+A0h] [rbp-1h]
  __int64 v18; // [rsp+A8h] [rbp+7h]
  __int64 *v19; // [rsp+B0h] [rbp+Fh]
  __int64 v20; // [rsp+B8h] [rbp+17h]
  __int64 *v21; // [rsp+C0h] [rbp+1Fh]
  __int64 v22; // [rsp+C8h] [rbp+27h]
  __int64 *v23; // [rsp+D0h] [rbp+2Fh]
  __int64 v24; // [rsp+D8h] [rbp+37h]

  if ( (unsigned int)dword_1C032B3D8 > 5 && (qword_1C032B3E8 & 0x400000000000LL) != 0 )
  {
    result = qword_1C032B3F0 & 0x400000000000LL;
    if ( (qword_1C032B3F0 & 0x400000000000LL) == qword_1C032B3F0 )
    {
      v7 = a5;
      v23 = &v7;
      v21 = &v8;
      v19 = &v9;
      v17 = &v10;
      v15 = &v11;
      v10 = a2;
      v13 = &v6;
      v8 = a4;
      v9 = a3;
      v6 = a1;
      v24 = 8LL;
      v22 = 8LL;
      v20 = 8LL;
      v18 = 8LL;
      v16 = 8LL;
      v11 = 0x2000000LL;
      v14 = 4LL;
      return tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C032B3D8, (int)&dword_1C02F4F9A, 0, 0, 8u, &v12);
    }
  }
  return result;
}
