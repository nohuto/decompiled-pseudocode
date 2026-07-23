/*
 * XREFs of WbReAlloc @ 0x1405E74DC
 * Callers:
 *     sub_1405E73D4 @ 0x1405E73D4 (sub_1405E73D4.c)
 *     sub_14064218C @ 0x14064218C (sub_14064218C.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     WbAlloc @ 0x140642A24 (WbAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
