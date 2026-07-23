/*
 * XREFs of sub_14095FE6C @ 0x14095FE6C
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14095FE6C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rax
  __int64 v5; // r14
  signed int v8; // ebx
  unsigned int i; // ecx
  __int64 v10; // r8
  unsigned int *v11; // rdx
  unsigned int v12; // edx
  unsigned int *v13; // rcx
  unsigned int *v14; // rax
  int v15; // esi
  int v16; // edx
  unsigned int v17; // ecx
  PVOID PoolWithTag; // rax
  __int64 v19; // r9
  int v20; // esi
  int v21; // r11d
  unsigned int v22; // edx
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  _DWORD *v26; // rdx
  unsigned int v27; // eax
  __int64 v28; // r9
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // ecx
  unsigned __int64 v32; // rdx
  unsigned int v33; // eax

  v4 = *(unsigned int **)(a1 + 8);
  v5 = 0LL;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    for ( i = 0; i < 3; ++i )
    {
      v10 = *v4;
      v11 = v4 + 1;
      if ( v4 + 1 < v4 )
        goto LABEL_14;
      v4 = (unsigned int *)((char *)v11 + v10);
      if ( (unsigned int *)((char *)v11 + v10) < v11 )
        goto LABEL_14;
    }
    v12 = *v4;
    v13 = v4 + 1;
    if ( v4 + 1 < v4 )
    {
LABEL_14:
      v8 = -1073741675;
      goto LABEL_15;
    }
    v14 = 0LL;
    if ( v12 )
      v14 = v13;
    v8 = 0;
    if ( v12 == 8 )
    {
      v5 = *(_QWORD *)v14;
      goto LABEL_15;
    }
    return (unsigned int)-1073741789;
  }
  v8 = -1073741811;
LABEL_15:
  if ( v8 >= 0 )
  {
    v15 = qword_140D2D3A0 ? qword_140D2D3A0() : -1073741637;
    v8 = v15;
    if ( v15 >= 0 )
    {
      v16 = *(_DWORD *)(a2 + 32);
      if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
        return (unsigned int)-1073741675;
      v17 = *(_DWORD *)(a2 + 16) + 52;
      if ( v17 < *(_DWORD *)(a2 + 16) + 48 )
        return (unsigned int)-1073741675;
      v8 = v17 + v16 < v17 ? 0xC0000095 : 0;
      if ( v17 + v16 >= v17 )
      {
        if ( !a4 )
          return (unsigned int)-1073741811;
        *(_DWORD *)(a4 + 4) = 20;
        v8 = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
        if ( PoolWithTag )
        {
          *(_QWORD *)(a4 + 8) = PoolWithTag;
          *(_DWORD *)a4 = 0;
        }
        else
        {
          v8 = -1073741801;
        }
        if ( v8 >= 0 )
        {
          v19 = *(_QWORD *)(a4 + 8);
          v20 = v15 | 0x10000000;
          v21 = -1;
          if ( v19 )
          {
            v25 = 0;
            v26 = *(_DWORD **)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v27 = *v26 + 4;
                if ( *v26 >= 0xFFFFFFFC )
                  break;
                if ( (_DWORD *)((char *)v26 + v27) < v26 )
                  return (unsigned int)-1073741675;
                ++v25;
                v26 = (_DWORD *)((char *)v26 + v27);
                if ( v25 >= *(_DWORD *)a4 )
                  goto LABEL_38;
              }
              v8 = -1073741675;
            }
            else
            {
LABEL_38:
              if ( v26 + 1 < v26 )
                return (unsigned int)-1073741675;
              v8 = 0;
              if ( (unsigned __int64)(v26 + 2) > v19 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                return (unsigned int)-1073741789;
              *v26 = 4;
              v26[1] = v20;
              ++*(_DWORD *)a4;
            }
          }
          else
          {
            v22 = *(_DWORD *)(a4 + 4);
            v23 = -1;
            v24 = v22 + 8;
            if ( v22 + 8 >= v22 )
              v23 = v22 + 8;
            v8 = v24 < v22 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v23;
            if ( v24 >= v22 )
            {
              ++*(_DWORD *)a4;
LABEL_42:
              v28 = *(_QWORD *)(a4 + 8);
              if ( !v28 )
              {
                v29 = *(_DWORD *)(a4 + 4);
                v30 = v29 + 12;
                if ( v29 + 12 >= v29 )
                  v21 = v29 + 12;
                v8 = v30 < v29 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v21;
                if ( v30 >= v29 )
                {
                  ++*(_DWORD *)a4;
                  return 0;
                }
                return (unsigned int)v8;
              }
              v31 = 0;
              v32 = *(_QWORD *)(a4 + 8);
              if ( *(_DWORD *)a4 )
              {
                while ( 1 )
                {
                  v33 = *(_DWORD *)v32 + 4;
                  if ( *(_DWORD *)v32 >= 0xFFFFFFFC || v32 + v33 < v32 )
                    break;
                  ++v31;
                  v32 += v33;
                  if ( v31 >= *(_DWORD *)a4 )
                    goto LABEL_52;
                }
              }
              else
              {
LABEL_52:
                if ( v32 + 4 >= v32 )
                {
                  v8 = 0;
                  if ( v32 + 12 <= v28 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *(_DWORD *)v32 = 8;
                    *(_QWORD *)(v32 + 4) = v5;
                    ++*(_DWORD *)a4;
                    return (unsigned int)v8;
                  }
                  return (unsigned int)-1073741789;
                }
              }
              return (unsigned int)-1073741675;
            }
          }
          if ( v8 < 0 )
            return (unsigned int)v8;
          goto LABEL_42;
        }
      }
    }
  }
  return (unsigned int)v8;
}
