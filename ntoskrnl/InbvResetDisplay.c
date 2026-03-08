/*
 * XREFs of InbvResetDisplay @ 0x14054C260
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char InbvResetDisplay()
{
  __int64 (*v0)(void); // rax

  if ( qword_140C6A7D0 && (v0 = *(__int64 (**)(void))(qword_140C6A7D0 + 24)) != 0LL )
    return v0();
  else
    return 0;
}
