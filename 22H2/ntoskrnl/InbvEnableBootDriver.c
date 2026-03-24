/*
 * XREFs of InbvEnableBootDriver @ 0x1404FEBE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 (*InbvEnableBootDriver())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C50B78;
  if ( qword_140C50B78 )
  {
    result = *(__int64 (**)(void))(qword_140C50B78 + 48);
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
