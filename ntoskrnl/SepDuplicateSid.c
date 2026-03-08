/*
 * XREFs of SepDuplicateSid @ 0x1407843E0
 * Callers:
 *     SepSetTokenTrust @ 0x1406D33D8 (SepSetTokenTrust.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1409CC9C0 (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenUserAndGroups @ 0x1409CCB0C (SepSetTokenUserAndGroups.c)
 * Callees:
 *     RtlCopySid @ 0x1406D4890 (RtlCopySid.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepDuplicateSid(unsigned __int8 *SourceSid, _QWORD *a2)
{
  int v4; // eax
  ULONG v5; // ebp
  void *Pool2; // rax
  void *v7; // rdi
  __int64 result; // rax

  if ( !a2 )
    return 3221225485LL;
  v4 = SourceSid[1];
  *a2 = 0LL;
  v5 = 4 * v4 + 8;
  Pool2 = (void *)ExAllocatePool2(256LL, v5, 1767073107LL);
  v7 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  RtlCopySid(v5, Pool2, SourceSid);
  result = 0LL;
  *a2 = v7;
  return result;
}
