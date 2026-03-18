/*
 * XREFs of PspJobDeleteStorageArrays @ 0x140678A8C
 * Callers:
 *     PspJobDelete @ 0x140207100 (PspJobDelete.c)
 * Callees:
 *     PspStorageEmptyArray @ 0x1407F6F60 (PspStorageEmptyArray.c)
 *     PspFreeStorage @ 0x1407F7A80 (PspFreeStorage.c)
 */

__int64 __fastcall PspJobDeleteStorageArrays(__int64 a1)
{
  __int64 v1; // rdi
  ULONG_PTR v3; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1496);
  if ( v1 )
  {
    PspStorageEmptyArray(*(_QWORD *)(a1 + 1496));
    v3 = *(_QWORD *)(v1 + 512);
    if ( v3 )
      PspStorageEmptyArray(v3);
    result = PspFreeStorage(*(PVOID *)(a1 + 1496));
    *(_QWORD *)(a1 + 1496) = 0LL;
  }
  return result;
}
