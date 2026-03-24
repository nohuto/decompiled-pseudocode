/*
 * XREFs of _GetDC @ 0x1C00A3250
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     _GetDCEx @ 0x1C0038070 (_GetDCEx.c)
 */

__int64 __fastcall GetDC(_QWORD *a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax

  if ( a1 )
  {
    v1 = 0x10000;
    return GetDCEx(a1, 0LL, v1);
  }
  result = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456);
  if ( result )
  {
    v1 = 3;
    a1 = *(_QWORD **)(*(_QWORD *)(result + 8) + 24LL);
    return GetDCEx(a1, 0LL, v1);
  }
  return result;
}
