/*
 * XREFs of PlugPlayGetDeviceStatus @ 0x14076F8F4
 * Callers:
 *     PiPnpRtlGetDeviceStatus @ 0x14076F8C0 (PiPnpRtlGetDeviceStatus.c)
 * Callees:
 *     ZwPlugPlayControl @ 0x140414A70 (ZwPlugPlayControl.c)
 */

__int64 __fastcall PlugPlayGetDeviceStatus(__int128 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  __int128 v8; // xmm0
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-30h] BYREF
  int v11; // [rsp+30h] [rbp-20h]
  int v12; // [rsp+34h] [rbp-1Ch]
  int v13; // [rsp+38h] [rbp-18h]
  int v14; // [rsp+3Ch] [rbp-14h]
  int v15; // [rsp+40h] [rbp-10h]
  int v16; // [rsp+44h] [rbp-Ch]

  if ( !a1 || !a2 || !a3 || !a4 )
    return 3221225485LL;
  v8 = *a1;
  v16 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v15 = 0;
  v10 = v8;
  v14 = a5;
  result = ZwPlugPlayControl(14LL, (__int64)&v10);
  if ( (int)result >= 0 )
  {
    *a2 = v12;
    *a3 = v13;
    *a4 = v15;
  }
  return result;
}
