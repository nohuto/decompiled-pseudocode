/*
 * XREFs of ?InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA?AW4EInsertResult@12@PEBX0@Z @ 0x1C00C47D4
 * Callers:
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C00C46E0 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 * Callees:
 *     ?InsertWithHash@CPointerHashTable@NSInstrumentation@@AEAAX_KPEBX1@Z @ 0x1C00C4844 (-InsertWithHash@CPointerHashTable@NSInstrumentation@@AEAAX_KPEBX1@Z.c)
 */

__int64 __fastcall NSInstrumentation::CPointerHashTable::InsertInternal(
        __int64 a1,
        unsigned __int64 a2,
        const void *a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // ebx

  v3 = *(_DWORD *)(a1 + 40);
  v4 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 48)) == (3 * v3) >> 2 )
  {
    v4 = 2;
    goto LABEL_3;
  }
  if ( *(_DWORD *)(a1 + 48) <= v3 )
  {
LABEL_3:
    NSInstrumentation::CPointerHashTable::InsertWithHash(
      (NSInstrumentation::CPointerHashTable *)a1,
      0x9E3779B97F34A803uLL * (a2 >> 4),
      (const void *)a2,
      a3);
    return v4;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  return 1LL;
}
