/*
 * XREFs of sub_1405C02EC @ 0x1405C02EC
 * Callers:
 *     sub_1405FE2AC @ 0x1405FE2AC (sub_1405FE2AC.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1405C02EC(__int64 a1, unsigned __int64 k, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // ebp
  const void *v5; // r12
  unsigned int v6; // r15d
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r13
  __int64 v10; // r9
  signed int v11; // ebx
  unsigned int *v12; // rax
  unsigned int i; // ecx
  __int64 v14; // r10
  unsigned int *v15; // rcx
  unsigned int *v16; // rax
  unsigned int j; // ecx
  __int64 v18; // rax
  unsigned int *v19; // rax
  int v20; // esi
  PVOID PoolWithTag; // rax
  const void *v22; // rcx
  int v23; // esi
  unsigned int v24; // r14d
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // ecx
  unsigned int v29; // eax
  PVOID v30; // rax
  int v31; // esi
  int v32; // ebp
  int v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // eax
  int v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // eax
  int v41; // r11d
  unsigned int v42; // ecx
  unsigned int v43; // eax
  int v44; // eax
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // eax
  __int64 v51; // [rsp+20h] [rbp-38h]
  int v52; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0LL;
  v51 = 0LL;
  v6 = 0;
  v52 = 0;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = k;
  v10 = a1;
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v12 = *(unsigned int **)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v14 = *v12;
      k = (unsigned __int64)(v12 + 1);
      if ( v12 + 1 < v12 )
        goto LABEL_14;
      v12 = (unsigned int *)(k + v14);
      if ( k + v14 < k )
        goto LABEL_14;
    }
    k = *v12;
    v15 = v12 + 1;
    if ( v12 + 1 < v12 )
    {
LABEL_14:
      v11 = -1073741675;
      goto LABEL_15;
    }
    v16 = 0LL;
    if ( (_DWORD)k )
      v16 = v15;
    v11 = 0;
    if ( (_DWORD)k == 8 )
    {
      v51 = *(_QWORD *)v16;
      goto LABEL_15;
    }
    return (unsigned int)-1073741789;
  }
  v11 = -1073741811;
LABEL_15:
  if ( v11 >= 0 )
  {
    if ( v8 && *(_DWORD *)v10 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v18 = *(unsigned int *)v8;
        k = v8 + 4;
        if ( v8 + 4 < v8 )
          goto LABEL_28;
        v8 = k + v18;
        if ( k + v18 < k )
          goto LABEL_28;
      }
      k = *(unsigned int *)v8;
      if ( v8 + 4 < v8 )
      {
LABEL_28:
        v11 = -1073741675;
        goto LABEL_29;
      }
      v19 = 0LL;
      if ( (_DWORD)k )
        v19 = (unsigned int *)(v8 + 4);
      v11 = 0;
      if ( (_DWORD)k == 4 )
      {
        v6 = *v19;
        goto LABEL_29;
      }
      return (unsigned int)-1073741789;
    }
    v11 = -1073741811;
LABEL_29:
    if ( v11 >= 0 )
    {
      if ( v6 )
      {
        v20 = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x20534C53u);
        v5 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        memset(PoolWithTag, 0, v6);
      }
      else
      {
        v20 = 1;
      }
      if ( qword_140D2D458 )
      {
        v22 = 0LL;
        if ( !v20 )
          v22 = v5;
        v23 = qword_140D2D458(v22, v6, &v52);
      }
      else
      {
        v23 = -1073741637;
      }
      v24 = v6 + 4;
      if ( v6 >= 0xFFFFFFFC )
      {
        v10 = 3221225621LL;
        v11 = -1073741675;
      }
      else
      {
        if ( v24 >= 0xFFFFFFEC || (v4 = v6 + 32, v6 + 32 < v6 + 24) )
        {
          v11 = -1073741675;
          goto LABEL_132;
        }
        v11 = 0;
        v10 = 3221225621LL;
      }
      if ( v11 < 0 )
      {
LABEL_132:
        if ( v5 )
          ExFreeHeapPool((ULONG_PTR)v5, k, v8, (_DWORD *)v10);
        return (unsigned int)v11;
      }
      v25 = 0;
      k = v4 + 8;
      if ( v4 >= 0xFFFFFFF8 )
      {
        v11 = -1073741675;
        goto LABEL_132;
      }
      v26 = (v4 + 15) & 0xFFFFFFF8;
      if ( v26 >= (unsigned int)k )
      {
        v25 = v26 + 8;
        if ( v26 + 8 < v26 )
        {
          v11 = -1073741675;
          goto LABEL_58;
        }
        v11 = 0;
      }
      else
      {
        v11 = -1073741675;
      }
      if ( v11 >= 0 )
      {
        v8 = *(unsigned int *)(v9 + 32);
        v27 = v25 + 4;
        k = *(unsigned int *)(v9 + 16);
        v28 = v25 + 8;
        if ( v28 < v27 || (v29 = v28 + k, v28 + (unsigned int)k < v28) || v29 + 4 < v29 )
          v11 = -1073741675;
        else
          v11 = v29 + 4 + (unsigned int)v8 < v29 + 4 ? 0xC0000095 : 0;
      }
LABEL_58:
      if ( v11 < 0 )
        goto LABEL_132;
      if ( !a4 )
      {
        v11 = -1073741811;
        goto LABEL_132;
      }
      v11 = 0;
      a4[1] = v4;
      if ( v4 )
      {
        v30 = ExAllocatePoolWithTag(PagedPool, v4, 0x20534C53u);
        if ( v30 )
        {
          *((_QWORD *)a4 + 1) = v30;
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
        goto LABEL_132;
      v10 = *((_QWORD *)a4 + 1);
      v31 = v23 | 0x10000000;
      v32 = -1;
      if ( v10 )
      {
        v35 = 0;
        k = *((_QWORD *)a4 + 1);
        if ( *a4 )
        {
          while ( 1 )
          {
            v36 = *(_DWORD *)k + 4;
            if ( *(_DWORD *)k >= 0xFFFFFFFC )
              break;
            v8 = k + v36;
            if ( v8 < k )
              goto LABEL_131;
            ++v35;
            k += v36;
            if ( v35 >= *a4 )
              goto LABEL_78;
          }
          v11 = -1073741675;
        }
        else
        {
LABEL_78:
          v8 = k + 4;
          if ( k + 4 < k )
            goto LABEL_131;
          v11 = 0;
          if ( k + 8 > v10 + (unsigned __int64)a4[1] )
            goto LABEL_80;
          *(_DWORD *)k = 4;
          *(_DWORD *)v8 = v31;
          ++*a4;
        }
      }
      else
      {
        k = a4[1];
        v33 = -1;
        v34 = k + 8;
        if ( (int)k + 8 >= (unsigned int)k )
          v33 = k + 8;
        v11 = v34 < (unsigned int)k ? 0xC0000095 : 0;
        a4[1] = v33;
        if ( v34 >= (unsigned int)k )
        {
          ++*a4;
          goto LABEL_84;
        }
      }
      if ( v11 < 0 )
        goto LABEL_132;
LABEL_84:
      v10 = *((_QWORD *)a4 + 1);
      if ( v10 )
      {
        v39 = 0;
        k = *((_QWORD *)a4 + 1);
        if ( *a4 )
        {
          while ( 1 )
          {
            v40 = *(_DWORD *)k + 4;
            if ( *(_DWORD *)k >= 0xFFFFFFFC )
              break;
            v8 = k + v40;
            if ( v8 < k )
              goto LABEL_131;
            ++v39;
            k += v40;
            if ( v39 >= *a4 )
              goto LABEL_93;
          }
          v11 = -1073741675;
        }
        else
        {
LABEL_93:
          v8 = k + 4;
          if ( k + 4 < k )
            goto LABEL_131;
          v11 = 0;
          if ( k + 12 > v10 + (unsigned __int64)a4[1] )
            goto LABEL_80;
          *(_DWORD *)k = 8;
          *(_QWORD *)v8 = v51;
          ++*a4;
        }
      }
      else
      {
        k = a4[1];
        v37 = -1;
        v38 = k + 12;
        if ( (int)k + 12 >= (unsigned int)k )
          v37 = k + 12;
        v11 = v38 < (unsigned int)k ? 0xC0000095 : 0;
        a4[1] = v37;
        if ( v38 >= (unsigned int)k )
        {
          ++*a4;
          goto LABEL_97;
        }
      }
      if ( v11 < 0 )
        goto LABEL_132;
LABEL_97:
      if ( v5 )
      {
        if ( !v6 )
          goto LABEL_99;
      }
      else if ( v6 )
      {
LABEL_99:
        v11 = -1073741811;
        goto LABEL_100;
      }
      v8 = *((_QWORD *)a4 + 1);
      if ( v8 )
      {
        v10 = *a4;
        v46 = 0;
        k = *((_QWORD *)a4 + 1);
        if ( !(_DWORD)v10 )
        {
LABEL_119:
          v10 = k + 4;
          if ( k + 4 < k )
            goto LABEL_131;
          v11 = 0;
          if ( k + v6 + 4LL > v8 + a4[1] )
            goto LABEL_80;
          *(_DWORD *)k = v6;
          if ( v5 )
            memmove((void *)v10, v5, v6);
          ++*a4;
          goto LABEL_100;
        }
        while ( 1 )
        {
          v47 = *(_DWORD *)k + 4;
          if ( *(_DWORD *)k >= 0xFFFFFFFC )
            break;
          if ( k + v47 < k )
            goto LABEL_131;
          ++v46;
          k += v47;
          if ( v46 >= (unsigned int)v10 )
            goto LABEL_119;
        }
      }
      else if ( v24 >= 4 )
      {
        k = a4[1];
        v44 = -1;
        v45 = k + v24;
        if ( (unsigned int)k + v24 >= (unsigned int)k )
          v44 = k + v24;
        v11 = v45 < (unsigned int)k ? 0xC0000095 : 0;
        a4[1] = v44;
        if ( v45 >= (unsigned int)k )
        {
          ++*a4;
          goto LABEL_101;
        }
LABEL_100:
        if ( v11 < 0 )
          goto LABEL_132;
LABEL_101:
        v8 = *((_QWORD *)a4 + 1);
        v41 = v52;
        if ( !v8 )
        {
          v42 = a4[1];
          v43 = v42 + 8;
          if ( v42 + 8 >= v42 )
            v32 = v42 + 8;
          v11 = v43 < v42 ? 0xC0000095 : 0;
          a4[1] = v32;
          if ( v43 >= v42 )
          {
            ++*a4;
            v11 = 0;
          }
          goto LABEL_132;
        }
        v10 = *a4;
        v48 = 0;
        for ( k = *((_QWORD *)a4 + 1); v48 < (unsigned int)v10; k += v49 )
        {
          v49 = *(_DWORD *)k + 4;
          if ( *(_DWORD *)k >= 0xFFFFFFFC || k + v49 < k )
            goto LABEL_131;
          ++v48;
        }
        v10 = k + 4;
        if ( k + 4 >= k )
        {
          v11 = 0;
          if ( k + 8 <= v8 + a4[1] )
          {
            *(_DWORD *)k = 4;
            *(_DWORD *)v10 = v41;
            ++*a4;
            goto LABEL_132;
          }
LABEL_80:
          v11 = -1073741789;
          goto LABEL_132;
        }
LABEL_131:
        v11 = -1073741675;
        goto LABEL_132;
      }
      v11 = -1073741675;
      goto LABEL_100;
    }
  }
  return (unsigned int)v11;
}
