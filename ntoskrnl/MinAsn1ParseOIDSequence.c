/*
 * XREFs of MinAsn1ParseOIDSequence @ 0x140A6D858
 * Callers:
 *     I_MinCryptGetCertificateEKUs @ 0x140A6CAE0 (I_MinCryptGetCertificateEKUs.c)
 * Callees:
 *     MinAsn1ExtractContent @ 0x140A6EA28 (MinAsn1ExtractContent.c)
 *     MinAsn1ExtractValues @ 0x140A6EB74 (MinAsn1ExtractValues.c)
 */

__int64 __fastcall MinAsn1ParseOIDSequence(unsigned int *a1, unsigned int *a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned int v4; // ebx
  __int64 v6; // rdx
  unsigned int v8; // esi
  unsigned int v9; // r12d
  int v10; // r14d
  int v11; // edi
  int Values; // eax
  __int64 result; // rax
  int v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  v4 = 0;
  v15 = 0LL;
  v6 = *a1;
  v14 = 0;
  v8 = 0;
  v9 = *a2;
  if ( (_DWORD)v6 )
  {
    if ( (int)MinAsn1ExtractContent(v3, v6, &v14, &v15) > 0 )
    {
      v10 = v14;
      v11 = v15;
      if ( v14 )
      {
        while ( v8 < v9 )
        {
          v14 = 1;
          Values = MinAsn1ExtractValues(v11, v10, (unsigned int)&v14, (unsigned int)&qword_14000B6A0, 1, a3 + 16LL * v8);
          if ( Values <= 0 )
          {
            if ( !Values )
              Values = -1;
            v4 = Values + v3 - v11;
            goto LABEL_9;
          }
          ++v8;
          v11 += Values;
          v10 -= Values;
          if ( !v10 )
            break;
        }
      }
      v4 = v11 - v3;
    }
    else
    {
      v4 = -1;
    }
  }
LABEL_9:
  result = v4;
  *a2 = v8;
  return result;
}
