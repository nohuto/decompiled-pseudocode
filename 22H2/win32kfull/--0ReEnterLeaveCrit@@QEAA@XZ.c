/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00E2FC0
 * Callers:
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C005B398 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     FreeDesktop @ 0x1C009C0D0 (FreeDesktop.c)
 *     DestroyWindowStation @ 0x1C00A84B0 (DestroyWindowStation.c)
 *     UserDetachQueueFromInputWindow @ 0x1C00A9568 (UserDetachQueueFromInputWindow.c)
 *     FreeWindowStation @ 0x1C00B91B0 (FreeWindowStation.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x1C00E28EC (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 *     UserJobCallout @ 0x1C00E2D70 (UserJobCallout.c)
 *     xxxProcessHidInput @ 0x1C014EB10 (xxxProcessHidInput.c)
 *     EditionIsUsermodeRIMAccessAllowed @ 0x1C01AC240 (EditionIsUsermodeRIMAccessAllowed.c)
 *     ?xxxUserBeep@@YAHKK_N@Z @ 0x1C01F902C (-xxxUserBeep@@YAHKK_N@Z.c)
 *     UserRedrawDesktop @ 0x1C0222E68 (UserRedrawDesktop.c)
 *     UserSetTimer @ 0x1C022CE98 (UserSetTimer.c)
 * Callees:
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(
        ReEnterLeaveCrit *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  PERESOURCE *v5; // rax

  v5 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(this, a2, a3, a4);
  if ( ExIsResourceAcquiredExclusiveLite(*v5) == 1 )
  {
    *(_BYTE *)this = 1;
  }
  else
  {
    *(_BYTE *)this = 0;
    EnterCrit(1LL, 0LL);
  }
  return this;
}
