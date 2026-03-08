/*
 * XREFs of ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C0107898
 * Callers:
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C00F2284 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00F2C34 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C01026A0 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C0102D80 (GetLocalMachineRegistryDWORDValues.c)
 *     ReadTiltCalibrationData @ 0x1C01A678C (ReadTiltCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x1C01A6CF4 (WriteTiltCalibrationData.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01F4AA0 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1C0107828 (RtlUnicodeStringValidateDestWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCatString(struct _UNICODE_STRING *a1, wchar_t *a2)
{
  NTSTATUS v4; // r8d
  __int16 v5; // r9
  __int64 v6; // rdx
  wchar_t *v7; // r10
  __int16 v8; // ax
  size_t v9; // rcx
  size_t v11; // [rsp+20h] [rbp-28h]
  ULONG v12; // [rsp+28h] [rbp-20h]
  wchar_t *v13; // [rsp+30h] [rbp-18h] BYREF
  size_t v14; // [rsp+60h] [rbp+18h] BYREF
  size_t v15; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v4 = RtlUnicodeStringValidateDestWorker(a1, &v13, &v14, &v15, v11, v12);
  if ( v4 >= 0 )
  {
    v5 = v15;
    v6 = 0x7FFFLL;
    v4 = 0;
    v7 = &v13[v15];
    v8 = 0;
    v9 = v14 - v15;
    if ( v14 == v15 )
    {
LABEL_10:
      if ( *a2 )
        v4 = -2147483643;
    }
    else
    {
      while ( v6 )
      {
        if ( *a2 )
        {
          *v7++ = *a2++;
          --v6;
          ++v8;
          if ( --v9 )
            continue;
        }
        if ( v9 || !v6 )
          break;
        goto LABEL_10;
      }
    }
    a1->Length = 2 * (v5 + v8);
  }
  return (unsigned int)v4;
}
