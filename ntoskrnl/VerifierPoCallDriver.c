/*
 * XREFs of VerifierPoCallDriver @ 0x140ACCBF0
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriverSpecifyReturn @ 0x1402B91D0 (IofCallDriverSpecifyReturn.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VerifierPoCallDriver(void *a1, ULONG_PTR a2)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( pXdvPoCallDriver )
    return pXdvPoCallDriver(a1, a2, retaddr, IofCallDriverSpecifyReturn);
  else
    return IofCallDriverSpecifyReturn(a1, a2);
}
