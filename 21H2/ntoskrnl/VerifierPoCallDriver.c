/*
 * XREFs of VerifierPoCallDriver @ 0x140A8F2A0
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriverSpecifyReturn @ 0x1403B51A0 (IofCallDriverSpecifyReturn.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VerifierPoCallDriver(void *a1, __int64 a2)
{
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( pXdvPoCallDriver )
    return pXdvPoCallDriver(a1, a2, retaddr, IofCallDriverSpecifyReturn);
  else
    return IofCallDriverSpecifyReturn(a1);
}
