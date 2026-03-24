/*
 * XREFs of WbReAlloc @ 0x14066803C
 * Callers:
 *     sub_140667F34 @ 0x140667F34 (sub_140667F34.c)
 *     sub_1406C612C @ 0x1406C612C (sub_1406C612C.c)
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
 *     WbAlloc @ 0x1406C69C4 (WbAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbReAlloc(PVOID P, size_t Size, SIZE_T NumberOfBytes, _QWORD *a4)
{
  unsigned int v4; // ebp
  unsigned int v7; // esi
  int v8; // r15d

  v4 = Size;
  v7 = NumberOfBytes;
  v8 = WbAlloc((unsigned int)NumberOfBytes);
  if ( v8 >= 0 )
  {
    if ( P )
    {
      if ( v4 )
      {
        if ( v7 >= v4 )
          v7 = v4;
        memmove(0LL, P, v7);
      }
      ExFreePoolWithTag(P, 0x42524157u);
    }
    if ( a4 )
      *a4 = 0LL;
  }
  return (unsigned int)v8;
}
