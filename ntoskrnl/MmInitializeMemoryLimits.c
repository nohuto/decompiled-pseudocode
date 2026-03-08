/*
 * XREFs of MmInitializeMemoryLimits @ 0x140B3647C
 * Callers:
 *     IopInitializeResourceMap @ 0x140B36130 (IopInitializeResourceMap.c)
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140B6E3C0 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MmInitializeMemoryLimits(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // ebp
  __int64 v4; // rax
  _QWORD *i; // rcx
  _QWORD **v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rdx
  _DWORD *Pool; // rax
  _QWORD *v12; // rdi
  unsigned int v13; // esi
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // r9
  unsigned __int64 j; // rbx
  __int64 v18; // rax
  _QWORD **v19; // rax
  unsigned __int64 v20; // rcx
  _QWORD *v21; // rcx
  char *v22; // rax
  _QWORD *v23; // rbx
  _QWORD *result; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax

  v2 = a1 + 352;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 360);
  if ( (v4 & 1) != 0 )
  {
    if ( v4 == 1 )
      return 0LL;
    i = (_QWORD *)(v4 ^ (v2 | 1));
  }
  else
  {
    i = *(_QWORD **)(a1 + 360);
  }
  if ( i )
  {
    do
    {
      v7 = (_QWORD **)i[1];
      v8 = i;
      v9 = v3++;
      if ( v7 )
      {
        v10 = *v7;
        for ( i = (_QWORD *)i[1]; v10; v10 = (_QWORD *)*v10 )
          i = v10;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v8 )
            break;
          v8 = i;
        }
      }
    }
    while ( i );
    if ( v3 )
    {
      Pool = MiAllocatePool(64, 16 * (v9 + 2), 0x6C4D6D4Du);
      v12 = Pool;
      if ( Pool )
      {
        *Pool = v3;
        v13 = 0;
        v14 = *(_QWORD *)(v2 + 8);
        v15 = 0LL;
        v16 = -1LL;
        if ( (v14 & 1) != 0 )
        {
          if ( v14 == 1 )
            goto LABEL_39;
          j = v14 ^ (v2 | 1);
        }
        else
        {
          j = *(_QWORD *)(v2 + 8);
        }
        if ( j )
        {
          do
          {
            v18 = *(_DWORD *)(j + 24) & 0x1FFFFFFF;
            if ( (unsigned int)v18 < 0x2C && *(_BYTE *)(v18 + a2) )
            {
              v25 = *(_QWORD *)(j + 40);
              v26 = *(_QWORD *)(j + 32);
              v15 += v25;
              if ( v26 == v16 && v13 )
              {
                v12[2 * v13 + 1] += v25;
                v16 += *(_QWORD *)(j + 40);
              }
              else
              {
                v27 = 2LL * v13++;
                v12[v27 + 2] = v26;
                v28 = *(_QWORD *)(j + 40);
                v12[v27 + 3] = v28;
                v16 = v28 + v26;
              }
            }
            v19 = *(_QWORD ***)(j + 8);
            v20 = j;
            if ( v19 )
            {
              v21 = *v19;
              for ( j = *(_QWORD *)(j + 8); v21; v21 = (_QWORD *)*v21 )
                j = (unsigned __int64)v21;
            }
            else
            {
              while ( 1 )
              {
                j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !j || *(_QWORD *)j == v20 )
                  break;
                v20 = j;
              }
            }
          }
          while ( j );
          if ( v13 )
          {
            if ( v3 > v13 )
            {
              v22 = (char *)MiAllocatePool(64, 16 * (v13 - 1 + 2LL), 0x6C4D6D4Du);
              v23 = v22;
              if ( v22 )
              {
                memmove(v22 + 16, v12 + 2, 16LL * v13);
                ExFreePoolWithTag(v12, 0);
                v12 = v23;
              }
            }
            goto LABEL_29;
          }
        }
LABEL_39:
        v12[2] = 0LL;
        v12[3] = 0LL;
LABEL_29:
        *(_DWORD *)v12 = v13;
        result = v12;
        v12[1] = v15;
        return result;
      }
    }
  }
  return 0LL;
}
