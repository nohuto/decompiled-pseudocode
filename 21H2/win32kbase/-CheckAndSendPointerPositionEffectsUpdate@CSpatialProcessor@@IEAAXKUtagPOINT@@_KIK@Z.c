/*
 * XREFs of ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C00CDE80
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C003880C (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C01D9608 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     ApiSetAddMagnificationOutputTransform @ 0x1C0034C6C (ApiSetAddMagnificationOutputTransform.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C003B6C4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     ?CheckAndUpdateLastPointerPositionEffectsTimestamp@CSpatialProcessor@@AEAA_N_K@Z @ 0x1C00CDFA8 (-CheckAndUpdateLastPointerPositionEffectsTimestamp@CSpatialProcessor@@AEAA_N_K@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

void __fastcall CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        CSpatialProcessor *this,
        int a2,
        struct tagPOINT a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  CInputThreadBase *v6; // rsi
  char *v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  _DWORD v16[104]; // [rsp+20h] [rbp-1B8h] BYREF

  v6 = gpInputThread;
  v11 = (char *)gpInputThread + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v11, 0LL);
  LODWORD(v6) = *((_DWORD *)v6 + 6);
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
  if ( (_DWORD)v6 == 2 )
  {
    v12 = *((_DWORD *)this + 6);
    if ( v12 == a2
      && (v12 != 2 || *((_DWORD *)this + 7) == a5)
      && CSpatialProcessor::CheckAndUpdateLastPointerPositionEffectsTimestamp(this, a4) )
    {
      memset(v16, 0, 0x198uLL);
      v16[6] = a6;
      v16[0] = 1;
      v16[2] = a2;
      *(struct tagPOINT *)&v16[3] = a3;
      v16[5] = a5;
      ApiSetAddMagnificationOutputTransform((__int64)&v16[3], v13, v14);
      InputExtensibilityCallout::CoreMsgSendMessage(v15, 5);
    }
  }
}
