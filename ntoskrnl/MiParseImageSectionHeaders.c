/*
 * XREFs of MiParseImageSectionHeaders @ 0x1407F3AF0
 * Callers:
 *     MiBuildImageControlArea @ 0x1407F3030 (MiBuildImageControlArea.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiMakeDemandZeroPte @ 0x14032E7D8 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x140368AAC (MiMakeSubsectionPte.c)
 */

__int64 __fastcall MiParseImageSectionHeaders(int a1, __int64 *a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r11
  __int64 v7; // r10
  int v8; // ebp
  int v9; // ebx
  __int64 *v10; // r9
  _QWORD *v11; // r15
  __int64 v12; // rsi
  __int64 v13; // r12
  unsigned int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // r13
  unsigned int *v17; // r14
  unsigned int v18; // r8d
  unsigned int v19; // r11d
  unsigned int *v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // r10
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  int v27; // r8d
  int v28; // edx
  unsigned int v29; // ecx
  __int64 v30; // rax
  __int16 v31; // dx
  __int64 SubsectionPte; // rbx
  char v33; // dl
  __int64 DemandZeroPte; // rax
  char v35; // dl
  unsigned int v36; // r11d
  __int64 v37; // rsi
  char v38; // r8
  char v39; // cl
  unsigned int v40; // eax
  unsigned int v41; // r14d
  int v42; // r12d
  bool v43; // zf
  unsigned int v44; // ecx
  unsigned __int64 v46; // rdi
  unsigned int *v47; // r8
  unsigned int v48; // ecx
  unsigned int v49; // edx
  __int64 v50; // r8
  char v51; // [rsp+20h] [rbp-78h]
  char v52; // [rsp+21h] [rbp-77h]
  unsigned int v53; // [rsp+24h] [rbp-74h]
  unsigned int v54; // [rsp+28h] [rbp-70h]
  unsigned int v55; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v56; // [rsp+30h] [rbp-68h]
  int v57; // [rsp+34h] [rbp-64h]
  unsigned int *v58; // [rsp+38h] [rbp-60h]
  __int64 v59; // [rsp+40h] [rbp-58h]
  __int64 v60; // [rsp+48h] [rbp-50h]
  __int64 v61; // [rsp+50h] [rbp-48h]
  int v64; // [rsp+B8h] [rbp+20h]

  v64 = a4;
  v6 = *a2;
  v7 = (__int64)(a2 + 16);
  v8 = a1;
  v9 = a4;
  v10 = a2;
  v60 = v6;
  v11 = (_QWORD *)(a2[17] + 8LL * *((unsigned int *)a2 + 43));
  *(_BYTE *)(v6 + 14) = *(_BYTE *)(*a2 + 14) & 0xC1 | 0xE;
  if ( (a1 & 0x400000) != 0 )
  {
    if ( v9 )
    {
      v47 = (unsigned int *)(a3 + 16);
      while ( 1 )
      {
        v48 = *(v47 - 2);
        if ( !v48 )
          v48 = *v47;
        v49 = v47[1];
        if ( v49 + *v47 < v49 )
          break;
        if ( v49 != *(v47 - 1) || v48 > *v47 )
        {
          dword_140C65490 = 17;
          return 3221225595LL;
        }
        v47 += 10;
        if ( !--v9 )
          goto LABEL_61;
      }
      dword_140C65490 = 16;
      return 3221225595LL;
    }
    else
    {
LABEL_61:
      v10[15] = *(unsigned int *)(v6 + 8);
      return 0LL;
    }
  }
  else
  {
    v12 = a5;
    v13 = *(_QWORD *)(v6 + 56);
    v14 = *(_DWORD *)(a5 + 12);
    v15 = *(_DWORD *)(v13 + 56) + 1;
    v16 = *(_QWORD *)(v6 + 32) + (unsigned int)(*(_DWORD *)(v7 + 44) << 12);
    v56 = v14;
    v59 = v13;
    if ( v9 )
    {
      v17 = (unsigned int *)(a3 + 20);
      v18 = a6;
      v58 = v17;
      while ( 1 )
      {
        v19 = *(v17 - 3);
        v20 = v17 - 1;
        v54 = v19;
        if ( !v19 )
        {
          v19 = *v20;
          v54 = *v20;
        }
        v21 = *v20;
        if ( !*v20 && *v17 )
        {
          if ( (v8 & 0x10000) != 0 && (v8 & 0x40000) == 0 )
          {
            dword_140C65490 = 18;
            return 3221225595LL;
          }
          *v17 = 0;
        }
        if ( *v17 + v21 < *v17 )
          break;
        *(_QWORD *)(v7 + 56) = v10;
        *(_QWORD *)(v7 + 16) = v7 + 56;
        v22 = v7 + 56;
        v61 = v22;
        if ( v16 != *(_QWORD *)v12 + *(v17 - 2) || !v19 )
        {
          dword_140C65490 = 20;
          return 3221225595LL;
        }
        if ( v14 + v19 - 1 <= v19 )
        {
          dword_140C65490 = 21;
          return 3221225595LL;
        }
        v23 = ((v19 + (unsigned __int64)v14 - 1) >> 12) & (~((unsigned __int64)v14 - 1) >> 12);
        *(_DWORD *)(v22 + 44) = v23;
        if ( v23 > v18 )
        {
          dword_140C65490 = 22;
          return 3221225595LL;
        }
        v24 = ((v19 + (unsigned __int64)v14 - 1) >> 12) & (~((unsigned __int64)v14 - 1) >> 12);
        if ( v9 == 1 && v23 != v18 )
        {
          *(_DWORD *)(v22 + 44) = v18;
          v24 = v18;
        }
        *(_DWORD *)(v22 + 32) = 0;
        v25 = *v17 >> 9;
        *(_DWORD *)(v22 + 36) = v25;
        v55 = v18 - v24;
        v26 = -*(_DWORD *)(v12 + 8) & (*v17 + *(_DWORD *)(v12 + 8) + *v20 - 1);
        if ( v26 < *v17 )
        {
          dword_140C65490 = 23;
          return 3221225595LL;
        }
        *(_QWORD *)(v22 + 8) = v11;
        *(_DWORD *)(v22 + 40) = (v26 >> 9) - v25;
        *(_WORD *)(v22 + 34) = 16 * (v26 & 0x1FF);
        v27 = v17[4];
        v28 = ((unsigned int)v27 >> 29) & 1 | 2;
        if ( (v27 & 0x40000000) == 0 )
          v28 = (v17[4] >> 29) & 1;
        v29 = v28 | 4;
        if ( v27 >= 0 )
          v29 = v28;
        v30 = v29 | 8;
        if ( (v27 & 0x10000000) == 0 )
          v30 = v29;
        v31 = *((char *)MiImageProtectionArray + v30);
        if ( (*((_BYTE *)MiImageProtectionArray + v30) & 2) != 0 )
          *(_BYTE *)(v13 + 50) = 1;
        *(_WORD *)(v22 + 32) ^= (*(_WORD *)(v22 + 32) ^ (2 * v31)) & 0x3E;
        SubsectionPte = MiMakeSubsectionPte(v22);
        DemandZeroPte = MiMakeDemandZeroPte(v33);
        v37 = DemandZeroPte;
        if ( !*v17 )
          SubsectionPte = DemandZeroPte;
        v38 = 0;
        v52 = 0;
        v39 = 0;
        v57 = *v17 + *v20;
        v51 = 0;
        if ( (v35 & 4) != 0 )
        {
          if ( (v35 & 5) == 5 )
          {
            v38 = 1;
            v52 = 1;
          }
          else
          {
            *(_WORD *)(v7 + 34) |= 2u;
            v39 = 1;
            *((_DWORD *)v10 + 14) |= 0x20000u;
            v51 = 1;
          }
        }
        v40 = *v20;
        v41 = 0;
        v42 = 0;
        v53 = *v20;
        if ( *(_DWORD *)(v7 + 44) )
        {
          while ( 1 )
          {
            if ( v41 < v36 )
            {
              if ( v39 )
              {
                ++*(_QWORD *)(v60 + 16);
                v40 = v53;
              }
              if ( v38 )
                ++*(_QWORD *)(v60 + 48);
              if ( v41 >= v40 )
              {
                *v11 = v37;
                v40 = v53;
                if ( !((unsigned __int8)v39 | (unsigned __int8)v38) )
                  ++*(_QWORD *)(v60 + 16);
              }
              else
              {
                ++v10[15];
                *v11 = SubsectionPte;
              }
              goto LABEL_33;
            }
            v46 = ZeroPte;
            if ( MiPteInShadowRange((unsigned __int64)v11) )
            {
              if ( MiPteHasShadow() )
              {
                if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
                  v46 = ZeroPte | 0x8000000000000000uLL;
                *v11 = v46;
                MiWritePteShadow((__int64)v11, v46, v50);
                goto LABEL_49;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ZeroPte & 1) != 0 )
              {
                v46 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            *v11 = v46;
LABEL_49:
            v7 = v61;
            v10 = a2;
            v36 = v54;
            v38 = v52;
            v40 = v53;
            *(_DWORD *)(v61 + 52) ^= (*(_DWORD *)(v61 + 52) ^ (*(_DWORD *)(v61 + 52) + 1)) & 0x3FFFFFFF;
            v39 = v51;
LABEL_33:
            v41 += 4096;
            ++v11;
            v16 += 4096LL;
            if ( (unsigned int)++v42 >= *(_DWORD *)(v7 + 44) )
            {
              v8 = a1;
              break;
            }
          }
        }
        v17 = v58 + 10;
        v12 = a5;
        v43 = v64 == 1;
        v9 = v64 - 1;
        v13 = v59;
        --v64;
        v58 += 10;
        if ( v43 )
        {
          v15 = v57;
          v44 = v55;
          goto LABEL_44;
        }
        v18 = v55;
        v14 = v56;
      }
      dword_140C65490 = 19;
      return 3221225595LL;
    }
    else
    {
      v44 = a6;
LABEL_44:
      if ( v15 > *(_DWORD *)(v13 + 56) )
      {
        dword_140C65490 = 24;
        return 3221225595LL;
      }
      else if ( v44 >= *(_DWORD *)(v12 + 12) >> 12 )
      {
        dword_140C65490 = 25;
        return 3221225595LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
}
