/*
 * XREFs of RtlpLfhBlockBitmapAllocate @ 0x140311C40
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x140310BA0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLfhBlockBitmapAllocate(
        unsigned __int64 *a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  volatile signed __int64 *v5; // rbx
  unsigned __int64 v7; // rsi
  volatile signed __int64 *v9; // rdx
  volatile signed __int64 *v10; // rbp
  signed __int64 v11; // r9
  signed __int64 v12; // r11
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  int v15; // ecx
  bool v16; // zf
  signed __int64 v17; // rax
  volatile signed __int64 *v19; // rax
  unsigned __int64 v20; // r8
  volatile signed __int64 *v21; // rax

  v5 = (volatile signed __int64 *)a1[1];
  v7 = *a1;
  v9 = &v5[(unsigned __int64)(unsigned int)(2 * a2) >> 6];
  v10 = &v5[(*a1 - 1) >> 6];
LABEL_2:
  if ( v7 < 0x40 )
  {
    if ( (unsigned int)v7 < a4 )
      a4 = v7;
    v11 = *v9;
  }
  else
  {
    while ( 1 )
    {
      v11 = *v9;
      if ( (*v9 & 0x5555555555555555LL) != 0x5555555555555555LL )
        break;
      v19 = v9++;
      if ( v19 == v10 )
        v9 = v5;
    }
    if ( v9 == v10 && (v7 & 0x3F) != 0 && (v7 & 0x3F) < a4 )
      a4 = v7 & 0x3F;
  }
  a3 = ((a4 * a3) >> 7) & 0x1FFFFFE;
  while ( 1 )
  {
    v12 = ~v11;
    if ( a4 < 0x40 )
    {
      _BitScanForward64(&v20, v12 & 0x5555555555555555LL);
      a3 += v20;
      v13 = (((1LL << a4) - 1) << v20) & 0x5555555555555555LL;
    }
    else
    {
      v13 = 0x5555555555555555LL;
    }
    _BitScanForward64(&v14, __ROR8__(v13 & v12, a3));
    v15 = ((_BYTE)a3 + (_BYTE)v14) & 0x3F;
    v17 = _InterlockedCompareExchange64(v9, v11 | (a5 << v15), v11);
    v16 = v11 == v17;
    v11 = v17;
    if ( v16 )
      return (v15 + ((unsigned int)(v9 - v5) << 6)) >> 1;
    if ( (v17 & 0x5555555555555555LL) == 0x5555555555555555LL )
    {
      v21 = v9 + 1;
      v9 = v5;
      if ( v21 <= v10 )
        v9 = v21;
      goto LABEL_2;
    }
  }
}
