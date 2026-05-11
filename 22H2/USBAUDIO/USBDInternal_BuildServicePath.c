/*
 * XREFs of USBDInternal_BuildServicePath @ 0x1C0010E50
 * Callers:
 *     USBD_CreateHandle @ 0x1C0011074 (USBD_CreateHandle.c)
 * Callees:
 *     memmove @ 0x1C0013540 (memmove.c)
 *     memset @ 0x1C0013800 (memset.c)
 */

__int64 __fastcall USBDInternal_BuildServicePath(__int64 a1, _QWORD *a2, ULONG a3)
{
  __int64 v3; // rbx
  char *v6; // rdi
  signed int v7; // ebx
  const void *v8; // r14
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  char *PoolWithTag; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  _WORD *v14; // rax
  unsigned __int64 v15; // rdx
  char *v16; // r8
  unsigned __int64 v17; // rcx
  __int64 v18; // r9
  signed __int64 v19; // rdx
  __int16 v20; // ax
  char *v21; // rax
  __int64 v22; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v6 = 0LL;
  if ( *(_WORD *)(v3 + 56) > 0x10u && RtlCompareMemory(*(const void **)(v3 + 64), L"\\Driver\\", 0x10uLL) == 16 )
  {
    v8 = (const void *)(*(_QWORD *)(v3 + 64) + 16LL);
    v9 = *(unsigned __int16 *)(v3 + 56) - 16;
    v10 = v9 + 24;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, v9 + 24, a3);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v9 + 24);
      memmove(v6, v8, v9);
      v12 = (unsigned __int64)(v9 + 24) >> 1;
      v7 = v12 == 0 ? 0xC000000D : 0;
      if ( !v12 )
        goto LABEL_15;
      v13 = v12;
      v14 = v6;
      do
      {
        if ( !*v14 )
          break;
        ++v14;
        --v13;
      }
      while ( v13 );
      v7 = v13 == 0 ? 0xC000000D : 0;
      if ( v13 )
        v15 = v12 - v13;
      else
LABEL_15:
        v15 = 0LL;
      if ( v7 < 0 )
        goto LABEL_25;
      v16 = &v6[2 * v15];
      v17 = v12 - v15;
      if ( v12 != v15 )
      {
        v18 = 2147483646LL;
        v19 = (char *)L"\\Parameters" - v16;
        do
        {
          if ( !v18 )
            break;
          v20 = *(_WORD *)&v16[v19];
          if ( !v20 )
            break;
          *(_WORD *)v16 = v20;
          --v18;
          v16 += 2;
          --v17;
        }
        while ( v17 );
      }
      v21 = v16 - 2;
      if ( v17 )
        v21 = v16;
      v22 = -(__int64)v17;
      v7 = v22 == 0 ? 0x80000005 : 0;
      *(_WORD *)v21 = 0;
      if ( v22 )
      {
        v7 = 0;
      }
      else
      {
LABEL_25:
        if ( g_EnableDbgPrints )
          DbgPrintEx(0x4Du, 0, "RtlStringCchCatW failed with status 0x%x", v7);
      }
      if ( v7 < 0 )
      {
        ExFreePoolWithTag(v6, a3);
        v6 = 0LL;
      }
    }
    else
    {
      v7 = -1073741670;
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Couldnt allocate servicePath of size %d\n", v10);
    }
  }
  else
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "Unexpected Driver name, Drvobj 0x%p\n", (const void *)v3);
    v7 = -1073741595;
  }
  result = (unsigned int)v7;
  *a2 = v6;
  return result;
}
