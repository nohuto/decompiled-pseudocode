/*
 * XREFs of ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C0045E10
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0045EF8 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     QHelper::_anonymous_namespace_::GetQ @ 0x1C00458F4 (QHelper--_anonymous_namespace_--GetQ.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0045ED4 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall QHelper::SetMouseMovePoint(
        QHelper *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3)
{
  __int64 v5; // rdi
  unsigned int DpiAwarenessContext; // eax
  unsigned int v7; // r8d
  char v8; // al
  int v9; // r8d
  int v10; // r9d
  char v11; // r10
  int v12; // edx
  int v13; // r11d
  int v14; // ecx
  unsigned int v15; // eax

  v5 = QHelper::_anonymous_namespace_::GetQ((__int64)this);
  if ( v5 )
  {
    DpiAwarenessContext = CInputDest::GetDpiAwarenessContext(this);
    if ( (((unsigned __int16)(v7 >> 8) ^ (unsigned __int16)(DpiAwarenessContext >> 8)) & 0x1FF) != 0 )
      goto LABEL_14;
    v8 = CInputDest::GetDpiAwarenessContext(this);
    v12 = v10 + 1;
    v13 = 0x20000000;
    if ( (v8 & 0xF) != v11 || (v15 = CInputDest::GetDpiAwarenessContext(this), v14 = v12, (v15 & v13) == 0) )
      v14 = v10;
    if ( (v9 & 0xF) != v11 || (v9 & v13) == 0 )
      v12 = v10;
    if ( v14 != v12 )
LABEL_14:
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 544LL);
    *(_QWORD *)(v5 + 184) = *(_QWORD *)a2;
    *(_DWORD *)(v5 + 192) = *((_DWORD *)a2 + 2);
  }
}
