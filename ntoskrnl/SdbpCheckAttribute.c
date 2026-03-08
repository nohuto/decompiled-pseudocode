/*
 * XREFs of SdbpCheckAttribute @ 0x1407A0F7C
 * Callers:
 *     SdbpCheckAllAttributes @ 0x1407A24E8 (SdbpCheckAllAttributes.c)
 * Callees:
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage @ 0x1404117B8 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage.c)
 *     AslStringPatternMatchExW @ 0x14077790C (AslStringPatternMatchExW.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpCheckUptoVersion @ 0x140860A14 (SdbpCheckUptoVersion.c)
 *     SdbpCheckFromStringVersion @ 0x140A50788 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckFromVersion @ 0x140A508BC (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x140A50900 (SdbpCheckUptoStringVersion.c)
 *     SdbpCheckVersion @ 0x140A50A40 (SdbpCheckVersion.c)
 */

__int64 __fastcall SdbpCheckAttribute(_DWORD *a1, unsigned __int16 a2, __int16 *a3, unsigned int a4, __int64 a5)
{
  int v5; // ebx
  int v9; // eax
  __int64 result; // rax
  int v11; // r9d
  bool v12; // zf

  v5 = 0;
  *a1 = 0;
  if ( a2 <= 0x5012u )
  {
    if ( a2 != 20498 )
    {
      switch ( a2 )
      {
        case 0x401Eu:
          if ( a4 < 4 )
            goto LABEL_12;
          LOBYTE(v5) = *(_DWORD *)a3 >= *(_DWORD *)(a5 + 16);
          goto LABEL_41;
        case 0x4033u:
          if ( a4 < 4 )
            goto LABEL_12;
          LOBYTE(v5) = *(_DWORD *)a3 <= *(_DWORD *)(a5 + 16);
          goto LABEL_41;
        case 0x5002u:
        case 0x5003u:
          if ( a4 >= 8 )
          {
            v9 = SdbpCheckVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
            goto LABEL_40;
          }
LABEL_12:
          AslLogCallPrintf(1LL);
          return 0LL;
        case 0x5006u:
        case 0x500Du:
          if ( a4 >= 8 )
          {
            v9 = SdbpCheckUptoVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
LABEL_40:
            v5 = v9;
            goto LABEL_41;
          }
          goto LABEL_12;
      }
      goto LABEL_22;
    }
LABEL_38:
    if ( a4 >= 8 )
    {
      v9 = SdbpCheckFromVersion(*(_QWORD *)a3, *(_QWORD *)(a5 + 16));
      goto LABEL_40;
    }
    goto LABEL_12;
  }
  if ( a2 == 20499 )
    goto LABEL_38;
  if ( a2 == 24644 || a2 == 24645 )
  {
    if ( (unsigned int)Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage() )
    {
      if ( a4 >= 2 )
      {
        v9 = SdbpCheckUptoStringVersion(a3, *(_QWORD *)(a5 + 16));
        goto LABEL_40;
      }
      goto LABEL_12;
    }
    goto LABEL_41;
  }
  if ( (unsigned int)a2 - 24646 < 2 )
  {
    if ( (unsigned int)Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledDeviceUsage() )
    {
      if ( a4 >= 2 )
      {
        v9 = SdbpCheckFromStringVersion(a3, *(_QWORD *)(a5 + 16));
        goto LABEL_40;
      }
      goto LABEL_12;
    }
    goto LABEL_41;
  }
LABEL_22:
  v11 = a2 & 0xF000;
  switch ( v11 )
  {
    case 16384:
      if ( a4 < 4 )
        goto LABEL_12;
      v12 = *(_DWORD *)a3 == *(_DWORD *)(a5 + 16);
LABEL_31:
      LOBYTE(v5) = v12;
      break;
    case 20480:
      if ( a4 < 8 )
        goto LABEL_12;
      v12 = *(_QWORD *)a3 == *(_QWORD *)(a5 + 16);
      goto LABEL_31;
    case 24576:
      if ( a4 >= 2 )
      {
        v9 = AslStringPatternMatchExW(a3, *(_WORD **)(a5 + 16));
        goto LABEL_40;
      }
      goto LABEL_12;
  }
LABEL_41:
  result = 1LL;
  *a1 = v5;
  return result;
}
