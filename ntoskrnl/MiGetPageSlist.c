/*
 * XREFs of MiGetPageSlist @ 0x1403D1650
 * Callers:
 *     MiGetFreeOrZeroPageAnyColor @ 0x14034E684 (MiGetFreeOrZeroPageAnyColor.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x14032F834 (MiSetOriginalPtePfnFromFreeList.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     MiArePageContentsZero @ 0x14064AE74 (MiArePageContentsZero.c)
 */

_QWORD *__fastcall MiGetPageSlist(__int64 a1, unsigned int a2, __int16 a3)
{
  int v3; // r15d
  __int64 *v4; // r14
  int v5; // r12d
  unsigned int v7; // ebx
  int i; // esi
  union _SLIST_HEADER *v9; // rcx
  PSLIST_ENTRY v10; // rax
  _QWORD *p_Next; // r8
  __int64 v13; // [rsp+50h] [rbp+8h]
  PSLIST_ENTRY v14; // [rsp+68h] [rbp+20h]

  v13 = a1;
  v3 = dword_140C65778;
  v4 = &MiFreeThenFree;
  v5 = 1;
  if ( (a3 & 0x4000) != 0 )
    v5 = 16;
  v7 = a2;
  if ( (a3 & 2) != 0 )
    v4 = &MiZeroThenZero;
  while ( 2 )
  {
    for ( i = *(_DWORD *)v4; ; i = *((_DWORD *)v4 + 1) )
    {
      v9 = (union _SLIST_HEADER *)(16LL * v7 + *(_QWORD *)(a1 + 8LL * i + 6808));
      if ( LOWORD(v9->Alignment) )
      {
        v10 = RtlpInterlockedPopEntrySList(v9);
        v14 = v10;
        p_Next = &v10->Next;
        if ( v10 )
        {
          v10[1].Next = (_SLIST_ENTRY *)ZeroPte;
          if ( i )
          {
            MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v10[1]);
          }
          else if ( (MiFlags & 0x80u) != 0LL && (++dword_140C67BE0 & MmPageValidationFrequency) == 0 )
          {
            MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)&v10[0x22000000000LL] >> 4));
            p_Next = &v14->Next;
          }
          *p_Next = 0LL;
          return p_Next;
        }
      }
      if ( i == *((_DWORD *)v4 + 1) )
        break;
      a1 = v13;
    }
    v7 = v7 & ~v3 | v3 & (v7 + v5);
    if ( v7 != a2 )
    {
      a1 = v13;
      continue;
    }
    break;
  }
  return 0LL;
}
