/*
 * XREFs of ?PassedHoldTime@CTouchProcessor@@AEAAHK_K0@Z @ 0x1C01FC9AC
 * Callers:
 *     ?UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z @ 0x1C0209074 (-UpdateStateIndicator@CTouchProcessor@@QEAAXPEAUCInputPointerNode@@I_KUtagPOINT@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetGetPenHoldTime @ 0x1C02448CC (ApiSetGetPenHoldTime.c)
 *     ApiSetGetTouchHoldTime @ 0x1C0244A1C (ApiSetGetTouchHoldTime.c)
 */

union _LARGE_INTEGER __fastcall CTouchProcessor::PassedHoldTime(struct _KTHREAD **this, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  union _LARGE_INTEGER result; // rax
  unsigned __int64 v10; // rdx
  struct _KTHREAD *v11; // rsi
  bool v12; // cf
  bool v13; // zf

  v4 = 0;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8956);
  result = gliQpcFreq;
  if ( gliQpcFreq.QuadPart )
  {
    if ( (unsigned __int64)(gliQpcFreq.QuadPart - 1) > 0x7FFFFFFD )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8976);
    if ( !this[14] )
      this[14] = (struct _KTHREAD *)(gliQpcFreq.QuadPart * (unsigned int)ApiSetGetPenHoldTime() / 1000);
    v10 = (unsigned __int64)this[15];
    if ( !v10 )
    {
      v10 = gliQpcFreq.QuadPart * (unsigned int)ApiSetGetTouchHoldTime() / 1000;
      this[15] = (struct _KTHREAD *)v10;
    }
    v11 = (struct _KTHREAD *)(a4 - a3);
    if ( a2 == 3 )
    {
      v12 = v11 < this[14];
      v13 = v11 == this[14];
    }
    else
    {
      v12 = (unsigned __int64)v11 < v10;
      v13 = v11 == (struct _KTHREAD *)v10;
    }
    LOBYTE(v4) = !v12 && !v13;
    return (union _LARGE_INTEGER)v4;
  }
  return result;
}
