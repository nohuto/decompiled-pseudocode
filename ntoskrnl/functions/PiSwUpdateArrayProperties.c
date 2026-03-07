__int64 __fastcall PiSwUpdateArrayProperties(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // eax
  unsigned int v8; // r12d
  unsigned int *v9; // rsi
  unsigned int v10; // ebp
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rcx
  const wchar_t *v14; // rcx
  const wchar_t *v15; // rdx
  unsigned int v16; // ecx
  void *v18; // rbp
  __int64 Pool2; // rax
  __int64 v21; // [rsp+70h] [rbp+18h]

  v21 = a3;
  v4 = 0;
  v6 = a2;
  v8 = 0;
  if ( !a4 )
    return v4;
  v9 = (unsigned int *)(a3 + 36);
  while ( 2 )
  {
    v10 = 0;
    if ( !v6 )
      goto LABEL_17;
    v11 = a1 + 20;
    while ( 1 )
    {
      if ( *(v9 - 5) == *(_DWORD *)(v11 - 4) )
      {
        v12 = 48LL * v10;
        v13 = *(_QWORD *)(a3 + 48LL * v8) - *(_QWORD *)(v12 + a1);
        if ( !v13 )
          v13 = *(_QWORD *)(a3 + 48LL * v8 + 8) - *(_QWORD *)(v12 + a1 + 8);
        if ( !v13 && *(v9 - 4) == *(_DWORD *)v11 )
        {
          v14 = *(const wchar_t **)(v9 - 3);
          v15 = *(const wchar_t **)(v11 + 4);
          if ( v14 == v15 )
            goto LABEL_13;
          if ( v14 && v15 )
            break;
        }
      }
LABEL_6:
      v6 = a2;
      ++v10;
      v11 += 48LL;
      if ( v10 >= a2 )
        goto LABEL_17;
    }
    if ( wcsicmp(v14, v15) )
    {
      a3 = v21;
      goto LABEL_6;
    }
LABEL_13:
    v16 = *(_DWORD *)(v12 + a1 + 36);
    if ( *v9 == v16 )
      goto LABEL_14;
    v18 = *(void **)(v12 + a1 + 40);
    *(_QWORD *)(v12 + a1 + 40) = 0LL;
    if ( *v9 )
    {
      Pool2 = ExAllocatePool2(256LL, *v9, 1466986064LL);
      *(_QWORD *)(v12 + a1 + 40) = Pool2;
      if ( !Pool2 )
      {
        *(_QWORD *)(v12 + a1 + 40) = v18;
        return (unsigned int)-1073741670;
      }
    }
    if ( v18 )
      ExFreePoolWithTag(v18, 0x57706E50u);
    v16 = *v9;
    *(_DWORD *)(v12 + a1 + 36) = *v9;
LABEL_14:
    *(_DWORD *)(v12 + a1 + 32) = *(v9 - 1);
    if ( v16 )
      memmove(*(void **)(v12 + a1 + 40), *(const void **)(v9 + 1), v16);
    v6 = a2;
LABEL_17:
    ++v8;
    v9 += 12;
    if ( v8 < a4 )
    {
      a3 = v21;
      continue;
    }
    return v4;
  }
}
