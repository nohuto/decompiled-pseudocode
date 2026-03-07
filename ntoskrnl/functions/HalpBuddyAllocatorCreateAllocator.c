__int64 __fastcall HalpBuddyAllocatorCreateAllocator(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v4; // ebp
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 *v15; // rax

  v2 = 0;
  *(_QWORD *)a2 = 0LL;
  v4 = a1;
  if ( (unsigned int)(a1 - 12) > 0x33 )
    return (unsigned int)-1073741585;
  v6 = HalpMmAllocCtxAlloc(a1, 128LL);
  if ( !v6 )
    return (unsigned int)-1073741670;
  v8 = HalpMmAllocCtxAlloc(v5, 80LL);
  if ( !v8 )
  {
    v2 = -1073741670;
LABEL_8:
    HalpMmAllocCtxFree(v7, v6);
    return v2;
  }
  v9 = (unsigned int)(v4 - 11);
  v10 = HalpMmAllocCtxAlloc(v7, 16 * v9);
  if ( !v10 )
  {
    v2 = -1073741670;
    HalpMmAllocCtxFree(v11, v8);
    goto LABEL_8;
  }
  *(_QWORD *)(v6 + 24) = 4096LL;
  *(_QWORD *)(v6 + 72) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 88) = v8;
  *(_QWORD *)(v6 + 96) = v10;
  *(_QWORD *)(v6 + 112) = 0LL;
  *(_QWORD *)(v6 + 104) = 0LL;
  *(_BYTE *)(v6 + 120) = 1;
  *(_QWORD *)(v6 + 32) = 1LL << v4;
  *(_QWORD *)(v6 + 40) = (1LL << v4) - 1;
  *(_QWORD *)(v6 + 48) = 1LL;
  *(_QWORD *)(v6 + 56) = 0LL;
  *(_QWORD *)(v6 + 64) = 0LL;
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)(v8 + 24) = 0LL;
  *(_QWORD *)(v8 + 32) = 0LL;
  *(_QWORD *)(v8 + 48) = 0LL;
  *(_BYTE *)(v8 + 72) = 0;
  *(_QWORD *)(v8 + 56) = 1LL << v4;
  *(_QWORD *)(v8 + 64) = 0LL;
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_QWORD *)(v8 + 8) = v8;
  *(_QWORD *)v8 = v8;
  if ( v4 != 11 )
  {
    v12 = 0LL;
    do
    {
      v13 = (_QWORD *)(v12 + *(_QWORD *)(v6 + 96));
      v12 += 16LL;
      v13[1] = v13;
      *v13 = v13;
      --v9;
    }
    while ( v9 );
  }
  v14 = *(_QWORD *)(v6 + 96) + 16LL * (unsigned int)(v4 - 12);
  v15 = *(__int64 **)(v14 + 8);
  if ( *v15 != v14 )
    __fastfail(3u);
  *(_QWORD *)v8 = v14;
  *(_QWORD *)(v8 + 8) = v15;
  *v15 = v8;
  *(_QWORD *)(v14 + 8) = v8;
  *(_QWORD *)a2 = v6;
  *(_DWORD *)(v6 + 8) = 1;
  *(_DWORD *)(*(_QWORD *)a2 + 12LL) = 128;
  *(_DWORD *)(*(_QWORD *)a2 + 16LL) = 1;
  **(_QWORD **)a2 = &BuddyAllocatorOperations;
  return v2;
}
