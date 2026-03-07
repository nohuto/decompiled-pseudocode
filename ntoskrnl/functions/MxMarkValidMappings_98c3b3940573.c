void __fastcall MxMarkValidMappings(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v7; // rsi
  __int64 v8; // r13
  unsigned __int64 v9; // rax
  unsigned __int8 v10; // bl
  __int64 v11; // r14
  unsigned __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 IsRegularMemory; // rax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 <= a2 )
  {
    v7 = a1;
    v8 = -1LL;
    do
    {
      v9 = MI_READ_PTE_LOCK_FREE(v7);
      v10 = v9;
      if ( (v9 & 1) != 0 )
      {
        v11 = (v9 >> 12) & 0xFFFFFFFFFFLL;
        v18 = MI_READ_PTE_LOCK_FREE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v18) >> 12) & 0xFFFFFFFFFFLL;
        if ( v12 != v8 )
        {
          IsRegularMemory = MiIsRegularMemory(a4, v12);
          if ( IsRegularMemory )
            *(_DWORD *)(IsRegularMemory + 24) |= 0x20000000u;
          v8 = v12;
        }
        v13 = 1LL;
        if ( !a3 )
          goto LABEL_27;
        v15 = v10 & 0x80;
        if ( (v10 & 0x80) == 0 )
          goto LABEL_27;
        v13 = 512LL;
        if ( a3 == 1 )
          goto LABEL_27;
        v16 = (unsigned int)(a3 - 1);
        do
        {
          v13 <<= 9;
          --v16;
        }
        while ( v16 );
        if ( v13 )
        {
LABEL_27:
          do
          {
            v14 = MiIsRegularMemory(a4, v11);
            if ( v14 )
              *(_DWORD *)(v14 + 24) |= 0x20000000u;
            ++v11;
            --v13;
          }
          while ( v13 );
          v15 = v10 & 0x80;
        }
        if ( a3 && !v15 && v7 != 0xFFFFF6FB7DBEDF68uLL )
          MxMarkValidMappings((__int64)(v7 << 25) >> 16, ((__int64)(v7 << 25) >> 16) + 4088, (unsigned int)(a3 - 1), a4);
      }
      v7 += 8LL;
    }
    while ( v7 <= a2 );
  }
}
