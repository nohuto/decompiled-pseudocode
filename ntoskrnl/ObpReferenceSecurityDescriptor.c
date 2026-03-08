/*
 * XREFs of ObpReferenceSecurityDescriptor @ 0x140698F3C
 * Callers:
 *     ObQuerySecurityDescriptorInfo @ 0x140696AE0 (ObQuerySecurityDescriptorInfo.c)
 *     ObpAdjustCreatorAccessState @ 0x140698E40 (ObpAdjustCreatorAccessState.c)
 * Callees:
 *     ObpReferenceSecurityDescriptorSlow @ 0x140880604 (ObpReferenceSecurityDescriptorSlow.c)
 */

unsigned __int64 __fastcall ObpReferenceSecurityDescriptor(__int64 a1)
{
  signed __int64 v1; // r9
  signed __int64 v2; // rax
  signed __int64 v3; // rax
  unsigned int v4; // r9d
  unsigned __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 40));
  v1 = *(_QWORD *)(a1 + 40);
  if ( (v1 & 0xF) != 0 )
  {
    do
    {
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v1 - 1, v1);
      if ( v1 == v2 )
        break;
      v1 = v2;
    }
    while ( (v2 & 0xF) != 0 );
  }
  v3 = v1;
  v4 = v1 & 0xF;
  result = v3 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v4 <= 1 )
  {
    if ( result )
      return ObpReferenceSecurityDescriptorSlow(a1, v4, result);
  }
  return result;
}
