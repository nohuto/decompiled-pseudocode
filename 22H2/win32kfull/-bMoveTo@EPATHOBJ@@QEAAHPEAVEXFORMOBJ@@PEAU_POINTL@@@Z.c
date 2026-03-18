/*
 * XREFs of ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C015A700
 * Callers:
 *     GreRectVisible @ 0x1C00DB850 (GreRectVisible.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0284824 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z @ 0x1C028EA88 (-bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z.c)
 *     EngPlgBlt @ 0x1C028F8F0 (EngPlgBlt.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C02AB188 (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GrePolyPolylineInternal @ 0x1C02AC73C (GrePolyPolylineInternal.c)
 *     GreRectangle @ 0x1C02ACBA0 (GreRectangle.c)
 *     ?bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z @ 0x1C02C5744 (-bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z.c)
 *     ?bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z @ 0x1C02C5B70 (-bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C02C5E04 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z @ 0x1C02D79FC (-bAddPolygon@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@H@Z.c)
 *     ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ @ 0x1C02DFE30 (-bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EPATHOBJ::bMoveTo(EPATHOBJ *this, struct EXFORMOBJ *a2, struct _POINTL *a3)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v5; // [rsp+38h] [rbp-10h]

  v4[0] = a3;
  v4[2] = 0LL;
  v4[1] = 1LL;
  v5 = 0;
  return EPATHOBJ::bMoveTo(this, a2, v4);
}
