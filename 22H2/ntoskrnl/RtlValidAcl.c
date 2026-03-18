/*
 * XREFs of RtlValidAcl @ 0x140736D80
 * Callers:
 *     SepCheckAcl @ 0x1406BA460 (SepCheckAcl.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14070DBD0 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlpNewSecurityObject @ 0x14072A470 (RtlpNewSecurityObject.c)
 *     RtlpAddKnownAce @ 0x140735770 (RtlpAddKnownAce.c)
 *     RtlAddAce @ 0x140736C40 (RtlAddAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x140736ED0 (RtlAddProcessTrustLabelAce.c)
 *     SeCaptureSecurityDescriptor @ 0x140737050 (SeCaptureSecurityDescriptor.c)
 *     SeValidSecurityDescriptor @ 0x1407B4510 (SeValidSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1407B52C0 (RtlValidSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x1407EF6A0 (RtlDeleteAce.c)
 *     RtlAddMandatoryAce @ 0x1407F33F0 (RtlAddMandatoryAce.c)
 *     SddlAddMandatoryAce @ 0x1408A6D12 (SddlAddMandatoryAce.c)
 *     RtlAddAccessFilterAce @ 0x1409BAF50 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1409BB270 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409BB5A0 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1409D2590 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1409D27CC (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409D292C (SddlAddScopedPolicyIDAce.c)
 *     CMFCreateSecurityDescriptor @ 0x140A01BFC (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     RtlpValidAttributeAce @ 0x14085B6F0 (RtlpValidAttributeAce.c)
 *     RtlpValidAccessFilterAce @ 0x1409BBAB4 (RtlpValidAccessFilterAce.c)
 *     RtlpValidCompoundAce @ 0x1409BBCB4 (RtlpValidCompoundAce.c)
 *     RtlpValidObjectAce @ 0x1409BBD24 (RtlpValidObjectAce.c)
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
