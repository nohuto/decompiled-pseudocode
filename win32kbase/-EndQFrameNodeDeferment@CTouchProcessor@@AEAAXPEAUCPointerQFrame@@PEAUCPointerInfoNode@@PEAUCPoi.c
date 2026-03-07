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
