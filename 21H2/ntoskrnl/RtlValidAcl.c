/*
 * XREFs of RtlValidAcl @ 0x14065C5C0
 * Callers:
 *     SepCheckAcl @ 0x1405DBD24 (SepCheckAcl.c)
 *     RtlAddMandatoryAce @ 0x14065B720 (RtlAddMandatoryAce.c)
 *     SeCaptureSecurityDescriptor @ 0x14065BB60 (SeCaptureSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x14065C460 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x14065EF00 (RtlValidSecurityDescriptor.c)
 *     RtlAddAce @ 0x14065F130 (RtlAddAce.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14066DC80 (RtlValidRelativeSecurityDescriptor.c)
 *     SeValidSecurityDescriptor @ 0x140692A40 (SeValidSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x1406B0FF0 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x14079DD90 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x140912250 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140912570 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409128A0 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1409261C8 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1409263E0 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140926544 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409266A4 (SddlAddScopedPolicyIDAce.c)
 *     CMFCreateSecurityDescriptor @ 0x1409584C4 (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     RtlpValidAttributeAce @ 0x1406B65C4 (RtlpValidAttributeAce.c)
 *     RtlpValidAccessFilterAce @ 0x140912D9C (RtlpValidAccessFilterAce.c)
 *     RtlpValidCompoundAce @ 0x140912F9C (RtlpValidCompoundAce.c)
 *     RtlpValidObjectAce @ 0x140913018 (RtlpValidObjectAce.c)
 */

char __fastcall RtlValidAcl(__int64 a1)
{
  _WORD *v2; // r14
  unsigned int v3; // ebp
  unsigned __int8 *v4; // rbx
  int v5; // r15d
  unsigned __int64 v6; // rdx
  unsigned __int16 *v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rax

  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) <= 2u )
  {
    v2 = (_WORD *)(a1 + 2);
    if ( ((a1 + 3) & 0xFFFFFFFFFFFFFFFEuLL) == a1 + 2 && *v2 >= 8u )
    {
      v3 = 0;
      v4 = (unsigned __int8 *)(a1 + 8);
      if ( !*(_WORD *)(a1 + 4) )
        return 1;
      v5 = 1730063;
      while ( 1 )
      {
        v6 = a1 + (unsigned __int16)*v2;
        if ( (unsigned __int64)(v4 + 4) >= v6 )
          break;
        v7 = (unsigned __int16 *)(v4 + 2);
        if ( (unsigned __int8 *)((unsigned __int64)(v4 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != v4 + 2 )
          break;
        v8 = *v7;
        if ( (unsigned __int64)&v4[v8] > v6 )
          break;
        v9 = *v4;
        if ( (unsigned __int8)v9 <= 0x14u && _bittest(&v5, v9) )
        {
          if ( ((v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
            return 0;
          if ( (unsigned int)v8 < 0x10 )
            return 0;
          if ( v4[8] != 1 )
            return 0;
          v10 = v4[9];
          if ( (unsigned __int8)v10 > 0xFu || v8 < 4 * v10 + 16 )
            return 0;
        }
        else if ( (_BYTE)v9 == 4 )
        {
          if ( *(_BYTE *)a1 < 3u || !(unsigned __int8)RtlpValidCompoundAce(v4) )
            return 0;
        }
        else if ( (unsigned __int8)(v9 - 5) <= 3u
               || (unsigned __int8)(v9 - 11) <= 1u
               || (unsigned __int8)(v9 - 15) <= 1u )
        {
          if ( *(_BYTE *)a1 < 4u || !(unsigned __int8)RtlpValidObjectAce(v4) )
            return 0;
        }
        else if ( (_BYTE)v9 == 18 )
        {
          if ( !(unsigned __int8)RtlpValidAttributeAce(v4) )
            return 0;
        }
        else if ( (_BYTE)v9 == 21 )
        {
          if ( !(unsigned __int8)RtlpValidAccessFilterAce(v4) )
            return 0;
        }
        else if ( (unsigned int)v8 < 4 )
        {
          return 0;
        }
        ++v3;
        v4 += *v7;
        if ( v3 >= *(unsigned __int16 *)(a1 + 4) )
          return 1;
      }
    }
  }
  return 0;
}
