/*
 * XREFs of NtGdiGetCharacterPlacementW @ 0x1C02C4E40
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C0114AF8 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C0114B84 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?GreGetCharacterPlacementW@@YAKPEAUHDC__@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02D90CC (-GreGetCharacterPlacementW@@YAKPEAUHDC__@@PEAGKKPEAUtagGCP_RESULTSW@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiGetCharacterPlacementW(__int64 a1, const void *a2, int a3, int a4, ULONG64 a5, int a6)
{
  int v7; // r12d
  unsigned int v8; // edi
  __int64 v9; // r13
  __int64 v10; // rsi
  const void *v11; // r10
  _BYTE *v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  char *v16; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  size_t v24; // r8
  ULONG64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  void *v28; // rcx
  __int64 v29; // rax
  size_t v30; // r12
  __int64 v31; // rcx
  __int64 v32; // r15
  _BYTE **v33; // rdi
  size_t v34; // r8
  const void *v35; // rdx
  char *v36; // rcx
  const void *v37; // rdx
  const void *v38; // rdx
  const void *v39; // rdx
  const void *v40; // rdx
  const void *v41; // rdx
  char *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  int v45; // eax
  int CharacterPlacementW; // [rsp+44h] [rbp-E4h]
  unsigned int v47; // [rsp+48h] [rbp-E0h]
  unsigned int v48; // [rsp+4Ch] [rbp-DCh]
  unsigned int v49; // [rsp+50h] [rbp-D8h]
  unsigned int v50; // [rsp+54h] [rbp-D4h]
  unsigned int v51; // [rsp+58h] [rbp-D0h]
  unsigned int v52; // [rsp+5Ch] [rbp-CCh]
  void *v53[2]; // [rsp+70h] [rbp-B8h] BYREF
  void *v54[2]; // [rsp+80h] [rbp-A8h]
  void *v55[2]; // [rsp+90h] [rbp-98h]
  void *v56[2]; // [rsp+A0h] [rbp-88h]
  __int64 v57; // [rsp+B0h] [rbp-78h]
  __int64 v58; // [rsp+B8h] [rbp-70h]
  _BYTE v59[104]; // [rsp+C0h] [rbp-68h] BYREF

  v7 = a3;
  CharacterPlacementW = 0;
  v8 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v9 = 0LL;
  v57 = 0LL;
  v10 = 0LL;
  memset_0(v53, 0, 0x40uLL);
  if ( v7 < 0 )
    return 0LL;
  if ( a4 < -1 )
    return 0LL;
  v11 = a2;
  if ( !a2 )
    return 0LL;
  if ( a5 )
  {
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (_BYTE *)a5;
    if ( a5 >= MmUserProbeAddress )
      v12 = (_BYTE *)MmUserProbeAddress;
    *v12 = *v12;
    v12[63] = v12[63];
    *(_OWORD *)v53 = *(_OWORD *)a5;
    *(_OWORD *)v54 = *(_OWORD *)(a5 + 16);
    *(_OWORD *)v55 = *(_OWORD *)(a5 + 32);
    *(_OWORD *)v56 = *(_OWORD *)(a5 + 48);
    v7 = a3;
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)v56, 8));
    if ( a3 > v13 )
      v7 = v13;
  }
  if ( (unsigned int)v7 > 0x9C4000 )
    return 0LL;
  v14 = (unsigned int)(2 * v7);
  v15 = 4 * v7;
  if ( a5 )
  {
    v8 = 64;
    if ( v53[1] )
    {
      v47 = 64;
      v8 = ((v14 + 3) & 0xFFFFFFFC) + 64;
      if ( (((_DWORD)v14 + 3) & 0xFFFFFFFC) >= 0xFFFFFFC0 )
        return 0LL;
    }
    if ( v54[0] )
    {
      v48 = v8;
      v8 += v15;
      if ( v8 < v48 )
        return 0LL;
    }
    v16 = (char *)v54[1];
    if ( v54[1] )
    {
      v49 = v8;
      v8 += v15;
      if ( v8 < v49 )
        return 0LL;
    }
    if ( v55[0] )
    {
      v50 = v8;
      v8 += v15;
      if ( v8 < v50 )
        return 0LL;
    }
    if ( v55[1] )
    {
      v51 = v8;
      v8 += (v7 + 3) & 0xFFFFFFFC;
      if ( v8 < v51 )
        return 0LL;
    }
    if ( v56[0] )
    {
      v52 = v8;
      v8 += v14;
      if ( v8 < v52 )
        return 0LL;
    }
  }
  else
  {
    v16 = (char *)v54[1];
  }
  if ( v8 <= 40960000 - (int)v14 )
  {
    v10 = AllocFreeTmpBuffer(v8 + (unsigned int)v14);
    v14 = (unsigned int)(2 * v7);
    v11 = a2;
  }
  if ( v10 )
  {
    v58 = v10 + v8;
    if ( a5 )
    {
      v9 = v10;
      v57 = v10;
      if ( v53[1] )
        v18 = v10 + v47;
      else
        v18 = 0LL;
      *(_QWORD *)(v10 + 8) = v18;
      if ( v54[0] )
        v19 = v10 + v48;
      else
        v19 = 0LL;
      *(_QWORD *)(v10 + 16) = v19;
      if ( v16 )
        v20 = v10 + v49;
      else
        v20 = 0LL;
      *(_QWORD *)(v10 + 24) = v20;
      if ( v55[0] )
        v21 = v10 + v50;
      else
        v21 = 0LL;
      *(_QWORD *)(v10 + 32) = v21;
      if ( v55[1] )
        v22 = v10 + v51;
      else
        v22 = 0LL;
      *(_QWORD *)(v10 + 40) = v22;
      if ( v56[0] )
        v23 = v10 + v52;
      else
        v23 = 0LL;
      *(_QWORD *)(v10 + 48) = v23;
      *(_DWORD *)v10 = v8;
      *(_DWORD *)(v10 + 56) = v7;
    }
    v24 = (unsigned int)v14;
    v25 = (ULONG64)v11 + v14;
    if ( v25 < (unsigned __int64)v11 || v25 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove((void *)(v10 + v8), v11, v24);
    if ( (a6 & 0x200000) != 0 && a5 && v16 )
    {
      v27 = (unsigned int)(4 * v7);
      v28 = *(void **)(v9 + 24);
      if ( &v16[v27] < v16 || (unsigned __int64)&v16[v27] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v28, v16, (unsigned int)(4 * v7));
    }
    v29 = SGDGetSessionState(v26);
    EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v59, *(struct Gre::Full::SESSION_GLOBALS **)(v29 + 32));
    CharacterPlacementW = GreGetCharacterPlacementW(a1, v58, (unsigned int)v7, (unsigned int)a4, v9, a6);
    if ( CharacterPlacementW && a5 )
    {
      *(_DWORD *)(a5 + 60) = *(_DWORD *)(v9 + 60);
      v30 = *(int *)(v9 + 56);
      *(_DWORD *)(a5 + 56) = v30;
      v31 = (unsigned int)(2 * v30);
      v32 = (unsigned int)(4 * v30);
      v33 = (_BYTE **)MmUserProbeAddress;
      if ( v53[1] )
      {
        v34 = (unsigned int)v31;
        v35 = *(const void **)(v9 + 8);
        v36 = (char *)v53[1] + v31;
        if ( (unsigned __int64)v36 > MmUserProbeAddress || v36 <= v53[1] )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          v33 = (_BYTE **)MmUserProbeAddress;
        }
        memmove(v53[1], v35, v34);
      }
      if ( v54[0] )
      {
        v37 = *(const void **)(v9 + 16);
        if ( (char *)v54[0] + v32 > *v33 || (char *)v54[0] + v32 <= v54[0] )
        {
          **v33 = 0;
          v33 = (_BYTE **)MmUserProbeAddress;
        }
        memmove(v54[0], v37, (unsigned int)(4 * v30));
      }
      if ( v16 )
      {
        v38 = *(const void **)(v9 + 24);
        if ( &v16[v32] > *v33 || &v16[v32] <= v16 )
        {
          **v33 = 0;
          v33 = (_BYTE **)MmUserProbeAddress;
        }
        memmove(v16, v38, (unsigned int)(4 * v30));
      }
      if ( v55[0] )
      {
        v39 = *(const void **)(v9 + 32);
        if ( (char *)v55[0] + v32 > *v33 || (char *)v55[0] + v32 <= v55[0] )
        {
          **v33 = 0;
          v33 = (_BYTE **)MmUserProbeAddress;
        }
        memmove(v55[0], v39, (unsigned int)(4 * v30));
      }
      if ( v55[1] )
      {
        v40 = *(const void **)(v9 + 40);
        if ( (char *)v55[1] + v30 > *v33 || (char *)v55[1] + v30 <= v55[1] )
        {
          **v33 = 0;
          v33 = (_BYTE **)MmUserProbeAddress;
        }
        memmove(v55[1], v40, v30);
      }
      if ( v56[0] )
      {
        v41 = *(const void **)(v9 + 48);
        v42 = (char *)v56[0] + (unsigned int)(2 * v30);
        if ( v42 > *v33 || v42 <= v56[0] )
          **v33 = 0;
        memmove(v56[0], v41, (unsigned int)(2 * v30));
      }
    }
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v59);
    FreeTmpBuffer(v10, v43, v44);
    v45 = 1;
  }
  else
  {
    v45 = 0;
  }
  return CharacterPlacementW & (unsigned int)-(v45 != 0);
}
