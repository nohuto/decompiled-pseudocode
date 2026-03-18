/*
 * XREFs of RtlSetControlSecurityDescriptor @ 0x14085D080
 * Callers:
 *     DrvDbGetRegistrarSecurityDescriptor @ 0x14085CF98 (DrvDbGetRegistrarSecurityDescriptor.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1409BEA94 (RtlpSysVolCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetControlSecurityDescriptor(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  if ( (~a2 & a3) != 0 || (a2 & 0xC03F) != 0 )
    return 3221225485LL;
  *(_WORD *)(a1 + 2) = a3 | *(_WORD *)(a1 + 2) & ~a2;
  return 0LL;
}
