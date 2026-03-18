/*
 * XREFs of ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C01C54CC
 * Callers:
 *     ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C01BDF70 (-AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC990 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z @ 0x1C00E859A (-InitializeQFrameCoalesceState@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@H@Z.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C01B8C2C (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01D288C (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01D39D4 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01D82D4 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C0207E2C (ApiSetEditionGetInputDelegate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::EndQFrameNodeDeferment(
        struct _KTHREAD **this,
        struct CPointerQFrame *a2,
        struct CPointerInfoNode *a3,
        struct CPointerInputFrame *a4,
        CTouchProcessor *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  const struct CPointerInputFrame *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r8
  _OWORD v14[7]; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v15[5]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v16; // [rsp+E0h] [rbp-20h]
  __int128 v17; // [rsp+F0h] [rbp-10h]

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v11 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, a4);
  if ( *((_QWORD *)a2 + 1) != -1LL )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12);
  *((_DWORD *)a3 + 1) &= ~0x100u;
  *((_DWORD *)a4 + 57) &= ~2u;
  *((_QWORD *)a2 + 1) = a5;
  CTouchProcessor::InitializeQFrameCoalesceState(a5, a2, v11 != 0LL);
  CInputDest::CInputDest(
    (CInputDest *)v15,
    *((struct tagWND *const *)gpKernelHandleTable + 3 * (unsigned __int16)*((_DWORD *)a3 + 48)));
  if ( HIDWORD(v16) )
  {
    v14[0] = v15[0];
    v14[2] = v15[2];
    v14[1] = v15[1];
    v14[4] = v15[4];
    v14[3] = v15[3];
    v14[6] = v17;
    v14[5] = v16;
    if ( ApiSetEditionGetInputDelegate(v14) )
      *(_DWORD *)a3 |= 0x100000u;
  }
  CTouchProcessor::ProcessQFrameNode((CTouchProcessor *)this, a2, v11, a3);
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, a4, v11, a2);
  if ( v11 )
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, (__int64)v11, v13);
  CInputDest::SetEmpty((CInputDest *)v15);
}
