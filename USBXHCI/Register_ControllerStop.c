/*
 * XREFs of Register_ControllerStop @ 0x1C000EEB0
 * Callers:
 *     Controller_D0Exit @ 0x1C000EE10 (Controller_D0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C00144B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Register_BiosHandoff @ 0x1C00186F0 (Register_BiosHandoff.c)
 *     Controller_InitiateRecovery @ 0x1C0033990 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0033D04 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C000A8E4 (Controller_IsControllerAccessible.c)
 *     XilRegister_ReadUlong @ 0x1C00180A0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C0018428 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Register_ControllerStop(__int64 a1)
{
  unsigned int v1; // edi
  __int64 *v3; // rsi
  __int64 v4; // rbx
  int Ulong; // eax
  int i; // r15d
  int v7; // edx
  union _LARGE_INTEGER Interval; // [rsp+70h] [rbp+8h] BYREF

  v1 = 0;
  Interval.QuadPart = 0LL;
  v3 = (__int64 *)(a1 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(*(_QWORD *)(*v3 + 72), 4, 6, 57, (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids);
  if ( Controller_IsControllerAccessible(*v3) )
  {
    v4 = *(_QWORD *)(a1 + 32);
    Ulong = XilRegister_ReadUlong(a1, v4);
    XilRegister_WriteUlong(a1, v4, Ulong & 0xFFFFFFFE);
    for ( i = 16; ; --i )
    {
      if ( (XilRegister_ReadUlong(a1, v4 + 4) & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 4;
          WPP_RECORDER_SF_dd(
            *(_QWORD *)(*v3 + 72),
            v7,
            6,
            58,
            (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids,
            16 - i,
            1);
        }
        return v1;
      }
      if ( !i )
        break;
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_d(*(_QWORD *)(*v3 + 72), v7, 6, 59, (__int64)&WPP_9becb08c9a963bf1570437ff97ef33f0_Traceguids, 16);
    }
    return (unsigned int)-1073741823;
  }
  return v1;
}
