_QWORD *__fastcall MiSlistGetFreePage(__int64 a1, int *a2, unsigned int a3)
{
  int v3; // edi
  __int64 v6; // rsi
  union _SLIST_HEADER *v7; // rcx
  PSLIST_ENTRY v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *p_Next; // rbx

  v3 = *a2;
  v6 = 16LL * a3;
  while ( 1 )
  {
    v7 = (union _SLIST_HEADER *)(v6 + *(_QWORD *)(a1 + 8LL * v3 + 6808));
    if ( LOWORD(v7->Alignment) )
    {
      v8 = RtlpInterlockedPopEntrySList(v7);
      p_Next = &v8->Next;
      if ( v8 )
        break;
    }
    if ( v3 == a2[1] )
      return 0LL;
    v3 = a2[1];
  }
  v8[1].Next = (_SLIST_ENTRY *)ZeroPte;
  if ( v3 )
  {
    MiSetOriginalPtePfnFromFreeList(&v8[1], v9, v10);
  }
  else if ( (MiFlags & 0x80u) != 0LL && (++dword_140C67BE0 & MmPageValidationFrequency) == 0 )
  {
    MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)&v8[0x22000000000LL] >> 4));
  }
  *p_Next = 0LL;
  return p_Next;
}
