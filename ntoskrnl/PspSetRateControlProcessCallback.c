/*
 * XREFs of PspSetRateControlProcessCallback @ 0x1409B03D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PspSetRateControlProcessCallback(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v2)(__int64, _QWORD); // r8
  __int64 result; // rax

  v2 = *(__int64 (__fastcall **)(__int64, _QWORD))(a2 + 8);
  result = 0LL;
  if ( v2 )
    return v2(a1, *(_QWORD *)(a2 + 16));
  return result;
}
