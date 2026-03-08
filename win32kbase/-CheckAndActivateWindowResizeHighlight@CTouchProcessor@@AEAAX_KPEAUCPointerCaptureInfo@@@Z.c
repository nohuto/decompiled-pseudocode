/*
 * XREFs of ?CheckAndActivateWindowResizeHighlight@CTouchProcessor@@AEAAX_KPEAUCPointerCaptureInfo@@@Z @ 0x1C01EB228
 * Callers:
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C02034BC (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C007CE44 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01F6280 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C0200BB4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C02070EC (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     IsTouchResizeActionSupported @ 0x1C0271F48 (IsTouchResizeActionSupported.c)
 */

void __fastcall CTouchProcessor::CheckAndActivateWindowResizeHighlight(
        struct _KTHREAD **this,
        unsigned __int64 a2,
        struct CPointerCaptureInfo *a3)
{
  int v6; // ebx
  CTouchProcessor *v7; // rcx
  unsigned int v8; // r14d
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v10; // rbx
  __int64 v11; // rax
  int v12; // ebx
  HWND WindowHandle; // rcx

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3815);
  v6 = *((_DWORD *)a3 + 32);
  if ( (unsigned int)(v6 - 10) <= 7 && *(_DWORD *)a3 == 1 )
  {
    if ( *((_DWORD *)a3 + 25) )
    {
      if ( (int)IsTouchResizeActionSupported() >= 0 )
      {
        v8 = v6 - 9;
        NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v7, a2);
        v10 = NonConstMsgData;
        if ( NonConstMsgData )
        {
          if ( (*((_DWORD *)NonConstMsgData + 9) & 0x10) != 0 )
          {
            v11 = CTouchProcessor::ReferenceFrame(this, *((unsigned int *)NonConstMsgData + 7));
            if ( v11 )
            {
              v12 = *(_DWORD *)(480LL * *((unsigned int *)v10 + 8) + *(_QWORD *)(v11 + 240) + 168);
              CTouchProcessor::UnreferenceFrame(this, v11);
              if ( v12 == 2 )
              {
                WindowHandle = CInputDest::GetWindowHandle((struct CPointerCaptureInfo *)((char *)a3 + 8));
                if ( qword_1C02D8008 )
                  qword_1C02D8008(WindowHandle, v8, 0LL);
                *((_DWORD *)a3 + 33) |= 1u;
              }
            }
          }
        }
      }
    }
  }
}
