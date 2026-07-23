/*
 * XREFs of MmInitSystem @ 0x140A53D6C
 * Callers:
 *     KiInitializeBootStructures @ 0x14099BA20 (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140A39F24 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140A4C104 (Phase1InitializationIoReady.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x140340410 (VslGetNestedPageProtectionFlags.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     MiInitNucleus @ 0x140A42364 (MiInitNucleus.c)
 *     MiInitializeSystemVa @ 0x140A4F300 (MiInitializeSystemVa.c)
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 *     KeQueryNumaGraph @ 0x140A91590 (KeQueryNumaGraph.c)
 */

char __fastcall MmInitSystem(int a1, ULONG_PTR a2)
{
  int NestedPageProtectionFlags; // eax
  char v5; // cl
  int v6; // eax
  unsigned __int16 *NumaGraph; // r10
  unsigned int v8; // r9d
  unsigned int i; // r8d
  unsigned int v10; // esi
  __int64 v11; // rax

  if ( a1 == -1 )
  {
    stru_140C2A160.SizeOfBitMap = 2048;
    stru_140C2A160.Buffer = (unsigned int *)&unk_140C2A170;
    word_140C2A2D2 |= 1u;
    NestedPageProtectionFlags = VslGetNestedPageProtectionFlags();
    v5 = NestedPageProtectionFlags;
    if ( !NestedPageProtectionFlags )
    {
LABEL_12:
      MiInitializeSystemVa(a2);
      return 1;
    }
    v6 = MiFlags | 0x2000;
    MiFlags |= 0x2000u;
    if ( (v5 & 4) != 0 )
    {
      v6 |= 0xC000u;
      MiFlags = v6;
    }
    if ( (v5 & 1) != 0 )
    {
      v6 |= 0x50000u;
    }
    else
    {
      if ( (v5 & 2) == 0 )
      {
LABEL_22:
        if ( (v5 & 0x10) == 0 )
        {
          v6 |= 0x20000u;
          MiFlags = v6;
        }
        if ( (v5 & 0x40) != 0 )
        {
          v6 |= 0x100000u;
          MiFlags = v6;
        }
        if ( v5 < 0 )
          MiFlags = v6 | 0x80000;
        goto LABEL_12;
      }
      v6 |= 0x10000u;
    }
    MiFlags = v6;
    goto LABEL_22;
  }
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( (unsigned __int16)KeNumberNodes > 1u )
      {
        NumaGraph = (unsigned __int16 *)KeQueryNumaGraph();
        if ( NumaGraph )
        {
          v8 = (unsigned __int16)KeNumberNodes;
          for ( i = 0; i < v8; ++i )
          {
            v10 = 0;
            do
            {
              v11 = i * v8 + v10++;
              *(_DWORD *)(qword_140C4DE98 + 4LL * (unsigned int)v11) = NumaGraph[v11];
            }
            while ( v10 < v8 );
          }
          ExFreePoolWithTag(NumaGraph, 0);
        }
      }
      MiFlags = MiFlags & 0xFFFFFFCF | 0x10;
      if ( (unsigned __int8)MiInitSystem(1LL, a2) )
      {
        byte_140C4EEDC = 1;
        return 1;
      }
      return 0;
    }
    if ( a1 == 2 )
    {
      MiFlags = MiFlags & 0xFFFFFFCF | 0x20;
      return ((__int64 (*)(void))MiInitSystem)();
    }
  }
  else if ( MiInitNucleus(a2) )
  {
    return ((__int64 (*)(void))MiInitSystem)();
  }
  return 0;
}
