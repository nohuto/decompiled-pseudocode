/*
 * XREFs of ValidateCalibrationData @ 0x1C01CC108
 * Callers:
 *     ?ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z @ 0x1C01CAF74 (-ReadCalibrationDataImp@@YAJU_UNICODE_STRING@@0PEAKPEAPEAE@Z.c)
 *     ?ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z @ 0x1C01CB4F4 (-ReadLinearityDataImp@@YAHPEAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PEAKPEAPEAE@Z.c)
 *     _SetCalibrationData @ 0x1C01D1854 (_SetCalibrationData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateCalibrationData(unsigned int a1, __int64 a2, int a3)
{
  BOOL v5; // edx
  int v6; // r8d
  int v7; // r8d
  unsigned int v8; // ecx
  int v9; // r11d
  __int64 i; // r8
  unsigned int v11; // edx
  __int64 v12; // rdi
  unsigned __int16 v13; // r10
  int v14; // edx

  v5 = 0;
  if ( a1 >= 0x40
    && a2
    && *(_DWORD *)(a2 + 4) == 2
    && *(_DWORD *)a2 < 0xFFFFu
    && *(_DWORD *)(a2 + 16) == 0x8000
    && *(_DWORD *)(a2 + 20) == 0x8000 )
  {
    v5 = 1;
    v6 = a3 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          return v5;
        v5 = *(_DWORD *)(a2 + 28) == 131074;
        v8 = 4;
      }
      else
      {
        if ( *(_WORD *)(a2 + 28) != 4 || *(_WORD *)(a2 + 30) != 4 )
          v5 = 0;
        v8 = 16;
      }
    }
    else
    {
      v8 = *(unsigned __int16 *)(a2 + 28) * *(unsigned __int16 *)(a2 + 30);
    }
    if ( a1 == 8 * v8 + 32 )
    {
      v9 = *(unsigned __int16 *)(a2 + 34);
      for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(i + 1) )
      {
        if ( !v5 )
          break;
        v11 = (unsigned int)i % *(unsigned __int16 *)(a2 + 28);
        v12 = v11;
        if ( !v11 )
          v9 = *(unsigned __int16 *)(a2 + 8 * i + 34);
        v13 = *(_WORD *)(a2 + 8 * i + 32);
        if ( v13 <= 0x8000u
          && (v14 = *(unsigned __int16 *)(a2 + 8 * i + 34), (unsigned __int16)v14 <= 0x8000u)
          && *(_WORD *)(a2 + 8 * i + 36) <= 0x8000u
          && *(_WORD *)(a2 + 8 * i + 38) <= 0x8000u
          && v14 == v9 )
        {
          v5 = 1;
          if ( (unsigned int)i > *(unsigned __int16 *)(a2 + 28) )
            v5 = v13 == *(_WORD *)(a2 + 8 * v12 + 32);
        }
        else
        {
          v5 = 0;
        }
      }
    }
  }
  return v5;
}
