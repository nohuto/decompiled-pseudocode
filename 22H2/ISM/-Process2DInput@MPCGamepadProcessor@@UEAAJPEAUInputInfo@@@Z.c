/*
 * XREFs of ?Process2DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180193A60
 * Callers:
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180193AC0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z @ 0x180192344 (-ClearControllerProcessorState@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@_K@Z.c)
 */

__int64 __fastcall MPCGamepadProcessor::Process2DInput(MPCGamepadProcessor *this, struct InputInfo *a2)
{
  if ( *((_BYTE *)this + 5037) )
  {
    *((_BYTE *)this + 5037) = 0;
    MPCGamepadProcessor::ClearControllerProcessorState(
      (MPCGamepadProcessor *)((char *)this - 32),
      a2,
      *((_QWORD *)a2 + 4));
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 576) + 48LL))(
           *((_QWORD *)this + 576),
           a2);
}
