/*
 * XREFs of wistd::__function::__func__lambda_7b1707b3be53a3c4c7ad702f0f945c58__void___cdecl(void)_::__move @ 0x180224DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_7b1707b3be53a3c4c7ad702f0f945c58__void___cdecl_void__::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax
  __int64 *v3; // rcx
  __int64 *v4; // rdx

  *a2 = &off_180501030;
  result = *(_QWORD *)(a1 + 8);
  v3 = (__int64 *)(a1 + 16);
  a2[1] = result;
  v4 = a2 + 2;
  *v4 = 0LL;
  if ( v4 != v3 )
  {
    result = *v3;
    *v4 = *v3;
    *v3 = 0LL;
  }
  return result;
}
