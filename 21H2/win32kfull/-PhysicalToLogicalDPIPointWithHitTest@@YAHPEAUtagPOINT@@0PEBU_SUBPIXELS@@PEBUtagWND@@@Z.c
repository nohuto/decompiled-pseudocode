/*
 * XREFs of ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x1C014C4E8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C014C470 (EditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01EC438 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1C0069908 (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C016B5D8 (-DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 */

__int64 __fastcall PhysicalToLogicalDPIPointWithHitTest(
        struct tagPOINT *a1,
        struct tagPOINT *a2,
        const struct _SUBPIXELS *a3,
        const struct tagWND *a4)
{
  unsigned int v7; // ebp
  const struct _D3DMATRIX *v8; // rsi
  const struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  unsigned __int64 v10; // r8
  bool v11; // al
  struct tagPOINT v12; // r8
  struct tagPOINT v14; // [rsp+58h] [rbp+20h] BYREF

  v7 = *(_DWORD *)(*((_QWORD *)a4 + 5) + 288LL);
  if ( (v7 & 0xF) == 2 )
  {
    *a1 = *a2;
    return 0LL;
  }
  v8 = 0LL;
  TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a4);
  if ( TopLevelOrDpiBoundaryWindow )
    v8 = (const struct _D3DMATRIX *)*((_QWORD *)TopLevelOrDpiBoundaryWindow + 27);
  v10 = (unsigned __int64)*a2;
  v14 = *a2;
  if ( v8 )
  {
    v11 = DCEHitTestWindow((const struct tagRECT *)(*((_QWORD *)TopLevelOrDpiBoundaryWindow + 5) + 88LL), v8, &v14, a3);
    v12 = v14;
LABEL_7:
    if ( v11 )
    {
      *a1 = v12;
      return 1LL;
    }
    return PhysicalToLogicalDPIPoint(a1, a2, v7, 0LL);
  }
  if ( TopLevelOrDpiBoundaryWindow )
  {
    v11 = PtInRect((_DWORD *)(*((_QWORD *)TopLevelOrDpiBoundaryWindow + 5) + 88LL), v10);
    goto LABEL_7;
  }
  return PhysicalToLogicalDPIPoint(a1, a2, v7, 0LL);
}
