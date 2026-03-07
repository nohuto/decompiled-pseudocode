__int64 __fastcall HalpIommuCleanupPageTable(__int64 a1)
{
  char *v1; // rdi
  int v3; // ebp
  size_t v4; // r8
  _QWORD *v5; // r14
  _DWORD *v6; // rsi
  _DWORD *v7; // r12
  int v8; // r9d
  unsigned int v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 result; // rax
  char *v14; // r13
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // [rsp+20h] [rbp-88h]
  _OWORD v18[3]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v19[24]; // [rsp+58h] [rbp-50h] BYREF

  v1 = *(char **)(a1 + 16);
  memset(v18, 0, sizeof(v18));
  if ( v1 )
  {
    v3 = 0;
    v4 = 4LL * *(unsigned int *)(a1 + 24);
    *(_QWORD *)&v18[0] = v1;
    memset(v19, 0, v4);
    v5 = v18;
    v6 = v19;
    v7 = (_DWORD *)(a1 + 36);
    do
    {
      v8 = *(_DWORD *)(a1 + 28);
      v9 = 1 << *v7;
      v10 = (__int64)&v1[v9 << v8];
      v11 = *(_DWORD *)(a1 + 24) - 1;
      v17 = v10;
      if ( v3 == v11 )
      {
        memset(v1, 0, (unsigned __int64)v9 << v8);
        result = HalpMmAllocCtxFree(v12, (__int64)v1);
      }
      else
      {
        v14 = 0LL;
        do
        {
          v15 = (unsigned int)*v6;
          if ( (unsigned int)v15 >= v9 )
            break;
          v14 = *(char **)(v10 + 8 * v15);
          LODWORD(v15) = v15 + 1;
          *v6 = v15;
        }
        while ( !v14 );
        if ( v14 )
        {
          v16 = (unsigned int)(v15 - 1);
          result = (__int64)memset(&v1[(_DWORD)v16 << v8], 0, 1LL << v8);
          ++v3;
          ++v7;
          ++v6;
          v1 = v14;
          *(_QWORD *)(v17 + 8 * v16) = 0LL;
          *++v5 = v14;
          continue;
        }
        result = HalpMmAllocCtxFree(v10, (__int64)v1);
        *v6 = 0;
      }
      --v3;
      --v7;
      --v6;
      v1 = (char *)*--v5;
    }
    while ( v3 >= 0 );
  }
  return result;
}
