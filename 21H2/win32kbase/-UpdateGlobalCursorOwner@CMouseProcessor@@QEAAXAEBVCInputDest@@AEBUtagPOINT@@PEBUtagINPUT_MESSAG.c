/*
 * XREFs of ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0033B48
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0033DD0 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     UpdateGlobalCursorOwner @ 0x1C00E90D0 (UpdateGlobalCursorOwner.c)
 * Callees:
 *     ApiSetEditionUpdateCursorOnMouseMove @ 0x1C0033CB0 (ApiSetEditionUpdateCursorOnMouseMove.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0033E80 (CoalesceInputSourceMouseMoves.c)
 *     EtwTraceWakePump @ 0x1C0034380 (EtwTraceWakePump.c)
 *     IsPostIAMShellHookMessageExSupported @ 0x1C005D988 (IsPostIAMShellHookMessageExSupported.c)
 *     ?OnGlobalCursorOwnerComputed@UpdatePointerGraphicDevice@CMouseProcessor@@QEAA_NXZ @ 0x1C00B7730 (-OnGlobalCursorOwnerComputed@UpdatePointerGraphicDevice@CMouseProcessor@@QEAA_NXZ.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00BC62C (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     IsSetPointerSupported @ 0x1C00D440C (IsSetPointerSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::UpdateGlobalCursorOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagPOINT *a3,
        const struct tagINPUT_MESSAGE_SOURCE *a4)
{
  _QWORD *v7; // rbx
  _QWORD *updated; // rdi
  struct tagQ *v9; // rsi
  __int64 v10; // rbx

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 23) == 2 )
  {
    v7 = (_QWORD *)*((_QWORD *)a2 + 10);
    if ( v7 )
    {
      updated = (_QWORD *)ApiSetEditionUpdateCursorOnMouseMove(v7, *a3);
      v9 = *(struct tagQ **)(v7[2] + 432LL);
      if ( v9 != gpqCursor )
      {
        if ( gpqCursor )
        {
          if ( *((_QWORD *)gpqCursor + 13) )
          {
            CoalesceInputSourceMouseMoves(gpqCursor);
            EtwTraceWakePump(*(_QWORD *)(*((_QWORD *)gpqCursor + 13) + 16LL), 0LL, 512LL);
            *((_DWORD *)gpqCursor + 97) |= 0x20u;
            if ( qword_1C029BE58 )
              qword_1C029BE58(*(_QWORD *)(*((_QWORD *)gpqCursor + 13) + 16LL), 2LL);
          }
          if ( updated && *updated != *v7 )
          {
            if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 && qword_1C029C8D0 )
              qword_1C029C8D0(v7[3], 39LL, *v7);
            v10 = updated[3];
            if ( (*(_DWORD *)(v10 + 48) & 0x5C0) != 0 )
            {
              CBaseProcessor::PostQEventWork(1472LL, **(_QWORD **)(v10 + 184), 1LL);
              *(_DWORD *)(v10 + 48) &= 0xFFFFFA3F;
            }
          }
        }
        gpqCursor = v9;
        if ( qword_1C029C940 )
          qword_1C029C940();
        if ( CMouseProcessor::UpdatePointerGraphicDevice::OnGlobalCursorOwnerComputed((CMouseProcessor *)((char *)this + 3824))
          && (int)IsSetPointerSupported() >= 0 )
        {
          if ( qword_1C029C318 )
            qword_1C029C318(1LL);
        }
      }
    }
  }
}
