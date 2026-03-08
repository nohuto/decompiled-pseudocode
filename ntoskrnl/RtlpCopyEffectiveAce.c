/*
 * XREFs of RtlpCopyEffectiveAce @ 0x1407BB1F0
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x140699FA0 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyAces @ 0x1407BBF30 (RtlpCopyAces.c)
 * Callees:
 *     RtlLengthSid @ 0x140245EC0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlEqualPrefixSid @ 0x1407943FC (RtlEqualPrefixSid.c)
 */

char __fastcall RtlpCopyEffectiveAce(
        char *Src,
        char a2,
        char a3,
        char *a4,
        char *a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8,
        __int64 a9,
        unsigned int a10,
        void **a11,
        _DWORD *a12,
        __int64 a13,
        _BYTE *a14,
        _BYTE *a15,
        _BYTE *a16)
{
  char v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  _DWORD *v20; // r9
  unsigned __int8 v21; // cl
  __int64 v22; // rbx
  char *v24; // r13
  _BYTE *v25; // r9
  int v26; // edx
  int v27; // ecx
  unsigned int v28; // eax
  int v29; // r10d
  int v30; // ecx
  int v31; // ecx
  unsigned int v32; // r10d
  char *v33; // rdx
  _BYTE *v34; // rax
  char *v35; // r12
  __int64 v36; // rdi
  char *v37; // rdi
  int v38; // r12d
  unsigned int v39; // r12d
  __int64 v40; // rax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  __int64 v47; // rax
  int v48; // eax
  int v49; // ecx
  __int64 v50; // rax
  char *v51; // r9
  __int64 v52; // r10
  __int64 v53; // rcx
  __int64 v54; // rdx
  char v55; // [rsp+20h] [rbp-C9h]
  unsigned int Size; // [rsp+30h] [rbp-B9h]
  unsigned int Sizea; // [rsp+30h] [rbp-B9h]
  int v58; // [rsp+38h] [rbp-B1h]
  int v59; // [rsp+38h] [rbp-B1h]
  char *Srca; // [rsp+48h] [rbp-A1h]
  unsigned __int8 *Sid1; // [rsp+50h] [rbp-99h]
  int v63; // [rsp+58h] [rbp-91h]
  char *v64; // [rsp+60h] [rbp-89h]
  char *v65; // [rsp+78h] [rbp-71h]
  char *v66; // [rsp+80h] [rbp-69h]
  __int16 Sid2; // [rsp+98h] [rbp-51h] BYREF
  int v69; // [rsp+9Ah] [rbp-4Fh]
  __int16 v70; // [rsp+9Eh] [rbp-4Bh]
  _DWORD v71[10]; // [rsp+A0h] [rbp-49h] BYREF
  char v72[8]; // [rsp+C8h] [rbp-21h] BYREF
  int v73; // [rsp+D0h] [rbp-19h]

  v17 = a2;
  v69 = 0;
  v70 = 768;
  v18 = (__int64)a4;
  if ( a6 )
    v18 = a6;
  v66 = (char *)v18;
  v19 = (__int64)a5;
  if ( a7 )
    v19 = a7;
  v20 = a12;
  v65 = (char *)v19;
  v55 = 0;
  Sid2 = 257;
  v71[0] = 0;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v21 = *Src;
  v22 = *((unsigned __int16 *)Src + 1);
  if ( v21 < 0xBu || (unsigned __int8)(v21 - 13) <= 1u )
  {
    Srca = Src;
    Sid1 = 0LL;
    v64 = 0LL;
    v63 = 0;
    if ( v21 <= 3u )
    {
      v24 = Src + 8;
      Size = 8;
LABEL_23:
      v25 = a15;
      goto LABEL_24;
    }
    if ( v21 >= 9u && v21 <= 0xAu || (unsigned __int8)(v21 - 13) <= 1u )
    {
      v24 = Src + 8;
      Size = 8;
      v64 = &Src[RtlLengthSid(Src + 8) + 8];
      v63 = v22 - RtlLengthSid(Src + 8) - 8;
      goto LABEL_23;
    }
    if ( v21 != 4 )
    {
      v49 = *((_DWORD *)Src + 2);
      v50 = 28LL;
      if ( (v49 & 2) == 0 )
        v50 = 12LL;
      v24 = &Src[16 * (v49 & 1) + v50];
      Size = v50 + 16 * (v49 & 1);
      if ( (v49 & 2) != 0 )
      {
        if ( (v49 & 1) != 0 )
          v51 = Src + 28;
        else
          v51 = Src + 12;
      }
      else
      {
        v51 = 0LL;
      }
      if ( a14 && v51 )
      {
        v52 = a9;
        if ( !a9 || (v59 = 0, !a10) )
        {
LABEL_104:
          LODWORD(v22) = 0;
          goto LABEL_11;
        }
        while ( 1 )
        {
          v53 = *(_QWORD *)v51 - **(_QWORD **)v52;
          if ( *(_QWORD *)v51 == **(_QWORD **)v52 )
            v53 = *((_QWORD *)v51 + 1) - *(_QWORD *)(*(_QWORD *)v52 + 8LL);
          if ( !v53 )
            break;
          v52 += 8LL;
          if ( ++v59 >= a10 )
            goto LABEL_104;
        }
        *a14 = 1;
        if ( a3 )
        {
          v55 = 1;
        }
        else
        {
          *a15 = 1;
          if ( (*((_DWORD *)Src + 2) & 1) != 0 )
          {
            LODWORD(v22) = v22 - 16;
            Size -= 16;
            memmove(v72, Src, Size);
            v73 &= ~2u;
            Srca = v72;
          }
          else
          {
            LODWORD(v22) = v22 - 20;
            Size -= 20;
            memmove(v72, Src, Size);
            Srca = v72;
            v72[0] = *((_BYTE *)&RtlBaseAceType + (unsigned __int8)*Src);
          }
        }
      }
      goto LABEL_23;
    }
    Sid1 = (unsigned __int8 *)(Src + 12);
    v24 = &Src[RtlLengthSid(Src + 12) + 12];
    Size = 12;
    if ( !RtlEqualPrefixSid(Src + 12, &Sid2) )
    {
      Sid1 = 0LL;
      Size = 4 * (unsigned __int8)Src[13] + 20;
      goto LABEL_23;
    }
    v44 = *((_DWORD *)Src + 5);
    if ( !v44 )
    {
      v47 = (__int64)a4;
      goto LABEL_87;
    }
    v45 = v44 - 1;
    if ( v45 )
    {
      v46 = v45 - 1;
      if ( !v46 )
      {
        v47 = (__int64)v66;
        goto LABEL_87;
      }
      if ( v46 == 1 )
      {
        v47 = (__int64)v65;
LABEL_87:
        v25 = a15;
        Sid1 = (unsigned __int8 *)v47;
        v48 = *(unsigned __int8 *)(v47 + 1);
        *a15 = 1;
        LODWORD(v22) = v22 + 4 * v48 - 4;
        goto LABEL_24;
      }
    }
    else
    {
      v47 = (__int64)a5;
      if ( a5 )
        goto LABEL_87;
    }
    v25 = a15;
    if ( !*a15 )
    {
      Sid1 = 0LL;
      Size = 4 * (unsigned __int8)Src[13] + 20;
    }
LABEL_24:
    if ( !(_DWORD)v22 )
      goto LABEL_11;
    v26 = *((_DWORD *)Src + 1);
    v27 = v26;
    if ( v26 < 0 )
      v27 = *a8 | v26;
    if ( (v27 & 0x40000000) != 0 )
      v27 |= a8[1];
    if ( (v27 & 0x20000000) != 0 )
      v27 |= a8[2];
    if ( (v27 & 0x10000000) != 0 )
      v27 |= a8[3];
    v28 = (unsigned __int8)*Src;
    if ( (unsigned __int8)v28 <= 0xAu && (v29 = 1651, _bittest(&v29, v28)) )
      v30 = a8[3] & v27;
    else
      v30 = (a8[3] | 0x1000000) & v27;
    v31 = v30 & 0xFFFFFFF;
    if ( v31 != v26 )
      *v25 = 1;
    v58 = v31 & 0x11FFFFF;
    if ( (v31 & 0x11FFFFF) == 0 && !RtlEqualPrefixSid(v24, &Sid2) )
    {
      LODWORD(v22) = 0;
      goto LABEL_11;
    }
    if ( *v24 != 1 || v24[2] || v24[3] || v24[4] || v24[5] || v24[6] || v24[7] != 3 )
    {
      v32 = Size;
    }
    else
    {
      v40 = (unsigned __int8)v24[1];
      v33 = Srca;
      if ( (_BYTE)v40 != 1 )
      {
        v32 = Size;
        goto LABEL_48;
      }
      v32 = Size;
      if ( v40 - 1 <= 0 )
      {
LABEL_59:
        v41 = *((_DWORD *)v24 + 2);
        if ( v41 )
        {
          v42 = v41 - 1;
          if ( v42 )
          {
            v43 = v42 - 1;
            if ( v43 )
            {
              if ( v43 != 1 )
                goto LABEL_48;
              v24 = v65;
              v34 = a15;
              LODWORD(v22) = v22 + 4 * (unsigned __int8)v65[1] - 4;
              *a15 = 1;
            }
            else
            {
              v24 = v66;
              v34 = a15;
              LODWORD(v22) = v22 + 4 * (unsigned __int8)v66[1] - 4;
              *a15 = 1;
            }
          }
          else
          {
            if ( !a5 )
              goto LABEL_48;
            v24 = a5;
            v34 = a15;
            LODWORD(v22) = v22 + 4 * (unsigned __int8)a5[1] - 4;
            *a15 = 1;
          }
        }
        else
        {
          v24 = a4;
          v34 = a15;
          LODWORD(v22) = v22 + 4 * (unsigned __int8)a4[1] - 4;
          *a15 = 1;
        }
LABEL_49:
        if ( v55 && *v34 )
        {
          if ( (*((_DWORD *)Src + 2) & 1) != 0 )
          {
            LODWORD(v22) = v22 - 16;
            Sizea = v32 - 16;
            memmove(v72, Src, v32 - 16);
            v73 &= ~2u;
          }
          else
          {
            LODWORD(v22) = v22 - 20;
            Sizea = v32 - 20;
            memmove(v72, Src, v32 - 20);
            v72[0] = *((_BYTE *)&RtlBaseAceType + (unsigned __int8)*Src);
          }
          v32 = Sizea;
          v33 = v72;
        }
        v35 = (char *)*a11;
        if ( !*a11 || (unsigned int)v22 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)v35 )
        {
          *a16 = 1;
LABEL_16:
          v20 = a12;
          goto LABEL_17;
        }
        v36 = v32;
        memmove(*a11, v33, v32);
        v37 = &v35[v36];
        if ( Sid1 )
        {
          memmove(v37, Sid1, 4LL * Sid1[1] + 8);
          v37 += 4 * Sid1[1] + 8;
        }
        memmove(v37, v24, 4LL * (unsigned __int8)v24[1] + 8);
        v38 = (_DWORD)v37 + 4 * ((unsigned __int8)v24[1] + 2);
        if ( v64 && v63 > 0 )
        {
          memmove(&v37[4 * (unsigned __int8)v24[1] + 8], v64, v63);
          v38 += v63;
        }
        v39 = v38 - *(_DWORD *)a11;
        if ( (unsigned int)v22 < v39 )
          return 0;
        LODWORD(v22) = v39;
        v17 = a2;
        *((_WORD *)*a11 + 1) = v22;
        *((_DWORD *)*a11 + 1) = v58;
LABEL_11:
        if ( !*a16 && (_DWORD)v22 )
        {
          *((_BYTE *)*a11 + 1) &= 0xE0u;
          if ( v17 )
            *((_BYTE *)*a11 + 1) |= 0x10u;
          ++*(_WORD *)(a13 + 4);
        }
        goto LABEL_16;
      }
      v54 = 0LL;
      while ( *(_DWORD *)((char *)&v71[v54 + 2] + v24 - (char *)v71) == v71[v54] )
      {
        if ( ++v54 >= v40 - 1 )
        {
          v33 = Srca;
          goto LABEL_59;
        }
      }
    }
    v33 = Srca;
LABEL_48:
    v34 = a15;
    goto LABEL_49;
  }
  if ( v22 <= a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
  {
    memmove(*a11, Src, *((unsigned __int16 *)Src + 1));
    goto LABEL_11;
  }
  *a16 = 1;
LABEL_17:
  if ( (unsigned int)v22 > 0xFFFF )
    return 0;
  if ( !*a16 )
    *a11 = (char *)*a11 + (unsigned int)v22;
  *v20 = v22;
  return 1;
}
