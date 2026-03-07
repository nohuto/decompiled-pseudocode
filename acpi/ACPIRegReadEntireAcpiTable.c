__int64 __fastcall ACPIRegReadEntireAcpiTable(__int64 a1, const void **a2)
{
  _DWORD *v2; // rdi
  char *Pool2; // rbx
  unsigned int v6; // r13d
  unsigned int v7; // ebp
  unsigned int *v8; // r15
  unsigned int *v9; // rdi
  unsigned int v10; // ecx
  unsigned int v11; // eax
  void *v12; // rax
  const void *v13; // r12
  unsigned int v14; // edx
  __int64 v15; // rdx
  unsigned int *v16; // rax
  unsigned int *v17; // r12
  int v18; // edi
  int v19; // [rsp+34h] [rbp-64h]
  char pszDest[16]; // [rsp+40h] [rbp-58h] BYREF

  v2 = *a2;
  Pool2 = (char *)ExAllocatePool2(256LL, 0x4000LL, 1114661697LL);
  if ( !Pool2 )
    return 3221225626LL;
  v6 = v2[1];
  v19 = 0;
  RtlStringCchPrintfA(pszDest, 9uLL, "%08lx", 0);
LABEL_17:
  if ( (int)OSReadRegValue(pszDest) >= 0 )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = (unsigned int *)*a2;
      v9 = (unsigned int *)&Pool2[v7];
      v10 = v9[1];
      v11 = *v9;
      if ( v10 )
      {
        v15 = v10 + v11;
        if ( (unsigned int)v15 > v6 )
        {
          v6 = v10 + v11;
          v16 = (unsigned int *)ExAllocatePool2(64LL, v15, 1953522497LL);
          v17 = v16;
          if ( !v16 )
          {
LABEL_19:
            ExFreePoolWithTag(Pool2, 0);
            return 3221225626LL;
          }
          memmove(v16, *a2, v8[1]);
          ExFreePoolWithTag((PVOID)*a2, 0);
          *a2 = v17;
          v8 = v17;
        }
        memmove((char *)v8 + *v9, v9 + 2, v9[1]);
      }
      else if ( v11 != v8[1] )
      {
        v6 = *v9;
        v12 = (void *)ExAllocatePool2(64LL, v11, 1953522497LL);
        v13 = v12;
        if ( !v12 )
          goto LABEL_19;
        v14 = *v9;
        if ( *v9 >= v8[1] )
          v14 = v8[1];
        memmove(v12, *a2, v14);
        ExFreePoolWithTag((PVOID)*a2, 0);
        *a2 = v13;
      }
      v7 += v9[1] + 8;
      if ( v7 >= 0x4000 )
      {
        v18 = v19++;
        RtlStringCchPrintfA(pszDest, 9uLL, "%08lx", v18 + 1);
        goto LABEL_17;
      }
    }
  }
  ExFreePoolWithTag(Pool2, 0);
  return 0LL;
}
