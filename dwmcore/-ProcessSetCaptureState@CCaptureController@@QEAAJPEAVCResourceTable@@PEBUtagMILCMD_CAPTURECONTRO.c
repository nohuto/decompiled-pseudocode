/*
 * XREFs of ?ProcessSetCaptureState@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECONTROLLER_SETCAPTURESTATE@@@Z @ 0x18021D26C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureController::ProcessSetCaptureState(
        CCaptureController *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURECONTROLLER_SETCAPTURESTATE *a3)
{
  __int64 *v3; // r9
  __int64 *i; // r8
  __int64 v5; // rdx

  *((_BYTE *)this + 104) = *((_BYTE *)a3 + 8);
  v3 = (__int64 *)*((_QWORD *)this + 9);
  for ( i = (__int64 *)*((_QWORD *)this + 8); i != v3; ++i )
  {
    v5 = *i;
    *(_BYTE *)(v5 + 1896) = *((_BYTE *)this + 104);
  }
  return 0LL;
}
