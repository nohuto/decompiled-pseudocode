/*
 * XREFs of MiFreePageToSlabEntry @ 0x1402CE6EC
 * Callers:
 *     MiFreePageToSlabAllocator @ 0x1402CE4E0 (MiFreePageToSlabAllocator.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreePageToSlabEntry(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r9d
  __int64 v5; // rbx
  volatile signed __int32 *v6; // r8
  unsigned int v7; // eax
  __int64 result; // rax
  int v9; // r9d
  unsigned __int64 v10; // rax

  v4 = -1431655765 * ((a1 + 0x220000000000LL) >> 4) - *(_DWORD *)(a2 + 24);
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 132));
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 48));
  LOBYTE(a1) = 1;
  v5 = v4 & 0x1F;
  v6 = (volatile signed __int32 *)(*(_QWORD *)(a2 + 56) + 4 * ((unsigned __int64)v4 >> 5));
  if ( (unsigned __int64)(v5 + 1) <= 0x20 )
  {
    v7 = ~(1 << v5);
LABEL_3:
    _InterlockedAnd(v6, v7);
    goto LABEL_4;
  }
  v9 = v4 & 0x1F;
  if ( !v9 )
    goto LABEL_12;
  _InterlockedAnd(v6++, ~(((1 << (32 - v9)) - 1) << v5));
  LODWORD(a1) = 1 - (32 - v9);
  if ( (unsigned int)a1 >= 0x20 )
  {
    v10 = (unsigned __int64)(unsigned int)a1 >> 5;
    do
    {
      *v6 = 0;
      LODWORD(a1) = a1 - 32;
      ++v6;
      --v10;
    }
    while ( v10 );
  }
  if ( (_DWORD)a1 )
  {
LABEL_12:
    v7 = -1 << a1;
    goto LABEL_3;
  }
LABEL_4:
  result = (unsigned int)(*(_DWORD *)(a2 + 132) + *(_DWORD *)(a2 + 136));
  if ( (unsigned int)result >= 0x200 )
    _InterlockedOr((volatile signed __int32 *)(a3 + 88), 1u);
  return result;
}
