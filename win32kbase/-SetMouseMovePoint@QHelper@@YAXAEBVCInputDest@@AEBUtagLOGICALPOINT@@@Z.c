/*
 * XREFs of ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C007CE9C
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C007D1C4 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C007CE78 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C007D35C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall QHelper::SetMouseMovePoint(
        QHelper *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3)
{
  __int64 Queue; // rbx

  Queue = CInputDest::GetQueue(this, 2LL);
  if ( Queue )
  {
    if ( (((unsigned __int16)(*((_DWORD *)a2 + 2) >> 8) ^ (unsigned __int16)((unsigned int)CInputDest::GetDpiAwarenessContext(this) >> 8)) & 0x1FF) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 493LL);
    *(_QWORD *)(Queue + 192) = *(_QWORD *)a2;
    *(_DWORD *)(Queue + 200) = *((_DWORD *)a2 + 2);
  }
}
