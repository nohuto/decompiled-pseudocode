/*
 * XREFs of _PnpObjectRaiseDeleteEvent @ 0x14072E0A8
 * Callers:
 *     _CmRaiseDeleteEvent @ 0x14072E050 (_CmRaiseDeleteEvent.c)
 *     _PnpDeleteObjectDispatch @ 0x14097689C (_PnpDeleteObjectDispatch.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PnpObjectRaiseDeleteEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3))(__int64, __int64, __int64, __int64, __int64 *)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, __int64, __int64 *); // rax
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  __int128 v5; // [rsp+38h] [rbp-20h]

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(a1 + 496);
  v5 = 0LL;
  if ( result )
  {
    v4 = 0LL;
    return (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64 *))result(a1, a2, a3, 3LL, &v4);
  }
  return result;
}
