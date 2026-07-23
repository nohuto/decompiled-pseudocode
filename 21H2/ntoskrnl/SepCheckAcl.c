/*
 * XREFs of SepCheckAcl @ 0x1406CB4A4
 * Callers:
 *     SeCaptureAcl @ 0x1406CB390 (SeCaptureAcl.c)
 * Callees:
 *     RtlValidAcl @ 0x1406513E0 (RtlValidAcl.c)
 */

BOOLEAN __fastcall SepCheckAcl(ACL *a1, unsigned int a2)
{
  if ( a2 >= 8 && a2 == a1->AclSize )
    return RtlValidAcl(a1);
  else
    return 0;
}
