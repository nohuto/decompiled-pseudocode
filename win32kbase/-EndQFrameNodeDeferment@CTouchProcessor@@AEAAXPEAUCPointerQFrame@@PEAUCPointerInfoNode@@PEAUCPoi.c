/*
 * XREFs of ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C01F1344
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C01E9300 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C00F2C5A (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C01E34AC (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0200228 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0201654 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C0206D08 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C0207468 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C023E4B4 (ApiSetEditionGetInputDelegate.c)
 */

void __fastcall CTouchProcessor::EndQFrameNodeDeferment(
        struct _KTHREAD **this,
        struct CPointerQFrame *a2,
        struct CPointerInfoNode *a3,
        struct CPointerInputFrame *a4,
        unsigned __int64 a5)
{
  CTouchProcessor *v9; // rcx
  const struct CPointerInputFrame *v10; // rbx
  _OWORD v11[7]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v12[5]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v13; // [rsp+F0h] [rbp-10h]
  __int128 v14; // [rsp+100h] [rbp+0h]

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15658);
  v10 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a4);
  if ( *((_QWORD *)a2 + 1) != -1LL )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15662);
  *((_DWORD *)a3 + 1) &= ~0x100u;
  *((_DWORD *)a4 + 57) &= ~2u;
  *((_QWORD *)a2 + 1) = a5;
  CTouchProcessor::InitializeQFrameCoalesceState(v9, a2, v10 != 0LL);
  CInputDest::CInputDest(
    (CInputDest *)v12,
    *((struct tagWND *const *)gpKernelHandleTable + 3 * (unsigned __int16)*((_DWORD *)a3 + 48)));
  if ( HIDWORD(v13) )
  {
    v11[0] = v12[0];
    v11[2] = v12[2];
    v11[1] = v12[1];
    v11[4] = v12[4];
    v11[3] = v12[3];
    v11[6] = v14;
    v11[5] = v13;
    if ( ApiSetEditionGetInputDelegate(v11) )
      *(_DWORD *)a3 |= 0x100000u;
  }
  CTouchProcessor::ProcessQFrameNode((CTouchProcessor *)this, a2, v10, a3);
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, a4, v10, a2);
  if ( v10 )
    CTouchProcessor::UnreferenceFrameInt(this, v10);
  CInputDest::SetEmpty((CInputDest *)v12);
}
