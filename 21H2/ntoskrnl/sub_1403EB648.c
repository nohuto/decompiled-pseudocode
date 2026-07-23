/*
 * XREFs of sub_1403EB648 @ 0x1403EB648
 * Callers:
 *     sub_1403DDFC0 @ 0x1403DDFC0 (sub_1403DDFC0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x1409F9010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_1403EA5FC @ 0x1403EA5FC (sub_1403EA5FC.c)
 *     $$b8 @ 0x140A103CC ($$b8.c)
 *     KeGuardDispatchICall @ 0x140A12330 (KeGuardDispatchICall.c)
 */

unsigned __int64 __fastcall sub_1403EB648(__int64 a1, int *a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v6; // rdx
  int v7; // ecx
  unsigned __int64 v8; // rsi
  unsigned __int64 j; // rbp
  __int64 v10; // r9
  _QWORD *v11; // r11
  __int64 v12; // r8
  _QWORD *v13; // r9
  const char *v14; // rax
  int v15; // r10d
  __int64 v16; // r15
  unsigned int v17; // ebp
  unsigned __int64 i; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  _QWORD *v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // r8d
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // esi
  BOOL v29; // ebp
  unsigned __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 CurrentIrql; // r8
  unsigned __int64 v34; // r12
  unsigned __int64 v35; // r15
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // r8
  unsigned __int64 *v40; // r9
  unsigned __int8 *v41; // r10
  __int64 v42; // rcx
  __int64 v43; // rdx
  bool v44; // zf
  __int64 v45; // rdx
  int v46; // r13d
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
  LOBYTE(a3) = 4;
  if ( (result & 2) == 0 )
  {
LABEL_14:
    result = (unsigned int)a2[10];
    if ( (result & 4) != 0 )
      return result;
    v11 = (_QWORD *)*((_QWORD *)a2 + 1);
    v12 = (unsigned int)a2[4];
    v13 = v11;
    *(_DWORD *)(a1 + 2088) += v12;
    v14 = (const char *)v11;
    v15 = *(_DWORD *)(a1 + 2068);
    v16 = *(_QWORD *)(a1 + 2072);
    if ( v11 < (_QWORD *)((char *)v11 + v12) )
    {
      do
      {
        _mm_prefetch(v14, 0);
        v14 += 64;
      }
      while ( v14 < (const char *)v11 + v12 );
    }
    v17 = (unsigned int)v12 >> 7;
    for ( i = *(_QWORD *)(a1 + 2072); v17; --v17 )
    {
      v19 = 8LL;
      do
      {
        v20 = *v13 ^ i;
        v21 = v13 + 1;
        v22 = *v21 ^ __ROL8__(v20, v15);
        v13 = v21 + 1;
        i = __ROL8__(v22, v15);
        --v19;
      }
      while ( v19 );
      v23 = __ROL8__(v16 ^ ((char *)v13 - (char *)v11), 17);
      LOBYTE(v23) = v15 ^ (((v23 ^ v16 ^ (unsigned __int64)((char *)v13 - (char *)v11))
                          * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v23 ^ v16 ^ ((_BYTE)v13 - (_BYTE)v11);
      LOBYTE(v15) = 1;
      v24 = v23 & 0x3F;
      if ( v24 )
        LOBYTE(v15) = v24;
    }
    v25 = v12 & 0x7F;
    if ( v25 >= 8 )
    {
      v26 = (unsigned __int64)v25 >> 3;
      do
      {
        i = __ROL8__(*v13++ ^ i, v15);
        v25 -= 8;
        --v26;
      }
      while ( v26 );
    }
    for ( ; v25; --v25 )
    {
      v27 = *(unsigned __int8 *)v13;
      v13 = (_QWORD *)((char *)v13 + 1);
      i = __ROL8__(v27 ^ i, v15);
    }
    for ( result = i; ; LODWORD(i) = result ^ i )
    {
      result >>= 31;
      if ( !result )
        break;
    }
    v28 = i & 0x7FFFFFFF;
    v29 = 0;
    v30 = 0xB3B74BDEE4453415uLL;
    if ( v28 != a2[5] )
    {
      if ( !*a2 )
        v29 = a2[6] != 0;
      v31 = (unsigned int)a2[4];
      v32 = *((_QWORD *)a2 + 1);
      if ( a2[4] && (*(_DWORD *)(a1 + 2452) & 0x40) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v54 = CurrentIrql;
        __writecr8(2uLL);
        v34 = (unsigned __int8)CurrentIrql;
        v35 = v32 & 0xFFFFFFFFFFFFF000uLL;
        v56 = (v32 + v31 - 1) | 0xFFF;
        v52 = (v32 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          while ( 1 )
          {
            v36 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64))(a1 + 1128))(
                    v35,
                    0LL,
                    CurrentIrql,
                    v30);
            if ( v36 == -1073741267 )
              break;
            if ( v36 < 0 )
            {
LABEL_44:
              __writecr8(v34);
              goto LABEL_45;
            }
LABEL_42:
            v35 += 4096LL;
            result = v52 + 4096;
            v52 = result;
            if ( result == v56 )
            {
              __writecr8(v34);
              goto LABEL_49;
            }
          }
          if ( v29 )
            goto LABEL_44;
          if ( v54 > 1u )
            goto LABEL_42;
          __writecr8(v34);
          KeGetCurrentIrql();
          __writecr8(2uLL);
        }
      }
LABEL_45:
      result = *(unsigned int *)(a1 + 2296);
      if ( !(_DWORD)result )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 1424) + 24LL) = v28 ^ (unsigned __int64)(unsigned int)a2[5];
        result = *(unsigned int *)(a1 + 2296);
      }
      v37 = *((_QWORD *)a2 + 1);
      if ( !(_DWORD)result )
      {
        *(_QWORD *)(a1 + 2304) = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 2312) = (char *)a2 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(a1 + 2320) = *a2;
        *(_QWORD *)(a1 + 2328) = v37;
        *(_DWORD *)(a1 + 2296) = 1;
        result = __b8(a1, 0LL, 0xA3A03F5891C8B4E8uLL, 0xB3B74BDEE4453415uLL);
      }
    }
LABEL_49:
    v38 = (unsigned int)a2[4];
    if ( !(_DWORD)v38 )
      return result;
    sub_1403EA5FC(a1, *((_QWORD *)a2 + 1), v38, (__int64)v51);
    v39 = 16LL;
    v40 = (unsigned __int64 *)(a2 + 6);
    v41 = v51;
    do
    {
      v42 = *(_QWORD *)v41;
      v41 += 8;
      result = *v40++;
      if ( v42 != result )
        goto LABEL_57;
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
          goto LABEL_69;
      }
LABEL_57:
      v45 = *((_QWORD *)a2 + 1);
      v46 = a2[10] & 1;
      result = *(unsigned int *)(a1 + 2452);
      if ( (result & 0x40) != 0 )
      {
        v39 = KeGetCurrentIrql();
        v53 = v39;
        __writecr8(2uLL);
        v47 = (unsigned __int8)v39;
        v48 = v45 & 0xFFFFFFFFFFFFF000uLL;
        v55 = (v38 + v45 - 1) | 0xFFF;
        v49 = (v45 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          while ( 1 )
          {
            result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64 *))(a1 + 1128))(
                       v48,
                       0LL,
                       v39,
                       v40);
            if ( (_DWORD)result == -1073741267 )
              break;
            if ( (result & 0x80000000) != 0LL )
            {
LABEL_66:
              __writecr8(v47);
              goto LABEL_67;
            }
LABEL_64:
            result = 4096LL;
            v48 += 4096LL;
            v49 += 4096LL;
            if ( v49 == v55 )
            {
              __writecr8(v47);
              goto LABEL_69;
            }
          }
          if ( v46 )
            goto LABEL_66;
          if ( v53 > 1u )
            goto LABEL_64;
          __writecr8(v47);
          KeGetCurrentIrql();
          __writecr8(2uLL);
        }
      }
LABEL_67:
      v50 = *((_QWORD *)a2 + 1);
      if ( !*(_DWORD *)(a1 + 2296) )
      {
        *(_QWORD *)(a1 + 2304) = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 2312) = (char *)a2 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(a1 + 2320) = *a2;
        *(_QWORD *)(a1 + 2328) = v50;
        *(_DWORD *)(a1 + 2296) = 1;
        result = __b8(a1, 0LL, v39, v40);
      }
    }
LABEL_69:
    *(_DWORD *)(a1 + 2088) += 16 * v38;
    return result;
  }
  if ( !*(_QWORD *)(a1 + 2432) )
    goto LABEL_13;
  v6 = *(unsigned int *)(a1 + 2452);
  v7 = *(_DWORD *)(a1 + 2452);
  if ( !*(_DWORD *)(a1 + 2084) )
  {
    v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(8 * v7)) & 0x20;
    *(_DWORD *)(a1 + 2452) = v7;
    goto LABEL_6;
  }
  result = (unsigned int)v6 ^ ((unsigned int)v6 >> 3);
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)((unsigned int)v6 >> 3)) & 4) != 0 )
  {
LABEL_13:
    *(_DWORD *)(a1 + 2084) = 0;
    return result;
  }
LABEL_6:
  if ( (v7 & 4) == 0 )
    goto LABEL_14;
  v8 = *((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFF000uLL;
  for ( j = ((a2[2] & 0xFFF) + (unsigned __int64)(unsigned int)a2[4] + 4095) >> 12; j; v8 += 4096LL )
  {
    --j;
    result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(a1 + 688))(v8, v6, a3);
    if ( (_BYTE)result )
    {
      if ( !*(_DWORD *)(a1 + 2296) )
      {
        *(_QWORD *)(a1 + 2304) = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 2312) = (char *)a2 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(a1 + 2320) = *a2;
        *(_QWORD *)(a1 + 2328) = v8;
        *(_DWORD *)(a1 + 2296) = 1;
        result = __b8(a1, 0LL, a3, v10);
      }
    }
    *(_DWORD *)(a1 + 2088) += 256;
  }
  return result;
}
