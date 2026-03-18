/*
 * XREFs of _GetDC @ 0x1C00BA400
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 */

__int64 __fastcall GetDC(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 v6; // rcx

  if ( a1 )
  {
    v4 = 0x10000LL;
    return GetDCEx(a1, 0LL, v4, a4);
  }
  v6 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456);
  if ( v6 )
  {
    v4 = 3LL;
    a1 = *(_QWORD **)(*(_QWORD *)(v6 + 8) + 24LL);
    return GetDCEx(a1, 0LL, v4, a4);
  }
  return 0LL;
}
