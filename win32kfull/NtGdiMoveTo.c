/*
 * XREFs of NtGdiMoveTo @ 0x1C02C6740
 * Callers:
 *     <none>
 * Callees:
 *     GreMoveTo @ 0x1C02AE384 (GreMoveTo.c)
 */

__int64 __fastcall NtGdiMoveTo(HDC a1, int a2, int a3, _QWORD *a4)
{
  unsigned int v5; // r8d
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[0] = 0LL;
  v5 = GreMoveTo(a1, a2, a3, v7);
  if ( v5 && a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_QWORD *)MmUserProbeAddress;
    *a4 = v7[0];
  }
  return v5;
}
