/*
 * XREFs of SeCaptureUnicodeStringStructures @ 0x1406F0E90
 * Callers:
 *     SepCaptureUnicodeStringArray @ 0x1406F0C70 (SepCaptureUnicodeStringArray.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SeCaptureUnicodeStringStructures(SIZE_T a1, unsigned int a2, char a3, _QWORD *a4)
{
  unsigned int v7; // ebx
  SIZE_T v8; // r14
  int v9; // r15d
  _OWORD *PoolWithTag; // rcx

  v7 = 0;
  *a4 = 0LL;
  if ( !a1 )
  {
    if ( !a2 )
      return 0;
    return (unsigned int)-1073741811;
  }
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a3 )
  {
    *a4 = a1;
    return 0;
  }
  v8 = 16LL * a2;
  if ( is_mul_ok(0x10uLL, a2) )
  {
    v9 = 0;
  }
  else
  {
    v8 = -1LL;
    v9 = -1073741675;
  }
  if ( v9 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x73556553u);
    if ( PoolWithTag )
    {
      if ( v8 )
      {
        if ( (a1 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v8 + a1 > 0x7FFFFFFF0000LL || v8 + a1 < a1 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      while ( v7 < a2 )
      {
        PoolWithTag[v7] = *(_OWORD *)(a1 + 16LL * v7);
        ++v7;
      }
      *a4 = PoolWithTag;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v9;
}
