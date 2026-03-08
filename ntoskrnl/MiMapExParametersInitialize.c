/*
 * XREFs of MiMapExParametersInitialize @ 0x140727F8C
 * Callers:
 *     MiMapViewOfSectionExCommon @ 0x140727CDC (MiMapViewOfSectionExCommon.c)
 * Callees:
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     MiGetUserReservationHighestAddress @ 0x1407D51A4 (MiGetUserReservationHighestAddress.c)
 */

__int64 __fastcall MiMapExParametersInitialize(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  unsigned __int64 *v6; // r8
  __int64 v7; // r11
  unsigned int v8; // r10d
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 UserReservationHighestAddress; // rcx
  unsigned __int64 v12; // rax
  int v13; // edx

  v5 = MiSectionControlArea(a2[4]);
  v8 = 0;
  v9 = v5;
  if ( v6[2] )
    return (unsigned int)-1073741811;
  if ( (*(_DWORD *)(v7 + 40) & 0x4000) != 0 )
  {
    if ( *v6 || v6[1] )
      return (unsigned int)-1073741811;
    *(_DWORD *)(v7 + 64) |= 0x4000000u;
    *(_DWORD *)(v7 + 60) |= 2u;
    *(_QWORD *)(v7 + 16) = 4096LL;
  }
  v10 = *v6;
  if ( ((*(_QWORD *)(v7 + 16) - 1LL) & *v6) != 0 || *a2 && (v10 || v6[1] || v6[2]) )
    return (unsigned int)-1073741811;
  UserReservationHighestAddress = v6[1];
  if ( UserReservationHighestAddress )
  {
    if ( UserReservationHighestAddress > 0x7FFFFFFEFFFFLL || (((_WORD)UserReservationHighestAddress + 1) & 0xFFF) != 0 )
      return (unsigned int)-1073741811;
  }
  else
  {
    UserReservationHighestAddress = MiGetUserReservationHighestAddress(a2[5], 0LL);
    *(_QWORD *)(a3 + 8) = UserReservationHighestAddress;
  }
  if ( v10 >= UserReservationHighestAddress )
    return (unsigned int)-1073741811;
  v12 = a2[1];
  if ( v12 )
  {
    if ( UserReservationHighestAddress - v10 + 1 < v12 )
      return (unsigned int)-1073741811;
  }
  v13 = *(_DWORD *)(v7 + 40);
  if ( (v13 & 0x7F) != 0
    || *(_DWORD *)(v7 + 52) != v8
    || *(_DWORD *)(a3 + 32) > (unsigned int)(unsigned __int16)KeNumberNodes
    || (v13 & 0x40000000) != 0 && (*(_DWORD *)(v9 + 56) & 0x420) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (v13 & 0x20000000) != 0 && (*(_DWORD *)(v9 + 56) & 0x20) != 0 && (*(_DWORD *)(v7 + 60) & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( (*(_BYTE *)(a3 + 56) & 0x20) != 0 )
    *(_DWORD *)(v7 + 64) |= 2u;
  if ( (*(_BYTE *)(a3 + 56) & 0x40) != 0 )
    *(_DWORD *)(v7 + 120) |= 8u;
  if ( *(char *)(a3 + 56) >= 0 )
    goto LABEL_19;
  if ( (*(_DWORD *)(v9 + 56) & 0x20) == 0 )
    return (unsigned int)-1073741811;
  *(_DWORD *)(v7 + 64) |= 4u;
LABEL_19:
  *(_DWORD *)(v7 + 52) = *(_DWORD *)(a3 + 32);
  *(_QWORD *)v7 = *(_QWORD *)a3;
  *(_QWORD *)(v7 + 8) = *(_QWORD *)(a3 + 8);
  *(_WORD *)(v7 + 58) = *(_WORD *)(a3 + 50);
  *(_DWORD *)(v7 + 40) = v13 & 0xFFFFBFFF;
  return v8;
}
