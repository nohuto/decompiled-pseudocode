/*
 * XREFs of WritePointerDeviceSettingsFull @ 0x1C021122C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C0210CC4 (-SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C0210E68 (-SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0211054 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 */

__int64 __fastcall WritePointerDeviceSettingsFull(int a1, __int64 a2, const unsigned __int16 *a3)
{
  __int64 result; // rax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  struct tagDEVICECONFIG_SETTING *v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // eax

  result = 0LL;
  v4 = a1 - 149;
  if ( v4 )
  {
    v5 = v4 - 2;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( v6 )
      {
        v7 = (struct tagDEVICECONFIG_SETTING *)(unsigned int)(v6 - 2);
        if ( (_DWORD)v7 )
        {
          if ( (_DWORD)v7 == 2 )
          {
            v8 = *(_DWORD *)(a2 + 4);
            if ( v8 <= 0x3C )
            {
              dword_1C03266BC[0] = *(_DWORD *)(a2 + 4);
              HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = v8;
            }
            v9 = *(_DWORD *)(a2 + 8);
            if ( v9 <= 0x3C )
            {
              dword_1C03266CC = *(_DWORD *)(a2 + 8);
              LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = v9;
            }
            dword_1C03266DC = *(_DWORD *)(a2 + 12);
            LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = dword_1C03266DC;
            result = 1LL;
            if ( (_DWORD)a3 )
              return WritePredictionSettings(v7, (const unsigned __int16 *)a2, a3);
          }
        }
        else
        {
          return SetCustomFlick((struct tagCUSTOM_FLICK *)a2);
        }
      }
      else
      {
        return SetFlickMap((struct tagFLICK_MAP *)a2, (int)a3);
      }
    }
    else
    {
      dword_1C03267AC = *(_DWORD *)a2;
      dword_1C03267BC = *(_DWORD *)(a2 + 4);
      dword_1C03267CC = *(_DWORD *)(a2 + 8);
      dword_1C03267DC = *(_DWORD *)(a2 + 12);
      dword_1C03267EC = *(_DWORD *)(a2 + 16);
      dword_1C03267FC = *(_DWORD *)(a2 + 20);
      dword_1C032680C = *(_DWORD *)(a2 + 24);
      result = 1LL;
      if ( !(_DWORD)a3 || (result = WriteSettingValues(7LL, &gaModeSettings, 7LL, a2), (_DWORD)result) )
      {
        if ( !gModeMonitor )
          gModeMonitor = 1;
      }
    }
  }
  else
  {
    dword_1C032681C = *(_DWORD *)a2;
    dword_1C032682C = *(_DWORD *)(a2 + 4);
    dword_1C032683C = *(_DWORD *)(a2 + 8);
    dword_1C032684C = *(_DWORD *)(a2 + 12);
    dword_1C032685C = *(_DWORD *)(a2 + 16);
    dword_1C032686C = *(_DWORD *)(a2 + 20);
    dword_1C032687C = *(_DWORD *)(a2 + 24);
    dword_1C032688C = *(_DWORD *)(a2 + 28);
    result = 1LL;
    if ( !(_DWORD)a3 || (result = WriteSettingValues(4LL, &gaPenParameters, 8LL, a2), (_DWORD)result) )
    {
      if ( !gPenMonitor )
        gPenMonitor = 1;
    }
  }
  return result;
}
