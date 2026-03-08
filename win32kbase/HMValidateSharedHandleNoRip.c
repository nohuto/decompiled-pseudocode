/*
 * XREFs of HMValidateSharedHandleNoRip @ 0x1C0247060
 * Callers:
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C0009E00 (GuessMonitorOverrideForCoordinateConversions.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00152E0 (TransformRectBetweenCoordinateSpaces.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C009C380 (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C01BA8B0 (RIMVirtCreatePointerDeviceInfo.c)
 *     rimInUserCritCreatePointerDeviceInfo @ 0x1C01BC3D8 (rimInUserCritCreatePointerDeviceInfo.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C01BCC8C (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01C21B8 (RIMIDECreatePointerDeviceInfo.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C022DC78 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMValidateSharedHandleNoRip(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // r14
  char *v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 v10; // r8

  v5 = 0LL;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v6 = dword_1C02D0E10 * (unsigned int)(unsigned __int16)a1;
    v7 = gpKernelHandleTable;
    v10 = a1 >> 16;
    v8 = (char *)qword_1C02D0E08 + (unsigned int)v6;
    v9 = 3 * ((__int64)(unsigned int)v6 >> 5);
    LOWORD(v10) = v10 & 0x7FFF;
    if ( ((_WORD)v10 == *((_WORD *)v8 + 13)
       || (_WORD)v10 == 0x7FFF
       || !(_WORD)v10 && PsGetCurrentProcessWow64Process(v6, a2, v10, a4))
      && (v8[25] & 1) == 0
      && v8[24] == 12 )
    {
      return v7[v9];
    }
  }
  return v5;
}
