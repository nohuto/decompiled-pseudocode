/*
 * XREFs of RtlpGenerateInheritedAce @ 0x140651850
 * Callers:
 *     RtlpGenerateInheritAcl @ 0x140651680 (RtlpGenerateInheritAcl.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlpIsDuplicateAce @ 0x14064F3B0 (RtlpIsDuplicateAce.c)
 *     RtlpCopyEffectiveAce @ 0x140652700 (RtlpCopyEffectiveAce.c)
 */

__int64 __fastcall RtlpGenerateInheritedAce(
        _BYTE *Src,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING GenericMapping,
        __int64 a9,
        int a10,
        unsigned int *a11,
        __int64 a12,
        unsigned int *a13,
        _BYTE *a14)
{
  __int64 v14; // r8
  unsigned int v15; // edi
  char v16; // r9
  unsigned int v18; // r14d
  unsigned int v19; // r12d
  unsigned int v20; // r10d
  bool v21; // r15
  __int64 v22; // rsi
  unsigned int v23; // ecx
  unsigned __int64 v24; // rbx
  char v25; // al
  char v27; // al
  unsigned int v28; // eax
  unsigned __int64 v29; // rcx
  char v30; // al
  char v31; // [rsp+80h] [rbp-19h] BYREF
  unsigned int v32; // [rsp+84h] [rbp-15h] BYREF
  __int64 v33; // [rsp+88h] [rbp-11h] BYREF
  unsigned __int64 v34; // [rsp+90h] [rbp-9h]
  __int64 v35; // [rsp+E8h] [rbp+4Fh] BYREF
  char v36; // [rsp+F0h] [rbp+57h]
  __int64 v37; // [rsp+F8h] [rbp+5Fh]

  v37 = a4;
  v36 = a3;
  v14 = (__int64)a14;
  v15 = 0;
  v16 = 0;
  v34 = 0LL;
  v32 = 0;
  v31 = 0;
  *a14 = 0;
  v18 = 0;
  LOBYTE(v35) = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( a2 )
  {
    v27 = Src[1];
    if ( (v27 & 4) == 0 && ((v27 & 1) != 0 || (v27 & 2) != 0) )
      v21 = 1;
  }
  v22 = a12;
  v23 = 0;
  v33 = 0LL;
  v24 = a12 + 8;
  if ( *(_WORD *)(a12 + 4) )
  {
    while ( v24 < a12 + (unsigned __int64)*(unsigned __int16 *)(a12 + 2) )
    {
      ++v23;
      v24 += *(unsigned __int16 *)(v24 + 2);
      if ( v23 >= *(unsigned __int16 *)(a12 + 4) )
      {
        v14 = (__int64)a14;
        goto LABEL_7;
      }
    }
    return 3221225597LL;
  }
LABEL_7:
  if ( v24 > a12 + (unsigned __int64)*(unsigned __int16 *)(a12 + 2) )
    return 3221225597LL;
  v33 = v24;
  if ( !v24 )
    return 3221225597LL;
  v25 = Src[1];
  if ( a2 )
  {
    if ( (v25 & 2) == 0 )
      goto LABEL_11;
  }
  else if ( (v25 & 1) == 0 )
  {
    goto LABEL_11;
  }
  v34 = v24;
  if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                           Src,
                           a5,
                           a6,
                           a7,
                           GenericMapping,
                           a9,
                           a10,
                           (__int64)&v33,
                           (__int64)&v32,
                           a12,
                           v14,
                           (__int64)&v31,
                           (__int64)&v35) )
    return 3221225597LL;
  v20 = v32;
  if ( !(_BYTE)v35 && v32 )
  {
    if ( RtlpIsDuplicateAce(v22, (unsigned __int8 *)v24) )
    {
      v19 = v32;
      v20 = 0;
      --*(_WORD *)(v22 + 4);
      v18 = 0;
      v16 = v31;
      v32 = 0;
      v33 = v24;
      goto LABEL_11;
    }
    v20 = v32;
  }
  v16 = v31;
  v18 = v20;
LABEL_11:
  if ( v21 )
  {
    if ( v20 && !v16 )
    {
      if ( !(_BYTE)v35 )
      {
        v29 = v34;
        v30 = *(_BYTE *)(v34 + 1) | Src[1] & 3;
        *(_BYTE *)(v34 + 1) = v30;
        if ( v36 )
          *(_BYTE *)(v29 + 1) = v30 | 0x10;
      }
      goto LABEL_12;
    }
    if ( *Src > 8u || *((_DWORD *)Src + 1) )
    {
      v18 += *((unsigned __int16 *)Src + 1);
      if ( v18 <= 0xFFFF )
      {
        if ( *((unsigned __int16 *)Src + 1) > v22 + *(unsigned __int16 *)(v22 + 2) - v33 )
        {
          LOBYTE(v35) = 1;
        }
        else if ( !(_BYTE)v35 )
        {
          memmove((void *)v33, Src, *((unsigned __int16 *)Src + 1));
          *(_BYTE *)(v33 + 1) |= 8u;
          ++*(_WORD *)(v22 + 4);
          if ( v36 )
          {
            *(_BYTE *)(v33 + 1) |= 0x10u;
            if ( RtlpIsDuplicateAce(v22, (unsigned __int8 *)v33) )
            {
              --*(_WORD *)(v22 + 4);
              v28 = *((unsigned __int16 *)Src + 1);
              v18 -= v28;
              if ( v19 > v28 )
                v28 = v19;
              v19 = v28;
            }
          }
        }
        goto LABEL_12;
      }
      return 3221225597LL;
    }
  }
LABEL_12:
  *a11 = v18;
  *a13 = v19;
  if ( (_BYTE)v35 )
    return (unsigned int)-1073741789;
  return v15;
}
