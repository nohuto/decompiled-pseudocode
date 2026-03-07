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
