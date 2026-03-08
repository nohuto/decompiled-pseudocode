/*
 * XREFs of _PnpObjectRaiseCreateEvent @ 0x14087BCA8
 * Callers:
 *     _CmRaiseCreateEvent @ 0x14087BC44 (_CmRaiseCreateEvent.c)
 *     _PnpCreateObjectDispatch @ 0x140A61F24 (_PnpCreateObjectDispatch.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall PnpObjectRaiseCreateEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4))(__int64, __int64, __int64, __int64, __int64 *)
{
  __int64 (__fastcall *result)(__int64, __int64, __int64, __int64, __int64 *); // rax
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  __int128 v6; // [rsp+38h] [rbp-20h]

  result = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(a1 + 496);
  v6 = 0LL;
  if ( result )
  {
    v5 = a4;
    return (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64 *))result(a1, a2, a3, 2LL, &v5);
  }
  return result;
}
