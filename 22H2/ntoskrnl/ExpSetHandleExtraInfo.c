/*
 * XREFs of ExpSetHandleExtraInfo @ 0x14094CBC8
 * Callers:
 *     ExpDuplicateSingleHandle @ 0x1406069E0 (ExpDuplicateSingleHandle.c)
 *     ObpCreateHandle @ 0x140643C70 (ObpCreateHandle.c)
 *     ExCreateHandleEx @ 0x140664860 (ExCreateHandleEx.c)
 * Callees:
 *     ExpFreeTablePagedPool @ 0x1406044E0 (ExpFreeTablePagedPool.c)
 *     ExpLookupHandleTableEntry @ 0x14063E910 (ExpLookupHandleTableEntry.c)
 *     ExpAllocateTablePagedPool @ 0x14069A6A0 (ExpAllocateTablePagedPool.c)
 */

__int64 __fastcall ExpSetHandleExtraInfo(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbp
  volatile signed __int64 *v6; // rax
  volatile signed __int64 *v7; // rdi
  volatile signed __int64 v9; // rdx
  PVOID TablePagedPool; // rax

  v5 = (unsigned __int8)((unsigned int)a2 >> 2);
  v6 = (volatile signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)a1, a2 & 0xFFFFFFFFFFFFFC03uLL);
  v7 = v6;
  if ( !v6 )
    return 3221225473LL;
  v9 = *v6;
  if ( !*v6 )
  {
    TablePagedPool = ExpAllocateTablePagedPool(*(_QWORD *)(a1 + 16), 0x800uLL);
    v9 = (volatile signed __int64)TablePagedPool;
    if ( !TablePagedPool )
      return 3221225626LL;
    if ( _InterlockedCompareExchange64(v7, (signed __int64)TablePagedPool, 0LL) )
    {
      ExpFreeTablePagedPool(*(struct _KPROCESS **)(a1 + 16), TablePagedPool, 2048LL);
      v9 = *v7;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 4));
    }
    if ( !v9 )
      return 3221225626LL;
  }
  *(_QWORD *)(v9 + 8 * v5) = *a3;
  return 0LL;
}
