/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015D588
 * Callers:
 *     GreGetCharSet @ 0x1C001C490 (GreGetCharSet.c)
 *     GreGetTextFaceW @ 0x1C001C7E0 (GreGetTextFaceW.c)
 *     GreStretchDIBitsInternal @ 0x1C0029B2C (GreStretchDIBitsInternal.c)
 *     GreStretchBltInternal @ 0x1C002AF84 (GreStretchBltInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C002E3F0 (GreSetDIBitsToDeviceInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0039BB0 (NtGdiAlphaBlend.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00419B4 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreMaskBlt @ 0x1C0087168 (GreMaskBlt.c)
 *     GreGetAppClipBox @ 0x1C00889A8 (GreGetAppClipBox.c)
 *     GreExtTextOutWInternal @ 0x1C008ABC0 (GreExtTextOutWInternal.c)
 *     GreExtTextOutRect @ 0x1C008AD4C (GreExtTextOutRect.c)
 *     GreGetBoundsRect @ 0x1C008B388 (GreGetBoundsRect.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0090C1C (GreCreateCompatibleBitmapInternal.c)
 *     GreGetLayout @ 0x1C00C1400 (GreGetLayout.c)
 *     GreSaveDCInternal @ 0x1C00DE7E8 (GreSaveDCInternal.c)
 *     GreTransformPoints @ 0x1C00E2F9C (GreTransformPoints.c)
 *     GrePolyTextOutW @ 0x1C00E3570 (GrePolyTextOutW.c)
 *     NtGdiModifyWorldTransform @ 0x1C00E4720 (NtGdiModifyWorldTransform.c)
 *     NtGdiSetMetaRgn @ 0x1C00EC010 (NtGdiSetMetaRgn.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0123E40 (--0DCOBJ@@QEAA@XZ.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C012C564 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     NtGdiSetFontXform @ 0x1C013A9E0 (NtGdiSetFontXform.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02791A8 (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 * Callees:
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C015D3B4 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 */

_OWORD *__fastcall UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
    PushThreadGuardedObject(
      a1,
      (unsigned __int64)(a1 - 1) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
      UnexpectedThreadTerminationHandler<DCOBJ>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
