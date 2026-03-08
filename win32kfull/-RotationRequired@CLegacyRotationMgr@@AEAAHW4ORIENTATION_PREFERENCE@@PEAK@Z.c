/*
 * XREFs of ?RotationRequired@CLegacyRotationMgr@@AEAAHW4ORIENTATION_PREFERENCE@@PEAK@Z @ 0x1C01A8478
 * Callers:
 *     ?xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ @ 0x1C0102BF4 (-xxxApplyOrientationPreference@CLegacyRotationMgr@@AEAAXXZ.c)
 * Callees:
 *     ?GetCurrentOrientation@@YAJPEAK@Z @ 0x1C00F8684 (-GetCurrentOrientation@@YAJPEAK@Z.c)
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UEAA?AW4tagAR_STATE@@XZ @ 0x1C0102C30 (-QueryAutoRotationState@CLegacyRotationMgr@@UEAA-AW4tagAR_STATE@@XZ.c)
 */

_BOOL8 __fastcall CLegacyRotationMgr::RotationRequired(CLegacyRotationMgr *a1, int a2, unsigned int *a3)
{
  unsigned int AutoRotationState; // edi
  unsigned int v6; // r8d
  int v7; // eax
  unsigned int v8; // edx
  _BOOL8 result; // rax
  unsigned int v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0;
  AutoRotationState = CLegacyRotationMgr::QueryAutoRotationState(a1);
  if ( AutoRotationState > 1 || !grpdeskRitInput )
    return 0LL;
  if ( a3 )
  {
    v6 = *a3;
  }
  else
  {
    if ( (int)GetCurrentOrientation(&v10) < 0 )
      return 0LL;
    v6 = v10;
  }
  v7 = a2 - 0x40000000;
  if ( !dword_1C035D5E8 )
  {
    if ( (v7 & 0xBFFFFFFF) != 0 )
    {
      if ( AutoRotationState == 1 )
      {
        v8 = dword_1C035D5D4;
        if ( !a2 || _bittest(&a2, dword_1C035D5D4) )
          goto LABEL_36;
      }
      else
      {
        if ( !a2 )
          goto LABEL_26;
        v8 = gAutoRotationInfo;
        if ( _bittest(&a2, gAutoRotationInfo) )
          goto LABEL_29;
      }
      if ( (a2 & 1) == 0 )
      {
        if ( (a2 & 2) != 0 )
          v8 = 1;
        else
          v8 = (~(_BYTE)a2 & 4 | 8u) >> 2;
        goto LABEL_36;
      }
LABEL_24:
      v8 = 0;
      goto LABEL_36;
    }
LABEL_35:
    v8 = v6;
    goto LABEL_36;
  }
  if ( (v7 & 0xBFFFFFFF) == 0 )
    goto LABEL_35;
  if ( AutoRotationState == 1 )
  {
    v8 = dword_1C035D5D4;
    if ( !a2 || _bittest(&a2, ((_BYTE)dword_1C035D5D4 + 1) & 3) )
      goto LABEL_36;
LABEL_15:
    if ( (a2 & 2) == 0 )
    {
      if ( (a2 & 1) != 0 )
        v8 = 3;
      else
        v8 = ((a2 & 8) != 0) + 1;
      goto LABEL_36;
    }
    goto LABEL_24;
  }
  if ( !a2 )
  {
LABEL_26:
    if ( dword_1C035D5F8 )
    {
      v8 = gAutoRotationInfo;
      goto LABEL_36;
    }
    return 0LL;
  }
  v8 = gAutoRotationInfo;
  if ( !_bittest(&a2, ((_BYTE)gAutoRotationInfo + 1) & 3) )
    goto LABEL_15;
LABEL_29:
  if ( !dword_1C035D5F8 )
    return 0LL;
LABEL_36:
  result = v8 != v6;
  if ( a3 )
    *a3 = v8;
  return result;
}
