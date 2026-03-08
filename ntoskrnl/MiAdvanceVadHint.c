/*
 * XREFs of MiAdvanceVadHint @ 0x1407D72F0
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x140725C90 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140756084 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x1407D3750 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x1407D4340 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfPhysicalSection @ 0x140A2E020 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x140A3A010 (MiAllocateEnclaveVad.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiAdvanceVadHint(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r10
  BOOL v8; // r11d
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rcx
  int v14; // ebx

  v3 = (a2 >> 4) & 0xFFFFFFFFFFFFLL;
  v4 = (a1 >> 4) & 0xFFFFFFFFFFFFLL;
  result = -524288 * qword_140C66CE8;
  v6 = (unsigned __int64)(-524288 * qword_140C66CE8 + (a3[1] << 19)) >> 16;
  if ( v3 >= v6 )
  {
    result = v6 + *a3;
    if ( v4 < result )
    {
      v7 = (unsigned __int64)(-524288 * qword_140C66CE8 + (a3[1] << 19)) >> 16;
      if ( v4 >= v6 )
        v7 = v4;
      v8 = v4 < v6;
      if ( v3 >= result )
      {
        v3 = result - 1;
        v8 = 1;
      }
      v9 = v3 - v6;
      v10 = v7 - v6;
      v11 = v9 - v10 + 1;
      if ( v9 == v10 && !v8 || v10 == a3[2] )
      {
        v12 = v9 + 1;
        a3[2] = v12;
      }
      else
      {
        v12 = v9 + 1;
      }
      v13 = a3[4];
      v14 = 0;
      if ( v13 >= v12 || a3[3] + v13 <= v10 )
      {
        if ( v11 <= 1 || v8 )
          return result;
      }
      else
      {
        v14 = 1;
      }
      a3[4] = v12;
      if ( v11 > 1 && !v8 )
      {
        if ( v14 )
        {
          result = a3[3];
          if ( v11 < result )
            result = v11;
          a3[3] = result;
        }
        else
        {
          a3[3] = v11;
        }
      }
    }
  }
  return result;
}
