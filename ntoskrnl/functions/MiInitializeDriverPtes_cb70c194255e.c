__int64 __fastcall MiInitializeDriverPtes(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rsi
  _QWORD *v3; // rbx
  bool v4; // r8
  _QWORD *Pool; // rax
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  _DWORD *v15; // rsi
  unsigned int v16; // edi
  unsigned int v17; // ebp
  unsigned int v18; // r8d
  unsigned int v19; // edx
  int v20; // r9d
  __int64 v21; // r11
  unsigned int v22; // r10d
  unsigned int v23; // ecx
  __int64 *v24; // rbx
  __int64 i; // rdx
  unsigned __int64 v26; // rax
  unsigned int v27; // ebx
  unsigned int v28; // ebp
  unsigned int v29; // r11d
  unsigned int v30; // r8d
  unsigned int v31; // edx
  int v32; // r9d
  __int64 v33; // r14
  unsigned int v34; // r10d
  unsigned int v35; // ecx
  _QWORD *v36; // rdi
  __int64 j; // rdx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r14
  unsigned int v40; // ebp
  _BYTE *v41; // rdx
  unsigned int v42; // edx
  unsigned __int64 *v43; // rax
  unsigned __int64 *k; // rbx
  unsigned __int64 *v45; // rcx
  unsigned __int64 **v46; // rax
  unsigned __int64 *v47; // rdi
  unsigned __int64 *v48; // rcx
  unsigned int v50; // edx
  _QWORD *v51; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0LL;
  v2 = (_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 16);
  v51 = 0LL;
  while ( v3 != v2 )
  {
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v3[6]) )
    {
      Pool = MiAllocatePool(64, 0x20uLL, 0x70446D4Du);
      v6 = (unsigned __int64)Pool;
      if ( !Pool )
        return 0LL;
      v4 = 0;
      Pool[3] = v3;
      v7 = v3[6];
      if ( v1 )
      {
        while ( 1 )
        {
          v8 = v1[3];
          v9 = *(_QWORD *)(v8 + 48);
          if ( v7 <= v9 + (unsigned int)(*(_DWORD *)(v8 + 64) - 1) && v7 < v9 )
          {
            v10 = (_QWORD *)*v1;
            if ( !*v1 )
              break;
          }
          else
          {
            v10 = (_QWORD *)v1[1];
            if ( !v10 )
            {
              v4 = 1;
              break;
            }
          }
          v1 = v10;
        }
      }
      RtlAvlInsertNodeEx((unsigned __int64 *)&v51, (unsigned __int64)v1, v4, v6);
      v1 = v51;
    }
    v3 = (_QWORD *)*v3;
  }
  v11 = 0LL;
  while ( v1 )
  {
    v11 = v1;
    v1 = (_QWORD *)*v1;
  }
  while ( v11 )
  {
    if ( !(unsigned int)MiReserveBootDriverPtes(
                          ((*(_QWORD *)(v11[3] + 48LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                          *(_DWORD *)(v11[3] + 64LL) >> 12) )
      return 0LL;
    v13 = (_QWORD *)v11[1];
    v14 = v11;
    if ( v13 )
    {
      v12 = (_QWORD *)*v13;
      v11 = (_QWORD *)v11[1];
      if ( *v13 )
      {
        do
        {
          v11 = v12;
          v12 = (_QWORD *)*v12;
        }
        while ( v12 );
      }
    }
    else
    {
      while ( 1 )
      {
        v11 = (_QWORD *)(v11[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v11 || (_QWORD *)*v11 == v14 )
          break;
        v14 = v11;
      }
    }
  }
  v15 = qword_140C655C0;
LABEL_28:
  if ( v15 )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = v15[4];
      v18 = v16 < v17 ? v16 : 0;
      v19 = v17 - 1;
      v20 = (v15[6] & 4) != 0LL ? 0x20 : 0;
      v21 = *((_QWORD *)v15 + 3) - ((*((_QWORD *)v15 + 3) & 4LL) != 0 ? 4 : 0);
      while ( 1 )
      {
        v22 = v20 + v19;
        v23 = v20 + v18;
        if ( v19 - v18 != -1 )
        {
          v24 = (__int64 *)(v21 + 8 * ((unsigned __int64)v23 >> 6));
          for ( i = *v24 | ((1LL << (v23 & 0x3F)) - 1); i == -1; i = *v24 )
          {
            if ( (unsigned __int64)++v24 > v21 + 8 * ((unsigned __int64)v22 >> 6) )
              goto LABEL_63;
          }
          _BitScanForward64(&v26, ~i);
          v27 = v26 + ((unsigned int)(((__int64)v24 - v21) >> 3) << 6);
          if ( v27 <= v22 )
            break;
        }
LABEL_63:
        v27 = -1;
LABEL_81:
        if ( !v18 )
          goto LABEL_39;
        v50 = v16 + 1;
        if ( v16 + 1 > v17 )
          v50 = v15[4];
        v19 = v50 - 1;
        v18 = 0;
      }
      if ( v27 == -1 )
        goto LABEL_81;
      v27 -= v20;
LABEL_39:
      if ( v27 < v16 || v27 == -1 )
        goto LABEL_57;
      v28 = v15[4];
      v29 = v27 + 1;
      v30 = v29 < v28 ? v29 : 0;
      v31 = v28 - 1;
      v32 = (v15[6] & 4) != 0LL ? 0x20 : 0;
      v33 = *((_QWORD *)v15 + 3) - ((*((_QWORD *)v15 + 3) & 4LL) != 0 ? 4 : 0);
      while ( 2 )
      {
        v34 = v32 + v31;
        v35 = v32 + v30;
        if ( v31 - v30 == -1 )
          goto LABEL_58;
        v36 = (_QWORD *)(v33 + 8 * ((unsigned __int64)v35 >> 6));
        for ( j = ~*v36 | ((1LL << (v35 & 0x3F)) - 1); j == -1; j = ~*v36 )
        {
          if ( (unsigned __int64)++v36 > v33 + 8 * ((unsigned __int64)v34 >> 6) )
            goto LABEL_58;
        }
        _BitScanForward64(&v38, ~j);
        v16 = v38 + ((unsigned int)(((__int64)v36 - v33) >> 3) << 6);
        if ( v16 > v34 )
        {
LABEL_58:
          v16 = -1;
LABEL_59:
          if ( !v30 )
            goto LABEL_50;
          v42 = v27 + 2;
          if ( v27 + 2 > v28 )
            v42 = v15[4];
          v31 = v42 - 1;
          v30 = 0;
          continue;
        }
        break;
      }
      if ( v16 == -1 )
        goto LABEL_59;
      v16 -= v32;
LABEL_50:
      if ( v16 < v29 || v16 == -1 )
        v16 = v15[4];
      v39 = *((_QWORD *)v15 + 1) + 8LL * v27;
      v40 = v16 - v27;
      if ( v16 != v27 )
      {
        do
        {
          if ( MI_READ_PTE_LOCK_FREE(v39) )
          {
            v41 = (_BYTE *)(*((_QWORD *)v15 + 3) + ((unsigned __int64)v27 >> 3));
            *v41 |= 1 << (v27 & 7);
          }
          ++v27;
          v39 += 8LL;
          --v40;
        }
        while ( v40 );
      }
      if ( v16 >= v15[4] )
      {
LABEL_57:
        v15 = *(_DWORD **)v15;
        goto LABEL_28;
      }
    }
  }
  if ( (KiSpeculationFeatures & 0x40000000000LL) != 0 )
    qword_140C66A80 = (unsigned __int64)(((__int64)((*((_QWORD *)qword_140C655C0 + 1) << 25)
                                                  + ((unsigned __int64)*((unsigned int *)qword_140C655C0 + 4) << 28)) >> 16)
                                       - qword_140C66A88) >> 21;
  v43 = v51;
  k = 0LL;
  while ( v43 )
  {
    k = v43;
    v43 = (unsigned __int64 *)*v43;
  }
  while ( k )
  {
    v46 = (unsigned __int64 **)k[1];
    v47 = k;
    v48 = k;
    if ( v46 )
    {
      v45 = *v46;
      for ( k = (unsigned __int64 *)k[1]; v45; v45 = (unsigned __int64 *)*v45 )
        k = v45;
    }
    else
    {
      while ( 1 )
      {
        k = (unsigned __int64 *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !k || (unsigned __int64 *)*k == v48 )
          break;
        v48 = k;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)&v51, v47);
    ExFreePoolWithTag(v47, 0);
  }
  return 1LL;
}
