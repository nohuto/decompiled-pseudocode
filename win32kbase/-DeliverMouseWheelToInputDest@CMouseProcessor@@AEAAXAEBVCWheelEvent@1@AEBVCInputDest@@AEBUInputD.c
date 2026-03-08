/*
 * XREFs of ?DeliverMouseWheelToInputDest@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x1C022C35C
 * Callers:
 *     ?PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mouseCursorEvent@@@Z @ 0x1C022ED3C (-PostMouseInputMessage@CMouseProcessor@@QEAA_N_KW4_POST_MOUSE_INPUT_MESSAGE_OPTIONS@@PEAXPEAU_mo.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C023042C (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ApiSetEditionPostInputMessage @ 0x1C00072A4 (ApiSetEditionPostInputMessage.c)
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C007CFCC (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ @ 0x1C007D050 (-UsingInjectorUIPI@CMouseEvent@CMouseProcessor@@QEBA_NXZ.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C007D3DC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ @ 0x1C022DA70 (-GetWheelMessage@CWheelEvent@CMouseProcessor@@QEBAKXZ.c)
 */

void __fastcall CMouseProcessor::DeliverMouseWheelToInputDest(
        CMouseProcessor *this,
        const struct CMouseProcessor::CWheelEvent *a2,
        const struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4)
{
  __int64 v4; // rbx
  __int64 v8; // r8
  char v9; // al
  int v10; // r12d
  __int64 v11; // r8
  __int64 *v12; // r15
  __int64 v13; // r14
  int v14; // ebp
  __int64 v15; // r13
  int v16; // ebp
  unsigned int WheelMessage; // esi
  __int64 v18; // [rsp+60h] [rbp-58h] BYREF
  __int64 v19; // [rsp+68h] [rbp-50h]
  _QWORD v20[4]; // [rsp+70h] [rbp-48h] BYREF
  int v21; // [rsp+D0h] [rbp+18h]

  v4 = 0LL;
  if ( *(_DWORD *)a3 )
  {
    if ( !CMouseProcessor::BufferInputDestinedForContainer(this, a2, a3) )
    {
      v8 = *((_QWORD *)a2 + 1);
      v18 = *(_QWORD *)(v8 + 132);
      v20[0] = v8;
      v9 = CMouseProcessor::CMouseEvent::UsingInjectorUIPI(a2);
      v10 = *((_DWORD *)a4 + 2);
      v12 = (__int64 *)(v11 + 104);
      v13 = *(_QWORD *)a4;
      v20[2] = 0LL;
      v20[1] = (unsigned __int64)&v18 & -(__int64)(v9 != 0);
      v14 = *(unsigned __int16 *)(v11 + 30);
      v15 = *(unsigned int *)(v11 + 40);
      v19 = *(_QWORD *)(v11 + 88);
      v21 = *(_DWORD *)(v11 + 80);
      v16 = v14 << 16;
      WheelMessage = CMouseProcessor::CWheelEvent::GetWheelMessage(a2);
      if ( CInputDest::IsCompositionInput(a3) && *((_DWORD *)a3 + 23) == 2 )
        v4 = *((_QWORD *)a3 + 10);
      ApiSetEditionPostInputMessage((int)a3, v4, WheelMessage, v16, v13, v21, v19, v15, v10, v12, (__int64)v20);
    }
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4695);
  }
}
