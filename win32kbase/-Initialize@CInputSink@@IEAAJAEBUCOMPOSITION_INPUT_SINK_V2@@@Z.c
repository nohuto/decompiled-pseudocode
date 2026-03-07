__int64 __fastcall CInputSink::Initialize(struct IInputQueue **this, const struct COMPOSITION_INPUT_SINK_V2 *a2)
{
  const enum CompositionInputFlags *v3; // rbp
  int InputQueue; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  v3 = (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 288);
  InputQueue = CInputSink::CreateInputQueue(
                 (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 8),
                 (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 288),
                 this + 5);
  if ( InputQueue < 0
    || (InputQueue = CInputSink::CreateInputQueue(
                       (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 64),
                       v3,
                       this + 6),
        InputQueue < 0)
    || (InputQueue = CInputSink::CreateInputQueue(
                       (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 120),
                       v3,
                       this + 7),
        InputQueue < 0)
    || (InputQueue = CInputSink::CreateInputQueue(
                       (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 176),
                       v3,
                       this + 8),
        InputQueue < 0)
    || (InputQueue = CInputSink::CreateInputQueue(
                       (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a2 + 232),
                       v3,
                       this + 9),
        InputQueue < 0) )
  {
    CInputSink::InvalidateAndReleaseQueues((CInputSink *)this);
  }
  else
  {
    this[4] = (struct IInputQueue *)PsGetCurrentProcess(v7, v6, v8, v9);
    *((_DWORD *)this + 38) = *((_DWORD *)a2 + 1);
    *((_BYTE *)this + 24) = 1;
  }
  return (unsigned int)InputQueue;
}
