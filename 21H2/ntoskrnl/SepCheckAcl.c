/*
 * XREFs of SepCheckAcl @ 0x140753F64
 * Callers:
 *     SeCaptureAcl @ 0x140753E4C (SeCaptureAcl.c)
 *     SeCaptureSecurityDescriptor @ 0x1407B3DD0 (SeCaptureSecurityDescriptor.c)
 * Callees:
 *     RtlValidAcl @ 0x1407B4A50 (RtlValidAcl.c)
 */

char __fastcall SepCheckAcl(__int64 a1, unsigned int a2)
{
  if ( a2 >= 8 && a2 == *(unsigned __int16 *)(a1 + 2) )
    return RtlValidAcl(a1);
  else
    return 0;
}
