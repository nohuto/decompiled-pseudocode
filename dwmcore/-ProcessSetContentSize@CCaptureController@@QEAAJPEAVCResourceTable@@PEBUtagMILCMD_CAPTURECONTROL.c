/*
 * XREFs of ?ProcessSetContentSize@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECONTROLLER_SETCONTENTSIZE@@@Z @ 0x18021D29C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureController::ProcessSetContentSize(
        CCaptureController *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURECONTROLLER_SETCONTENTSIZE *a3)
{
  __int64 *v4; // r8
  __int64 *v5; // rdx
  __int64 v6; // rcx
  float v7; // xmm0_4

  *((_DWORD *)this + 27) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 28) = *((_DWORD *)a3 + 3);
  v4 = (__int64 *)*((_QWORD *)this + 9);
  v5 = (__int64 *)*((_QWORD *)this + 8);
  while ( v5 != v4 )
  {
    v6 = *v5++;
    v7 = *((float *)this + 28);
    *(_DWORD *)(v6 + 104) = (int)*((float *)this + 27);
    *(_DWORD *)(v6 + 108) = (int)v7;
  }
  return 0LL;
}
