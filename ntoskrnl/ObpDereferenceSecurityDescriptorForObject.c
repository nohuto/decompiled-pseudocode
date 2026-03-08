/*
 * XREFs of ObpDereferenceSecurityDescriptorForObject @ 0x14069941C
 * Callers:
 *     ObQuerySecurityDescriptorInfo @ 0x140696AE0 (ObQuerySecurityDescriptorInfo.c)
 *     ObpAdjustCreatorAccessState @ 0x140698E40 (ObpAdjustCreatorAccessState.c)
 *     ObReleaseObjectSecurityEx @ 0x1406993F0 (ObReleaseObjectSecurityEx.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x140696920 (ObDereferenceSecurityDescriptor.c)
 */

void __fastcall ObpDereferenceSecurityDescriptorForObject(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a2 + 40));
  v2 = *(_QWORD *)(a2 + 40);
  if ( (a1 ^ (unsigned __int64)v2) >= 0xF )
  {
LABEL_4:
    ObDereferenceSecurityDescriptor(a1, 1u);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 40), v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( (a1 ^ (unsigned __int64)v2) >= 0xF )
        goto LABEL_4;
    }
  }
}
