/*
 * XREFs of AttachInputDevices @ 0x1C0162F40
 * Callers:
 *     xxxRemoteReconnect @ 0x1C0161DA0 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AttachInputDevices(int a1)
{
  _QWORD *v1; // rcx
  __int64 v2; // rdx

  if ( a1 )
  {
    CBaseInput::HandleTSRequest(gpMouseSensor, 2LL);
    CBaseInput::HandleTSRequest(gpKeyboardSensor, 2LL);
    v1 = (_QWORD *)gpHidInput;
    v2 = 2LL;
  }
  else
  {
    gbPendRecreateTouchInjectionDevices = 1;
    CBaseInput::HandleTSRequest(gpMouseSensor, 0LL);
    v1 = (_QWORD *)gpKeyboardSensor;
    v2 = 0LL;
  }
  return CBaseInput::HandleTSRequest(*v1, v2);
}
