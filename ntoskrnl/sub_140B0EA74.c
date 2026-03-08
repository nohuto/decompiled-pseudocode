/*
 * XREFs of sub_140B0EA74 @ 0x140B0EA74
 * Callers:
 *     sub_1403DFCC0 @ 0x1403DFCC0 (sub_1403DFCC0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AF7010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     KiAccessPage @ 0x140B10480 (KiAccessPage.c)
 *     KeGuardCheckICall @ 0x140B107B0 (KeGuardCheckICall.c)
 */

int __fastcall sub_140B0EA74(__int64 a1, __int64 *a2, unsigned int a3)
{
  unsigned int v4; // r15d
  __int64 *v5; // r14
  const char *v6; // rax
  unsigned __int64 v7; // rcx
  int v8; // r8d
  unsigned __int64 v9; // rbx
  _BYTE *v10; // rdi
  char v11; // al
  unsigned __int8 CurrentIrql; // r12
  volatile signed __int32 *v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v18; // rcx
  __int64 v19; // r13
  char v20; // al
  __int64 v21; // r13
  unsigned __int8 v22; // r12
  volatile signed __int32 *v23; // rbp
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned int v26; // eax
  struct _KPRCB *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  unsigned __int64 v30; // rcx
  bool v31; // zf
  unsigned int v32; // r15d
  _BYTE *v33; // rdi
  unsigned __int64 v34; // r13
  char v35; // al
  unsigned __int8 v36; // r12
  volatile signed __int32 *v37; // rbp
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // eax
  struct _KPRCB *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rbp
  char v45; // cl
  volatile signed __int32 *v46; // rdi
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // eax
  unsigned __int8 v50; // r12
  struct _KPRCB *v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  int i; // eax
  unsigned int v57; // [rsp+20h] [rbp-88h]
  unsigned __int64 v58; // [rsp+30h] [rbp-78h]
  char v59; // [rsp+B0h] [rbp+8h]
  __int64 v60; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v61; // [rsp+C0h] [rbp+18h]
  unsigned int v62; // [rsp+C8h] [rbp+20h]

  v61 = a3;
  v60 = (__int64)a2;
  v4 = a3;
  *(_DWORD *)(a1 + 2088) += a3;
  v5 = a2;
  v6 = (const char *)a2;
  v7 = (unsigned __int64)a2 + a3;
  if ( (unsigned __int64)a2 < v7 )
  {
    do
    {
      _mm_prefetch(v6, 0);
      v6 += 64;
    }
    while ( (unsigned __int64)v6 < v7 );
  }
  v8 = *(_DWORD *)(a1 + 2068);
  v9 = *(_QWORD *)(a1 + 2072);
  v58 = v9;
  v59 = v8;
  v57 = v4 >> 7;
  if ( v4 >> 7 )
  {
    v10 = (char *)a2 - 6;
    do
    {
      v62 = 128;
      do
      {
        v11 = v10[5];
        if ( *v10 == 76 && v10[1] == 0x87 && !v10[2] && v10[3] == 0x98 && v10[4] == 0xC3 && (v11 == -112 || v11 == -15) )
        {
          CurrentIrql = -1;
          v13 = 0LL;
          v14 = __rdtsc();
          v15 = __ROR8__(v14, 3) ^ v14;
          v16 = ((unsigned __int8)((v15 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int8)v15) & 3;
          if ( v16 <= 1 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            CurrentPrcb = KeGetCurrentPrcb();
            v18 = *(_QWORD *)(a1 + 1616);
            v13 = v16
                ? *(volatile signed __int32 **)(*(_QWORD *)(a1 + 1712)
                                              + *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v18)
                                              + *(_QWORD *)(a1 + 1680))
                : *(volatile signed __int32 **)((char *)&CurrentPrcb->MxCsr + v18);
            if ( _interlockedbittestandset(v13, (*(_DWORD *)(a1 + 2448) >> 10) & 0x1F) )
            {
              v13 = 0LL;
              __writecr8(CurrentIrql);
            }
          }
          v19 = KiAccessPage(v10, v5, *v5);
          if ( v13 )
          {
            _InterlockedAnd(v13, ~(1 << ((*(_DWORD *)(a1 + 2448) >> 10) & 0x1F)));
            __writecr8(CurrentIrql);
          }
          LOBYTE(v8) = v59;
        }
        else
        {
          v19 = 0LL;
        }
        v20 = v10[5];
        v21 = __ROL8__(v9 ^ v19, v8);
        if ( *v10 == 76 && v10[1] == 0x87 && !v10[2] && v10[3] == 0x98 && v10[4] == 0xC3 && (v20 == -112 || v20 == -15) )
        {
          v22 = -1;
          v23 = 0LL;
          v24 = __rdtsc();
          v25 = __ROR8__(v24, 3) ^ v24;
          v26 = ((unsigned __int8)((v25 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int8)v25) & 3;
          if ( v26 <= 1 )
          {
            v22 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v27 = KeGetCurrentPrcb();
            v28 = *(_QWORD *)(a1 + 1616);
            v23 = v26
                ? *(volatile signed __int32 **)(*(_QWORD *)(a1 + 1712)
                                              + *(_QWORD *)((char *)&v27->MxCsr + v28)
                                              + *(_QWORD *)(a1 + 1680))
                : *(volatile signed __int32 **)((char *)&v27->MxCsr + v28);
            if ( _interlockedbittestandset(v23, (*(_DWORD *)(a1 + 2448) >> 10) & 0x1F) )
            {
              v23 = 0LL;
              __writecr8(v22);
            }
          }
          v29 = KiAccessPage(v10, v5 + 1, v5[1]);
          if ( v23 )
          {
            _InterlockedAnd(v23, ~(1 << ((*(_DWORD *)(a1 + 2448) >> 10) & 0x1F)));
            __writecr8(v22);
          }
          LOBYTE(v8) = v59;
        }
        else
        {
          v29 = 0LL;
        }
        v9 = __ROL8__(v21 ^ v29, v8);
        v5 += 2;
        v62 -= 16;
      }
      while ( v62 >= 8 );
      v30 = __ROL8__(v58 ^ ((unsigned __int64)v5 - v60), 17) ^ v58 ^ ((unsigned __int64)v5 - v60);
      v8 = ((unsigned __int8)(((v30 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v30) ^ (unsigned __int8)v8) & 0x3F;
      if ( !v8 )
        LOBYTE(v8) = 1;
      v31 = v57-- == 1;
      v59 = v8;
    }
    while ( !v31 );
    LOBYTE(v4) = v61;
    a2 = (__int64 *)v60;
  }
  v32 = v4 & 0x7F;
  if ( v32 >= 8 )
  {
    v33 = (char *)a2 - 6;
    v34 = (unsigned __int64)v32 >> 3;
    do
    {
      v35 = v33[5];
      if ( *v33 == 76 && v33[1] == 0x87 && !v33[2] && v33[3] == 0x98 && v33[4] == 0xC3 && (v35 == -112 || v35 == -15) )
      {
        v36 = -1;
        v37 = 0LL;
        v38 = __rdtsc();
        v39 = __ROR8__(v38, 3);
        v40 = ((unsigned __int8)(((v39 ^ v38) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int8)(v39 ^ v38)) & 3;
        if ( v40 <= 1 )
        {
          v36 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v41 = KeGetCurrentPrcb();
          v42 = *(_QWORD *)(a1 + 1616);
          v37 = v40
              ? *(volatile signed __int32 **)(*(_QWORD *)(a1 + 1712)
                                            + *(_QWORD *)((char *)&v41->MxCsr + v42)
                                            + *(_QWORD *)(a1 + 1680))
              : *(volatile signed __int32 **)((char *)&v41->MxCsr + v42);
          if ( _interlockedbittestandset(v37, (*(_DWORD *)(a1 + 2448) >> 10) & 0x1F) )
          {
            v37 = 0LL;
            __writecr8(v36);
          }
        }
        v43 = KiAccessPage(v33, v5, *v5);
        if ( v37 )
        {
          _InterlockedAnd(v37, ~(1 << ((*(_DWORD *)(a1 + 2448) >> 10) & 0x1F)));
          __writecr8(v36);
        }
      }
      else
      {
        v43 = 0LL;
      }
      v9 = __ROL8__(v43 ^ v9, v59);
      ++v5;
      v32 -= 8;
      --v34;
    }
    while ( v34 );
  }
  if ( ((unsigned __int16)v5 & 0xFFFu) <= 0xFF8 )
  {
    v44 = v60;
    v45 = *(_BYTE *)(v60 - 1);
    if ( *(_BYTE *)(v60 - 6) == 76
      && *(_BYTE *)(v60 - 5) == 0x87
      && !*(_BYTE *)(v60 - 4)
      && *(_BYTE *)(v60 - 3) == 0x98
      && *(_BYTE *)(v60 - 2) == 0xC3
      && (v45 == -112 || v45 == -15) )
    {
      v46 = 0LL;
      v47 = __rdtsc();
      v48 = __ROR8__(v47, 3);
      v49 = ((unsigned __int8)(((v48 ^ v47) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int8)(v48 ^ v47)) & 3;
      if ( v49 > 1 )
      {
        v50 = -1;
      }
      else
      {
        v50 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v51 = KeGetCurrentPrcb();
        v52 = *(_QWORD *)(a1 + 1616);
        if ( v49 )
          v46 = *(volatile signed __int32 **)(*(_QWORD *)(a1 + 1712)
                                            + *(_QWORD *)((char *)&v51->MxCsr + v52)
                                            + *(_QWORD *)(a1 + 1680));
        else
          v46 = *(volatile signed __int32 **)((char *)&v51->MxCsr + v52);
        if ( _interlockedbittestandset(v46, (*(_DWORD *)(a1 + 2448) >> 10) & 0x1F) )
        {
          v46 = 0LL;
          __writecr8(v50);
        }
      }
      v53 = KiAccessPage(v44 - 6, v5, *v5);
      if ( v46 )
      {
        _InterlockedAnd(v46, ~(1 << ((*(_DWORD *)(a1 + 2448) >> 10) & 0x1F)));
        __writecr8(v50);
      }
    }
    else
    {
      v53 = 0LL;
    }
    v60 = v53;
    v5 = &v60;
  }
  for ( ; v32; --v32 )
  {
    v54 = *(unsigned __int8 *)v5;
    v5 = (__int64 *)((char *)v5 + 1);
    v9 = __ROL8__(v54 ^ v9, v59);
  }
  for ( i = v9; ; i ^= v9 )
  {
    v9 >>= 31;
    if ( !v9 )
      break;
  }
  return i & 0x7FFFFFFF;
}
