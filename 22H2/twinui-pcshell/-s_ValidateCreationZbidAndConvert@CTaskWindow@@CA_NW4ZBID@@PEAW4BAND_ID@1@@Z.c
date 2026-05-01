/*
 * XREFs of ?s_ValidateCreationZbidAndConvert@CTaskWindow@@CA_NW4ZBID@@PEAW4BAND_ID@1@@Z @ 0x1801F6620
 * Callers:
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18004B8B4 (-RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x1801F5DAC (-RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CTaskWindow::s_ValidateCreationZbidAndConvert(unsigned int a1, int *a2)
{
  int v2; // eax
  char v3; // r8
  int v4; // ecx

  *a2 = -1;
  if ( a1 != 1 && a1 != 8 )
  {
    if ( a1 > 0x10 )
      return 0;
    v2 = 73732;
    if ( !_bittest(&v2, a1) )
      return 0;
  }
  v3 = 1;
  if ( a1 == 1 )
  {
    v4 = 5;
  }
  else if ( a1 == 13 )
  {
    v4 = 4;
  }
  else
  {
    v4 = a1 - 8;
  }
  *a2 = v4;
  return v3;
}
