/*
 * XREFs of SepCompareSidAndAttributeArrays @ 0x140776770
 * Callers:
 *     NtCompareTokens @ 0x140776460 (NtCompareTokens.c)
 *     SepCompareClaimAttributes @ 0x140776718 (SepCompareClaimAttributes.c)
 * Callees:
 *     RtlEqualSid @ 0x140208A60 (RtlEqualSid.c)
 */

char __fastcall SepCompareSidAndAttributeArrays(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r15d
  __int64 v7; // rax
  unsigned int v8; // ebx
  _BYTE *v9; // rdi
  __int64 v10; // r14
  unsigned int v12; // r12d
  __int64 v13; // rdi
  __int64 v14; // r14
  unsigned int v15; // ebp
  void *v16; // rdi
  unsigned int v17; // r14d
  __int64 i; // rdi
  unsigned int v19; // ebp
  void *v20; // r13
  __int64 v21; // [rsp+20h] [rbp-48h]

  v4 = a4;
  v7 = a1;
  if ( a2 == a4 )
  {
    v8 = 0;
    if ( a2 )
    {
      v9 = (_BYTE *)(a3 + 8);
      v10 = a1 - a3;
      do
      {
        if ( !RtlEqualSid(*(PSID *)&v9[v10 - 8], *((PSID *)v9 - 1)) )
          break;
        if ( ((*v9 ^ v9[v10]) & 0x14) != 0 )
          break;
        ++v8;
        v9 += 16;
      }
      while ( v8 < a2 );
      v7 = a1;
    }
    if ( v8 == a2 )
      return 1;
    v12 = v8;
    v13 = v8;
    if ( v8 >= a2 )
    {
LABEL_21:
      v17 = v8;
      if ( v8 >= v4 )
        return 1;
      for ( i = a3 + 16 * v13; ; i += 16LL )
      {
        v19 = v8;
        if ( v8 < a2 )
        {
          v20 = *(void **)i;
          do
          {
            if ( RtlEqualSid(v20, *(PSID *)(a1 + 16LL * v19))
              && ((*(_BYTE *)(i + 8) ^ *(_BYTE *)(a1 + 16LL * v19 + 8)) & 0x14) == 0 )
            {
              break;
            }
            ++v19;
          }
          while ( v19 < a2 );
          v4 = a4;
          if ( v19 == a2 )
            break;
        }
        if ( ++v17 >= v4 )
          return 1;
      }
    }
    else
    {
      v14 = v7 + 16LL * v8;
      while ( 1 )
      {
        v15 = v8;
        if ( v8 < v4 )
        {
          v16 = *(void **)v14;
          do
          {
            v21 = 16LL * v15;
            if ( RtlEqualSid(v16, *(PSID *)(v21 + a3)) && ((*(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v21 + a3 + 8)) & 0x14) == 0 )
              break;
            ++v15;
          }
          while ( v15 < v4 );
          v13 = v8;
        }
        if ( v15 == v4 )
          break;
        ++v12;
        v14 += 16LL;
        if ( v12 >= a2 )
          goto LABEL_21;
      }
    }
  }
  return 0;
}
