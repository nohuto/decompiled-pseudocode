PSLIST_ENTRY __fastcall ST_STORE<SM_TRAITS>::StAcquireReadContext(__int64 a1)
{
  PSLIST_ENTRY v2; // rbx
  __int64 v3; // rdx
  struct _SLIST_ENTRY *Pool2; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx

  v2 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 4048));
  if ( !v2 )
  {
    v3 = (unsigned int)(*(_DWORD *)(a1 + 4024) + 4544);
    if ( (*(_DWORD *)(a1 + 856) & 0x40000) == 0 )
      v3 = (unsigned int)(*(_DWORD *)(a1 + 4024) + 448);
    Pool2 = (struct _SLIST_ENTRY *)ExAllocatePool2(64LL, v3, 1951624563LL);
    v2 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, 0x50uLL);
      v5 = ((unsigned __int64)&v2[5].Next + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( *(_DWORD *)(a1 + 4024) )
      {
        v2[1].Next = (_SLIST_ENTRY *)v5;
        v5 += *(unsigned int *)(a1 + 4024);
      }
      v6 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      *((_QWORD *)&v2[1].Next + 1) = v6;
      v7 = (v6 + 175) & 0xFFFFFFFFFFFFFFF8uLL;
      v2[2].Next = (_SLIST_ENTRY *)v7;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)(v6 + 32) = 0LL;
      *(_DWORD *)(v6 + 24) = 0;
      *(_QWORD *)v6 = v6 + 40;
      *(_DWORD *)(v6 + 28) = 8;
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)(v7 + 16) = 0LL;
      *(_QWORD *)(v7 + 32) = 0LL;
      *(_DWORD *)(v7 + 24) = 0;
      *(_QWORD *)v7 = v7 + 40;
      *(_DWORD *)(v7 + 28) = 8;
      if ( (*(_DWORD *)(a1 + 856) & 0x40000) != 0 )
        v2[3].Next = (_SLIST_ENTRY *)(v7 + 168);
    }
    else
    {
      return 0LL;
    }
  }
  return v2;
}
