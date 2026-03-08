/*
 * XREFs of sub_1403ED020 @ 0x1403ED020
 * Callers:
 *     sub_1403DFCC0 @ 0x1403DFCC0 (sub_1403DFCC0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140AF7010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_1403EC00C @ 0x1403EC00C (sub_1403EC00C.c)
 *     $$ba @ 0x140B0E898 ($$ba.c)
 *     KeGuardDispatchICall @ 0x140B107A0 (KeGuardDispatchICall.c)
 */

unsigned __int64 __fastcall sub_1403ED020(__int64 a1, int *a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int64 j; // rbp
  __int64 v9; // r9
  _QWORD *v10; // r11
  __int64 v11; // r8
  _QWORD *v12; // r9
  const char *v13; // rax
  int v14; // r10d
  __int64 v15; // r15
  unsigned int v16; // ebp
  unsigned __int64 i; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  _QWORD *v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // r8d
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // esi
  BOOL v28; // ebp
  unsigned __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 CurrentIrql; // r8
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // r15
  int v35; // eax
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // r8
  unsigned __int64 *v40; // r9
  unsigned __int8 *v41; // r10
  __int64 v42; // rcx
  __int64 v43; // rdx
  bool v44; // zf
  int v45; // r13d
  __int64 v46; // rcx
  unsigned __int64 v47; // rbp
  unsigned __int64 v48; // r15
  unsigned __int64 v49; // r12
  __int64 v50; // rcx
  _BYTE v51[72]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v52; // [rsp+78h] [rbp+10h]
  unsigned __int8 v53; // [rsp+78h] [rbp+10h]
  unsigned __int8 v54; // [rsp+80h] [rbp+18h]
  __int64 v55; // [rsp+80h] [rbp+18h]
  __int64 v56; // [rsp+88h] [rbp+20h]

  result = (unsigned int)a2[10];
  v4 = a1;
  LOBYTE(a3) = 4;
  if ( (result & 2) == 0 )
  {
LABEL_14:
    result = (unsigned int)a2[10];
    if ( (result & 4) != 0 )
      return result;
    v10 = (_QWORD *)*((_QWORD *)a2 + 1);
    v11 = (unsigned int)a2[4];
    v12 = v10;
    *(_DWORD *)(v4 + 2088) += v11;
    v13 = (const char *)v10;
    v14 = *(_DWORD *)(v4 + 2068);
    v15 = *(_QWORD *)(v4 + 2072);
    if ( v10 < (_QWORD *)((char *)v10 + v11) )
    {
      do
      {
        _mm_prefetch(v13, 0);
        v13 += 64;
      }
      while ( v13 < (const char *)v10 + v11 );
    }
    v16 = (unsigned int)v11 >> 7;
    for ( i = *(_QWORD *)(v4 + 2072); v16; --v16 )
    {
      v18 = 8LL;
      do
      {
        v19 = *v12 ^ i;
        v20 = v12 + 1;
        v21 = *v20 ^ __ROL8__(v19, v14);
        v12 = v20 + 1;
        i = __ROL8__(v21, v14);
        --v18;
      }
      while ( v18 );
      v22 = __ROL8__(v15 ^ ((char *)v12 - (char *)v10), 17);
      LOBYTE(v22) = v14 ^ (((v22 ^ v15 ^ (unsigned __int64)((char *)v12 - (char *)v10))
                          * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v22 ^ v15 ^ ((_BYTE)v12 - (_BYTE)v10);
      LOBYTE(v14) = 1;
      v23 = v22 & 0x3F;
      if ( v23 )
        LOBYTE(v14) = v23;
    }
    v24 = v11 & 0x7F;
    if ( v24 >= 8 )
    {
      v25 = (unsigned __int64)v24 >> 3;
      do
      {
        i = __ROL8__(*v12++ ^ i, v14);
        v24 -= 8;
        --v25;
      }
      while ( v25 );
    }
    for ( ; v24; --v24 )
    {
      v26 = *(unsigned __int8 *)v12;
      v12 = (_QWORD *)((char *)v12 + 1);
      i = __ROL8__(v26 ^ i, v14);
    }
    for ( result = i; ; LODWORD(i) = result ^ i )
    {
      result >>= 31;
      if ( !result )
        break;
    }
    v27 = i & 0x7FFFFFFF;
    v28 = 0;
    v29 = 0xB3B74BDEE4453415uLL;
    if ( v27 != a2[5] )
    {
      if ( !*a2 )
        v28 = a2[6] != 0;
      v30 = (unsigned int)a2[4];
      v31 = *((_QWORD *)a2 + 1);
      if ( a2[4] && (*(_DWORD *)(v4 + 2452) & 0x40) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v54 = CurrentIrql;
        __writecr8(2uLL);
        v33 = (unsigned __int8)CurrentIrql;
        v34 = v31 & 0xFFFFFFFFFFFFF000uLL;
        v56 = (v31 + v30 - 1) | 0xFFF;
        v52 = (v31 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          while ( 1 )
          {
            v35 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64))(v4 + 1128))(
                    v34,
                    0LL,
                    CurrentIrql,
                    v29);
            if ( v35 == -1073741267 )
              break;
            if ( v35 < 0 )
            {
LABEL_44:
              __writecr8(v33);
              goto LABEL_45;
            }
LABEL_42:
            v34 += 4096LL;
            result = v52 + 4096;
            v52 = result;
            if ( result == v56 )
            {
              __writecr8(v33);
              goto LABEL_48;
            }
          }
          if ( v28 )
            goto LABEL_44;
          if ( v54 > 1u )
            goto LABEL_42;
          __writecr8(v33);
          KeGetCurrentIrql();
          __writecr8(2uLL);
        }
      }
LABEL_45:
      result = (unsigned int)a2[5];
      if ( !*(_DWORD *)(v4 + 2296) )
      {
        v36 = v27 ^ (unsigned __int64)(unsigned int)result;
        result = *(_QWORD *)(v4 + 1416);
        *(_QWORD *)(result + 24) = v36;
        v37 = *((_QWORD *)a2 + 1);
        if ( !*(_DWORD *)(v4 + 2296) )
        {
          *(_QWORD *)(v4 + 2304) = v4 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v4 + 2312) = (char *)a2 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v4 + 2320) = *a2;
          *(_QWORD *)(v4 + 2328) = v37;
          *(_DWORD *)(v4 + 2296) = 1;
          result = __ba(v4, 0LL, 0xA3A03F5891C8B4E8uLL, 0xB3B74BDEE4453415uLL);
        }
      }
    }
LABEL_48:
    v38 = (unsigned int)a2[4];
    if ( !(_DWORD)v38 )
      return result;
    sub_1403EC00C(v4, *((_QWORD *)a2 + 1), v38, (__int64)v51);
    v39 = 16LL;
    v40 = (unsigned __int64 *)(a2 + 6);
    v41 = v51;
    do
    {
      v42 = *(_QWORD *)v41;
      v41 += 8;
      result = *v40++;
      if ( v42 != result )
        goto LABEL_56;
      v39 = (unsigned int)(v39 - 8);
    }
    while ( (unsigned int)v39 >= 8 );
    if ( (_DWORD)v39 )
    {
      while ( 1 )
      {
        v43 = *v41++;
        result = *(unsigned __int8 *)v40;
        v40 = (unsigned __int64 *)((char *)v40 + 1);
        if ( v43 != result )
          break;
        v44 = (_DWORD)v39 == 1;
        v39 = (unsigned int)(v39 - 1);
        if ( v44 )
          goto LABEL_68;
      }
LABEL_56:
      result = *(unsigned int *)(v4 + 2452);
      v45 = a2[10] & 1;
      v46 = *((_QWORD *)a2 + 1);
      if ( (result & 0x40) != 0 )
      {
        v39 = KeGetCurrentIrql();
        v53 = v39;
        __writecr8(2uLL);
        v47 = (unsigned __int8)v39;
        v48 = v46 & 0xFFFFFFFFFFFFF000uLL;
        v55 = (v38 + v46 - 1) | 0xFFF;
        v49 = (v46 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          while ( 1 )
          {
            result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64 *))(v4 + 1128))(
                       v48,
                       0LL,
                       v39,
                       v40);
            if ( (_DWORD)result == -1073741267 )
              break;
            if ( (result & 0x80000000) != 0LL )
            {
LABEL_65:
              __writecr8(v47);
              goto LABEL_66;
            }
LABEL_63:
            result = 4096LL;
            v48 += 4096LL;
            v49 += 4096LL;
            if ( v49 == v55 )
            {
              __writecr8(v47);
              goto LABEL_68;
            }
          }
          if ( v45 )
            goto LABEL_65;
          if ( v53 > 1u )
            goto LABEL_63;
          __writecr8(v47);
          KeGetCurrentIrql();
          __writecr8(2uLL);
        }
      }
LABEL_66:
      v50 = *((_QWORD *)a2 + 1);
      if ( !*(_DWORD *)(v4 + 2296) )
      {
        *(_QWORD *)(v4 + 2304) = v4 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v4 + 2312) = (char *)a2 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v4 + 2320) = *a2;
        *(_QWORD *)(v4 + 2328) = v50;
        *(_DWORD *)(v4 + 2296) = 1;
        result = __ba(v4, 0LL, v39, v40);
      }
    }
LABEL_68:
    *(_DWORD *)(v4 + 2088) += 16 * v38;
    return result;
  }
  if ( !*(_QWORD *)(a1 + 2432) )
    goto LABEL_13;
  v6 = *(unsigned int *)(a1 + 2452);
  if ( !*(_DWORD *)(a1 + 2084) )
  {
    LODWORD(a1) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(8 * v6)) & 0x20;
    *(_DWORD *)(v4 + 2452) = a1;
    goto LABEL_6;
  }
  LOBYTE(a1) = *(_DWORD *)(a1 + 2452);
  result = (unsigned int)v6 ^ ((unsigned int)v6 >> 3);
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)((unsigned int)v6 >> 3)) & 4) != 0 )
  {
LABEL_13:
    *(_DWORD *)(v4 + 2084) = 0;
    return result;
  }
LABEL_6:
  if ( (a1 & 4) == 0 )
    goto LABEL_14;
  v7 = *((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFF000uLL;
  for ( j = ((a2[2] & 0xFFF) + (unsigned __int64)(unsigned int)a2[4] + 4095) >> 12; j; v7 += 4096LL )
  {
    --j;
    result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(v4 + 688))(v7, v6, a3);
    if ( (_BYTE)result )
    {
      if ( !*(_DWORD *)(v4 + 2296) )
      {
        *(_QWORD *)(v4 + 2304) = v4 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v4 + 2312) = (char *)a2 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v4 + 2320) = *a2;
        *(_QWORD *)(v4 + 2328) = v7;
        *(_DWORD *)(v4 + 2296) = 1;
        result = __ba(v4, 0LL, a3, v9);
      }
    }
    *(_DWORD *)(v4 + 2088) += 256;
  }
  return result;
}
