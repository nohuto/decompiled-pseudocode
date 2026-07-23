/*
 * XREFs of SdbpCheckAttribute @ 0x1407B23DC
 * Callers:
 *     SdbpCheckAllAttributes @ 0x1407B219C (SdbpCheckAllAttributes.c)
 * Callees:
 *     Feature_CompatBuildInVb__private_IsEnabledDeviceUsage @ 0x1403F989C (Feature_CompatBuildInVb__private_IsEnabledDeviceUsage.c)
 *     SdbpCheckFromStringVersion @ 0x1405D2014 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x1405D2140 (SdbpCheckUptoStringVersion.c)
 *     AslStringPatternMatchW @ 0x1407538DC (AslStringPatternMatchW.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbpCheckUptoVersion @ 0x1407B38F4 (SdbpCheckUptoVersion.c)
 *     SdbpCheckFromVersion @ 0x140967890 (SdbpCheckFromVersion.c)
 *     SdbpCheckVersion @ 0x1409678D4 (SdbpCheckVersion.c)
 */

__int64 __fastcall SdbpCheckAttribute(
        _DWORD *a1,
        unsigned __int16 a2,
        unsigned __int16 *a3,
        unsigned int a4,
        __int64 a5)
{
  int v5; // ebx
  unsigned int v11; // edi
  int v12; // eax
  int v13; // esi
  bool v14; // zf

  v5 = 0;
  *a1 = 0;
  v11 = 1;
  if ( a2 > 0x5006u )
  {
    if ( a2 != 20493 )
    {
      if ( a2 > 0x5011u )
      {
        if ( a2 <= 0x5013u )
        {
          if ( a4 < 8 )
            goto LABEL_7;
          v12 = SdbpCheckFromVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
          goto LABEL_38;
        }
        if ( a2 > 0x6043u && a2 <= 0x6047u && (unsigned int)Feature_CompatBuildInVb__private_IsEnabledDeviceUsage() )
        {
          if ( (unsigned __int16)(a2 - 24646) <= 1u )
          {
            if ( a4 < 2 )
              goto LABEL_7;
            v12 = SdbpCheckFromStringVersion(a3, *(unsigned __int16 **)(a5 + 16));
          }
          else
          {
            if ( a4 < 2 )
              goto LABEL_7;
            v12 = SdbpCheckUptoStringVersion(a3, *(unsigned __int16 **)(a5 + 16));
          }
          goto LABEL_38;
        }
      }
      goto LABEL_26;
    }
LABEL_36:
    if ( a4 < 8 )
      goto LABEL_7;
    v12 = SdbpCheckUptoVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
    goto LABEL_38;
  }
  switch ( a2 )
  {
    case 0x5006u:
      goto LABEL_36;
    case 0x401Eu:
      if ( a4 < 4 )
        goto LABEL_7;
      LOBYTE(v5) = *(_DWORD *)a3 >= *(_DWORD *)(a5 + 16);
      goto LABEL_39;
    case 0x4033u:
      if ( a4 < 4 )
        goto LABEL_7;
      LOBYTE(v5) = *(_DWORD *)a3 <= *(_DWORD *)(a5 + 16);
      goto LABEL_39;
  }
  if ( (unsigned int)a2 - 20482 > 1 )
  {
LABEL_26:
    v13 = a2 & 0xF000;
    switch ( v13 )
    {
      case 16384:
        if ( a4 < 4 )
          goto LABEL_7;
        v14 = *(_DWORD *)a3 == *(_DWORD *)(a5 + 16);
        break;
      case 20480:
        if ( a4 < 8 )
          goto LABEL_7;
        v14 = *(_QWORD *)a3 == *(_QWORD *)(a5 + 16);
        break;
      case 24576:
        if ( a4 < 2 )
          goto LABEL_7;
        v12 = AslStringPatternMatchW(a3, *(unsigned __int16 **)(a5 + 16));
        goto LABEL_38;
      default:
LABEL_39:
        *a1 = v5;
        return v11;
    }
    LOBYTE(v5) = v14;
    goto LABEL_39;
  }
  if ( a4 >= 8 )
  {
    v12 = SdbpCheckVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
LABEL_38:
    v5 = v12;
    goto LABEL_39;
  }
LABEL_7:
  AslLogCallPrintf(1LL);
  return 0;
}
