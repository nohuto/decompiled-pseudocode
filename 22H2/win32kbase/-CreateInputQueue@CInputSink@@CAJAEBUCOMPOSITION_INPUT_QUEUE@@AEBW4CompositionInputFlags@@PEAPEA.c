/*
 * XREFs of ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEAVIInputQueue@@@Z @ 0x1C00598A0
 * Callers:
 *     ?SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00596A4 (-SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?Initialize@CInputSink@@IEAAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x1C00597C0 (-Initialize@CInputSink@@IEAAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 * Callees:
 *     ?Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4CompositionInputFlags@@PEAPEAV1@@Z @ 0x1C0059944 (-Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4Compositi.c)
 */

__int64 __fastcall CInputSink::CreateInputQueue(
        const struct COMPOSITION_INPUT_QUEUE *a1,
        const enum CompositionInputFlags *a2,
        struct IInputQueue **a3)
{
  unsigned int v4; // r9d
  __int64 v7; // rcx
  struct IInputQueue *v8; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // r9
  __int64 v13; // rdx
  _OWORD v14[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]
  struct IInputQueue *v16; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  *a3 = 0LL;
  v7 = *(unsigned int *)a1;
  if ( !(_DWORD)v7 )
  {
    v8 = 0LL;
    if ( g_pInputManager )
      v8 = (CInputManager *)((char *)g_pInputManager + 88);
LABEL_4:
    *a3 = v8;
    return v4;
  }
  if ( (_DWORD)v7 == 1 )
  {
    v8 = 0LL;
    if ( g_pInputManager )
      v8 = (CInputManager *)((char *)g_pInputManager + 96);
    goto LABEL_4;
  }
  if ( (unsigned int)(v7 - 2) > 2 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v10 = *((_OWORD *)a1 + 1);
    v16 = 0LL;
    v11 = *((_OWORD *)a1 + 2);
    v12 = *(unsigned int *)a2;
    v14[0] = v10;
    *(_QWORD *)&v10 = *((_QWORD *)a1 + 6);
    v13 = *((_QWORD *)a1 + 1);
    v15 = v10;
    v14[1] = v11;
    v4 = CInputQueue::Create(v7, v13, v14, v12, &v16);
    *a3 = v16;
  }
  return v4;
}
