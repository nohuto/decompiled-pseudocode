__int64 __fastcall wil_details_FeatureReporting_RecordUsageInCache(__int64 a1, volatile signed __int32 *a2, __int64 a3)
{
  int v5; // edi
  unsigned __int32 v6; // eax
  BOOL v7; // ecx
  unsigned __int32 v8; // ett
  int v9; // edx
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  signed __int32 v13; // eax
  int v14; // r9d
  char v15; // r11
  signed __int32 v16; // r8d
  signed __int32 v17; // ett

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  switch ( (_DWORD)a3 )
  {
    case 0:
      goto LABEL_33;
    case 1:
LABEL_32:
      wil_details_FeatureReporting_IncrementOpportunityInCache(a2, a3, a3, (_DWORD *)a1);
      return a1;
    case 2:
    case 3:
      goto LABEL_16;
    case 4:
LABEL_33:
      wil_details_FeatureReporting_IncrementUsageInCache(a2, a3, a3, (_DWORD *)a1);
      return a1;
    case 5:
      goto LABEL_32;
  }
  if ( (unsigned int)(a3 - 6) >= 2 )
  {
    v5 = a3 - 320;
    if ( (unsigned int)(a3 - 320) < 0x40 )
    {
      v6 = *((_DWORD *)a2 + 1);
      do
      {
        v7 = (v6 & 0x10) != 0 && ((v6 >> 5) & 0x3F) == v5;
        *(_DWORD *)(a1 + 16) = v7;
        v8 = v6;
        v6 = _InterlockedCompareExchange(a2 + 1, (32 * (v5 & 0x3F)) | v6 & 0xFFFFF81F | 0x10, v6);
      }
      while ( v8 != v6 );
    }
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 8) = a3;
    *(_DWORD *)(a1 + 4) = 1;
    return a1;
  }
LABEL_16:
  v9 = 0;
  v10 = a3 - 2;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 3;
      if ( v12 )
      {
        if ( v12 == 1 )
          v9 = 16;
      }
      else
      {
        v9 = 4;
      }
    }
    else
    {
      v9 = 8;
    }
  }
  else
  {
    v9 = 2;
  }
  v13 = *a2;
  v14 = 1;
  do
  {
    v15 = v13;
    *(_DWORD *)(a1 + 16) = (v13 | v9) == v13;
    v16 = v13 | v9 | 1;
    if ( (v13 | v9) == v13 )
      v16 = v13 | v9;
    v17 = v13;
    v13 = _InterlockedCompareExchange(a2, v16, v13);
  }
  while ( v17 != v13 );
  if ( (v16 & 1) == 0 || (v15 & 1) != 0 )
    v14 = 0;
  *(_DWORD *)a1 = v14;
  return a1;
}
