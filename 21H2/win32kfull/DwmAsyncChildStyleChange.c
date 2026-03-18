/*
 * XREFs of DwmAsyncChildStyleChange @ 0x1C006986C
 * Callers:
 *     ComposeWindowIfNeeded @ 0x1C00202CC (ComposeWindowIfNeeded.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0068C00 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 *     DecomposeWindowIfNeeded @ 0x1C00B3750 (DecomposeWindowIfNeeded.c)
 *     ComposeWindow @ 0x1C00B37D8 (ComposeWindow.c)
 *     UnsetLayeredWindow @ 0x1C00B3964 (UnsetLayeredWindow.c)
 *     xxxGetSystemMenu @ 0x1C00BC098 (xxxGetSystemMenu.c)
 *     xxxEnableMenuItem @ 0x1C00BC4A0 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00C20C0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxSetClassData @ 0x1C0115230 (xxxSetClassData.c)
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
