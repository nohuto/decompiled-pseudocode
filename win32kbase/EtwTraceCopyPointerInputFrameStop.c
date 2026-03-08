/*
 * XREFs of EtwTraceCopyPointerInputFrameStop @ 0x1C0161D80
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C020D558 (-CreateGestureCache@CPTPProcessor@@AEAAPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00EDED8 (McTemplateK0_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall EtwTraceCopyPointerInputFrameStop(__int64 a1)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x100000000LL) != 0 )
    return McTemplateK0_EtwWriteTransfer(a1, &CopyPointerInputFrameStop, &W32kControlGuid);
  return result;
}
