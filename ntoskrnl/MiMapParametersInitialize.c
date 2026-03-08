/*
 * XREFs of MiMapParametersInitialize @ 0x1407D5090
 * Callers:
 *     MmMapViewOfSection @ 0x14069EC70 (MmMapViewOfSection.c)
 *     MmMapSecureViewOfSection @ 0x1406A0C4C (MmMapSecureViewOfSection.c)
 *     MiMapViewOfSectionExCommon @ 0x140727CDC (MiMapViewOfSectionExCommon.c)
 *     NtMapViewOfSection @ 0x1407D4B90 (NtMapViewOfSection.c)
 * Callees:
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiGetUserReservationHighestAddress @ 0x1407D51A4 (MiGetUserReservationHighestAddress.c)
 */

__int64 __fastcall MiMapParametersInitialize(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  unsigned __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  int v15; // r10d
  __int64 v16; // rax

  v11 = MiSectionControlArea(a2);
  memset(a1, 0, 0x80uLL);
  a1[12] = (__int64)KeGetCurrentThread()->ApcState.Process;
  a1[11] = a3;
  v12 = (unsigned __int16)KeNumberNodes;
  *((_BYTE *)a1 + 57) = KeGetCurrentThread()->PreviousMode;
  v13 = a6 & 0x7F;
  *((_DWORD *)a1 + 13) = v13;
  if ( v13 > v12 )
    return 3221225485LL;
  v14 = 0LL;
  *((_DWORD *)a1 + 10) = a6 & 0xFFFFFF80;
  *((_DWORD *)a1 + 11) = a7;
  if ( a4 )
    *((_DWORD *)a1 + 15) |= 1u;
  a1[3] = a5;
  if ( (*(_DWORD *)(v11 + 56) & 0x20) != 0 || (*((_DWORD *)a1 + 15) & 1) == 0 )
    v14 = a8;
  a1[1] = MiGetUserReservationHighestAddress(a3, v14);
  a1[2] = 0x10000LL;
  if ( (*(_DWORD *)(v11 + 56) & 0x420) == 0 )
  {
    if ( (v15 & 0x20000000) != 0 )
    {
      a1[2] = 0x200000LL;
    }
    else
    {
      v16 = a1[2];
      if ( (v15 & 0x40000000) != 0 )
        v16 = 4096LL;
      a1[2] = v16;
    }
  }
  return 0LL;
}
