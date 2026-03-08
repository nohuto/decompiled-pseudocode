/*
 * XREFs of InbvNotifyDisplayOwnershipLost @ 0x14054C200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 (*InbvNotifyDisplayOwnershipLost())(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_140C6A7D0;
  if ( qword_140C6A7D0 )
  {
    result = *(__int64 (**)(void))qword_140C6A7D0;
    if ( *(_QWORD *)qword_140C6A7D0 )
      return (__int64 (*)(void))result();
  }
  return result;
}
