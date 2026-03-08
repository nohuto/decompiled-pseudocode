/*
 * XREFs of IoSetDumpRange @ 0x14054E9E0
 * Callers:
 *     IopAddPageDumpRange @ 0x14054FB48 (IopAddPageDumpRange.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 *     IopAddPageToPageMap @ 0x14054FD30 (IopAddPageToPageMap.c)
 */

__int64 __fastcall IoSetDumpRange(__int64 a1, char *a2, unsigned __int64 a3, int a4)
{
  int v4; // ebp
  int v5; // eax
  unsigned __int64 v6; // r14
  char *v7; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v10; // rcx
  PHYSICAL_ADDRESS v11; // rdi
  __int64 v12; // rdx
  char v13; // al
  __int64 v14; // r8
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  _QWORD *v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned int v19; // r9d
  _QWORD *v20; // rdx
  unsigned __int64 v21; // rcx
  char v22; // bp
  PHYSICAL_ADDRESS v23; // rax
  int v24; // eax

  v4 = a4;
  v5 = a4 & 0xF;
  v6 = a3;
  v7 = a2;
  if ( v5 == 1 )
  {
    PhysicalAddress = MmGetPhysicalAddress(a2);
    v10 = *(_QWORD *)(a1 + 24);
    v11 = PhysicalAddress;
    v12 = *(_QWORD *)(a1 + 16);
    v13 = *(_BYTE *)(a1 + 40) & 1;
    v14 = *(_QWORD *)(a1 + 32);
    v7 = (char *)((unsigned __int64)v11.QuadPart >> 12);
    v4 = 0;
LABEL_20:
    v15 = IopAddPageToPageMap(v10, v12, v14, (_DWORD)v7, v6, v13, v4);
    if ( v15 != -1073741503 )
      return v15;
  }
  else if ( v5 == 2 )
  {
    v15 = -1073741503;
    v16 = 0;
    if ( *(_DWORD *)MmPhysicalMemoryBlock )
    {
      v17 = (char *)MmPhysicalMemoryBlock + 24;
      do
      {
        v18 = *(v17 - 1);
        if ( v18 > (unsigned __int64)v7 )
          break;
        if ( *v17 + v18 > (unsigned __int64)v7 )
        {
          if ( v6 > *((_QWORD *)MmPhysicalMemoryBlock + 2 * v16 + 2)
                  + *((_QWORD *)MmPhysicalMemoryBlock + 2 * v16 + 3)
                  - (_QWORD)v7 )
            break;
LABEL_19:
          v14 = *(_QWORD *)(a1 + 32);
          v12 = *(_QWORD *)(a1 + 16);
          v13 = *(_BYTE *)(a1 + 40) & 1;
          v10 = *(_QWORD *)(a1 + 24);
          goto LABEL_20;
        }
        ++v16;
        v17 += 2;
      }
      while ( v16 < *(_DWORD *)MmPhysicalMemoryBlock );
    }
    if ( SpecialMemoryRanges )
    {
      v19 = 0;
      if ( *(_DWORD *)SpecialMemoryRanges )
      {
        v20 = (_QWORD *)(SpecialMemoryRanges + 24);
        do
        {
          v21 = *(v20 - 1);
          if ( v21 > (unsigned __int64)v7 )
            break;
          if ( *v20 + v21 > (unsigned __int64)v7 )
          {
            if ( v6 > *(_QWORD *)(SpecialMemoryRanges + 16LL * v19 + 16)
                    + *(_QWORD *)(SpecialMemoryRanges + 16LL * v19 + 24)
                    - (_QWORD)v7 )
              break;
            goto LABEL_19;
          }
          ++v19;
          v20 += 2;
        }
        while ( v19 < *(_DWORD *)SpecialMemoryRanges );
      }
    }
  }
  else
  {
    v22 = 1;
    if ( !a3 )
      return 0;
    do
    {
      if ( MmIsAddressValidEx((__int64)v7) )
      {
        v23 = MmGetPhysicalAddress(v7);
        v24 = IopAddPageToPageMap(
                *(_QWORD *)(a1 + 24),
                *(_QWORD *)(a1 + 16),
                *(_QWORD *)(a1 + 32),
                (unsigned __int64)v23.QuadPart >> 12,
                1LL,
                *(_BYTE *)(a1 + 40) & 1,
                0);
        if ( v24 == -1073741789 )
          return 3221225507LL;
        if ( v24 < 0 )
          v22 = 0;
      }
      v7 += 4096;
      --v6;
    }
    while ( v6 );
    if ( v22 == 1 )
      return 0;
    v15 = -1073741503;
  }
  if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    return 0;
  return v15;
}
