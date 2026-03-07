char __fastcall HUBUCX_ComputeUsb20HardwareLpmParameters(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  char v5; // dl
  int v6; // eax
  int v7; // eax
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  unsigned int v10; // r10d
  int v11; // ecx
  char result; // al

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C006A1E8);
  if ( (*(_DWORD *)(a1 + 1632) & 2) != 0 )
  {
    *(_DWORD *)(a1 + 2224) = 2;
LABEL_3:
    v5 = 0;
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(a1 + 1644) & 0x20000) != 0 )
  {
    *(_DWORD *)(a1 + 2224) = 3;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x10000) != 0 )
  {
    *(_DWORD *)(a1 + 2224) = 4;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v4 + 4) & 0x8000) == 0 )
  {
    *(_DWORD *)(a1 + 2224) = 5;
    goto LABEL_3;
  }
  v6 = *(_DWORD *)(a1 + 2440);
  v5 = 1;
  if ( (v6 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 2224) = 6;
    goto LABEL_3;
  }
  if ( (v6 & 2) == 0 )
  {
    *(_DWORD *)(a1 + 2224) = 7;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 204LL) & 0x40) == 0 )
  {
    *(_DWORD *)(a1 + 2224) = 8;
    goto LABEL_3;
  }
  *(_DWORD *)(a1 + 2224) = 1;
  v7 = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(a2 + 24) |= 0x20u;
  v7 |= 1u;
  *(_DWORD *)(a2 + 60) = v7;
  v8 = v7 & 0xFFF807FF | (*(unsigned __int8 *)(v4 + 72) << 11);
  *(_DWORD *)(a2 + 60) = v8;
  if ( (*(_DWORD *)(a1 + 1644) & 0x40000) == 0 )
    v8 |= 2u;
  v9 = v8 & 0xFFFFF803 | 0x20;
  *(_DWORD *)(a2 + 60) = v9;
  v10 = *(_DWORD *)(a1 + 2440);
  if ( (v10 & 2) != 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 204LL) & 0x80u) != 0 )
  {
    if ( (v10 & 4) != 0 )
    {
      v9 ^= ((unsigned __int8)(v10 >> 1) ^ (unsigned __int8)v9) & 0x78;
      *(_DWORD *)(a2 + 60) = v9;
    }
    if ( (*(_DWORD *)(a1 + 2440) & 8) != 0 )
      *(_DWORD *)(a2 + 60) = v9 | ((*(_DWORD *)(a1 + 2440) & 0xF00 | 8u) >> 1);
  }
LABEL_24:
  v11 = *(_DWORD *)(a1 + 2224);
  if ( (*(_DWORD *)(a1 + 1456) & 0x800) != 0 )
    v11 = 9;
  result = v5;
  *(_DWORD *)(a1 + 2224) = v11;
  return result;
}
