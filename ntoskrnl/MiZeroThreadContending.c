/*
 * XREFs of MiZeroThreadContending @ 0x1402A84A8
 * Callers:
 *     MiReduceZeroingThreads @ 0x1402A81E4 (MiReduceZeroingThreads.c)
 *     MiMoveZeroThreadsToOtherCores @ 0x1402A8404 (MiMoveZeroThreadsToOtherCores.c)
 * Callees:
 *     KeFindFirstSetRightGroupAffinity @ 0x1402A9460 (KeFindFirstSetRightGroupAffinity.c)
 */

__int64 __fastcall MiZeroThreadContending(__int64 a1)
{
  __int64 v3; // rsi
  _DWORD *v4; // rbx
  __int64 FirstSetRightGroupAffinity; // r9
  int v6; // r8d
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  if ( (*(_DWORD *)(a1 + 136) & 1) != 0 && (*(_DWORD *)(a1 + 136) & 2) == 0 )
  {
    v10 = *(_OWORD *)(a1 + 120);
    v3 = v10;
    if ( (_QWORD)v10 )
    {
      v4 = *(_DWORD **)(a1 + 88);
      FirstSetRightGroupAffinity = (unsigned int)KeFindFirstSetRightGroupAffinity(&v10);
      v6 = 0;
      v7 = *(_QWORD *)(KiProcessorBlock[FirstSetRightGroupAffinity] + 200) | v3 & *(_QWORD *)(KiProcessorBlock[FirstSetRightGroupAffinity]
                                                                                            + 34912);
      if ( v7 )
      {
        do
        {
          v8 = (_QWORD *)KiProcessorBlock[FirstSetRightGroupAffinity];
          v9 = v8[1];
          if ( v9 != v8[3] )
          {
            if ( v9 != *(_QWORD *)(a1 + 80) )
            {
              ++v4[54];
              return 1LL;
            }
            ++v6;
          }
          FirstSetRightGroupAffinity = (unsigned int)(FirstSetRightGroupAffinity + 1);
          v7 &= ~v8[25];
        }
        while ( v7 );
        if ( !v6 )
          goto LABEL_13;
        ++v4[55];
      }
      else
      {
LABEL_13:
        ++v4[53];
      }
    }
  }
  return 0LL;
}
