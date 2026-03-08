/*
 * XREFs of PopControlMonitor @ 0x140994D70
 * Callers:
 *     PopScreenOff @ 0x140995234 (PopScreenOff.c)
 *     PopScreenOn @ 0x140995280 (PopScreenOn.c)
 * Callees:
 *     PopInvokeWin32Callout @ 0x14073A52C (PopInvokeWin32Callout.c)
 *     TtmIsEnabled @ 0x14073C8BC (TtmIsEnabled.c)
 *     TtmSessionMonitorControl @ 0x1409A18A0 (TtmSessionMonitorControl.c)
 */

__int64 __fastcall PopControlMonitor(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // edi
  int v5; // [rsp+20h] [rbp-30h] BYREF
  char v6; // [rsp+24h] [rbp-2Ch]
  __int16 v7; // [rsp+25h] [rbp-2Bh]
  char v8; // [rsp+27h] [rbp-29h]
  __int64 v9; // [rsp+28h] [rbp-28h]
  unsigned int *v10; // [rsp+30h] [rbp-20h]
  __int64 v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+40h] [rbp-10h]
  int v13; // [rsp+68h] [rbp+18h] BYREF

  v13 = a2;
  v2 = a2;
  if ( TtmIsEnabled((__int64)a1, a2) )
    return TtmSessionMonitorControl(v2, a1[1], *a1);
  v7 = 0;
  v8 = 0;
  v11 = 0LL;
  v6 = 0;
  v12 = 0LL;
  v9 = 8LL;
  v5 = 3;
  v10 = a1;
  return PopInvokeWin32Callout(5u, (__int64)&v5, 1u, &v13);
}
