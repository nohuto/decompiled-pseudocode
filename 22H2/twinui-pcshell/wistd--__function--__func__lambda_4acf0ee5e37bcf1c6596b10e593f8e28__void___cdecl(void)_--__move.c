/*
 * XREFs of wistd::__function::__func__lambda_4acf0ee5e37bcf1c6596b10e593f8e28__void___cdecl(void)_::__move @ 0x180221610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func__lambda_4acf0ee5e37bcf1c6596b10e593f8e28__void___cdecl_void__::__move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 result; // rax
  __int64 *v3; // rcx
  __int64 *v4; // rdx

  *a2 = &off_180500FD8;
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
