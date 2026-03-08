/*
 * XREFs of ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C014DA72
 * Callers:
 *     GreRectVisible @ 0x1C0086F6C (GreRectVisible.c)
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z @ 0x1C02912E0 (-bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z.c)
 *     EngPlgBlt @ 0x1C0292140 (EngPlgBlt.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C02ACE70 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GrePolyPolylineInternal @ 0x1C02AEC60 (GrePolyPolylineInternal.c)
 *     GrePolylineTo @ 0x1C02AEE80 (GrePolylineTo.c)
 *     GreRectangle @ 0x1C02AF0B0 (GreRectangle.c)
 *     ?bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z @ 0x1C02C8340 (-bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C02C85D4 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     NtGdiArcInternal @ 0x1C02C8EE0 (NtGdiArcInternal.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z @ 0x1C02D9820 (-bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z.c)
 *     ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02E1BB8 (-bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 *     ?bWritePoint@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02E1F1C (-bWritePoint@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EPATHOBJ::bPolyLineTo(EPATHOBJ *this, struct EXFORMOBJ *a2, struct _POINTL *a3, unsigned int a4)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+38h] [rbp-10h]

  v5[2] = 0LL;
  v5[0] = a3;
  v5[1] = a4;
  v6 = 0;
  return EPATHOBJ::bPolyLineTo(this, a2, v5);
}
