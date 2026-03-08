/*
 * XREFs of Interrupter_Create @ 0x1C006FDC8
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C006FA60 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0018458 (WPP_RECORDER_SF_d.c)
 *     Interrupter_CreateInterrupter @ 0x1C0070198 (Interrupter_CreateInterrupter.c)
 */

__int64 __fastcall Interrupter_Create(int a1, __int64 a2, _QWORD *a3)
{
  int v5; // edx
  int Interrupter; // ebx
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v9[0] = 0LL;
  v10 = 0LL;
  Interrupter = Interrupter_CreateInterrupter(a1, a2, 0, 0, 0LL, (__int64)v9, (__int64)&v10);
  if ( Interrupter < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a2 + 72),
        v5,
        9,
        10,
        (__int64)&WPP_89e87cee83d7332425398286600bed19_Traceguids,
        Interrupter);
    }
  }
  else
  {
    v7 = v10;
    *(_QWORD *)(v10 + 40) = v9[0];
    *(_DWORD *)(v7 + 64) = -1;
    *a3 = v7;
  }
  return (unsigned int)Interrupter;
}
