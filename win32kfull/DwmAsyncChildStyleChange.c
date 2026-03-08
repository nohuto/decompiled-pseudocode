/*
 * XREFs of DwmAsyncChildStyleChange @ 0x1C002E648
 * Callers:
 *     xxxGetSystemMenu @ 0x1C0021498 (xxxGetSystemMenu.c)
 *     DecomposeWindowIfNeeded @ 0x1C00228F4 (DecomposeWindowIfNeeded.c)
 *     ComposeWindow @ 0x1C002297C (ComposeWindow.c)
 *     UnsetLayeredWindow @ 0x1C00240E0 (UnsetLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C0028C1C (xxxSetLayeredWindow.c)
 *     ComposeWindowIfNeeded @ 0x1C002D850 (ComposeWindowIfNeeded.c)
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 *     xxxSetWindowData @ 0x1C002F9C8 (xxxSetWindowData.c)
 *     xxxDispatchMessage @ 0x1C0038064 (xxxDispatchMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C0038E64 (xxxSimpleDoSyncPaint.c)
 *     InternalInvalidate3 @ 0x1C0054B50 (InternalInvalidate3.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00A4FB4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00A6850 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C00A8800 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C00AAA20 (xxxCalcClientRect.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     xxxDoPaint @ 0x1C00C3298 (xxxDoPaint.c)
 *     NtUserEndPaint @ 0x1C00CC490 (NtUserEndPaint.c)
 *     xxxSetClassData @ 0x1C00ED168 (xxxSetClassData.c)
 *     xxxBeginPaint @ 0x1C00FD4C0 (xxxBeginPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C00FDB80 (xxxInternalDoSyncPaint.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00FE35C (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxEnableMenuItem @ 0x1C0224CA0 (xxxEnableMenuItem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncChildStyleChange(PVOID Object, __int64 a2, int a3, int a4)
{
  unsigned int v8; // ebx
  _OWORD v10[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+48h] [rbp-18h]
  __int64 v13; // [rsp+4Ch] [rbp-14h]
  int v14; // [rsp+54h] [rbp-Ch]
  int v15; // [rsp+58h] [rbp-8h]

  v8 = -1073741823;
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(Object) + 32) + 13248LL));
  if ( Object )
  {
    v15 = a4;
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[0]) = 3932180;
    v11 = 0LL;
    WORD2(v10[0]) = 0x8000;
    v12 = 1073741846;
    v13 = a2;
    v14 = a3;
    v8 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
