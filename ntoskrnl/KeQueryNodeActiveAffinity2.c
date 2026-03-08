/*
 * XREFs of KeQueryNodeActiveAffinity2 @ 0x140300670
 * Callers:
 *     MiComputeIdealDpcGang @ 0x1403867CC (MiComputeIdealDpcGang.c)
 *     PpmParkRegisterParking @ 0x14038D880 (PpmParkRegisterParking.c)
 *     MiCombineAllPhysicalMemory @ 0x1407C7D50 (MiCombineAllPhysicalMemory.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140B5F834 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     KiQuerySubNodeActiveAffinity @ 0x1402AE38C (KiQuerySubNodeActiveAffinity.c)
 */

__int64 __fastcall KeQueryNodeActiveAffinity2(unsigned __int16 a1, __int64 a2, unsigned __int16 a3, _WORD *a4)
{
  __int64 v6; // r14
  unsigned int v7; // ebx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r11
  unsigned int v10; // r10d
  __int64 v11; // rbp
  unsigned int v12; // ecx

  if ( a1 >= (unsigned __int16)KeNumberNodes )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    _mm_lfence();
    v6 = KeNodeBlock[a1];
    v7 = *(_DWORD *)(v6 + 16);
    v8 = v7 - (((unsigned __int64)v7 >> 1) & 0x5555555555555555LL);
    v9 = (0x101010101010101LL
        * (((v8 & 0x3333333333333333LL)
          + ((v8 >> 2) & 0x3333333333333333LL)
          + (((v8 & 0x3333333333333333LL) + ((v8 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    if ( a3 < (unsigned __int16)v9 )
    {
      *a4 = v9;
      return (unsigned int)-1073741789;
    }
    else
    {
      v10 = 0;
      if ( (_WORD)v9 )
      {
        v11 = (unsigned __int16)v9;
        do
        {
          _BitScanForward(&v12, v7);
          _bittestandreset((int *)&v7, (unsigned __int16)v12);
          KiQuerySubNodeActiveAffinity(*(_QWORD *)(v6 + 8LL * (unsigned __int16)v12 + 24), a2, 0LL);
          a2 += 16LL;
          --v11;
        }
        while ( v11 );
      }
      *a4 = v9;
    }
  }
  return v10;
}
