/*
 * XREFs of PiPnpRtlGetDeviceRelationsList @ 0x140851CF0
 * Callers:
 *     <none>
 * Callees:
 *     ZwPlugPlayControl @ 0x140414A70 (ZwPlugPlayControl.c)
 */

__int64 __fastcall PiPnpRtlGetDeviceRelationsList(
        __int64 a1,
        __int128 *a2,
        int a3,
        __int64 a4,
        int a5,
        _DWORD *a6,
        int a7)
{
  __int128 v7; // xmm0
  int v8; // eax
  unsigned int v9; // ecx
  int v11; // eax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+34h] [rbp-14h]
  __int64 v15; // [rsp+38h] [rbp-10h]

  if ( a2 && a6 && !a7 )
  {
    v7 = *a2;
    v13 = a3;
    v12 = v7;
    v15 = a4;
    v14 = a5;
    v8 = ZwPlugPlayControl(16LL, (__int64)&v12);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v11 = v14;
      *a6 = v14;
      if ( v11 )
        return v9;
    }
    else if ( v8 == -1073741789 )
    {
      *a6 = v14;
      return v9;
    }
    return (unsigned int)-1073741772;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
}
