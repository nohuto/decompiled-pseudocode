/*
 * XREFs of sub_1405BFD10 @ 0x1405BFD10
 * Callers:
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1405BFD10(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  void *v4; // r11
  unsigned int v5; // r15d
  unsigned int v6; // r13d
  unsigned __int64 v8; // r8
  signed int v11; // ebx
  unsigned int *v12; // rax
  unsigned int i; // ecx
  __int64 v14; // r10
  unsigned int *v15; // rdx
  unsigned int v16; // edx
  unsigned int *v17; // rcx
  unsigned int *v18; // rax
  unsigned int v19; // r10d
  unsigned int *v20; // rax
  unsigned int j; // ecx
  __int64 v22; // r9
  unsigned __int64 m; // rdx
  unsigned __int64 v24; // r9
  unsigned int v25; // r14d
  unsigned int *v26; // rbp
  unsigned int k; // ecx
  __int64 v28; // rax
  unsigned int *v29; // rax
  int v30; // esi
  PVOID PoolWithTag; // rax
  void *v32; // r8
  int v33; // ebp
  unsigned int v34; // r14d
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // eax
  PVOID v40; // rax
  int v41; // ebp
  int v42; // esi
  int v43; // eax
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // eax
  int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // eax
  int v51; // r11d
  unsigned int v52; // ecx
  unsigned int v53; // eax
  int v54; // eax
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // eax
  unsigned int v58; // ecx
  unsigned int v59; // eax
  void *Src; // [rsp+30h] [rbp-38h]
  __int64 v62; // [rsp+38h] [rbp-30h]
  int v63; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = 0;
  v62 = 0LL;
  v6 = 0;
  v63 = 0;
  v8 = *(_QWORD *)(a1 + 8);
  Src = 0LL;
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v12 = *(unsigned int **)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v14 = *v12;
      v15 = v12 + 1;
      if ( v12 + 1 < v12 )
        goto LABEL_14;
      v12 = (unsigned int *)((char *)v15 + v14);
      if ( (unsigned int *)((char *)v15 + v14) < v15 )
        goto LABEL_14;
    }
    v16 = *v12;
    v17 = v12 + 1;
    if ( v12 + 1 < v12 )
    {
LABEL_14:
      v11 = -1073741675;
      goto LABEL_15;
    }
    v18 = 0LL;
    if ( v16 )
      v18 = v17;
    v11 = 0;
    if ( v16 == 8 )
    {
      v62 = *(_QWORD *)v18;
      goto LABEL_15;
    }
    return (unsigned int)-1073741789;
  }
  v11 = -1073741811;
LABEL_15:
  if ( v11 >= 0 )
  {
    if ( !v8 )
      return (unsigned int)-1073741811;
    v19 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    v20 = (unsigned int *)v8;
    for ( j = 0; j < 4; ++j )
    {
      v22 = *v20;
      m = (unsigned __int64)(v20 + 1);
      if ( v20 + 1 < v20 )
        return (unsigned int)-1073741675;
      v20 = (unsigned int *)(m + v22);
      if ( m + v22 < m )
        return (unsigned int)-1073741675;
      v24 = 1LL;
    }
    v25 = *v20;
    if ( v20 + 1 < v20 )
      return (unsigned int)-1073741675;
    v26 = 0LL;
    if ( v25 )
      v26 = v20 + 1;
    if ( v19 > 5 )
    {
      for ( k = 0; k < 5; ++k )
      {
        v28 = *(unsigned int *)v8;
        m = v8 + 4;
        if ( v8 + 4 < v8 )
          goto LABEL_37;
        v8 = m + v28;
        if ( m + v28 < m )
          goto LABEL_37;
      }
      m = *(unsigned int *)v8;
      if ( v8 + 4 < v8 )
      {
LABEL_37:
        v11 = -1073741675;
        goto LABEL_38;
      }
      v29 = 0LL;
      if ( (_DWORD)m )
        v29 = (unsigned int *)(v8 + 4);
      v11 = 0;
      if ( (_DWORD)m == 4 )
      {
        v6 = *v29;
        goto LABEL_38;
      }
      return (unsigned int)-1073741789;
    }
    v11 = -1073741811;
LABEL_38:
    if ( v11 >= 0 )
    {
      if ( v6 )
      {
        v30 = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x20534C53u);
        Src = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        memset(PoolWithTag, 0, v6);
        v4 = Src;
      }
      else
      {
        v30 = 1;
      }
      if ( qword_140D2D3F8 )
      {
        v32 = 0LL;
        if ( !v30 )
          v32 = v4;
        v33 = qword_140D2D3F8(v26, v25, v32, v6, &v63);
      }
      else
      {
        v33 = -1073741637;
      }
      v34 = v6 + 4;
      if ( v6 >= 0xFFFFFFFC )
      {
        v24 = 3221225621LL;
        v11 = -1073741675;
      }
      else
      {
        if ( v34 >= 0xFFFFFFEC || (v5 = v6 + 32, v6 + 32 < v6 + 24) )
        {
          v11 = -1073741675;
          goto LABEL_141;
        }
        v11 = 0;
        v24 = 3221225621LL;
      }
      if ( v11 < 0 )
      {
LABEL_141:
        if ( Src )
          ExFreeHeapPool((ULONG_PTR)Src, m, v8, (_DWORD *)v24);
        return (unsigned int)v11;
      }
      v35 = 0;
      m = v5 + 8;
      if ( v5 >= 0xFFFFFFF8 )
      {
        v11 = -1073741675;
        goto LABEL_141;
      }
      v36 = (v5 + 15) & 0xFFFFFFF8;
      if ( v36 >= (unsigned int)m )
      {
        v35 = v36 + 8;
        if ( v36 + 8 < v36 )
        {
          v11 = -1073741675;
          goto LABEL_67;
        }
        v11 = 0;
      }
      else
      {
        v11 = -1073741675;
      }
      if ( v11 >= 0 )
      {
        v8 = *(unsigned int *)(a2 + 32);
        v37 = v35 + 4;
        m = *(unsigned int *)(a2 + 16);
        v38 = v35 + 8;
        if ( v38 < v37 || (v39 = v38 + m, v38 + (unsigned int)m < v38) || v39 + 4 < v39 )
          v11 = -1073741675;
        else
          v11 = v39 + 4 + (unsigned int)v8 < v39 + 4 ? 0xC0000095 : 0;
      }
LABEL_67:
      if ( v11 < 0 )
        goto LABEL_141;
      if ( !a4 )
      {
        v11 = -1073741811;
        goto LABEL_141;
      }
      v11 = 0;
      a4[1] = v5;
      if ( v5 )
      {
        v40 = ExAllocatePoolWithTag(PagedPool, v5, 0x20534C53u);
        if ( v40 )
        {
          *((_QWORD *)a4 + 1) = v40;
          *a4 = 0;
        }
        else
        {
          v11 = -1073741801;
        }
      }
      else
      {
        v11 = -1073741762;
      }
      if ( v11 < 0 )
        goto LABEL_141;
      v24 = *((_QWORD *)a4 + 1);
      v41 = v33 | 0x10000000;
      v42 = -1;
      if ( v24 )
      {
        v45 = 0;
        m = *((_QWORD *)a4 + 1);
        if ( *a4 )
        {
          while ( 1 )
          {
            v46 = *(_DWORD *)m + 4;
            if ( *(_DWORD *)m >= 0xFFFFFFFC )
              break;
            v8 = m + v46;
            if ( v8 < m )
              goto LABEL_140;
            ++v45;
            m += v46;
            if ( v45 >= *a4 )
              goto LABEL_87;
          }
          v11 = -1073741675;
        }
        else
        {
LABEL_87:
          v8 = m + 4;
          if ( m + 4 < m )
            goto LABEL_140;
          v11 = 0;
          if ( m + 8 > v24 + a4[1] )
            goto LABEL_89;
          *(_DWORD *)m = 4;
          *(_DWORD *)v8 = v41;
          ++*a4;
        }
      }
      else
      {
        m = a4[1];
        v43 = -1;
        v44 = m + 8;
        if ( (int)m + 8 >= (unsigned int)m )
          v43 = m + 8;
        v11 = v44 < (unsigned int)m ? 0xC0000095 : 0;
        a4[1] = v43;
        if ( v44 >= (unsigned int)m )
        {
          ++*a4;
          goto LABEL_93;
        }
      }
      if ( v11 < 0 )
        goto LABEL_141;
LABEL_93:
      v8 = *((_QWORD *)a4 + 1);
      if ( v8 )
      {
        v49 = 0;
        m = *((_QWORD *)a4 + 1);
        if ( *a4 )
        {
          while ( 1 )
          {
            v50 = *(_DWORD *)m + 4;
            if ( *(_DWORD *)m >= 0xFFFFFFFC )
              break;
            v24 = m + v50;
            if ( v24 < m )
              goto LABEL_140;
            ++v49;
            m += v50;
            if ( v49 >= *a4 )
              goto LABEL_102;
          }
          v11 = -1073741675;
        }
        else
        {
LABEL_102:
          v24 = m + 4;
          if ( m + 4 < m )
            goto LABEL_140;
          v11 = 0;
          if ( m + 12 > v8 + a4[1] )
            goto LABEL_89;
          *(_DWORD *)m = 8;
          *(_QWORD *)v24 = v62;
          ++*a4;
        }
      }
      else
      {
        m = a4[1];
        v47 = -1;
        v48 = m + 12;
        if ( (int)m + 12 >= (unsigned int)m )
          v47 = m + 12;
        v11 = v48 < (unsigned int)m ? 0xC0000095 : 0;
        a4[1] = v47;
        if ( v48 >= (unsigned int)m )
        {
          ++*a4;
          goto LABEL_106;
        }
      }
      if ( v11 < 0 )
        goto LABEL_141;
LABEL_106:
      if ( Src )
      {
        if ( !v6 )
          goto LABEL_108;
      }
      else if ( v6 )
      {
LABEL_108:
        v11 = -1073741811;
        goto LABEL_109;
      }
      v8 = *((_QWORD *)a4 + 1);
      if ( v8 )
      {
        v24 = *a4;
        v56 = 0;
        m = *((_QWORD *)a4 + 1);
        if ( !(_DWORD)v24 )
        {
LABEL_128:
          v24 = m + 4;
          if ( m + 4 < m )
            goto LABEL_140;
          v11 = 0;
          if ( m + v6 + 4LL > v8 + a4[1] )
            goto LABEL_89;
          *(_DWORD *)m = v6;
          if ( Src )
            memmove((void *)v24, Src, v6);
          ++*a4;
          goto LABEL_109;
        }
        while ( 1 )
        {
          v57 = *(_DWORD *)m + 4;
          if ( *(_DWORD *)m >= 0xFFFFFFFC )
            break;
          if ( m + v57 < m )
            goto LABEL_140;
          ++v56;
          m += v57;
          if ( v56 >= (unsigned int)v24 )
            goto LABEL_128;
        }
      }
      else if ( v34 >= 4 )
      {
        m = a4[1];
        v54 = -1;
        v55 = m + v34;
        if ( (unsigned int)m + v34 >= (unsigned int)m )
          v54 = m + v34;
        v11 = v55 < (unsigned int)m ? 0xC0000095 : 0;
        a4[1] = v54;
        if ( v55 >= (unsigned int)m )
        {
          ++*a4;
          goto LABEL_110;
        }
LABEL_109:
        if ( v11 < 0 )
          goto LABEL_141;
LABEL_110:
        v8 = *((_QWORD *)a4 + 1);
        v51 = v63;
        if ( !v8 )
        {
          v52 = a4[1];
          v53 = v52 + 8;
          if ( v52 + 8 >= v52 )
            v42 = v52 + 8;
          v11 = v53 < v52 ? 0xC0000095 : 0;
          a4[1] = v42;
          if ( v53 >= v52 )
          {
            ++*a4;
            v11 = 0;
          }
          goto LABEL_141;
        }
        v24 = *a4;
        v58 = 0;
        for ( m = *((_QWORD *)a4 + 1); v58 < (unsigned int)v24; m += v59 )
        {
          v59 = *(_DWORD *)m + 4;
          if ( *(_DWORD *)m >= 0xFFFFFFFC || m + v59 < m )
            goto LABEL_140;
          ++v58;
        }
        v24 = m + 4;
        if ( m + 4 >= m )
        {
          v11 = 0;
          if ( m + 8 <= v8 + a4[1] )
          {
            *(_DWORD *)m = 4;
            *(_DWORD *)v24 = v51;
            ++*a4;
            goto LABEL_141;
          }
LABEL_89:
          v11 = -1073741789;
          goto LABEL_141;
        }
LABEL_140:
        v11 = -1073741675;
        goto LABEL_141;
      }
      v11 = -1073741675;
      goto LABEL_109;
    }
  }
  return (unsigned int)v11;
}
