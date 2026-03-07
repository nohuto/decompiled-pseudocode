_UNKNOWN **__fastcall HvpCopyDataToOffsetArray(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6)
{
  _UNKNOWN **result; // rax
  unsigned int *v7; // r15
  unsigned int *v9; // r12
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  unsigned int v12; // esi
  unsigned int v13; // r15d
  unsigned int v15; // eax
  unsigned int v16; // ebx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v7 = a6;
  v9 = a5;
  v10 = a2;
  v11 = *a6;
  v12 = *a5;
  if ( a2 )
  {
    v13 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = v10;
        if ( v11 + v10 > *(_DWORD *)(a3 + 24LL * v12 + 16) )
          v15 = *(_DWORD *)(a3 + 24LL * v12 + 16) - v11;
        v16 = v15;
        result = (_UNKNOWN **)memmove((void *)(*(_QWORD *)(a3 + 24LL * v12 + 8) + v11), (const void *)(a1 + v13), v15);
        v13 += v16;
        v11 += v16;
        v10 -= v16;
        if ( v11 == *(_DWORD *)(a3 + 24LL * v12 + 16) )
          break;
        if ( !v10 )
          goto LABEL_7;
      }
      if ( !v10 )
        break;
      ++v12;
      v11 = 0;
    }
LABEL_7:
    v7 = a6;
    v9 = a5;
  }
  *v9 = v12;
  *v7 = v11;
  return result;
}
