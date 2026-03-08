/*
 * XREFs of HalpIvtProcessDmarTable @ 0x14037BB68
 * Callers:
 *     HalpIommuIvtDiscover @ 0x140B3D380 (HalpIommuIvtDiscover.c)
 * Callees:
 *     HalpIvtProcessDrhdEntry @ 0x14037B514 (HalpIvtProcessDrhdEntry.c)
 *     DmrEnumerateSatcDevices @ 0x14037BC00 (DmrEnumerateSatcDevices.c)
 *     DmrGetNextRemappingStructure @ 0x14037BFAC (DmrGetNextRemappingStructure.c)
 */

__int64 __fastcall HalpIvtProcessDmarTable(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // r11
  __int64 v3; // rbx
  int v4; // r10d
  bool v5; // zf
  _WORD *i; // rdx
  _WORD *v7; // rax
  _WORD *v8; // rdi
  _WORD *v10; // rdx
  _WORD *NextRemappingStructure; // rax

  v2 = a2;
  v3 = a1;
  v4 = 0;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 4) < 0x40u )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v5 = (*(_BYTE *)(a1 + 37) & 4) == 0;
      qword_140C6A758 = a1;
      if ( !v5 )
      {
        v10 = 0LL;
        while ( 1 )
        {
          NextRemappingStructure = (_WORD *)DmrGetNextRemappingStructure(a1, v10);
          if ( !NextRemappingStructure )
            break;
          if ( *NextRemappingStructure == 4 )
          {
            LOBYTE(v4) = 0;
            break;
          }
          v10 = NextRemappingStructure;
          a1 = v3;
        }
      }
      *v2 = v4;
      v4 = DmrEnumerateSatcDevices(v3);
      if ( v4 >= 0 )
      {
        for ( i = 0LL; ; i = v8 )
        {
          v7 = (_WORD *)DmrGetNextRemappingStructure(v3, i);
          v8 = v7;
          if ( !v7 )
            break;
          if ( !*v7 )
          {
            v4 = HalpIvtProcessDrhdEntry(v3, (__int64)v7);
            if ( v4 < 0 )
              break;
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
