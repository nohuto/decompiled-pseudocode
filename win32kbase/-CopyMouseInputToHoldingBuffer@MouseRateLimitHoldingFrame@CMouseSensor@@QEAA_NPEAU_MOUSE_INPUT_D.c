/*
 * XREFs of ?CopyMouseInputToHoldingBuffer@MouseRateLimitHoldingFrame@CMouseSensor@@QEAA_NPEAU_MOUSE_INPUT_DATA@@K_J@Z @ 0x1C00F3A02
 * Callers:
 *     ?ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00F3D88 (-ProcessInputWithRateLimitingIfEnabled@CMouseSensor@@AEAAJPEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CMouseSensor::MouseRateLimitHoldingFrame::CopyMouseInputToHoldingBuffer(
        CMouseSensor::MouseRateLimitHoldingFrame *this,
        struct _MOUSE_INPUT_DATA *a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v5; // r14
  unsigned __int16 v8; // r9
  unsigned __int8 v9; // r8
  struct _MOUSE_INPUT_DATA *v10; // r10
  struct _MOUSE_INPUT_DATA *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  bool v14; // zf
  __int64 result; // rax

  v5 = a3;
  if ( a3 / 0x18 > 0x10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 430);
  v8 = *((_WORD *)this + 204);
  v9 = 0;
  if ( a2 )
  {
    v10 = (struct _MOUSE_INPUT_DATA *)((char *)a2 + v5);
    do
    {
      v11 = (struct _MOUSE_INPUT_DATA *)((unsigned __int64)&a2[1] & -(__int64)(&a2[1] < v10));
      v12 = ++v8;
      v13 = 3 * v12;
      *(_OWORD *)((char *)this + 8 * v13) = *(_OWORD *)&a2->UnitId;
      *((_QWORD *)this + v13 + 2) = *(_QWORD *)&a2->LastY;
      v14 = a2->ButtonFlags == 0;
      a2 = v11;
      if ( !v14 )
        v9 = 1;
    }
    while ( v11 );
  }
  result = v9;
  if ( *((__int64 *)this + 1) <= 0 )
    result = 1LL;
  *((_WORD *)this + 204) = v8;
  if ( a4 - *((_QWORD *)this + 55) > *((_QWORD *)this + 2) )
    return 1LL;
  return result;
}
