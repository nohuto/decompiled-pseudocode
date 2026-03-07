__int64 __fastcall VfPendingShouldForce(
        __int16 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v6; // ebx
  int v9; // eax
  unsigned __int64 v10; // rcx
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  bool v17; // zf

  v6 = 0;
  if ( (a1 & 0x200) != 0 && a2 < 2u && !*(_QWORD *)(a5 + 216) )
  {
    LOBYTE(v9) = VfDriverIsKernelImageAddress(a6);
    if ( !v9
      && (unsigned int)VfTargetDriversIsEnabled(v10)
      && (*(_DWORD *)(a3 + 16) & 0xC0) == 0
      && !*(_BYTE *)(a3 + 65)
      && VfRandomGetNumber(0, 0x64u) < ViPendingProbability )
    {
      v11 = *a4;
      if ( v11 == 13 )
      {
        v12 = *((_DWORD *)a4 + 6);
      }
      else
      {
        v12 = a4[1];
        v14 = v11 - 12;
        if ( !v14 )
          return v12 != 2;
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 4;
          if ( v16 )
          {
            if ( v16 != 10 )
              return 1;
            v17 = v12 == 2;
          }
          else
          {
            v17 = v12 == 1;
          }
          LOBYTE(v6) = !v17;
          return v6;
        }
      }
      if ( v12 != 589916 && v12 != 589904 )
      {
        if ( (unsigned int)(v12 - 589824) > 0x14 || (v13 = 1118481, !_bittest(&v13, v12 - 589824)) )
        {
          if ( v12 != 590400 )
            return 1;
        }
      }
    }
  }
  return v6;
}
