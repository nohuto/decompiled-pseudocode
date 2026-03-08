/*
 * XREFs of HalpIommuDetermineReservedPciRid @ 0x14039A1AC
 * Callers:
 *     HalpIommuProcessReservationsInternal @ 0x14039A0E8 (HalpIommuProcessReservationsInternal.c)
 * Callees:
 *     HalpPciConvertDevicePathToRid @ 0x14039A210 (HalpPciConvertDevicePathToRid.c)
 */

__int64 __fastcall HalpIommuDetermineReservedPciRid(unsigned int *a1)
{
  __int64 v2; // r8
  unsigned int i; // ebx
  _QWORD *v4; // rdx
  _DWORD *v5; // rcx
  int v6; // eax

  v2 = 0LL;
  for ( i = 0; i < *a1; ++i )
  {
    v4 = *(_QWORD **)&a1[2 * i + 2];
    v5 = (_DWORD *)*v4;
    if ( *(_DWORD *)*v4 == 1 )
    {
      if ( *((_WORD *)v5 + 7) )
      {
        v6 = HalpPciConvertDevicePathToRid(v5 + 2, v4, v2);
        v2 = (unsigned int)v6;
        if ( v6 < 0 )
          break;
      }
    }
  }
  return (unsigned int)v2;
}
