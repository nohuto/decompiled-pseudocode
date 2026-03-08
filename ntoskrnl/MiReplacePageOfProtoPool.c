/*
 * XREFs of MiReplacePageOfProtoPool @ 0x14061B5A0
 * Callers:
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 * Callees:
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x140276080 (MiGetUltraMapping.c)
 *     MiSetPfnPteFrame @ 0x14028A310 (MiSetPfnPteFrame.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiMakeProtectionPfnCompatible @ 0x14034A974 (MiMakeProtectionPfnCompatible.c)
 *     MiLockLeafPage @ 0x14034AF20 (MiLockLeafPage.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeCopyPage @ 0x14041BC90 (KeCopyPage.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiGetPrototypePteRanges @ 0x140667260 (MiGetPrototypePteRanges.c)
 */

__int64 __fastcall MiReplacePageOfProtoPool(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r12
  __int64 result; // rax
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 *v11; // rsi
  int ProtectionPfnCompatible; // eax
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // r8
  bool v16; // zf
  unsigned int v17; // r14d
  int v18; // edi
  _BYTE *v19; // rsi
  unsigned int v20; // r8d
  int v21; // eax
  unsigned int v22; // r10d
  __int64 v23; // rbx
  char *v24; // rbx
  __int64 i; // rdx
  unsigned __int64 v26; // rax
  unsigned int v27; // eax
  unsigned int v28; // r8d
  int *v29; // r9
  _DWORD *v30; // rax
  int j; // r10d
  unsigned int v32; // r10d
  __int64 v33; // rcx
  unsigned int v34; // edi
  unsigned __int64 k; // rax
  unsigned int *v36; // rax
  unsigned int v37; // r8d
  int v38; // edi
  __int64 *v39; // rsi
  __int64 v40; // r12
  int v41; // r15d
  __int64 v42; // rax
  char v43; // r15
  int v44; // r12d
  __int64 *v45; // r9
  __int64 v46; // r15
  volatile signed __int32 *v47; // rbx
  unsigned __int64 v48; // rdi
  unsigned int v49; // edi
  __int64 v50; // rdx
  __int64 v51; // r8
  bool v52; // zf
  unsigned int v53; // r9d
  _BYTE *v54; // r15
  __int64 v55; // r13
  unsigned int v56; // r8d
  int v57; // eax
  unsigned int v58; // r11d
  unsigned int v59; // ebx
  char *v60; // rbx
  __int64 m; // rdx
  unsigned __int64 v62; // rax
  unsigned int v63; // eax
  unsigned __int64 v64; // rax
  __int64 v65; // rcx
  int v66; // [rsp+20h] [rbp-A9h]
  int v67; // [rsp+24h] [rbp-A5h]
  BOOL v68; // [rsp+2Ch] [rbp-9Dh]
  int v69; // [rsp+30h] [rbp-99h]
  __int64 *v70; // [rsp+38h] [rbp-91h]
  unsigned __int64 UltraMapping; // [rsp+48h] [rbp-81h] BYREF
  unsigned __int64 ValidPte; // [rsp+50h] [rbp-79h] BYREF
  _QWORD v73[2]; // [rsp+58h] [rbp-71h] BYREF
  __int64 v74; // [rsp+68h] [rbp-61h]
  _BYTE *v75; // [rsp+70h] [rbp-59h]
  __int64 v76; // [rsp+78h] [rbp-51h]
  __int64 v77; // [rsp+80h] [rbp-49h]
  _BYTE v78[64]; // [rsp+90h] [rbp-39h] BYREF

  v77 = a3;
  v76 = a1;
  v73[0] = 512LL;
  v6 = a1;
  v73[1] = v78;
  memset(v78, 0, sizeof(v78));
  result = MiGetPrototypePteRanges(v6, v73);
  if ( (_DWORD)result )
  {
    v66 = 0;
    v67 = 2;
    v74 = 48 * a2 - 0x220000000000LL;
    v9 = 48 * a3 - 0x220000000000LL;
    UltraMapping = MiGetUltraMapping((unsigned __int64 *)(a4 + 96), 3u, 1LL, 0);
    v10 = UltraMapping;
    v11 = (__int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v70 = v11;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v9);
    ValidPte = MiMakeValidPte((unsigned __int64)v11, a3, ProtectionPfnCompatible | 0xA0000000);
    v13 = 0;
    v68 = MiPteInShadowRange((unsigned __int64)v11);
    v14 = ValidPte;
    v15 = 0x8000000000000000uLL;
    if ( !v68 )
      goto LABEL_10;
    if ( MiPteHasShadow() )
    {
      v13 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_10;
      v16 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_10;
      v16 = (ValidPte & 1) == 0;
    }
    if ( !v16 )
      v14 |= v15;
LABEL_10:
    *v11 = v14;
    if ( v13 )
      MiWritePteShadow((__int64)v11, v14, v15);
    KeCopyPage(v10, v6);
    v17 = 0;
    v18 = (((unsigned __int8)&v78[57] - 57) & 4) != 0LL ? 0x20 : 0;
    v69 = v18;
    v19 = &v78[-((((unsigned __int8)&v78[57] - 57) & 4) != 0LL ? 4 : 0)];
    v75 = v19;
LABEL_13:
    v20 = v17 < LODWORD(v73[0]) ? v17 : 0;
    v21 = LODWORD(v73[0]) - 1;
    while ( 1 )
    {
      v22 = v18 + v21;
      if ( v21 - v20 == -1 )
        goto LABEL_15;
      v24 = &v19[8 * ((unsigned __int64)(v18 + v20) >> 6)];
      for ( i = ~*(_QWORD *)v24 | ((1LL << ((v18 + v20) & 0x3F)) - 1); i == -1; i = ~*(_QWORD *)v24 )
      {
        v24 += 8;
        if ( v24 > &v19[8 * ((unsigned __int64)v22 >> 6)] )
          goto LABEL_15;
      }
      _BitScanForward64(&v26, ~i);
      v23 = (unsigned int)v26 + ((unsigned int)((v24 - v19) >> 3) << 6);
      if ( (unsigned int)v23 > v22 )
      {
LABEL_15:
        v23 = 0xFFFFFFFFLL;
      }
      else if ( (_DWORD)v23 != -1 )
      {
        v23 = (unsigned int)(v23 - v18);
LABEL_27:
        if ( (unsigned int)v23 < v17 || (_DWORD)v23 == -1 )
          goto LABEL_61;
        v28 = 0;
        if ( (unsigned int)v23 >= 0x200 )
          goto LABEL_46;
        v29 = (int *)&v78[4 * ((unsigned __int64)(unsigned int)v23 >> 5)];
        v30 = v29 + 1;
        for ( j = ((1 << (v23 & 0x1F)) - 1) | *v29; ; j = *v29 )
        {
          v32 = ~j;
          if ( v32 )
            break;
          if ( v30 > (_DWORD *)&v78[60] )
            goto LABEL_35;
          ++v29;
          ++v30;
        }
        _BitScanForward64((unsigned __int64 *)&v33, v32);
        v34 = v33 + 32 * (((char *)v29 - v78) >> 2);
        if ( v34 <= 0x200 )
        {
          for ( k = ~(v32 | ((1 << v33) - 1)); !(_DWORD)k; k = *v36 )
          {
            v36 = (unsigned int *)(v29 + 1);
            if ( v29 + 1 > (int *)&v78[60] )
            {
              LODWORD(k) = 32;
              goto LABEL_42;
            }
            ++v29;
          }
          _BitScanForward64(&k, k);
LABEL_42:
          v37 = k + 32 * (((char *)v29 - v78) >> 2);
          if ( v37 > 0x200 )
            v37 = 512;
          v28 = v37 - v34;
        }
        else
        {
LABEL_35:
          v34 = 512;
        }
        if ( !v28 )
LABEL_46:
          v34 = 512;
        v38 = v34 - v23;
        v17 = v38 + v28 + v23;
        v39 = (__int64 *)(8 * v23 + v6);
        if ( !v38 )
          goto LABEL_56;
        v40 = v10 - v6;
        v41 = v67;
        do
        {
          v42 = MiLockLeafPage(v39, v41);
          if ( v42 )
          {
            ++v66;
            v67 = v41 | 1;
            v43 = *(_BYTE *)(v42 + 34);
            if ( (v43 & 8) != 0 )
            {
              v45 = v70;
              ++dword_140C135C0;
              v44 = v66;
              *v70 = ZeroPte;
              goto LABEL_74;
            }
            ValidPte = MI_READ_PTE_LOCK_FREE((unsigned __int64)v39);
            if ( (ValidPte & 1) == 0 && (v43 & 0x20) != 0 )
            {
              ++dword_140C135BC;
              v44 = v66;
              goto LABEL_73;
            }
            v41 = v67;
          }
          else
          {
            v78[(unsigned __int64)(unsigned int)v23 >> 3] &= ~(1 << (v23 & 7));
          }
          LODWORD(v23) = v23 + 1;
          *(__int64 *)((char *)v39 + v40) = *v39;
          ++v39;
          --v38;
        }
        while ( v38 );
        v10 = UltraMapping;
        v6 = v76;
LABEL_56:
        if ( v17 < 0x200 )
        {
          v18 = (((unsigned __int8)&v78[57] - 57) & 4) != 0LL ? 0x20 : 0;
          v19 = v75;
          goto LABEL_13;
        }
LABEL_61:
        v44 = v66;
        v46 = v74;
        if ( v66 )
        {
          MiLockNestedPageAtDpcInline(v74);
          v47 = (volatile signed __int32 *)(v46 + 24);
        }
        else
        {
          LODWORD(UltraMapping) = 0;
          v47 = (volatile signed __int32 *)(v74 + 24);
          while ( _interlockedbittestandset64(v47, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&UltraMapping);
            while ( *(__int64 *)v47 < 0 );
          }
        }
        if ( *(_WORD *)(v46 + 32) == 2 )
        {
          if ( (unsigned __int16)*(_QWORD *)v47 != (unsigned __int64)(unsigned int)(v66 + 1)
            || (v48 = *(_QWORD *)v47 & 0x3FFFFFFFFFFFFFFFLL, v48 >= 0x10000) )
          {
            ++dword_140C135C4;
            goto LABEL_72;
          }
          MiLockNestedPageAtDpcInline(v9);
          *(_QWORD *)(v9 + 24) = v48 | *(_QWORD *)(v9 + 24) & 0xC000000000000000uLL;
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v45 = v70;
          v49 = 1;
        }
        else
        {
          ++dword_140C135C8;
LABEL_72:
          _InterlockedAnd64((volatile signed __int64 *)v47, 0x7FFFFFFFFFFFFFFFuLL);
LABEL_73:
          v45 = v70;
LABEL_74:
          v49 = 0;
        }
        v50 = ZeroPte;
        v51 = 0LL;
        if ( v68 )
        {
          if ( MiPteHasShadow() )
          {
            v51 = 1LL;
            if ( !HIBYTE(word_140C6697C) )
            {
              v52 = (v50 & 1) == 0;
LABEL_81:
              if ( !v52 )
                v50 |= 0x8000000000000000uLL;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v52 = (v50 & 1) == 0;
            goto LABEL_81;
          }
        }
        *v45 = v50;
        if ( (_DWORD)v51 )
          MiWritePteShadow((__int64)v45, v50, v51);
        v53 = 0;
        v54 = v75;
        v55 = v76;
LABEL_86:
        if ( !v44 )
          return v49;
        v56 = v53 < LODWORD(v73[0]) ? v53 : 0;
        v57 = LODWORD(v73[0]) - 1;
        while ( 1 )
        {
          v58 = v69 + v57;
          if ( v57 - v56 == -1 )
            goto LABEL_89;
          v60 = &v54[8 * ((unsigned __int64)(v69 + v56) >> 6)];
          for ( m = ~*(_QWORD *)v60 | ((1LL << ((v69 + v56) & 0x3F)) - 1); m == -1; m = ~*(_QWORD *)v60 )
          {
            v60 += 8;
            if ( v60 > &v54[8 * ((unsigned __int64)v58 >> 6)] )
              goto LABEL_89;
          }
          _BitScanForward64(&v62, ~m);
          v59 = v62 + ((unsigned int)((v60 - v54) >> 3) << 6);
          if ( v59 > v58 )
          {
LABEL_89:
            v59 = -1;
          }
          else if ( v59 != -1 )
          {
            v59 -= v69;
LABEL_102:
            v64 = MI_READ_PTE_LOCK_FREE(v55 + 8LL * v59);
            ValidPte = v64;
            if ( (v64 & 1) != 0 )
            {
              v64 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&ValidPte);
            }
            else if ( qword_140C657C0 )
            {
              if ( (v64 & 0x10) != 0 )
                v64 &= ~0x10uLL;
              else
                v64 &= ~qword_140C657C0;
            }
            v65 = 48 * ((v64 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
            if ( v49 )
              MiSetPfnPteFrame(v65, v77);
            --v44;
            _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v53 = v59 + 1;
            goto LABEL_86;
          }
          if ( !v56 )
            goto LABEL_102;
          v63 = v53 + 1;
          if ( v53 + 1 > LODWORD(v73[0]) )
            v63 = v73[0];
          v57 = v63 - 1;
          v56 = 0;
        }
      }
      if ( !v20 )
        goto LABEL_27;
      v27 = v17 + 1;
      if ( v17 + 1 > LODWORD(v73[0]) )
        v27 = v73[0];
      v21 = v27 - 1;
      v20 = 0;
    }
  }
  return result;
}
