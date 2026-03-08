/*
 * XREFs of SeIsSystemContext @ 0x1405B6D4C
 * Callers:
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 * Callees:
 *     SeAccessCheck @ 0x140265330 (SeAccessCheck.c)
 */

__int64 __fastcall SeIsSystemContext(void *a1, _BYTE *a2)
{
  struct _SECURITY_SUBJECT_CONTEXT v4; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK v6; // [rsp+88h] [rbp+10h] BYREF

  v6 = 0;
  v5 = 0;
  v4.ClientToken = 0LL;
  *(_QWORD *)&v4.ImpersonationLevel = 0LL;
  v4.ProcessAuditId = 0LL;
  *a2 = 0;
  v4.PrimaryToken = a1;
  if ( SeAccessCheck(
         SepSystemContextSecurityDescriptor,
         &v4,
         0,
         1u,
         0,
         0LL,
         (PGENERIC_MAPPING)&SystemContextGenericMapping,
         1,
         &v6,
         (PNTSTATUS)&v5) )
  {
    *a2 = 1;
  }
  return v5;
}
