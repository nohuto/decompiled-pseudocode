/*
 * XREFs of RtlInterlockedSetBitRun @ 0x1405A6470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlInterlockedSetBitRun(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r9d
  __int64 v4; // r11
  volatile signed __int32 *v5; // r10
  unsigned __int64 result; // rax
  int v7; // ebx

  v3 = a3;
  v4 = a2 & 0x1F;
  v5 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * ((unsigned __int64)a2 >> 5));
  result = v4 + a3;
  if ( result <= 0x20 )
  {
    if ( a3 == 32 )
    {
      *v5 = -1;
      return result;
    }
    result = (unsigned int)(((1 << a3) - 1) << v4);
    goto LABEL_12;
  }
  v7 = a2 & 0x1F;
  if ( (a2 & 0x1F) != 0 )
  {
    result = (unsigned int)(((1 << (32 - v7)) - 1) << v4);
    _InterlockedOr(v5, result);
    v3 = a3 - (32 - v7);
    ++v5;
  }
  if ( v3 >= 0x20 )
  {
    result = (unsigned __int64)v3 >> 5;
    do
    {
      *v5 = -1;
      v3 -= 32;
      ++v5;
      --result;
    }
    while ( result );
  }
  if ( v3 )
  {
    result = (unsigned int)((1 << v3) - 1);
LABEL_12:
    _InterlockedOr(v5, result);
  }
  return result;
}
