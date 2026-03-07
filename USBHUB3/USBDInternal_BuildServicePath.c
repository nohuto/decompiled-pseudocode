__int64 __fastcall USBDInternal_BuildServicePath(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  char *v4; // rsi
  signed int v5; // ebx
  const void *v6; // r14
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  char *PoolWithTag; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  _WORD *v12; // rax
  unsigned __int64 v13; // rax
  char *v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  signed __int64 v17; // r9
  __int16 v18; // ax
  char *v19; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  if ( *(_WORD *)(v2 + 56) > 0x10u && RtlCompareMemory(*(const void **)(v2 + 64), L"\\Driver\\", 0x10uLL) == 16 )
  {
    v6 = (const void *)(*(_QWORD *)(v2 + 64) + 16LL);
    v7 = *(unsigned __int16 *)(v2 + 56) - 16;
    v8 = v7 + 24;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, v7 + 24, 0x68334855u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v7 + 24);
      memmove(v4, v6, v7);
      v10 = (unsigned __int64)(v7 + 24) >> 1;
      if ( v10 )
      {
        v11 = (unsigned __int64)(v7 + 24) >> 1;
        v12 = v4;
        do
        {
          if ( !*v12 )
            break;
          ++v12;
          --v11;
        }
        while ( v11 );
        v5 = v11 == 0 ? 0xC000000D : 0;
        if ( v11 )
          v13 = v10 - v11;
        else
          v13 = 0LL;
        if ( v11 )
        {
          v14 = &v4[2 * v13];
          v15 = v10 - v13;
          if ( v10 != v13 )
          {
            v16 = 2147483646LL;
            v17 = (char *)L"\\Parameters" - v14;
            do
            {
              if ( !v16 )
                break;
              v18 = *(_WORD *)&v14[v17];
              if ( !v18 )
                break;
              *(_WORD *)v14 = v18;
              --v16;
              v14 += 2;
              --v15;
            }
            while ( v15 );
          }
          v19 = v14 - 2;
          if ( v15 )
            v19 = v14;
          v5 = v15 == 0 ? 0x80000005 : 0;
          *(_WORD *)v19 = 0;
        }
      }
      else
      {
        v5 = -1073741811;
      }
      if ( v5 >= 0 )
      {
        v5 = 0;
      }
      else
      {
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 0, "RtlStringCchCatW failed with status 0x%x", v5);
        ExFreePoolWithTag(v4, 0x68334855u);
        v4 = 0LL;
      }
    }
    else
    {
      v5 = -1073741670;
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Couldnt allocate servicePath of size %d\n", v8);
    }
  }
  else
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "Unexpected Driver name, Drvobj 0x%p\n", (const void *)v2);
    v5 = -1073741595;
  }
  result = (unsigned int)v5;
  *a2 = v4;
  return result;
}
