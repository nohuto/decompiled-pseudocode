/*
 * XREFs of NtGdiScaleWindowExtEx @ 0x1C02C71D0
 * Callers:
 *     <none>
 * Callees:
 *     GreScaleWindowExtEx @ 0x1C02D22F4 (GreScaleWindowExtEx.c)
 */

__int64 __fastcall NtGdiScaleWindowExtEx(HDC a1, __int64 a2, __int64 a3, __int64 a4, int a5, ULONG64 a6)
{
  unsigned int v6; // r8d
  _QWORD *v7; // rdx
  __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  v6 = GreScaleWindowExtEx(a1, a5, (__int64)v9);
  if ( v6 )
  {
    v7 = (_QWORD *)a6;
    if ( a6 )
    {
      if ( a6 >= MmUserProbeAddress )
        v7 = (_QWORD *)MmUserProbeAddress;
      *v7 = v9[0];
    }
  }
  return v6;
}
