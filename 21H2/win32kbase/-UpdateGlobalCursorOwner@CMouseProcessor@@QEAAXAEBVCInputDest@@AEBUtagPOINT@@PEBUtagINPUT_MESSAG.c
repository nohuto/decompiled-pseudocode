/*
 * XREFs of ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C004510C
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C004503C (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 *     UpdateGlobalCursorOwner @ 0x1C01AF550 (UpdateGlobalCursorOwner.c)
 * Callees:
 *     EtwTraceWakePump @ 0x1C0044E30 (EtwTraceWakePump.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0044FD0 (CoalesceInputSourceMouseMoves.c)
 *     ApiSetEditionUpdateCursorOnMouseMove @ 0x1C004527C (ApiSetEditionUpdateCursorOnMouseMove.c)
 *     ?OnGlobalCursorOwnerComputed@UpdatePointerGraphicDevice@CMouseProcessor@@QEAA_NXZ @ 0x1C00A5C14 (-OnGlobalCursorOwnerComputed@UpdatePointerGraphicDevice@CMouseProcessor@@QEAA_NXZ.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00A9560 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     IsPostIAMShellHookMessageExSupported @ 0x1C00AC040 (IsPostIAMShellHookMessageExSupported.c)
 *     IsSetPointerSupported @ 0x1C00C4C4C (IsSetPointerSupported.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // r8

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4985LL);
  if ( *((_DWORD *)a2 + 23) == 2 )
    v8 = (_QWORD *)*((_QWORD *)a2 + 10);
  else
    v8 = 0LL;
  if ( v8 )
  {
    updated = (_QWORD *)ApiSetEditionUpdateCursorOnMouseMove(v8, *a3);
    v10 = *(struct tagQ **)(v8[2] + 432LL);
    if ( v10 != gpqCursor )
    {
      if ( gpqCursor )
      {
        if ( *((_QWORD *)gpqCursor + 13) )
        {
          CoalesceInputSourceMouseMoves(gpqCursor, a4);
          EtwTraceWakePump(*(_QWORD *)(*((_QWORD *)gpqCursor + 13) + 16LL), 0LL, 0);
          *((_DWORD *)gpqCursor + 97) |= 0x20u;
          if ( qword_1C0257118 )
            qword_1C0257118(*(_QWORD *)(*((_QWORD *)gpqCursor + 13) + 16LL), 2LL, v12);
        }
        if ( updated && *updated != *v8 )
        {
          if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 && qword_1C0257B90 )
            qword_1C0257B90(v8[3], 39LL, *v8);
          v11 = updated[3];
          if ( (*(_DWORD *)(v11 + 48) & 0x5C0) != 0 )
          {
            CBaseProcessor::PostQEventWork(this, **(_QWORD **)(v11 + 184), 1LL);
            *(_DWORD *)(v11 + 48) &= 0xFFFFFA3F;
          }
        }
      }
      gpqCursor = v10;
      if ( qword_1C0257C00 )
        qword_1C0257C00();
      if ( CMouseProcessor::UpdatePointerGraphicDevice::OnGlobalCursorOwnerComputed((CMouseProcessor *)((char *)this + 3816))
        && (int)IsSetPointerSupported() >= 0 )
      {
        if ( qword_1C02575D8 )
          qword_1C02575D8(1LL);
      }
    }
  }
}
