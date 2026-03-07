__int64 __fastcall HalpBuddyAllocatorSplitNode(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx

  v3 = 0;
  v6 = HalpMmAllocCtxAlloc(a1, 80LL);
  if ( v6 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 48));
    v7 = HalpMmAllocCtxAlloc(v5, 80LL);
    if ( v7 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 48));
      *(_QWORD *)(v6 + 16) = a2;
      *(_QWORD *)(v6 + 24) = 0LL;
      *(_QWORD *)(v6 + 32) = 0LL;
      *(_QWORD *)(v6 + 48) = *(_QWORD *)(a2 + 48);
      *(_BYTE *)(v6 + 72) = 0;
      v9 = *(_QWORD *)(a2 + 56);
      *(_QWORD *)(v6 + 64) = 0LL;
      *(_QWORD *)(v6 + 40) = 0LL;
      *(_QWORD *)(v6 + 8) = v6;
      *(_QWORD *)v6 = v6;
      *(_QWORD *)(v6 + 56) = v9 >> 1;
      *(_QWORD *)(v7 + 16) = a2;
      *(_QWORD *)(v7 + 24) = 0LL;
      *(_QWORD *)(v7 + 32) = 0LL;
      *(_QWORD *)(v7 + 48) = *(_QWORD *)(a2 + 48) + (*(_QWORD *)(a2 + 56) >> 1);
      *(_BYTE *)(v7 + 72) = 0;
      v10 = *(_QWORD *)(a2 + 56);
      *(_QWORD *)(v7 + 64) = 0LL;
      *(_QWORD *)(v7 + 40) = 0LL;
      *(_QWORD *)(v7 + 8) = v7;
      *(_QWORD *)v7 = v7;
      *(_QWORD *)(v7 + 56) = v10 >> 1;
      *(_BYTE *)(a2 + 72) = 1;
      *(_QWORD *)(a2 + 24) = v6;
      *(_QWORD *)(a2 + 32) = v7;
      return v3;
    }
    HalpMmAllocCtxFree(v8, v6);
    _InterlockedDecrement64((volatile signed __int64 *)(a1 + 48));
  }
  return (unsigned int)-1073741670;
}
