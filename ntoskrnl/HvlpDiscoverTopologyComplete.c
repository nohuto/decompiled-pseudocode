/*
 * XREFs of HvlpDiscoverTopologyComplete @ 0x140B8FE94
 * Callers:
 *     HvlPhase2Initialize @ 0x1403AF870 (HvlPhase2Initialize.c)
 * Callees:
 *     HvlpDiscoverTopologyWorker @ 0x14093E438 (HvlpDiscoverTopologyWorker.c)
 */

int *HvlpDiscoverTopologyComplete()
{
  int *result; // rax
  unsigned int v1; // esi
  unsigned int v2; // r9d
  int *v3; // rbx
  unsigned int v4; // r10d
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  bool v7; // zf
  char v8; // r8
  char v9; // r11
  _DWORD *v10; // rdx
  char v11; // cl
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (int *)&retaddr;
  v1 = 0;
  if ( (_DWORD)HvlpLogicalProcessorCount )
  {
    v2 = dword_140D18AD0;
    v3 = &dword_140D2A9B8;
    v4 = dword_140D18AD4;
    do
    {
      if ( v3[4] == -1 )
      {
        result = (int *)HvlpDiscoverTopologyWorker();
        v2 = dword_140D18AD0;
        v4 = dword_140D18AD4;
      }
      v5 = v3[2];
      v6 = v3[3];
      if ( v5 > v2 )
        v2 = v3[2];
      dword_140D18AD0 = v2;
      if ( v6 > v4 )
        v4 = v6;
      v7 = *((_BYTE *)v3 + 104) == 0;
      dword_140D18AD4 = v4;
      if ( !v7 )
      {
        v8 = 1;
        result = HvlpLogicalProcessorRegions;
        v9 = 1;
        if ( HvlpLogicalProcessorRegions == v3 - 2 )
          goto LABEL_19;
        v10 = &unk_140D2A9C0;
        do
        {
          if ( *((_BYTE *)v10 + 96) )
          {
            v11 = 0;
            if ( *v10 != v5 )
              v11 = v8;
            v8 = v11;
            if ( v10[1] == v6 )
              v9 = 0;
          }
          v10 += 30;
          result = v10 - 4;
        }
        while ( v10 - 4 != v3 - 2 );
        if ( v8 )
LABEL_19:
          ++HvlpPackageCount;
        if ( v9 )
          ++HvlpCoreCount;
      }
      ++v1;
      v3 += 30;
    }
    while ( v1 < (unsigned int)HvlpLogicalProcessorCount );
  }
  return result;
}
