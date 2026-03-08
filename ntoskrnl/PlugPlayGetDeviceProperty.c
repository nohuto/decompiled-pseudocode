/*
 * XREFs of PlugPlayGetDeviceProperty @ 0x140783CF0
 * Callers:
 *     PiPnpRtlGetDeviceNtPropertyRoutine @ 0x140783CB0 (PiPnpRtlGetDeviceNtPropertyRoutine.c)
 * Callees:
 *     ZwPlugPlayControl @ 0x140414A70 (ZwPlugPlayControl.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall PlugPlayGetDeviceProperty(
        __int128 *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        int a6)
{
  __int128 v8; // xmm0
  int v9; // esi
  unsigned int v10; // ecx
  __int128 v12; // [rsp+20h] [rbp-30h] BYREF
  int v13; // [rsp+30h] [rbp-20h]
  int v14; // [rsp+34h] [rbp-1Ch]
  __int64 v15; // [rsp+38h] [rbp-18h]
  unsigned int v16; // [rsp+40h] [rbp-10h]
  int v17; // [rsp+44h] [rbp-Ch]

  if ( a1 && a5 && !a6 )
  {
    v8 = *a1;
    v14 = 0;
    v17 = 0;
    v15 = a3;
    v13 = a2;
    v12 = v8;
    v16 = a4;
    v9 = ZwPlugPlayControl(10LL, (__int64)&v12);
    if ( v9 < 0 )
    {
      if ( v9 != -1073741789 )
      {
        *a5 = 0;
        return (unsigned int)v9;
      }
    }
    else
    {
      v10 = v16;
      if ( a4 <= v16 )
      {
LABEL_6:
        *a5 = v10;
        return (unsigned int)v9;
      }
      memset((void *)(a3 + v16), 0, a4 - v16);
    }
    v10 = v16;
    goto LABEL_6;
  }
  return 3221225485LL;
}
