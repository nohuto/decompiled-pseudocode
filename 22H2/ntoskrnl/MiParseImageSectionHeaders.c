/*
 * XREFs of MiParseImageSectionHeaders @ 0x140635B30
 * Callers:
 *     MiBuildImageControlArea @ 0x140702908 (MiBuildImageControlArea.c)
 * Callees:
 *     MiMakeSubsectionPte @ 0x140278A5C (MiMakeSubsectionPte.c)
 *     MiMakeDemandZeroPte @ 0x1402AA600 (MiMakeDemandZeroPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 */

__int64 __fastcall MiParseImageSectionHeaders(int a1, __int64 *a2, __int64 a3, int a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r10
  __int64 v7; // r14
  int v8; // ebp
  int v9; // r11d
  __int64 *v10; // rbx
  _QWORD *v11; // r15
  __int64 v12; // rdi
  unsigned int v13; // esi
  __int64 v14; // r13
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int *v17; // r12
  unsigned int v18; // r8d
  unsigned int v19; // r9d
  int v20; // eax
  __int64 v21; // r14
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // r11d
  unsigned int v25; // r10d
  int v26; // r8d
  int v27; // edx
  unsigned int v28; // ecx
  __int64 v29; // rax
  __int16 v30; // dx
  __int64 SubsectionPte; // rdi
  char v32; // dl
  char v33; // dl
  __int64 DemandZeroPte; // rsi
  unsigned int v35; // r9d
  char v36; // r8
  char v37; // cl
  unsigned int v38; // r14d
  int v39; // r12d
  BOOL v40; // eax
  __int64 v41; // rdx
  bool v42; // zf
  __int64 v43; // rdx
  unsigned int v44; // ecx
  unsigned __int64 v46; // rbx
  unsigned int *v47; // r8
  unsigned int v48; // ecx
  unsigned int v49; // edx
  unsigned int v50; // r9d
  __int64 v51; // r8
  __int64 v52; // r8
  __int64 v53; // r8
  __int16 v54; // [rsp+20h] [rbp-78h]
  unsigned int v55; // [rsp+24h] [rbp-74h]
  unsigned int v56; // [rsp+28h] [rbp-70h]
  unsigned int v57; // [rsp+2Ch] [rbp-6Ch]
  unsigned int v58; // [rsp+30h] [rbp-68h]
  unsigned int v59; // [rsp+34h] [rbp-64h]
  __int64 v60; // [rsp+38h] [rbp-60h]
  __int64 v61; // [rsp+40h] [rbp-58h]
  unsigned int *v62; // [rsp+48h] [rbp-50h]
  __int64 v63; // [rsp+50h] [rbp-48h]
  int v66; // [rsp+B8h] [rbp+20h]

  v66 = a4;
  v6 = *a2;
  v7 = (__int64)(a2 + 16);
  v8 = a1;
  v9 = a4;
  v10 = a2;
  v60 = v6;
  v11 = (_QWORD *)(a2[17] + 8LL * *((unsigned int *)a2 + 43));
  *(_BYTE *)(v6 + 14) = *(_BYTE *)(*a2 + 14) & 0xC1 | 0xE;
  if ( (a1 & 0x200000) != 0 )
  {
    if ( a4 )
    {
      v47 = (unsigned int *)(a3 + 16);
      while ( 1 )
      {
        v48 = *v47;
        v49 = *v47;
        v50 = v47[1];
        if ( *(v47 - 2) )
          v49 = *(v47 - 2);
        if ( v48 + v50 < v50 )
          break;
        if ( v50 != *(v47 - 1) || v49 > v48 )
        {
          dword_140C4CC18 = 17;
          return 3221225595LL;
        }
        v47 += 10;
        if ( !--v9 )
          goto LABEL_64;
      }
      dword_140C4CC18 = 16;
      return 3221225595LL;
    }
    else
    {
LABEL_64:
      v10[15] = *(unsigned int *)(v6 + 8);
      return 0LL;
    }
  }
  else
  {
    v12 = a5;
    v13 = *(_DWORD *)(a5 + 12);
    v14 = *(_QWORD *)(v6 + 32) + (unsigned int)(*((_DWORD *)a2 + 43) << 12);
    v63 = *(_QWORD *)(v6 + 56);
    v15 = *(_DWORD *)(v63 + 56);
    v58 = v13;
    v16 = v15 + 1;
    if ( a4 )
    {
      v17 = (unsigned int *)(a3 + 20);
      v18 = a6;
      v62 = v17;
      while ( 1 )
      {
        v19 = *(v17 - 3);
        v20 = *(v17 - 1);
        if ( !v19 )
          v19 = *(v17 - 1);
        v57 = v19;
        if ( !v20 && *v17 )
        {
          if ( (v8 & 0x10000) != 0 )
          {
            dword_140C4CC18 = 18;
            return 3221225595LL;
          }
          *v17 = 0;
        }
        if ( *v17 + v20 < *v17 )
          break;
        *(_QWORD *)(v7 + 56) = v10;
        *(_QWORD *)(v7 + 16) = v7 + 56;
        v21 = v7 + 56;
        v61 = v21;
        if ( v14 != *(_QWORD *)v12 + *(v17 - 2) || !v19 )
        {
          dword_140C4CC18 = 20;
          return 3221225595LL;
        }
        if ( v13 + v19 - 1 <= v19 )
        {
          dword_140C4CC18 = 21;
          return 3221225595LL;
        }
        v22 = ((v19 + (unsigned __int64)v13 - 1) >> 12) & (~((unsigned __int64)v13 - 1) >> 12);
        *(_DWORD *)(v21 + 44) = v22;
        if ( v22 > v18 )
        {
          dword_140C4CC18 = 22;
          return 3221225595LL;
        }
        v23 = ((v19 + (unsigned __int64)v13 - 1) >> 12) & (~((unsigned __int64)v13 - 1) >> 12);
        if ( v9 == 1 && v22 != v18 )
        {
          *(_DWORD *)(v21 + 44) = v18;
          v23 = v18;
        }
        *(_DWORD *)(v21 + 32) = 0;
        v24 = *v17 >> 9;
        *(_DWORD *)(v21 + 36) = v24;
        v56 = v18 - v23;
        v25 = -*(_DWORD *)(v12 + 8) & (*(_DWORD *)(v12 + 8) + *v17 + *(v17 - 1) - 1);
        if ( v25 < *v17 )
        {
          dword_140C4CC18 = 23;
          return 3221225595LL;
        }
        *(_QWORD *)(v21 + 8) = v11;
        *(_DWORD *)(v21 + 40) = (v25 >> 9) - v24;
        *(_WORD *)(v21 + 34) = 16 * (v25 & 0x1FF);
        v26 = v17[4];
        v27 = ((unsigned int)v26 >> 29) & 1 | 2;
        if ( (v26 & 0x40000000) == 0 )
          v27 = (v17[4] >> 29) & 1;
        v28 = v27 | 4;
        if ( v26 >= 0 )
          v28 = v27;
        v29 = v28 | 8;
        if ( (v26 & 0x10000000) == 0 )
          v29 = v28;
        v30 = *((char *)MiImageProtectionArray + v29);
        if ( (*((_BYTE *)MiImageProtectionArray + v29) & 2) != 0 )
          *(_BYTE *)(v63 + 50) = 1;
        *(_WORD *)(v21 + 32) ^= (*(_WORD *)(v21 + 32) ^ (2 * v30)) & 0x3E;
        SubsectionPte = MiMakeSubsectionPte(v21);
        DemandZeroPte = MiMakeDemandZeroPte(v32);
        if ( !*v17 )
          SubsectionPte = DemandZeroPte;
        v36 = 0;
        v55 = *(v17 - 1);
        v37 = 0;
        v59 = v55 + *v17;
        v54 = 0;
        if ( (v33 & 4) != 0 )
        {
          if ( (v33 & 5) == 5 )
          {
            v37 = 1;
            v55 = *(v17 - 1);
            LOBYTE(v54) = 1;
          }
          else
          {
            *(_WORD *)(v21 + 34) |= 2u;
            v36 = 1;
            *((_DWORD *)v10 + 14) |= 0x20000u;
            v55 = *(v17 - 1);
            HIBYTE(v54) = 1;
          }
        }
        v38 = 0;
        v39 = 0;
        if ( *(_DWORD *)(v61 + 44) )
        {
          while ( v38 < v35 )
          {
            if ( v36 == 1 )
              ++*(_QWORD *)(v60 + 16);
            if ( v37 == 1 )
              ++*(_QWORD *)(v60 + 48);
            v40 = MiPteInShadowRange((unsigned __int64)v11);
            if ( v38 >= v55 )
            {
              v43 = DemandZeroPte;
              if ( !v40 )
                goto LABEL_39;
              if ( (unsigned int)MiPteHasShadow() )
              {
                if ( !HIBYTE(word_140C4E008) && (DemandZeroPte & 1) != 0 )
                  v43 |= 0x8000000000000000uLL;
                *v11 = v43;
                MiWritePteShadow((__int64)v11, v43, v52);
              }
              else
              {
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (DemandZeroPte & 1) != 0 )
                {
                  v43 |= 0x8000000000000000uLL;
                }
LABEL_39:
                *v11 = v43;
              }
              if ( !v54 )
                ++*(_QWORD *)(v60 + 16);
              goto LABEL_34;
            }
            ++v10[15];
            v41 = SubsectionPte;
            if ( v40 )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                if ( !HIBYTE(word_140C4E008) && (SubsectionPte & 1) != 0 )
                  v41 |= 0x8000000000000000uLL;
                *v11 = v41;
                MiWritePteShadow((__int64)v11, v41, v51);
                goto LABEL_34;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (SubsectionPte & 1) != 0 )
              {
                v41 |= 0x8000000000000000uLL;
              }
            }
            *v11 = v41;
LABEL_34:
            v35 = v57;
            v38 += 4096;
            v37 = v54;
            ++v11;
            v36 = HIBYTE(v54);
            v14 += 4096LL;
            if ( (unsigned int)++v39 >= *(_DWORD *)(v61 + 44) )
            {
              v8 = a1;
              goto LABEL_36;
            }
          }
          v46 = ZeroPte;
          if ( MiPteInShadowRange((unsigned __int64)v11) )
          {
            if ( !(unsigned int)MiPteHasShadow() )
            {
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                && (ZeroPte & 1) != 0 )
              {
                v46 = ZeroPte | 0x8000000000000000uLL;
              }
              goto LABEL_51;
            }
            if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
              v46 = ZeroPte | 0x8000000000000000uLL;
            *v11 = v46;
            MiWritePteShadow((__int64)v11, v46, v53);
          }
          else
          {
LABEL_51:
            *v11 = v46;
          }
          v10 = a2;
          *(_DWORD *)(v61 + 52) ^= (*(_DWORD *)(v61 + 52) ^ (*(_DWORD *)(v61 + 52) + 1)) & 0x3FFFFFFF;
          goto LABEL_34;
        }
LABEL_36:
        v17 = v62 + 10;
        v12 = a5;
        v42 = v66 == 1;
        v9 = --v66;
        v62 += 10;
        if ( v42 )
        {
          v44 = v56;
          v16 = v59;
          v15 = *(_DWORD *)(v63 + 56);
          goto LABEL_47;
        }
        v7 = v61;
        v18 = v56;
        v13 = v58;
      }
      dword_140C4CC18 = 19;
      return 3221225595LL;
    }
    else
    {
      v44 = a6;
LABEL_47:
      if ( v16 > v15 )
      {
        dword_140C4CC18 = 24;
        return 3221225595LL;
      }
      else if ( v44 >= *(_DWORD *)(v12 + 12) >> 12 )
      {
        dword_140C4CC18 = 25;
        return 3221225595LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
}
