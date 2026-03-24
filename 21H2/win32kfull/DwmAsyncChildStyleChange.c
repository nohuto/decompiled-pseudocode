/*
 * XREFs of DwmAsyncChildStyleChange @ 0x1C004E0F0
 * Callers:
 *     DecomposeWindowIfNeeded @ 0x1C0035334 (DecomposeWindowIfNeeded.c)
 *     ComposeWindow @ 0x1C00353BC (ComposeWindow.c)
 *     xxxSetLayeredWindow @ 0x1C0035DC0 (xxxSetLayeredWindow.c)
 *     xxxEnableMenuItem @ 0x1C0046FB0 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00473F8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00477F8 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxCalcClientRect @ 0x1C004A8A0 (xxxCalcClientRect.c)
 *     ComposeWindowIfNeeded @ 0x1C004C300 (ComposeWindowIfNeeded.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     xxxDoPaint @ 0x1C00534A8 (xxxDoPaint.c)
 *     xxxDispatchMessage @ 0x1C006AE54 (xxxDispatchMessage.c)
 *     xxxSimpleDoSyncPaint @ 0x1C006D840 (xxxSimpleDoSyncPaint.c)
 *     InternalInvalidate3 @ 0x1C0074764 (InternalInvalidate3.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     ClearHungFlag @ 0x1C007BEC8 (ClearHungFlag.c)
 *     xxxGetSystemMenu @ 0x1C00DC8C4 (xxxGetSystemMenu.c)
 *     UnsetLayeredWindow @ 0x1C00EF178 (UnsetLayeredWindow.c)
 *     xxxSetScrollBar @ 0x1C00F6058 (xxxSetScrollBar.c)
 *     xxxSetClassData @ 0x1C00FC29C (xxxSetClassData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncChildStyleChange(PVOID Object, __int64 a2, int a3, int a4)
{
  unsigned int v5; // ebx
  _OWORD v7[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v8; // [rsp+40h] [rbp-20h]
  int v9; // [rsp+48h] [rbp-18h]
  __int64 v10; // [rsp+4Ch] [rbp-14h]
  int v11; // [rsp+54h] [rbp-Ch]
  int v12; // [rsp+58h] [rbp-8h]

  v5 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    v12 = a4;
    v8 = 0LL;
    v10 = a2;
    memset(v7, 0, sizeof(v7));
    WORD2(v7[0]) = 0x8000;
    LODWORD(v7[0]) = 3932180;
    v9 = 1073741846;
    v11 = a3;
    v5 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(Object);
  }
  return v5;
}
