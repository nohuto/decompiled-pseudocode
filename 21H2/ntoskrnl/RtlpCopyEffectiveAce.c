/*
 * XREFs of RtlpCopyEffectiveAce @ 0x140652700
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x140651850 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyAces @ 0x1406521F0 (RtlpCopyAces.c)
 * Callees:
 *     RtlLengthSid @ 0x14026CA10 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlEqualPrefixSid @ 0x140652AEC (RtlEqualPrefixSid.c)
 *     RtlMapGenericMask @ 0x14071A280 (RtlMapGenericMask.c)
 */

char __fastcall RtlpCopyEffectiveAce(
        ACCESS_MASK *Src,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING GenericMapping,
        void **a9,
        unsigned int a10,
        void **a11,
        _DWORD *a12,
        __int64 a13,
        _BYTE *a14,
        _BYTE *a15,
        _BYTE *a16)
{
  char v17; // r12
  __int64 v18; // r8
  __int64 v19; // r8
  unsigned __int8 v20; // cl
  __int64 v21; // rbx
  unsigned int v23; // eax
  int v24; // ecx
  ACCESS_MASK GenericAll; // eax
  ACCESS_MASK v26; // eax
  _DWORD *v27; // r12
  _BYTE *v28; // rax
  char *v29; // rdx
  char *v30; // r12
  __int64 v31; // rdi
  char *v32; // r12
  unsigned __int8 *v33; // rdi
  unsigned __int8 *v34; // rdi
  char *v35; // r12
  unsigned int v36; // r12d
  int v37; // eax
  unsigned __int8 *v38; // rax
  int v39; // ebx
  int v40; // edi
  int v41; // eax
  int v42; // eax
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  unsigned __int8 *v46; // rax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // r10
  int v50; // ecx
  int v51; // r8d
  ACCESS_MASK *v52; // r11
  void **v53; // r10
  __int64 v54; // rcx
  __int64 v55; // rcx
  unsigned int v56; // eax
  unsigned int v57; // eax
  char v58; // [rsp+20h] [rbp-B9h]
  ACCESS_MASK v61; // [rsp+24h] [rbp-B5h]
  int v62; // [rsp+24h] [rbp-B5h]
  ACCESS_MASK AccessMask; // [rsp+2Ch] [rbp-ADh] BYREF
  _BYTE *v64; // [rsp+30h] [rbp-A9h]
  size_t Size; // [rsp+38h] [rbp-A1h]
  void *v66; // [rsp+40h] [rbp-99h]
  PSID Sid1; // [rsp+48h] [rbp-91h]
  void *Srca; // [rsp+50h] [rbp-89h]
  int v69; // [rsp+58h] [rbp-81h]
  unsigned __int8 *v70; // [rsp+60h] [rbp-79h]
  unsigned __int8 *v71; // [rsp+68h] [rbp-71h]
  __int64 v72; // [rsp+70h] [rbp-69h]
  unsigned __int8 *v73; // [rsp+78h] [rbp-61h]
  void *v74; // [rsp+80h] [rbp-59h]
  __int16 Sid2; // [rsp+88h] [rbp-51h] BYREF
  int v76; // [rsp+8Ah] [rbp-4Fh]
  __int16 v77; // [rsp+8Eh] [rbp-4Bh]
  int v78; // [rsp+90h] [rbp-49h]
  char v79[8]; // [rsp+B8h] [rbp-21h] BYREF
  int v80; // [rsp+C0h] [rbp-19h]

  v17 = a2;
  v18 = a4;
  v76 = 0;
  v77 = 768;
  v73 = (unsigned __int8 *)a4;
  if ( a6 )
    v18 = a6;
  v71 = (unsigned __int8 *)v18;
  v19 = a5;
  if ( a7 )
    v19 = a7;
  v72 = a5;
  v70 = (unsigned __int8 *)v19;
  v64 = a15;
  v58 = 0;
  Sid2 = 257;
  v78 = 0;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v20 = *(_BYTE *)Src;
  v21 = *((unsigned __int16 *)Src + 1);
  if ( *(_BYTE *)Src <= 0xAu || (unsigned __int8)(v20 - 13) <= 1u )
  {
    v66 = 0LL;
    v74 = 0LL;
    v69 = 0;
    if ( v20 <= 3u )
    {
      Sid1 = Src + 2;
      Size = 8LL;
LABEL_22:
      Srca = Src;
      goto LABEL_23;
    }
    if ( ((v20 - 9) & 0xFA) == 0 )
    {
      Size = 8LL;
      Sid1 = Src + 2;
      v74 = (char *)Src + RtlLengthSid(Src + 2) + 8;
      v69 = v21 - RtlLengthSid(Src + 2) - 8;
      goto LABEL_22;
    }
    if ( v20 != 4 )
    {
      v48 = 7LL;
      v49 = 4LL * (Src[2] & 1);
      v50 = Src[2] & 2;
      if ( !v50 )
        v48 = 3LL;
      Sid1 = &Src[v49 + v48];
      v51 = v49 * 4 + v48 * 4;
      Size = (unsigned int)(v49 * 4 + v48 * 4);
      if ( v50 )
        v52 = &Src[v49 + 3];
      else
        v52 = 0LL;
      Srca = Src;
      if ( a14 )
      {
        Srca = Src;
        if ( v52 )
        {
          v53 = a9;
          if ( !a9 || (AccessMask = 0, !a10) )
          {
LABEL_86:
            LODWORD(v21) = 0;
            goto LABEL_18;
          }
          while ( 1 )
          {
            v54 = *(_QWORD *)v52;
            Srca = *v53;
            v55 = v54 - *(_QWORD *)Srca;
            if ( !v55 )
              v55 = *((_QWORD *)v52 + 1) - *((_QWORD *)Srca + 1);
            if ( !v55 )
              break;
            ++v53;
            if ( ++AccessMask >= a10 )
              goto LABEL_86;
          }
          *a14 = 1;
          if ( a3 )
          {
            v58 = 1;
            goto LABEL_22;
          }
          *a15 = 1;
          if ( (Src[2] & 1) != 0 )
          {
            LODWORD(v21) = v21 - 16;
            Size = (unsigned int)(v51 - 16);
            memmove(v79, Src, Size);
            v80 &= ~2u;
          }
          else
          {
            LODWORD(v21) = v21 - 20;
            Size = (unsigned int)(v51 - 20);
            memmove(v79, Src, Size);
            v79[0] = *((_BYTE *)&RtlBaseAceType + *(unsigned __int8 *)Src);
          }
          Srca = v79;
        }
      }
LABEL_23:
      if ( !(_DWORD)v21 )
        goto LABEL_11;
      v61 = Src[1];
      AccessMask = v61;
      RtlMapGenericMask(&AccessMask, GenericMapping);
      v23 = *(unsigned __int8 *)Src;
      if ( (unsigned __int8)v23 <= 0xAu && (v24 = 1651, _bittest(&v24, v23)) )
        GenericAll = GenericMapping->GenericAll;
      else
        GenericAll = GenericMapping->GenericAll | 0x1000000;
      v26 = AccessMask & GenericAll;
      if ( v26 != v61 )
        *v64 = 1;
      v62 = v26 & 0x11FFFFF;
      if ( (v26 & 0x11FFFFF) == 0 && !RtlEqualPrefixSid(Sid1, &Sid2) )
      {
        LODWORD(v21) = 0;
        goto LABEL_11;
      }
      v27 = Sid1;
      if ( !RtlEqualPrefixSid(Sid1, &Sid2) )
        goto LABEL_31;
      v37 = v27[2];
      if ( !v37 )
      {
        v38 = v73;
LABEL_43:
        Sid1 = v38;
        v39 = v21 + 4 * v38[1];
        v28 = v64;
        LODWORD(v21) = v39 - 4;
        *v64 = 1;
        goto LABEL_32;
      }
      v41 = v37 - 1;
      if ( v41 )
      {
        v42 = v41 - 1;
        if ( !v42 )
        {
          v38 = v71;
          goto LABEL_43;
        }
        if ( v42 == 1 )
        {
          v38 = v70;
          goto LABEL_43;
        }
      }
      else
      {
        v38 = (unsigned __int8 *)v72;
        if ( v72 )
          goto LABEL_43;
      }
LABEL_31:
      v28 = v64;
LABEL_32:
      if ( v58 && *v28 )
      {
        if ( (Src[2] & 1) != 0 )
        {
          v56 = Size - 16;
          LODWORD(v21) = v21 - 16;
          Size = (unsigned int)(Size - 16);
          memmove(v79, Src, v56);
          v80 &= ~2u;
          v29 = v79;
        }
        else
        {
          v57 = Size - 20;
          LODWORD(v21) = v21 - 20;
          Size = (unsigned int)(Size - 20);
          memmove(v79, Src, v57);
          v29 = v79;
          v79[0] = *((_BYTE *)&RtlBaseAceType + *(unsigned __int8 *)Src);
        }
      }
      else
      {
        v29 = (char *)Srca;
      }
      v30 = (char *)*a11;
      if ( *a11 && (unsigned int)v21 <= a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)v30 )
      {
        v31 = (unsigned int)Size;
        memmove(*a11, v29, (unsigned int)Size);
        v32 = &v30[v31];
        v33 = (unsigned __int8 *)v66;
        if ( v66 )
        {
          memmove(v32, v66, 4LL * *((unsigned __int8 *)v66 + 1) + 8);
          v32 += 4 * v33[1] + 8;
        }
        v34 = (unsigned __int8 *)Sid1;
        memmove(v32, Sid1, 4LL * *((unsigned __int8 *)Sid1 + 1) + 8);
        v35 = &v32[4 * v34[1] + 8];
        if ( v74 && v69 > 0 )
        {
          v40 = v69;
          memmove(v35, v74, v69);
          LODWORD(v35) = v40 + (_DWORD)v35;
        }
        v36 = (_DWORD)v35 - *(_DWORD *)a11;
        if ( (unsigned int)v21 < v36 )
          return 0;
        LODWORD(v21) = v36;
        v17 = a2;
        *((_WORD *)*a11 + 1) = v21;
        *((_DWORD *)*a11 + 1) = v62;
        goto LABEL_11;
      }
LABEL_44:
      *a16 = 1;
      goto LABEL_16;
    }
    v66 = Src + 3;
    Size = 12LL;
    Sid1 = (char *)Src + RtlLengthSid(Src + 3) + 12;
    if ( RtlEqualPrefixSid(Src + 3, &Sid2) )
    {
      v43 = *((_DWORD *)v66 + 2);
      if ( !v43 )
      {
        v46 = v73;
        goto LABEL_66;
      }
      v44 = v43 - 1;
      if ( v44 )
      {
        v45 = v44 - 1;
        if ( !v45 )
        {
          v46 = v71;
          goto LABEL_66;
        }
        if ( v45 == 1 )
        {
          v46 = v70;
LABEL_66:
          v66 = v46;
          LODWORD(v21) = v21 + 4 * v46[1] - 4;
          *v64 = 1;
          goto LABEL_22;
        }
      }
      else
      {
        v46 = (unsigned __int8 *)v72;
        if ( v72 )
          goto LABEL_66;
      }
      if ( *v64 )
        goto LABEL_22;
      v47 = *((unsigned __int8 *)v66 + 1);
    }
    else
    {
      v47 = *((unsigned __int8 *)v66 + 1);
    }
    v66 = 0LL;
    Size = (unsigned int)(4 * v47 + 20);
    goto LABEL_22;
  }
  if ( v21 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    goto LABEL_44;
  memmove(*a11, Src, *((unsigned __int16 *)Src + 1));
LABEL_11:
  if ( !*a16 && (_DWORD)v21 )
  {
    *((_BYTE *)*a11 + 1) &= 0xE0u;
    if ( v17 )
      *((_BYTE *)*a11 + 1) |= 0x10u;
    ++*(_WORD *)(a13 + 4);
  }
LABEL_16:
  if ( (unsigned int)v21 <= 0xFFFF )
  {
    if ( *a16 )
    {
LABEL_19:
      *a12 = v21;
      return 1;
    }
LABEL_18:
    *a11 = (char *)*a11 + (unsigned int)v21;
    goto LABEL_19;
  }
  return 0;
}
