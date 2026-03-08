/*
 * XREFs of SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1409CE184
 * Callers:
 *     NtFilterBootOption @ 0x1409CD700 (NtFilterBootOption.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1409CE004 (SepSecureBootUpdateBcdDataForRule.c)
 * Callees:
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 *     SepSecureBootGetQWordPolicyValue @ 0x1409CDF60 (SepSecureBootGetQWordPolicyValue.c)
 */

__int64 __fastcall SepSecureBootValidateBcdDataAgainstBcdRule(__int64 a1, _BYTE *a2, unsigned int a3)
{
  _WORD *v4; // rcx
  unsigned int QWordPolicyValue; // ebx
  __int16 v6; // r9
  int v7; // eax
  int v8; // eax
  bool v9; // zf
  __int64 v10; // rdi
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = (_WORD *)(qword_140D1BC48 + *(unsigned int *)(a1 + 8));
  QWordPolicyValue = 0;
  v6 = *v4 & 0x1F;
  if ( v6 != 8 )
  {
    v7 = (*(_BYTE *)(a1 + 7) & 0xF) - 2;
    if ( v7 )
    {
      v8 = v7 - 3;
      if ( v8 )
      {
        if ( v8 != 1 )
          return QWordPolicyValue;
        if ( v6 != 1 || a3 - 1 > 1 )
          return (unsigned int)-1069350910;
        v9 = (v4[1] != 0) == (*a2 != 0);
      }
      else
      {
        if ( a3 != 8 )
          return (unsigned int)-1069350910;
        v10 = *(_QWORD *)a2;
        v12 = *(_QWORD *)a2;
        QWordPolicyValue = SepSecureBootGetQWordPolicyValue((__int64)v4, &v12);
        if ( (QWordPolicyValue & 0x80000000) != 0 )
          return QWordPolicyValue;
        v9 = v10 == v12;
      }
    }
    else
    {
      if ( v6 || (a3 & 1) != 0 )
        return (unsigned int)-1069350910;
      for ( ; a3; a3 -= 2 )
      {
        if ( *(_WORD *)&a2[2 * ((unsigned __int64)a3 >> 1) - 2] )
          break;
      }
      if ( a3 != (unsigned __int16)v4[1] )
        return (unsigned int)-1069350910;
      v9 = memcmp(a2, v4 + 2, a3) == 0;
    }
    if ( v9 )
      return QWordPolicyValue;
    return (unsigned int)-1069350910;
  }
  return v4[1] == 0 ? 0xC0430002 : 0;
}
