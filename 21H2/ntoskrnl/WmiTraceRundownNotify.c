/*
 * XREFs of WmiTraceRundownNotify @ 0x1407C1A64
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14079763C (EtwpKernelTraceRundown.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1407987F8 (EtwpUpdateFileInfoDriverState.c)
 *     EtwpLogFileNameRundown @ 0x14093DD5C (EtwpLogFileNameRundown.c)
 * Callees:
 *     WmipBuildTraceDeviceList @ 0x1403C6010 (WmipBuildTraceDeviceList.c)
 *     WmipFreeTraceDeviceList @ 0x1407C1B00 (WmipFreeTraceDeviceList.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1407C1B54 (WmipSendWmiIrpToTraceDeviceList.c)
 */

__int64 __fastcall WmiTraceRundownNotify(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 v3; // r8
  _DWORD v5[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v6; // [rsp+38h] [rbp-18h]
  __int64 v7; // [rsp+40h] [rbp-10h]
  PVOID P; // [rsp+60h] [rbp+10h] BYREF
  unsigned int v9; // [rsp+70h] [rbp+20h] BYREF

  v6 = a1;
  v5[1] = a2;
  P = 0LL;
  v9 = 0;
  v7 = 0x400000LL;
  v5[0] = 2;
  v2 = WmipBuildTraceDeviceList(0x400000, &P, &v9);
  if ( v2 >= 0 )
  {
    LOBYTE(v3) = 12;
    v2 = WmipSendWmiIrpToTraceDeviceList(P, v9, v3, 24LL, v5);
    if ( v2 >= 0 )
      v2 = 0;
  }
  if ( P )
    WmipFreeTraceDeviceList(P);
  return (unsigned int)v2;
}
