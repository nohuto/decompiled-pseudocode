/*
 * XREFs of ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00575D0
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0057458 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     UpdateGlobalCursorOwner @ 0x1C00E5C20 (UpdateGlobalCursorOwner.c)
 * Callees:
 *     IsPostIAMShellHookMessageExSupported @ 0x1C0013E0C (IsPostIAMShellHookMessageExSupported.c)
 *     EtwTraceWakePump @ 0x1C00573C0 (EtwTraceWakePump.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0057400 (CoalesceInputSourceMouseMoves.c)
 *     ApiSetEditionUpdateCursorOnMouseMove @ 0x1C0057738 (ApiSetEditionUpdateCursorOnMouseMove.c)
 *     ?OnGlobalCursorOwnerComputed@UpdatePointerGraphicDevice@CMouseProcessor@@QEAA_NXZ @ 0x1C00B5E68 (-OnGlobalCursorOwnerComputed@UpdatePointerGraphicDevice@CMouseProcessor@@QEAA_NXZ.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00BCDF0 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     IsSetPointerSupported @ 0x1C00CC610 (IsSetPointerSupported.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMouseProcessor::UpdateGlobalCursorOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagPOINT *a3,
        const struct tagINPUT_MESSAGE_SOURCE *a4)
{
  _QWORD *v8; // rbx
  _QWORD *updated; // rdi
  struct tagQ *v10; // rsi
  __int64 v11; // rbx

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5160LL);
  if ( *((_DWORD *)a2 + 23) == 2 )
  {
    v8 = (_QWORD *)*((_QWORD *)a2 + 10);
    if ( v8 )
    {
      updated = (_QWORD *)ApiSetEditionUpdateCursorOnMouseMove(v8, *a3);
      v10 = *(struct tagQ **)(v8[2] + 432LL);
      if ( v10 != gpqCursor )
      {
        if ( gpqCursor )
        {
          if ( *((_QWORD *)gpqCursor + 14) )
          {
            CoalesceInputSourceMouseMoves(gpqCursor, a4);
            EtwTraceWakePump(*(_QWORD *)(*((_QWORD *)gpqCursor + 14) + 16LL), 0LL, 0);
            *((_DWORD *)gpqCursor + 99) |= 0x20u;
            if ( qword_1C0295588 )
              qword_1C0295588(*(_QWORD *)(*((_QWORD *)gpqCursor + 14) + 16LL), 2LL);
          }
          if ( updated && *updated != *v8 )
          {
            if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 && qword_1C0295FA0 )
              qword_1C0295FA0(v8[3], 39LL, *v8);
            v11 = updated[3];
            if ( (*(_DWORD *)(v11 + 48) & 0xDC0) != 0 )
            {
              CBaseProcessor::PostQEventWork(3520LL, **(_QWORD **)(v11 + 192), 1LL);
              *(_DWORD *)(v11 + 48) &= 0xFFFFF23F;
            }
          }
        }
        gpqCursor = v10;
        if ( qword_1C0296010 )
          qword_1C0296010();
        if ( CMouseProcessor::UpdatePointerGraphicDevice::OnGlobalCursorOwnerComputed((CMouseProcessor *)((char *)this + 3824))
          && (int)IsSetPointerSupported() >= 0 )
        {
          if ( qword_1C02959E8 )
            qword_1C02959E8(1LL);
        }
      }
    }
  }
}
