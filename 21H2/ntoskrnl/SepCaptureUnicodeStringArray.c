/*
 * XREFs of SepCaptureUnicodeStringArray @ 0x1406F0C70
 * Callers:
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140600F9C (SepCaptureTokenSecurityAttributesInformation.c)
 *     NtQuerySecurityAttributesToken @ 0x1406F0920 (NtQuerySecurityAttributesToken.c)
 *     NtSetCachedSigningLevel2 @ 0x14072AAE0 (NtSetCachedSigningLevel2.c)
 *     NtQuerySecurityPolicy @ 0x14091BCA0 (NtQuerySecurityPolicy.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     SeCaptureUnicodeStringStructures @ 0x1406F0E90 (SeCaptureUnicodeStringStructures.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepCaptureUnicodeStringArray(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  char v4; // r12
  __int64 v5; // rbx
  unsigned int v6; // edi
  __int64 result; // rax
  __int64 v8; // rsi
  SIZE_T v9; // rdx
  unsigned int v10; // ecx
  unsigned __int16 *v11; // r15
  unsigned int v12; // r8d
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // r14
  char *v15; // rsi
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  void *v18; // rcx
  void *Src; // [rsp+28h] [rbp-50h] BYREF
  char *v20; // [rsp+30h] [rbp-48h]
  PVOID P; // [rsp+38h] [rbp-40h]

  v4 = a3;
  v5 = a2;
  v6 = 0;
  Src = 0LL;
  *a4 = 0LL;
  if ( !a1 )
  {
    if ( !a2 )
      return 0LL;
    return 3221225485LL;
  }
  if ( !a2 )
    return 3221225485LL;
  if ( !(_BYTE)a3 )
  {
    *a4 = a1;
    return 0LL;
  }
  result = SeCaptureUnicodeStringStructures(a1, a2, a3, &Src);
  if ( (int)result >= 0 )
  {
    v8 = 16 * v5;
    if ( (unsigned __int64)(16 * v5) > 0xFFFFFFFF )
    {
      if ( v4 != 1 )
        return 3221225621LL;
      v18 = Src;
      if ( !Src )
        return 3221225621LL;
    }
    else
    {
      if ( (((unsigned int)v8 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) >= (unsigned int)v8 )
      {
        v9 = ((_DWORD)v8 + 1) & 0xFFFFFFFE;
        v10 = 0;
        v11 = (unsigned __int16 *)Src;
        while ( 1 )
        {
          if ( v10 >= (unsigned int)v5 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x74416553u);
            v14 = PoolWithTag;
            P = PoolWithTag;
            if ( PoolWithTag )
            {
              memmove(PoolWithTag, v11, 16 * v5);
              v15 = (char *)(((unsigned __int64)&v14[(unsigned __int64)v8 / 8] + 1) & 0xFFFFFFFFFFFFFFFEuLL);
              v20 = v15;
              while ( v6 < (unsigned int)v5 )
              {
                v16 = v11[8 * v6];
                if ( (_WORD)v16 )
                {
                  v17 = *(_QWORD *)&v11[8 * v6 + 4];
                  if ( (v17 & 1) != 0 )
                    ExRaiseDatatypeMisalignment();
                  if ( v17 + v16 > 0x7FFFFFFF0000LL || v17 + v16 < v17 )
                  {
                    MEMORY[0x7FFFFFFF0000] = 0;
                    LOWORD(v16) = v11[8 * v6];
                  }
                }
                memmove(v15, *(const void **)&v11[8 * v6 + 4], (unsigned __int16)v16);
                v14[2 * v6 + 1] = v15;
                WORD1(v14[2 * v6]) = v14[2 * v6];
                v15 += v11[8 * v6];
                v20 = v15;
                ++v6;
              }
              if ( v4 == 1 && v11 )
                ExFreePoolWithTag(v11, 0);
              *a4 = v14;
              return 0LL;
            }
            else
            {
              if ( v4 == 1 && v11 )
                ExFreePoolWithTag(v11, 0);
              return 3221225626LL;
            }
          }
          v12 = v9 + *((unsigned __int16 *)Src + 8 * v10);
          if ( v12 < (unsigned int)v9 )
            break;
          v9 = v12;
          ++v10;
        }
        if ( v4 == 1 && Src )
        {
          v18 = Src;
          goto LABEL_42;
        }
        return 3221225621LL;
      }
      if ( v4 != 1 )
        return 3221225621LL;
      v18 = Src;
      if ( !Src )
        return 3221225621LL;
    }
LABEL_42:
    ExFreePoolWithTag(v18, 0);
    return 3221225621LL;
  }
  return result;
}
