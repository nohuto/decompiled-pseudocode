/*
 * XREFs of NVMeReenumerateNameSpaceWaitForAllIOComplete @ 0x1C000762C
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006C40 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     <none>
 */

char __fastcall NVMeReenumerateNameSpaceWaitForAllIOComplete(__int64 a1)
{
  char v1; // di
  __int64 v3; // r9
  unsigned int v4; // eax
  unsigned int v5; // esi
  unsigned int i; // ebp
  unsigned int v7; // edx

  v1 = 1;
  StorPortPause(a1, 120LL);
  LOWORD(v4) = *(_WORD *)(a1 + 288);
  *(_DWORD *)(a1 + 24) |= 0x100u;
  v5 = 0;
  if ( (_WORD)v4 )
  {
    do
    {
      for ( i = 0; i < 0x3E8; ++i )
      {
        StorPortExtendedFunction(81LL, a1, 10000LL, v3);
        if ( !*(_WORD *)(*(_QWORD *)(a1 + 776) + 136LL * v5 + 128) )
          break;
      }
      v4 = *(unsigned __int16 *)(a1 + 288);
      ++v5;
    }
    while ( v5 < v4 );
  }
  v7 = 0;
  if ( (_WORD)v4 )
  {
    while ( !*(_WORD *)(136LL * v7 + *(_QWORD *)(a1 + 776) + 128) )
    {
      if ( ++v7 >= (unsigned __int16)v4 )
        return v1;
    }
    v1 = 0;
    StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
  }
  return v1;
}
