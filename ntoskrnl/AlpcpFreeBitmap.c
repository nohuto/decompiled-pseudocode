/*
 * XREFs of AlpcpFreeBitmap @ 0x140976654
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1407CBD90 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpAllocateFromBitmap @ 0x1408A06D6 (AlpcpAllocateFromBitmap.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall AlpcpFreeBitmap(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 result; // rax
  char v5; // r10
  volatile signed __int32 *v6; // r8
  int v7; // r10d
  unsigned int v8; // edx

  result = (unsigned __int64)a3 >> 5;
  v5 = a3;
  v6 = (volatile signed __int32 *)(a1 + 4 * result);
  v7 = v5 & 0x1F;
  if ( v7 )
  {
    v8 = 32 - v7;
    if ( a4 < 32 - v7 )
      v8 = a4;
    result = (unsigned int)~(((1 << v8) - 1) << v7);
    _InterlockedAnd(v6, result);
    a4 -= v8;
    ++v6;
  }
  if ( a4 >= 0x20 )
  {
    result = (unsigned __int64)a4 >> 5;
    do
    {
      _InterlockedAnd(v6, 0);
      a4 -= 32;
      ++v6;
      --result;
    }
    while ( result );
  }
  if ( a4 )
  {
    result = (unsigned int)(-1 << a4);
    _InterlockedAnd(v6, result);
  }
  return result;
}
