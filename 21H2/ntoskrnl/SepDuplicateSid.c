/*
 * XREFs of SepDuplicateSid @ 0x140706DA0
 * Callers:
 *     SepDuplicateToken @ 0x140703E00 (SepDuplicateToken.c)
 *     SepSetTokenTrust @ 0x140707310 (SepSetTokenTrust.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1409230BC (SepDuplicateTokenUserAndGroups.c)
 *     SepSetTokenUserAndGroups @ 0x1409231BC (SepSetTokenUserAndGroups.c)
 * Callees:
 *     RtlCopySid @ 0x140706ED0 (RtlCopySid.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepDuplicateSid(unsigned __int8 *SourceSid, _QWORD *a2)
{
  int v4; // eax
  ULONG v5; // ebp
  PVOID PoolWithTag; // rax
  PVOID v7; // rdi
  __int64 result; // rax

  if ( !a2 )
    return 3221225485LL;
  v4 = SourceSid[1];
  *a2 = 0LL;
  v5 = 4 * v4 + 8;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x69536553u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  RtlCopySid(v5, PoolWithTag, SourceSid);
  result = 0LL;
  *a2 = v7;
  return result;
}
