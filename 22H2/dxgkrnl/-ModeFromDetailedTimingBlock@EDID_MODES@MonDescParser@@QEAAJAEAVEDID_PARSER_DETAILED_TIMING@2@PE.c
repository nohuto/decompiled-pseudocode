/*
 * XREFs of ?ModeFromDetailedTimingBlock@EDID_MODES@MonDescParser@@QEAAJAEAVEDID_PARSER_DETAILED_TIMING@2@PEAU_VideoModeDescriptor@@@Z @ 0x1C001E8D4
 * Callers:
 *     ?ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z @ 0x1C001ECC8 (-ObtainSupportedModes@EDID_MODES@MonDescParser@@QEAAJPEAG0PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonDescParser::EDID_MODES::ModeFromDetailedTimingBlock(
        MonDescParser::EDID_MODES *this,
        struct MonDescParser::EDID_PARSER_DETAILED_TIMING *a2,
        struct _VideoModeDescriptor *a3)
{
  signed int v4; // edi
  USHORT v5; // bx
  USHORT v6; // r11
  USHORT v7; // si
  USHORT v8; // bp
  unsigned __int8 v9; // al
  UCHAR v10; // al
  unsigned __int16 v11; // bx
  unsigned __int16 v12; // r11
  signed int v13; // esi
  signed int v14; // r8d
  int v15; // r11d
  int v16; // ecx
  unsigned int v17; // ebx
  int v18; // eax
  signed int v19; // r11d
  ULONG v20; // eax
  unsigned int v21; // r8d
  signed int v22; // ecx
  UCHAR SyncSignalType; // al

  a3->VideoStandardType = 0;
  a3->Origin = *((_BYTE *)this + 8);
  a3->TimingType = 4;
  v4 = 10000 * (**(unsigned __int8 **)a2 + (*(unsigned __int8 *)(*(_QWORD *)a2 + 1LL) << 8));
  a3->PixelClockRate = v4;
  v5 = *(unsigned __int8 *)(*(_QWORD *)a2 + 2LL) + (*(_BYTE *)(*(_QWORD *)a2 + 4LL) >> 4 << 8);
  a3->HorizontalActivePixels = v5;
  v6 = *(unsigned __int8 *)(*(_QWORD *)a2 + 5LL) + (*(_BYTE *)(*(_QWORD *)a2 + 7LL) >> 4 << 8);
  a3->VerticalActivePixels = v6;
  if ( v4 && v5 >= 0x64u && v6 >= 0x64u )
  {
    v7 = *(unsigned __int8 *)(*(_QWORD *)a2 + 3LL) + ((*(_BYTE *)(*(_QWORD *)a2 + 4LL) & 0xF) << 8);
    a3->HorizontalBlankingPixels = v7;
    v8 = *(unsigned __int8 *)(*(_QWORD *)a2 + 6LL) + ((*(_BYTE *)(*(_QWORD *)a2 + 7LL) & 0xF) << 8);
    a3->VerticalBlankingPixels = v8;
    a3->HorizontalSyncOffset = *(unsigned __int8 *)(*(_QWORD *)a2 + 8LL) + (*(_BYTE *)(*(_QWORD *)a2 + 11LL) >> 6 << 8);
    a3->VerticalSyncOffset = (*(_BYTE *)(*(_QWORD *)a2 + 10LL) >> 4)
                           + 16 * ((*(_BYTE *)(*(_QWORD *)a2 + 11LL) >> 2) & 3);
    a3->HorizontalSyncPulseWidth = *(unsigned __int8 *)(*(_QWORD *)a2 + 9LL)
                                 + (((*(_BYTE *)(*(_QWORD *)a2 + 11LL) >> 4) & 3) << 8);
    a3->VerticalSyncPulseWidth = (*(_BYTE *)(*(_QWORD *)a2 + 10LL) & 0xF) + 16 * (*(_BYTE *)(*(_QWORD *)a2 + 11LL) & 3);
    a3->HorizontalImageSize = *(unsigned __int8 *)(*(_QWORD *)a2 + 12LL) + (*(_BYTE *)(*(_QWORD *)a2 + 14LL) >> 4 << 8);
    a3->VerticalImageSize = *(unsigned __int8 *)(*(_QWORD *)a2 + 13LL) + ((*(_BYTE *)(*(_QWORD *)a2 + 14LL) & 0xF) << 8);
    a3->HorizontalBorder = *(unsigned __int8 *)(*(_QWORD *)a2 + 15LL);
    a3->VerticalBorder = *(unsigned __int8 *)(*(_QWORD *)a2 + 16LL);
    a3->IsInterlaced = *(_BYTE *)(*(_QWORD *)a2 + 17LL) >> 7;
    v9 = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 1) + 2 * ((*(_BYTE *)(*(_QWORD *)a2 + 17LL) >> 5) & 3);
    v10 = v9 >= 2u ? v9 - 1 : 0;
    a3->StereoModeType = v10;
    v11 = v7 + v5;
    v12 = v8 + v6;
    a3->SyncSignalType = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) >> 3) & 3;
    if ( v11 )
    {
      if ( v12 )
      {
        v13 = v11;
        v14 = v4;
        v15 = v11 * v12;
        if ( v15 )
        {
          v16 = v15;
          while ( 1 )
          {
            v14 %= v16;
            if ( !v14 )
              break;
            v16 %= v14;
            if ( !v16 )
              goto LABEL_21;
          }
        }
        else
        {
LABEL_21:
          v16 = v14;
        }
        v17 = v4 / v16;
        a3->VerticalRefreshRateNumerator = v4 / v16;
        v18 = v15;
        v19 = v4;
        v20 = v18 / v16;
        a3->VerticalRefreshRateDenominator = v20;
        v21 = v20;
        v22 = v13;
        while ( 1 )
        {
          v19 %= v22;
          if ( !v19 )
            break;
          v22 %= v19;
          if ( !v22 )
          {
            v22 = v19;
            break;
          }
        }
        *(_DWORD *)&a3->IsSerrationRequired = 33686018;
        a3->HorizontalPolarityType = 2;
        a3->HorizontalRefreshRateNumerator = v4 / v22;
        a3->HorizontalRefreshRateDenominator = v13 / v22;
        SyncSignalType = a3->SyncSignalType;
        if ( SyncSignalType <= 1u )
        {
          a3->IsSyncOnRGB = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 2) == 0;
          a3->IsSerrationRequired = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 4) == 0;
        }
        else if ( SyncSignalType == 2 )
        {
          a3->IsSyncOnRGB = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 2) == 0;
          a3->CompositePolarityType = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 4) == 0;
        }
        else if ( SyncSignalType == 3 )
        {
          a3->HorizontalPolarityType = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 2) == 0;
          a3->VerticalPolarityType = (*(_BYTE *)(*(_QWORD *)a2 + 17LL) & 4) == 0;
        }
        if ( a3->HorizontalActivePixels != 1920 )
          return 0LL;
        if ( a3->VerticalActivePixels != 540 )
          return 0LL;
        if ( !a3->IsInterlaced )
          return 0LL;
        a3->VerticalActivePixels = 1080;
        if ( v17 / v21 != 30 )
          return 0LL;
        if ( v17 <= 0x7FFFFFFF )
        {
          a3->VerticalRefreshRateNumerator = 2 * v17;
          return 0LL;
        }
        if ( v21 >= 2 )
        {
          a3->VerticalRefreshRateDenominator = v21 >> 1;
          return 0LL;
        }
      }
    }
  }
  return 3223126025LL;
}
