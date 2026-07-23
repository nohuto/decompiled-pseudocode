/*
 * XREFs of PpIrpQueryResourceRequirements @ 0x140750F18
 * Callers:
 *     IopQueryDeviceResources @ 0x14075062C (IopQueryDeviceResources.c)
 *     PiQueryResourceRequirements @ 0x140750D54 (PiQueryResourceRequirements.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     IopSynchronousCall @ 0x1406FA580 (IopSynchronousCall.c)
 */

__int64 __fastcall PpIrpQueryResourceRequirements(struct _DEVICE_OBJECT *a1, _QWORD *a2)
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
