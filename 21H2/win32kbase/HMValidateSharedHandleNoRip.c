/*
 * XREFs of HMValidateSharedHandleNoRip @ 0x1C008F240
 * Callers:
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C0044884 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C006D5A0 (TransformRectBetweenCoordinateSpaces.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0087E94 (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C009A220 (GuessMonitorOverrideForCoordinateConversions.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0196000 (RIMVirtCreatePointerDeviceInfo.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C01979CC (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C019B9FC (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMValidateSharedHandleNoRip(int a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // r14
  char *v3; // rdi
  __int64 v4; // rsi
  __int16 v5; // r8

  v1 = 0LL;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v2 = gpKernelHandleTable;
    v3 = (char *)qword_1C0294B68 + (unsigned int)(unsigned __int16)a1 * dword_1C0294B70;
    v4 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C0294B70) >> 5);
    v5 = HIWORD(a1) & 0x7FFF;
    if ( ((HIWORD(a1) & 0x7FFF) == *((_WORD *)v3 + 13) || v5 == 0x7FFF || !v5 && PsGetCurrentProcessWow64Process())
      && (v3[25] & 1) == 0
      && v3[24] == 12 )
    {
      return v2[v4];
    }
  }
  return v1;
}
