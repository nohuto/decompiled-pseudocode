__int64 __fastcall CInputSink::CreateInputQueue(
        const struct COMPOSITION_INPUT_QUEUE *a1,
        const enum CompositionInputFlags *a2,
        struct IInputQueue **a3)
{
  unsigned int v3; // r9d
  unsigned int v5; // r11d
  struct IInputQueue *v6; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // r9
  __int64 v11; // rdx
  _OWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]
  struct IInputQueue *v14; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v5 = *(_DWORD *)a1;
  if ( !*(_DWORD *)a1 )
  {
    v6 = 0LL;
    if ( g_pInputManager )
      v6 = (CInputManager *)((char *)g_pInputManager + 88);
LABEL_4:
    *a3 = v6;
    return v3;
  }
  if ( v5 == 1 )
  {
    v6 = 0LL;
    if ( g_pInputManager )
      v6 = (CInputManager *)((char *)g_pInputManager + 96);
    goto LABEL_4;
  }
  if ( v5 == 2 || v5 == 3 )
  {
    v8 = *((_OWORD *)a1 + 1);
    v14 = 0LL;
    v9 = *((_OWORD *)a1 + 2);
    v10 = *(unsigned int *)a2;
    v11 = *((_QWORD *)a1 + 1);
    v12[0] = v8;
    v13 = *((_QWORD *)a1 + 6);
    v12[1] = v9;
    v3 = CInputQueue::Create(v5, v11, v12, v10, &v14);
    *a3 = v14;
  }
  else
  {
    if ( v5 == 4 )
      MicrosoftTelemetryAssertTriggeredMsgKM("Input delivery requires window", a2);
    return (unsigned int)-1073741811;
  }
  return v3;
}
