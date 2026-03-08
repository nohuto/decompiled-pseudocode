/*
 * XREFs of DpQueryFeatureSupport @ 0x1C021A040
 * Callers:
 *     DpIsFeatureEnabled @ 0x1C0394650 (DpIsFeatureEnabled.c)
 * Callees:
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0024530 (Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall DpQueryFeatureSupport(__int64 *a1)
{
  __int64 v1; // r10
  _DWORD *v3; // r8
  int v4; // edx
  int v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // zf
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // r9d
  unsigned int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // edx
  bool v16; // zf
  int v17; // edx
  unsigned int v18; // ecx
  int v19; // edx
  bool v20; // zf
  unsigned int v21; // r9d
  int v22; // edx

  v1 = *a1;
  v3 = *(_DWORD **)(*a1 + 64);
  *((_BYTE *)a1 + 16) = 0;
  if ( !v3 || v3[4] != 1953656900 || v3[5] != 2 || (v4 = *((_DWORD *)a1 + 3)) == 0 )
  {
    v6 = -1073741811LL;
    v7 = 2LL;
    goto LABEL_49;
  }
  v5 = *((_DWORD *)a1 + 2);
  switch ( v5 )
  {
    case 0:
      v22 = v3[1426] ^ (v3[1426] ^ (v4 << 15)) & 0x18000;
      v3[1426] = v22;
      v10 = v22;
      if ( byte_1C013B4BD && (v22 & 0x18000) == 0x8000 )
      {
        v10 = v22 & 0xFFFE7FFF | 0x10000;
        v3[1426] = v10;
      }
      v11 = 0x20000;
      v12 = v10 >> 15;
LABEL_18:
      v13 = v10;
      v14 = (v12 & 3) - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 == 1;
        }
        else
        {
          if ( dword_1C013B4B8 == 2 )
          {
LABEL_43:
            v13 = v11 | v10;
            v3[1426] = v11 | v10;
            goto LABEL_44;
          }
          v16 = dword_1C013B4B8 == 0;
        }
        if ( v16 )
          goto LABEL_43;
      }
LABEL_44:
      v8 = (v13 & v11) == 0;
      goto LABEL_45;
    case 1:
      v17 = v3[1426] ^ (v3[1426] ^ (v4 << 18)) & 0xC0000;
      v3[1426] = v17;
      v18 = v17;
      if ( byte_1C013B4BD && (v17 & 0xC0000) == 0x40000 )
      {
        v18 = v17 & 0xFFF3FFFF | 0x80000;
        v3[1426] = v18;
      }
      v19 = v18;
      if ( ((v18 >> 18) & 3) == 1 )
        goto LABEL_32;
      if ( ((v18 >> 18) & 3) == 2 )
      {
        if ( dword_1C013B4B8 == 2 )
        {
LABEL_31:
          v19 = v18 | 0x100000;
          v3[1426] = v18 | 0x100000;
LABEL_32:
          v21 = v19;
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 64) + 40LL) + 28LL) < 0x10000u && *((_DWORD *)a1 + 3) != 1 )
          {
            v21 = v19 & 0xFFEFFFFF;
            v3[1426] = v19 & 0xFFEFFFFF;
          }
          v8 = (v21 & 0x100000) == 0;
LABEL_45:
          if ( !v8 )
            goto LABEL_46;
          return 0LL;
        }
        v20 = dword_1C013B4B8 == 0;
      }
      else
      {
        v20 = ((v18 >> 18) & 3) == 3;
      }
      if ( !v20 )
        goto LABEL_32;
      goto LABEL_31;
    case 2:
      *((_BYTE *)a1 + 16) = 1;
      v3[1426] |= 0x1000000u;
      return 0LL;
    case 3:
LABEL_46:
      *((_BYTE *)a1 + 16) = 1;
      return 0LL;
    case 4:
      v9 = v3[1426] ^ (v3[1426] ^ (v4 << 25)) & 0x6000000;
      v3[1426] = v9;
      v10 = v9;
      if ( byte_1C013B4BD )
      {
        if ( (v9 & 0x6000000) == 0x2000000 )
        {
          v10 = v9 & 0xF9FFFFFF | 0x4000000;
          v3[1426] = v10;
        }
      }
      v11 = 0x8000000;
      v12 = v10 >> 25;
      goto LABEL_18;
    case 5:
      goto LABEL_46;
    case 36:
      v8 = (unsigned int)Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage() == 0;
      goto LABEL_45;
  }
  v6 = *((int *)a1 + 2);
  v7 = 3LL;
LABEL_49:
  WdLogSingleEntry1(v7, v6);
  return 3221225485LL;
}
