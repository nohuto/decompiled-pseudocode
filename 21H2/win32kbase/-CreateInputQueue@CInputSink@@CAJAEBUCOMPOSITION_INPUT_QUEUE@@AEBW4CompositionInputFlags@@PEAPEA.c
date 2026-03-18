/*
 * XREFs of ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEAVIInputQueue@@@Z @ 0x1C0096628
 * Callers:
 *     ?SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C009642C (-SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?Initialize@CInputSink@@IEAAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x1C0096548 (-Initialize@CInputSink@@IEAAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 * Callees:
 *     ?Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4CompositionInputFlags@@PEAPEAV1@@Z @ 0x1C00966C4 (-Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4Compositi.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0241304 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall CInputSink::CreateInputQueue(
        const struct COMPOSITION_INPUT_QUEUE *a1,
        const enum CompositionInputFlags *a2,
        struct IInputQueue **a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int64 v9; // r9
  __int128 v10; // xmm1
  __int64 v11; // rdx
  struct IInputQueue *v12; // rcx
  _OWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]
  struct IInputQueue *v15; // [rsp+70h] [rbp+8h] BYREF

  result = 0LL;
  *a3 = 0LL;
  v7 = *(unsigned int *)a1;
  if ( !(_DWORD)v7 )
  {
    v12 = 0LL;
    if ( g_pInputManager )
      v12 = (CInputManager *)((char *)g_pInputManager + 88);
    goto LABEL_6;
  }
  if ( (_DWORD)v7 == 1 )
  {
    v12 = 0LL;
    if ( g_pInputManager )
      v12 = (CInputManager *)((char *)g_pInputManager + 96);
    goto LABEL_6;
  }
  if ( (int)v7 > 1 )
  {
    if ( (int)v7 <= 3 )
    {
      v8 = *((_OWORD *)a1 + 1);
      v9 = *(unsigned int *)a2;
      v10 = *((_OWORD *)a1 + 2);
      v15 = 0LL;
      v13[0] = v8;
      *(_QWORD *)&v8 = *((_QWORD *)a1 + 6);
      v11 = *((_QWORD *)a1 + 1);
      v14 = v8;
      v13[1] = v10;
      result = CInputQueue::Create(v7, v11, v13, v9, &v15);
      v12 = v15;
LABEL_6:
      *a3 = v12;
      return result;
    }
    if ( (_DWORD)v7 == 4 )
      MicrosoftTelemetryAssertTriggeredMsgKM("Input delivery requires window", a1, a2);
  }
  return 3221225485LL;
}
