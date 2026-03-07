__int64 __fastcall MiClusterVadActive(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  int v6; // r14d
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned int i; // ebp
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  *a3 = -1LL;
  v4 = (__int64)(*(_QWORD *)(a2 + 8) << 25) >> 16;
  v5 = v4 & 0xFFFFFFFFFFFF0000uLL;
  if ( (v4 & 0xFFFFFFFFFFFF0000uLL) >> 12 < (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
    || (v5 + 0xFFFF) >> 12 > (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) )
  {
    return 0LL;
  }
  v6 = 0;
  v7 = -1LL;
  v8 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = 0; i < 0x10; ++i )
  {
    v13 = MI_READ_PTE_LOCK_FREE(v8);
    if ( (v13 & 1) != 0 )
    {
      v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13);
      v11 = (v10 >> 12) & 0xFFFFFFFFFFLL;
      if ( (unsigned __int16)v10 >> 12 != (unsigned __int64)i )
        return 0LL;
      if ( v7 == -1 )
      {
        v7 = v11 - i;
      }
      else
      {
        if ( v11 != v7 + i )
          return 0LL;
        v6 = 1;
      }
    }
    v8 += 8LL;
  }
  if ( !v6 )
  {
    *a3 = (unsigned __int16)v4 >> 12;
    return 0LL;
  }
  return 1LL;
}
