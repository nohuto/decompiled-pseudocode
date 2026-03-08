/*
 * XREFs of MiInitializeSystemVa @ 0x140B60308
 * Callers:
 *     MmInitSystem @ 0x140B393A4 (MmInitSystem.c)
 * Callees:
 *     MiAssignSoftwareWsleRegion @ 0x14039751C (MiAssignSoftwareWsleRegion.c)
 *     MiRebaseDynamicRelocationRegions @ 0x140B38F54 (MiRebaseDynamicRelocationRegions.c)
 *     MiInitializeTopLevelBitmap @ 0x140B603C4 (MiInitializeTopLevelBitmap.c)
 *     MiAssignTopLevelRanges @ 0x140B604AC (MiAssignTopLevelRanges.c)
 *     MiSetSystemRegionTypes @ 0x140B6087C (MiSetSystemRegionTypes.c)
 */

__int64 __fastcall MiInitializeSystemVa(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // ebx
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 8) != 0 )
    LODWORD(MiFlags) = MiFlags | 0x100000;
  v6 = 0LL;
  v2 = 16;
  v3 = 8;
  while ( 1 )
  {
    result = MiInitializeTopLevelBitmap();
    if ( !(_DWORD)result )
      return result;
    result = MiAssignTopLevelRanges(v2, &v6, 0xC8000000000LL);
    if ( (_DWORD)result )
      goto LABEL_8;
    if ( v3 )
    {
      --v3;
    }
    else
    {
      v3 = 8;
LABEL_8:
      if ( v2 == 1 )
      {
        if ( (_DWORD)result )
        {
LABEL_10:
          v5 = v6;
          if ( !v6 )
            v5 = 0xFFFFF78000000000uLL;
          MiAssignSoftwareWsleRegion(a1, v5);
          MiSetSystemRegionTypes();
          return MiRebaseDynamicRelocationRegions(a1);
        }
        if ( !(_DWORD)dword_140C67BB8 )
          LODWORD(dword_140C67BB8) = 5;
        return result;
      }
      v2 >>= 1;
      if ( (_DWORD)result )
        goto LABEL_10;
    }
  }
}
