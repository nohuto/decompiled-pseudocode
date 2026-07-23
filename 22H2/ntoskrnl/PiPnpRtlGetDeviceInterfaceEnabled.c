/*
 * XREFs of PiPnpRtlGetDeviceInterfaceEnabled @ 0x140686B50
 * Callers:
 *     <none>
 * Callees:
 *     ZwPlugPlayControl @ 0x1403FC080 (ZwPlugPlayControl.c)
 */

NTSTATUS __fastcall PiPnpRtlGetDeviceInterfaceEnabled(__int64 a1, __int128 *a2, _BYTE *a3, int a4)
{
  __int128 v4; // xmm0
  NTSTATUS result; // eax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+34h] [rbp-14h]

  v4 = *a2;
  v9 = 0;
  v8 = a4;
  v7 = v4;
  result = ZwPlugPlayControl(PlugPlayControlGetDeviceInterfaceEnabled, &v7, 0x18u);
  *a3 = v9;
  return result;
}
