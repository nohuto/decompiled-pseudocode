/*
 * XREFs of SepCheckAcl @ 0x14070E9D0
 * Callers:
 *     SeCaptureAcl @ 0x14070E8B8 (SeCaptureAcl.c)
 *     SeCaptureSecurityDescriptor @ 0x1407C8A50 (SeCaptureSecurityDescriptor.c)
 * Callees:
 *     RtlValidAcl @ 0x1407BB670 (RtlValidAcl.c)
 */

char __fastcall SepCheckAcl(__int64 a1, unsigned int a2)
{
  if ( a2 >= 8 && a2 == *(unsigned __int16 *)(a1 + 2) )
    return RtlValidAcl();
  else
    return 0;
}
