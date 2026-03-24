/*
 * XREFs of DrvDbGetRegValueMappedProperty @ 0x1406B43BC
 * Callers:
 *     DrvDbGetDriverInfFileMappedProperty @ 0x1406B3E3C (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406B469C (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406F9718 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140735700 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x14097D6D4 (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverPackageSignerName @ 0x14097DDF8 (DrvDbGetDriverPackageSignerName.c)
 * Callees:
 *     _RegRtlQueryValue @ 0x1406BB0F8 (_RegRtlQueryValue.c)
 */

__int64 __fastcall DrvDbGetRegValueMappedProperty(
        __int64 a1,
        void *a2,
        __int64 a3,
        _DWORD *a4,
        _WORD *a5,
        unsigned int a6,
        _DWORD *a7)
{
  int v9; // eax
  int v10; // eax
  unsigned int Value; // eax
  unsigned int v12; // edx
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v16[3]; // [rsp+30h] [rbp-18h] BYREF

  v9 = *(_DWORD *)(a3 + 8);
  if ( v9 == 17 || v9 == 5 )
    v10 = 4;
  else
    v10 = a6;
  LODWORD(v16[0]) = v10;
  Value = RegRtlQueryValue(a2, (__int64)v16);
  v12 = Value;
  if ( Value == -1073741772 )
    return (unsigned int)-1073741275;
  if ( !Value || Value == -1073741789 )
  {
    if ( !*(_DWORD *)(a3 + 24) )
    {
      *a4 = *(_DWORD *)(a3 + 8);
      v13 = *(_DWORD *)(a3 + 8);
      if ( v13 == 5 )
      {
        *a7 = 2;
        if ( !a5 || a6 < 2 )
          return (unsigned int)-1073741789;
        if ( v12 != -1073741789 )
        {
          *a5 = 0;
          return v12;
        }
      }
      else
      {
        if ( v13 != 17 )
        {
          v14 = v16[0];
          *a7 = v16[0];
          if ( a5 && a6 >= v14 )
            return v12;
          return (unsigned int)-1073741789;
        }
        *a7 = 1;
        if ( !a5 || !a6 )
          return (unsigned int)-1073741789;
        if ( v12 != -1073741789 )
        {
          *(_BYTE *)a5 = 0;
          return v12;
        }
      }
    }
    return (unsigned int)-1073741595;
  }
  return v12;
}
