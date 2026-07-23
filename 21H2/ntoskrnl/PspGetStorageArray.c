/*
 * XREFs of PspGetStorageArray @ 0x1406C4594
 * Callers:
 *     PsMakeSiloContextPermanent @ 0x1405D2930 (PsMakeSiloContextPermanent.c)
 *     PspStorageInsertObject @ 0x1406C4480 (PspStorageInsertObject.c)
 *     PspStorageReplaceObject @ 0x14090F220 (PspStorageReplaceObject.c)
 * Callees:
 *     PspGetStorageArrayIfPossible @ 0x1402A5448 (PspGetStorageArrayIfPossible.c)
 *     PspLazyInitializeStorageExpansion @ 0x14090EFA8 (PspLazyInitializeStorageExpansion.c)
 */

__int64 __fastcall PspGetStorageArray(__int64 a1, unsigned int a2, unsigned int *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned int *Buffer; // rcx

  result = PspGetStorageArrayIfPossible(a1, a2, a3, a4);
  if ( (_DWORD)result == -1073741275 )
  {
    if ( *(_QWORD *)(v9 + 512) )
      return result;
    result = PspLazyInitializeStorageExpansion();
    if ( (int)result < 0 )
      return result;
    result = PspGetStorageArrayIfPossible(a1, a2, a3, a4);
  }
  if ( (int)result >= 0 )
  {
    Buffer = PspStorageBitmap.Buffer;
    if ( a2 >= 0x20 )
      Buffer = PspStorageExpansionBitmap.Buffer;
    if ( !_bittest64((const signed __int64 *)Buffer, *a3) )
      __fastfail(5u);
    return 0LL;
  }
  return result;
}
