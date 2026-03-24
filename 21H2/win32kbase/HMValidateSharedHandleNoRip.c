/*
 * XREFs of HMValidateSharedHandleNoRip @ 0x1C00B3EE8
 * Callers:
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0033788 (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0070250 (TransformRectBetweenCoordinateSpaces.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C0087170 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C009E2B8 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C015C02C (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C0160150 (RIMVirtCreatePointerDeviceInfo.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0163ED8 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0167958 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0031C90 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

__int64 __fastcall HMValidateSharedHandleNoRip(unsigned __int64 a1)
{
  __int64 v2; // rbx
  char *v3; // rsi
  __int64 v4; // rcx
  _QWORD *v5; // r14
  unsigned __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  if ( (unsigned __int64)(unsigned __int16)a1 < *((_QWORD *)gpsi + 1) )
  {
    v3 = (char *)qword_1C024FD58 + (unsigned int)(unsigned __int16)a1 * dword_1C024FD60;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)&v9);
    v5 = gpKernelHandleTable;
    v6 = a1 >> 16;
    v7 = 3LL * (unsigned int)((v3 - (char *)qword_1C024FD58) >> 5);
    if ( ((_WORD)v6 == *((_WORD *)v3 + 13) || (_WORD)v6 == 0xFFFF || !(_WORD)v6 && PsGetCurrentProcessWow64Process(v4))
      && (v3[25] & 1) == 0
      && v3[24] == 12 )
    {
      return v5[v7];
    }
  }
  return v2;
}
