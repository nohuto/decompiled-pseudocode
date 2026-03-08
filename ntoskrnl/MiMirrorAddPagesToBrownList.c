/*
 * XREFs of MiMirrorAddPagesToBrownList @ 0x1406246DC
 * Callers:
 *     MiMirrorGatherBrownPages @ 0x140624848 (MiMirrorGatherBrownPages.c)
 *     MiMirrorNodeLargePages @ 0x14064CF54 (MiMirrorNodeLargePages.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14034CE90 (RtlSetBitsEx.c)
 */

void __fastcall MiMirrorAddPagesToBrownList(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  volatile signed __int32 *v6; // r9
  unsigned __int64 v7; // r8
  unsigned int v8; // eax
  unsigned __int64 v9; // rdx

  v4 = a1 >> 5;
  v5 = a2;
  v6 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140C67B20 + 1) + 4 * v4);
  v7 = a1 & 0x1F;
  if ( v7 + a2 <= 0x20 )
  {
    if ( a2 == 32 )
    {
      *v6 = 0;
      goto LABEL_13;
    }
    v8 = ~(((1 << a2) - 1) << v7);
LABEL_12:
    _InterlockedAnd(v6, v8);
    goto LABEL_13;
  }
  if ( (a1 & 0x1F) != 0 )
  {
    _InterlockedAnd(v6, ~(((1 << (32 - (a1 & 0x1F))) - 1) << v7));
    v5 = a2 - (32 - (unsigned int)(a1 & 0x1F));
    ++v6;
  }
  if ( v5 >= 0x20 )
  {
    v9 = v5 >> 5;
    v5 += -32LL * (v5 >> 5);
    do
    {
      *v6++ = 0;
      --v9;
    }
    while ( v9 );
  }
  if ( v5 )
  {
    v8 = -1 << v5;
    goto LABEL_12;
  }
LABEL_13:
  RtlSetBitsEx((__int64)&xmmword_140C67B10, a1, a2);
}
