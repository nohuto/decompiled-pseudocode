/*
 * XREFs of WritePointerDeviceSettingsFull @ 0x1C0209C3C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00DD338 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C02096D8 (-SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C020987C (-SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0209A68 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
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
              dword_1C032B68C[0] = *(_DWORD *)(a2 + 4);
              glTOUCH_DRIVER_HW_STACK_LATENCY = v8;
            }
            v9 = *(_DWORD *)(a2 + 8);
            if ( v9 <= 0x3C )
            {
              dword_1C032B69C = *(_DWORD *)(a2 + 8);
              glTOUCH_DRIVER_HW_STACK_SAMPLETIME = v9;
            }
            dword_1C032B6AC = *(_DWORD *)(a2 + 12);
            gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = dword_1C032B6AC;
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
      dword_1C032B6BC = *(_DWORD *)a2;
      dword_1C032B6CC = *(_DWORD *)(a2 + 4);
      dword_1C032B6DC = *(_DWORD *)(a2 + 8);
      dword_1C032B6EC = *(_DWORD *)(a2 + 12);
      dword_1C032B6FC = *(_DWORD *)(a2 + 16);
      dword_1C032B70C = *(_DWORD *)(a2 + 20);
      dword_1C032B71C = *(_DWORD *)(a2 + 24);
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
    dword_1C032B7EC = *(_DWORD *)a2;
    dword_1C032B7FC = *(_DWORD *)(a2 + 4);
    dword_1C032B80C = *(_DWORD *)(a2 + 8);
    dword_1C032B81C = *(_DWORD *)(a2 + 12);
    dword_1C032B82C = *(_DWORD *)(a2 + 16);
    dword_1C032B83C = *(_DWORD *)(a2 + 20);
    dword_1C032B84C = *(_DWORD *)(a2 + 24);
    dword_1C032B85C = *(_DWORD *)(a2 + 28);
    result = 1LL;
    if ( !(_DWORD)a3 || (result = WriteSettingValues(4LL, &gaPenParameters, 8LL, a2), (_DWORD)result) )
    {
      if ( !gPenMonitor )
        gPenMonitor = 1;
    }
  }
  return result;
}
