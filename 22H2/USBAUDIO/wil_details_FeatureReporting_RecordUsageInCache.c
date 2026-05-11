/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x1C0002478
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0002748 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_RecordUsageInCache(__int64 a1, __int64 a2, int a3)
{
  int v3; // r11d
  int v6; // ecx
  unsigned int v7; // ecx
  signed __int32 v8; // eax
  unsigned int v9; // r8d
  unsigned __int32 v10; // eax
  int v11; // edx
  unsigned __int32 v12; // ett
  signed __int32 v13; // ecx
  BOOL v14; // edi
  unsigned int v15; // eax
  int v16; // edx
  int v17; // r8d
  int v18; // ebx
  unsigned __int64 v19; // r8
  signed __int32 v20; // eax
  BOOL v21; // edi
  unsigned int v22; // eax
  int v23; // r8d
  int v24; // ebx
  unsigned __int64 v25; // r8
  signed __int32 v26; // eax

  v3 = 0;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !a3 )
    goto LABEL_38;
  if ( a3 == 1 )
    goto LABEL_24;
  if ( a3 <= 1 )
    goto LABEL_17;
  if ( a3 <= 3 )
  {
LABEL_8:
    v6 = 0;
    switch ( a3 )
    {
      case 2:
        v6 = 2;
        break;
      case 3:
        v6 = 8;
        break;
      case 6:
        v6 = 4;
        break;
      case 7:
        v6 = 16;
        break;
    }
    v7 = v6 | 1;
    _m_prefetchw(&Feature_Servicing_AudioRegressionFix__private_reporting);
    v8 = _InterlockedOr(&Feature_Servicing_AudioRegressionFix__private_reporting, v7);
    *(_DWORD *)a1 = (v8 & 1) == 0;
    LOBYTE(v3) = (v8 & v7 & 0xFFFFFFFE) == (v7 & 0xFFFFFFFE);
    goto LABEL_51;
  }
  if ( a3 == 4 )
  {
LABEL_38:
    v13 = Feature_Servicing_AudioRegressionFix__private_reporting;
    v21 = a3 == 4;
    while ( 1 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      v22 = v13 | 1;
      if ( (((v13 | 1u) >> 14) & 1) != v21 )
      {
        if ( ((v22 >> 5) & 0x1FF) != 0 )
        {
          *(_DWORD *)(a1 + 4) = (v22 >> 5) & 0x1FF;
          *(_DWORD *)(a1 + 8) = a3 == 0 ? 4 : 0;
          v22 = v13 & 0xFFFFC01E | 1;
        }
        v23 = 0;
        if ( a3 == 4 )
          v23 = 0x4000;
        v22 = v22 & 0xFFFFBFFF | v23;
      }
      v24 = (v22 >> 5) & 0x1FF;
      v25 = (unsigned int)(v24 + 1);
      if ( v25 > 0x1FF || v25 < (((unsigned __int64)v22 >> 5) & 0x1FF) )
      {
        LOWORD(v25) = 1;
        *(_DWORD *)(a1 + 8) = a3;
        *(_DWORD *)(a1 + 4) = v24;
      }
      v26 = _InterlockedCompareExchange(
              &Feature_Servicing_AudioRegressionFix__private_reporting,
              v22 ^ ((unsigned __int16)v22 ^ (unsigned __int16)(32 * v25)) & 0x3FE0,
              v13);
      if ( v13 == v26 )
        break;
      v13 = v26;
    }
    goto LABEL_50;
  }
  if ( a3 == 5 )
  {
LABEL_24:
    v13 = Feature_Servicing_AudioRegressionFix__private_reporting;
    v14 = a3 == 5;
    while ( 1 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      v15 = v13 | 1;
      if ( (((v13 | 1u) >> 22) & 1) != v14 )
      {
        if ( ((v15 >> 15) & 0x7F) != 0 )
        {
          *(_DWORD *)(a1 + 4) = (v15 >> 15) & 0x7F;
          v16 = 1;
          if ( a3 == 1 )
            v16 = 5;
          v15 = v13 & 0xFFC07FFE | 1;
          *(_DWORD *)(a1 + 8) = v16;
        }
        v17 = 0;
        if ( a3 == 5 )
          v17 = 0x400000;
        v15 = v15 & 0xFFBFFFFF | v17;
      }
      v18 = (v15 >> 15) & 0x7F;
      v19 = (unsigned int)(v18 + 1);
      if ( v19 > 0x7F || v19 < ((v15 >> 15) & 0x7F) )
      {
        LODWORD(v19) = 1;
        *(_DWORD *)(a1 + 8) = a3;
        *(_DWORD *)(a1 + 4) = v18;
      }
      v20 = _InterlockedCompareExchange(
              &Feature_Servicing_AudioRegressionFix__private_reporting,
              v15 ^ (v15 ^ ((_DWORD)v19 << 15)) & 0x3F8000,
              v13);
      if ( v13 == v20 )
        break;
      v13 = v20;
    }
LABEL_50:
    *(_DWORD *)a1 = (v13 & 1) == 0;
LABEL_51:
    *(_DWORD *)(a1 + 16) = v3;
    return a1;
  }
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_8;
LABEL_17:
  v9 = a3 - 320;
  if ( v9 < 0x40 )
  {
    v10 = dword_1C001CD6C;
    do
    {
      if ( (v10 & 0x10) == 0 || (v11 = 1, ((v10 >> 5) & 0x3F) != v9) )
        v11 = 0;
      *(_DWORD *)(a1 + 16) = v11;
      v12 = v10;
      v10 = _InterlockedCompareExchange(&dword_1C001CD6C, (32 * (v9 & 0x3F)) | v10 & 0xFFFFF81F | 0x10, v10);
    }
    while ( v12 != v10 );
  }
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 4) = 1;
  *(_DWORD *)(a1 + 12) = 0;
  return a1;
}
