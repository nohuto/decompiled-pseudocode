/*
 * XREFs of EncodeAttributeName @ 0x1409D019C
 * Callers:
 *     GetPrintableAttributeName @ 0x1409D0F74 (GetPrintableAttributeName.c)
 *     LocalGetStringForRelativeAttribute @ 0x1409D2E2C (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     SddlpAlloc @ 0x1407507C8 (SddlpAlloc.c)
 *     IsEncodedAttributeChar @ 0x1409D1A58 (IsEncodedAttributeChar.c)
 */

__int64 __fastcall EncodeAttributeName(unsigned __int16 *a1, unsigned int a2, __int64 *a3)
{
  unsigned int v3; // ebx
  unsigned __int16 *v6; // rsi
  unsigned int v7; // ebp
  PVOID v8; // rax
  __int64 v9; // rdi
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // r9

  v3 = 0;
  v6 = a1;
  v7 = 0;
  if ( !a1 || !a2 || !a3 )
    return 87LL;
  if ( (a2 & 1) != 0 )
  {
    return 1336;
  }
  else
  {
    v8 = SddlpAlloc(5 * a2 + 2LL);
    *a3 = (__int64)v8;
    if ( v8 )
    {
      v9 = a2 >> 1;
      if ( (_DWORD)v9 )
      {
        do
        {
          v10 = IsEncodedAttributeChar(*v6);
          v11 = *a3;
          v12 = v7;
          if ( v10 )
          {
            *(_WORD *)(v11 + 2LL * v7) = 37;
            *(_WORD *)(v11 + 2LL * (v7 + 1)) = a0123456789abcd[(unsigned __int64)*v6 >> 12];
            *(_WORD *)(v11 + 2LL * (v7 + 2)) = a0123456789abcd[*((_BYTE *)v6 + 1) & 0xF];
            *(_WORD *)(v11 + 2LL * (v7 + 3)) = a0123456789abcd[(*v6 >> 4) & 0xF];
            *(_WORD *)(v11 + 2LL * (v7 + 4)) = a0123456789abcd[*(_BYTE *)v6 & 0xF];
            v7 += 5;
          }
          else
          {
            ++v7;
            *(_WORD *)(v11 + 2 * v12) = *v6;
          }
          ++v6;
          --v9;
        }
        while ( v9 );
      }
    }
    else
    {
      return 8;
    }
  }
  return v3;
}
