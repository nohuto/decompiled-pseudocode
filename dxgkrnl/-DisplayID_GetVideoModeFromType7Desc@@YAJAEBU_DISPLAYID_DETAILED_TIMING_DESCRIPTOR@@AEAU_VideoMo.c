/*
 * XREFs of ?DisplayID_GetVideoModeFromType7Desc@@YAJAEBU_DISPLAYID_DETAILED_TIMING_DESCRIPTOR@@AEAU_VideoModeDescriptor@@@Z @ 0x1C00733DC
 * Callers:
 *     ?DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z @ 0x1C0072FCC (-DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayID_GetVideoModeFromType7Desc(
        const struct _DISPLAYID_DETAILED_TIMING_DESCRIPTOR *a1,
        struct _VideoModeDescriptor *a2)
{
  signed int v3; // r10d
  USHORT v4; // di
  USHORT v5; // bx
  USHORT v6; // si
  unsigned __int16 v7; // si
  USHORT v8; // r8
  unsigned __int16 v9; // r8
  __int16 v10; // ax
  __int16 v11; // dx
  int v12; // r11d
  int v13; // r8d
  int v14; // ebp
  int v15; // r11d
  int v16; // ecx
  int v17; // r8d
  unsigned int v18; // esi
  ULONG v19; // eax
  int v20; // ecx

  a2->TimingType = 4;
  a2->VideoStandardType = 0;
  v3 = 1000 * (*(unsigned __int8 *)a1 + 1 + ((*((unsigned __int8 *)a1 + 1) + (*((unsigned __int8 *)a1 + 2) << 8)) << 8));
  a2->PixelClockRate = v3;
  v4 = *((unsigned __int8 *)a1 + 4) + (*((unsigned __int8 *)a1 + 5) << 8) + 1;
  a2->HorizontalActivePixels = v4;
  v5 = *((unsigned __int8 *)a1 + 12) + (*((unsigned __int8 *)a1 + 13) << 8) + 1;
  a2->VerticalActivePixels = v5;
  if ( v3 )
  {
    if ( v4 )
    {
      if ( v5 )
      {
        v6 = *((unsigned __int8 *)a1 + 6) + (*((unsigned __int8 *)a1 + 7) << 8) + 1;
        a2->HorizontalBlankingPixels = v6;
        v7 = v4 + v6;
        v8 = *((unsigned __int8 *)a1 + 14) + (*((unsigned __int8 *)a1 + 15) << 8) + 1;
        a2->VerticalBlankingPixels = v8;
        v9 = v5 + v8;
        a2->HorizontalSyncOffset = *((unsigned __int8 *)a1 + 8) + ((*((_BYTE *)a1 + 9) & 0x7F) << 8) + 1;
        a2->VerticalSyncOffset = *((unsigned __int8 *)a1 + 16) + ((*((_BYTE *)a1 + 17) & 0x7F) << 8) + 1;
        a2->HorizontalSyncPulseWidth = *((unsigned __int8 *)a1 + 10) + (*((unsigned __int8 *)a1 + 11) << 8) + 1;
        v10 = *((unsigned __int8 *)a1 + 18);
        v11 = *((unsigned __int8 *)a1 + 19);
        *(_DWORD *)&a2->HorizontalBorder = 0;
        a2->VerticalSyncPulseWidth = v10 + (v11 << 8) + 1;
        a2->IsInterlaced = (*((_BYTE *)a1 + 3) & 0x10) != 0;
        LOBYTE(v10) = (*((_BYTE *)a1 + 3) >> 5) & 3;
        a2->SyncSignalType = 3;
        a2->StereoModeType = v10;
        a2->HorizontalPolarityType = (unsigned __int8)~*((_BYTE *)a1 + 9) >> 7;
        LOBYTE(v10) = ~*((_BYTE *)a1 + 17);
        *(_WORD *)&a2->IsSerrationRequired = 514;
        a2->VerticalPolarityType = (unsigned __int8)v10 >> 7;
        a2->CompositePolarityType = 2;
        a2->HorizontalImageSize = *((_BYTE *)a1 + 3) >> 7;
        if ( v7 )
        {
          if ( v9 )
          {
            v12 = v9;
            v13 = v3;
            v14 = v7;
            v15 = v7 * v12;
            if ( v3 < 0 )
              v13 = -v3;
            v16 = -v15;
            if ( v15 >= 0 )
              v16 = v15;
            if ( v16 )
            {
              while ( 1 )
              {
                v13 %= v16;
                if ( !v13 )
                  break;
                v16 %= v13;
                if ( !v16 )
                  goto LABEL_13;
              }
            }
            else
            {
LABEL_13:
              v16 = v13;
            }
            v17 = v7;
            v18 = v3 / v16;
            a2->VerticalRefreshRateNumerator = v3 / v16;
            v19 = v15 / v16;
            v20 = v3;
            a2->VerticalRefreshRateDenominator = v19;
            if ( v3 < 0 )
              v20 = -v3;
            while ( 1 )
            {
              v20 %= v17;
              if ( !v20 )
                break;
              v17 %= v20;
              if ( !v17 )
              {
                v17 = v20;
                break;
              }
            }
            a2->HorizontalRefreshRateNumerator = v3 / v17;
            a2->HorizontalRefreshRateDenominator = v14 / v17;
            if ( v4 != 1920 )
              return 0LL;
            if ( v5 != 540 )
              return 0LL;
            if ( !a2->IsInterlaced )
              return 0LL;
            a2->VerticalActivePixels = 1080;
            if ( v18 / v19 != 30 )
              return 0LL;
            if ( v18 <= 0x7FFFFFFF )
            {
              a2->VerticalRefreshRateNumerator = 2 * v18;
              return 0LL;
            }
            if ( v19 >= 2 )
            {
              a2->VerticalRefreshRateDenominator = v19 >> 1;
              return 0LL;
            }
          }
        }
      }
    }
  }
  return 3223126025LL;
}
