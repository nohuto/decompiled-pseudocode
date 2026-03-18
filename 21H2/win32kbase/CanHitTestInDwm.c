/*
 * XREFs of CanHitTestInDwm @ 0x1C00358C0
 * Callers:
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C00356F8 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C01D7DEC (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 */

char CanHitTestInDwm()
{
  CInputThreadBase *v0; // rdi
  char *v1; // rbx
  char result; // al

  if ( gbNoMoreDITHitTest )
    return 0;
  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
    return 0;
  v0 = gpInputThread;
  v1 = (char *)gpInputThread + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  LODWORD(v0) = *((_DWORD *)v0 + 6);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( (_DWORD)v0 != 2 )
    return 0;
  result = 1;
  if ( (*((_DWORD *)gptiCurrent + 122) & 1) != 0 )
    return 0;
  return result;
}
