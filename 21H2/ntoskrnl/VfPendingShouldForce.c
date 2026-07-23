/*
 * XREFs of VfPendingShouldForce @ 0x1409D69BC
 * Callers:
 *     IovpCallDriver1 @ 0x1409D0C4C (IovpCallDriver1.c)
 * Callees:
 *     VfRandomGetNumber @ 0x1409C7290 (VfRandomGetNumber.c)
 *     VfDriverIsKernelImageAddress @ 0x1409C98C0 (VfDriverIsKernelImageAddress.c)
 *     VfTargetDriversIsEnabled @ 0x1409D7F30 (VfTargetDriversIsEnabled.c)
 */

__int64 __fastcall VfPendingShouldForce(
        __int16 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  bool v15; // zf
  int v16; // edx

  v6 = 0;
  if ( (a1 & 0x200) != 0
    && a2 < 2u
    && !*(_QWORD *)(a5 + 216)
    && !VfDriverIsKernelImageAddress(a6)
    && (unsigned int)VfTargetDriversIsEnabled(v9)
    && (*(_DWORD *)(a3 + 16) & 0xC0) == 0
    && !*(_BYTE *)(a3 + 65)
    && VfRandomGetNumber(0, 0x64u) < ViPendingProbability )
  {
    v10 = *a4;
    if ( v10 == 13 )
      v11 = *((_DWORD *)a4 + 6);
    else
      v11 = a4[1];
    v12 = v10 - 12;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 4;
        if ( !v14 )
        {
          v15 = v11 == 1;
          goto LABEL_17;
        }
        if ( v14 == 10 )
        {
          v15 = v11 == 2;
LABEL_17:
          LOBYTE(v6) = !v15;
          return v6;
        }
        return 1;
      }
      if ( v11 != 589916 && v11 != 589904 )
      {
        if ( (unsigned int)(v11 - 589824) > 0x14 || (v16 = 1118481, !_bittest(&v16, v11 - 589824)) )
        {
          if ( v11 != 590400 )
            return 1;
        }
      }
    }
    else if ( v11 != 2 )
    {
      return 1;
    }
  }
  return v6;
}
