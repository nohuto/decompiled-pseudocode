/*
 * XREFs of PpIrpQueryResourceRequirements @ 0x1406F6D48
 * Callers:
 *     IopQueryDeviceResources @ 0x1406F6440 (IopQueryDeviceResources.c)
 *     PiQueryResourceRequirements @ 0x1406F6B60 (PiQueryResourceRequirements.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     IopSynchronousCall @ 0x14069DD78 (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryResourceRequirements(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  _WORD v5[44]; // [rsp+30h] [rbp-58h] BYREF

  *a2 = 0LL;
  memset(v5, 0, 0x48uLL);
  v5[0] = 2843;
  result = IopSynchronousCall(a1, (__int64)v5, -1073741637, 0LL, a2);
  if ( (int)result < 0 )
  {
    *a2 = 0LL;
  }
  else if ( !*a2 )
  {
    return 3221225659LL;
  }
  return result;
}
