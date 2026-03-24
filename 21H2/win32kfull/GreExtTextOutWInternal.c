/*
 * XREFs of GreExtTextOutWInternal @ 0x1C00AAE5C
 * Callers:
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C00439E0 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C0043D00 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     NtGdiExtTextOutW @ 0x1C00AAAA0 (NtGdiExtTextOutW.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C011BB0C (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0125B18 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C01590D4 (xxxDrawCaptionTemp.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0223290 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C024302C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024C1AC (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMTextOut @ 0x1C025306C (xxxPSMTextOut.c)
 *     ?UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z @ 0x1C025EBB0 (-UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E9B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0092390 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00ACCE0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00ACD0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C016A60C (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A69C (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A898 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C016AA7C (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreExtTextOutWInternal(
        HDC a1,
        LONG a2,
        LONG a3,
        int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        unsigned int a7,
        int *a8,
        void *a9,
        unsigned int a10)
{
  unsigned int v11; // edi
  unsigned int v15; // eax
  _QWORD v17[2]; // [rsp+68h] [rbp-89h] BYREF
  _BYTE v18[32]; // [rsp+78h] [rbp-79h] BYREF
  __int128 v19; // [rsp+98h] [rbp-59h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-49h]
  int v21; // [rsp+B0h] [rbp-41h]
  _QWORD v22[2]; // [rsp+B8h] [rbp-39h] BYREF
  _BYTE v23[32]; // [rsp+C8h] [rbp-29h] BYREF
  __int16 v24; // [rsp+E8h] [rbp-9h]
  __int64 v25; // [rsp+F0h] [rbp-1h]
  __int64 v26; // [rsp+F8h] [rbp+7h]
  __int64 v27; // [rsp+100h] [rbp+Fh]

  v17[0] = 0LL;
  v11 = 0;
  v17[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v18);
  XDCOBJ::vLock((XDCOBJ *)v17, a1);
  if ( v17[0] && (*(_DWORD *)(v17[0] + 36LL) & 0x10000) == 0 )
  {
    v22[0] = 0LL;
    v22[1] = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v23);
    v24 = 256;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0;
    v22[0] = 0LL;
    v27 = 0LL;
    v26 = 0LL;
    v25 = 0LL;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v19, (struct XDCOBJ *)v17, 0) )
      v15 = GreExtTextOutWLocked(
              (struct XDCOBJ *)v17,
              a2,
              a3,
              a4,
              a5,
              a6,
              a7,
              a8,
              *(unsigned __int8 *)(*(_QWORD *)(v17[0] + 976LL) + 213LL),
              a9,
              a10);
    else
      v15 = XDCOBJ::bFullScreen((XDCOBJ *)v17);
    v11 = v15;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v19);
    if ( v22[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v22);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v23);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v17);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v18);
  return v11;
}
