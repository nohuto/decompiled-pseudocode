/*
 * XREFs of RtlValidAcl @ 0x1407BB670
 * Callers:
 *     RtlpAddKnownAce @ 0x1406D3290 (RtlpAddKnownAce.c)
 *     RtlAddAce @ 0x1406DB760 (RtlAddAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x1406DB8A0 (RtlAddProcessTrustLabelAce.c)
 *     SepCheckAcl @ 0x14070E9D0 (SepCheckAcl.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14071D120 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x140740AF0 (RtlAddMandatoryAce.c)
 *     RtlDeleteAce @ 0x1407444E0 (RtlDeleteAce.c)
 *     SeValidSecurityDescriptor @ 0x14075EA40 (SeValidSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x14075F860 (RtlValidSecurityDescriptor.c)
 *     RtlpNewSecurityObject @ 0x1407BD790 (RtlpNewSecurityObject.c)
 *     SeCaptureSecurityDescriptor @ 0x1407C8A50 (SeCaptureSecurityDescriptor.c)
 *     SddlAddMandatoryAce @ 0x1408A1E92 (SddlAddMandatoryAce.c)
 *     RtlAddAccessFilterAce @ 0x1409B8030 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409B8350 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409B8680 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1409CF6F0 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409CF92C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409CFA8C (SddlAddScopedPolicyIDAce.c)
 *     CMFCreateSecurityDescriptor @ 0x1409FEF0C (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     RtlpValidAttributeAce @ 0x140857A10 (RtlpValidAttributeAce.c)
 *     RtlpValidAccessFilterAce @ 0x1409B8B94 (RtlpValidAccessFilterAce.c)
 *     RtlpValidCompoundAce @ 0x1409B8D94 (RtlpValidCompoundAce.c)
 *     RtlpValidObjectAce @ 0x1409B8E04 (RtlpValidObjectAce.c)
 */

char __fastcall RtlValidAcl(__int64 a1)
{
  _WORD *v2; // rsi
  unsigned int v3; // ebp
  unsigned __int8 *v4; // rdi
  int v6; // r15d
  unsigned __int64 v7; // rdx
  unsigned __int16 *v8; // r14
  unsigned __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rax

  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) <= 2u )
  {
    v2 = (_WORD *)(a1 + 2);
    if ( ((a1 + 3) & 0xFFFFFFFFFFFFFFFEuLL) == a1 + 2 && *v2 >= 8u )
    {
      v3 = 0;
      v4 = (unsigned __int8 *)(a1 + 8);
      if ( !*(_WORD *)(a1 + 4) )
        return 1;
      v6 = 1730063;
      while ( 1 )
      {
        v7 = a1 + (unsigned __int16)*v2;
        if ( (unsigned __int64)(v4 + 4) >= v7 )
          break;
        v8 = (unsigned __int16 *)(v4 + 2);
        if ( (unsigned __int8 *)((unsigned __int64)(v4 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != v4 + 2 )
          break;
        v9 = *v8;
        if ( (unsigned __int64)&v4[v9] > v7 )
          break;
        v10 = *v4;
        if ( (unsigned __int8)v10 <= 0x14u && _bittest(&v6, v10) )
        {
          if ( ((v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v9 )
            return 0;
          if ( (unsigned int)v9 < 0x10 )
            return 0;
          if ( v4[8] != 1 )
            return 0;
          v11 = v4[9];
          if ( (unsigned __int8)v11 > 0xFu || v9 < 4 * v11 + 16 )
            return 0;
        }
        else if ( (_BYTE)v10 == 4 )
        {
          if ( *(_BYTE *)a1 < 3u || !(unsigned __int8)RtlpValidCompoundAce(v4) )
            return 0;
        }
        else if ( (unsigned __int8)(v10 - 5) <= 3u
               || (unsigned __int8)(v10 - 11) <= 1u
               || (unsigned __int8)(v10 - 15) <= 1u )
        {
          if ( *(_BYTE *)a1 < 4u || !(unsigned __int8)RtlpValidObjectAce(v4) )
            return 0;
        }
        else if ( (_BYTE)v10 == 18 )
        {
          if ( !(unsigned __int8)RtlpValidAttributeAce(v4) )
            return 0;
        }
        else if ( (_BYTE)v10 == 21 )
        {
          if ( !(unsigned __int8)RtlpValidAccessFilterAce(v4) )
            return 0;
        }
        else if ( (unsigned int)v9 < 4 )
        {
          return 0;
        }
        ++v3;
        v4 += *v8;
        if ( v3 >= *(unsigned __int16 *)(a1 + 4) )
          return 1;
      }
    }
  }
  return 0;
}
