__int64 __fastcall ACPIGetConvertToCompatibleIDWide(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        _QWORD *a5,
        unsigned int *a6)
{
  unsigned int v6; // r12d
  int v10; // ebp
  __int64 v11; // rax
  const char *v12; // rdi
  __int64 v13; // rbx
  unsigned int v14; // ebx
  char *Pool2; // rax
  char *v16; // rsi
  __int64 v18; // rdi
  void *v19; // r14
  __int64 v20; // rax
  unsigned int *v21; // r15
  __int64 v22; // rbp
  unsigned int *v23; // r8
  int v24; // eax
  unsigned int v25; // ebx
  int v26; // eax
  int v27; // eax
  unsigned int v28; // r12d
  __int64 v29; // rax
  char *v30; // r13
  unsigned int *v31; // rsi
  const void **v32; // rbp
  unsigned __int64 v33; // rax
  bool v34; // zf
  PVOID *v35; // rsi
  unsigned int *v36; // [rsp+30h] [rbp-38h]
  unsigned int *v37; // [rsp+30h] [rbp-38h]
  __int64 v38; // [rsp+30h] [rbp-38h]
  int *v39; // [rsp+38h] [rbp-30h]
  __int64 v40; // [rsp+38h] [rbp-30h]
  int v41; // [rsp+70h] [rbp+8h]

  v41 = a1;
  v36 = 0LL;
  v6 = 0;
  v10 = a1;
  if ( (a4 & 0x4000000) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    if ( (v11 & 0x1000000000LL) != 0 )
    {
      if ( v11 >= 0 )
        v12 = (const char *)&AcpiProcessorCompatId;
      else
        v12 = *(const char **)(a1 + 184);
      v13 = -1LL;
      do
        ++v13;
      while ( v12[v13] );
      v14 = v13 + 2;
      Pool2 = (char *)ExAllocatePool2(
                        (-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256,
                        2 * v14,
                        1399874369LL);
      v16 = Pool2;
      if ( Pool2 )
      {
        RtlStringCchPrintfA(Pool2, v14, "%s", v12);
        ACPIAnsiStringToWideHelper(v16, 2 * v14);
        *a5 = v16;
        if ( a6 )
          *a6 = 2 * v14;
        return 0LL;
      }
      return 3221225626LL;
    }
  }
  if ( a2 < 0 )
    return (unsigned int)a2;
  if ( *(_WORD *)(a3 + 2) == 1 || *(_WORD *)(a3 + 2) == 2 )
  {
    v18 = 1LL;
  }
  else
  {
    if ( *(_WORD *)(a3 + 2) != 4 )
      return 3222536207LL;
    v36 = *(unsigned int **)(a3 + 32);
    v18 = *v36;
    if ( *(unsigned int *)(a3 + 24) < (unsigned __int64)(40 * v18 + 8) )
      return 3222536207LL;
    v10 = a1;
  }
  v19 = (void *)ExAllocatePool2(64LL, 8 * v18, 1299211073LL);
  if ( !v19 )
    return 3221225626LL;
  v20 = ExAllocatePool2(64LL, 4 * v18, 1299211073LL);
  v21 = (unsigned int *)v20;
  if ( !v20 )
  {
    ExFreePoolWithTag(v19, 0);
    return 3221225626LL;
  }
  if ( *(_WORD *)(a3 + 2) == 1 )
  {
    v27 = ACPIGetConvertToPnpIDWide(v10, a2, a3, a4, (__int64)v19, v20);
  }
  else
  {
    if ( *(_WORD *)(a3 + 2) != 2 )
    {
      if ( *(_WORD *)(a3 + 2) == 4 )
      {
        v22 = 0LL;
        if ( (_DWORD)v18 )
        {
          v23 = v36 + 2;
          v39 = (int *)v20;
          v37 = v36 + 2;
          while ( 1 )
          {
            if ( *((_WORD *)v23 + 1) == 1 )
            {
              v24 = ACPIGetConvertToPnpIDWide(v41, a2, (_DWORD)v23, a4, (__int64)v19 + 8 * v22, (__int64)&v21[v22]);
            }
            else
            {
              if ( *((_WORD *)v23 + 1) != 2 )
                KeBugCheckEx(0xA3u, 1uLL, 0x60396uLL, 0LL, 0LL);
              v24 = ACPIGetConvertToStringWideWithPrepend(
                      (int)v21 + 4 * (int)v22,
                      a2,
                      (_DWORD)v23,
                      a4,
                      (__int64)v19 + 8 * v22,
                      (__int64)&v21[v22]);
            }
            v25 = v24;
            if ( v24 < 0 )
              break;
            v26 = *v39;
            if ( *v39 == 1 )
            {
              v26 = 0;
              *v39 = 0;
            }
            v23 = v37 + 10;
            ++v39;
            v6 += v26;
            v37 += 10;
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 >= (unsigned int)v18 )
              goto LABEL_44;
          }
          v18 = (unsigned int)v22;
          goto LABEL_55;
        }
      }
LABEL_45:
      v25 = -1072431089;
      goto LABEL_55;
    }
    v27 = ACPIGetConvertToStringWideWithPrepend(0, a2, a3, a4, (__int64)v19, v20);
  }
  v25 = v27;
  v6 = *v21;
  if ( v27 >= 0 )
  {
LABEL_44:
    if ( v6 > 2 )
    {
      v28 = v6 + 2;
      v29 = ExAllocatePool2((-(__int64)((a4 & 0x8000000) != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256, v28, 1399874369LL);
      v38 = v29;
      if ( v29 )
      {
        v30 = (char *)v29;
        if ( (_DWORD)v18 )
        {
          v31 = v21;
          v40 = (unsigned int)v18;
          v32 = (const void **)v19;
          do
          {
            if ( *v32 )
              memmove(v30, *v32, *v31);
            ++v32;
            v33 = (unsigned __int64)*v31++ >> 1;
            v34 = v40-- == 1;
            v30 += 2 * v33;
          }
          while ( !v34 );
        }
        *a5 = v38;
        if ( a6 )
          *a6 = v28;
      }
      else
      {
        v25 = -1073741670;
      }
      goto LABEL_55;
    }
    goto LABEL_45;
  }
LABEL_55:
  if ( (_DWORD)v18 )
  {
    v35 = (PVOID *)v19;
    do
    {
      if ( *v35 )
        ExFreePoolWithTag(*v35, 0);
      ++v35;
      --v18;
    }
    while ( v18 );
  }
  ExFreePoolWithTag(v21, 0);
  ExFreePoolWithTag(v19, 0);
  return v25;
}
