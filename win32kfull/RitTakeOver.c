__int64 __fastcall RitTakeOver(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rax

  v1 = SGDGetUserSessionState(a1);
  if ( (int)CBaseInput::InitializeSensor(*(CBaseInput **)(v1 + 16840)) >= 0 )
  {
    v3 = SGDGetUserSessionState(v2);
    CBaseInput::Read(*(CBaseInput **)(v3 + 16840));
  }
  EtwTraceRitReEngaged();
  ZwSetEvent(WPP_MAIN_CB.Dpc.DeferredRoutine, 0LL);
  return 1LL;
}
