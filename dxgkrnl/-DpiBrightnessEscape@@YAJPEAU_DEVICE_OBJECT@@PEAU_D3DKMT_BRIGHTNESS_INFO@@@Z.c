/*
 * XREFs of ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C039C3C0
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DpiCallDrvSetBacklightOptimizationLevel @ 0x1C039DBB4 (DpiCallDrvSetBacklightOptimizationLevel.c)
 *     DpiCallDrvSetBrightness @ 0x1C039DC30 (DpiCallDrvSetBrightness.c)
 */

__int64 __fastcall DpiBrightnessEscape(struct _DEVICE_OBJECT *a1, struct _D3DKMT_BRIGHTNESS_INFO *a2)
{
  char *DeviceExtension; // r14
  unsigned int v3; // ebx
  char *v4; // r10
  char *v5; // rdi
  char *v6; // r9
  D3DKMT_BRIGHTNESS_INFO_TYPE Type; // ecx
  __int16 v9; // ax
  unsigned __int64 v10; // r8
  bool v12; // zf
  UCHAR v13; // al
  bool *v14; // rsi
  __int32 v15; // ecx
  __int32 v16; // ecx
  __int32 v17; // ecx
  int v18; // ecx
  unsigned int (__fastcall *v20)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *); // rax
  union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *v21; // rdx
  UCHAR *BrightnessLevels; // r9
  union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *p_PossibleLevels; // r8
  __int64 Value; // r8
  __int32 v25; // ecx
  __int32 v26; // ecx
  __int32 v27; // ecx
  __int64 v28; // rdx
  void (__fastcall *v29)(__int64, int *); // rax
  __int64 v30; // rcx
  __int64 v31; // [rsp+30h] [rbp-49h] BYREF
  int v32; // [rsp+38h] [rbp-41h]
  const wchar_t *v33; // [rsp+40h] [rbp-39h]
  int *v34; // [rsp+48h] [rbp-31h]
  int v35; // [rsp+50h] [rbp-29h]
  int *v36; // [rsp+58h] [rbp-21h]
  int v37; // [rsp+60h] [rbp-19h]
  __int64 v38; // [rsp+68h] [rbp-11h]
  int v39; // [rsp+70h] [rbp-9h]
  __int128 v40; // [rsp+78h] [rbp-1h]
  __int128 v41; // [rsp+88h] [rbp+Fh]
  __int64 v42; // [rsp+98h] [rbp+1Fh]
  int v43; // [rsp+E0h] [rbp+67h] BYREF
  int v44; // [rsp+E8h] [rbp+6Fh] BYREF

  DeviceExtension = (char *)a1->DeviceExtension;
  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  Type = a2->Type;
  v9 = *((_WORD *)DeviceExtension + 2341);
  v10 = (unsigned __int64)(DeviceExtension + 4680);
  if ( v9 == 1 )
    v4 = DeviceExtension + 4680;
  if ( v9 == 2 )
    v5 = DeviceExtension + 4680;
  if ( v9 == 3 )
    v6 = DeviceExtension + 4680;
  if ( Type <= D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
  {
    if ( Type == D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
    {
LABEL_19:
      if ( v5 )
        goto LABEL_33;
      goto LABEL_20;
    }
    v10 = (unsigned int)(Type - 1);
    if ( Type == D3DKMT_BRIGHTNESS_INFO_GET_POSSIBLE_LEVELS )
    {
      if ( v4 )
        goto LABEL_33;
      v12 = v5 == 0LL;
      goto LABEL_17;
    }
    v10 = (unsigned int)(Type - 2);
    if ( Type != D3DKMT_BRIGHTNESS_INFO_GET )
    {
      v10 = (unsigned int)(Type - 3);
      if ( Type != D3DKMT_BRIGHTNESS_INFO_SET )
      {
        if ( Type != D3DKMT_BRIGHTNESS_INFO_GET_CAPS )
          goto LABEL_13;
        goto LABEL_19;
      }
    }
LABEL_27:
    if ( !v4 && !v5 && !v6 )
      return 3221225659LL;
    goto LABEL_30;
  }
  v10 = (unsigned int)(Type - 7);
  if ( Type != D3DKMT_BRIGHTNESS_INFO_GET_REDUCTION )
  {
    v10 = (unsigned int)(Type - 8);
    if ( Type == D3DKMT_BRIGHTNESS_INFO_BEGIN_MANUAL_MODE )
      goto LABEL_27;
    v10 = (unsigned int)(Type - 9);
    if ( Type == D3DKMT_BRIGHTNESS_INFO_END_MANUAL_MODE )
      goto LABEL_27;
    v10 = (unsigned int)(Type - 10);
    if ( Type == D3DKMT_BRIGHTNESS_INFO_TOGGLE_LOGGING )
      goto LABEL_27;
    if ( Type == D3DKMT_BRIGHTNESS_INFO_GET_NIT_RANGES )
    {
LABEL_20:
      v12 = v6 == 0LL;
LABEL_17:
      if ( v12 )
        return 3221225659LL;
      goto LABEL_33;
    }
  }
LABEL_13:
  if ( !v5 )
    return 3221225659LL;
LABEL_30:
  if ( Type == D3DKMT_BRIGHTNESS_INFO_TOGGLE_LOGGING )
  {
    v13 = DeviceExtension[4402] == 0;
    DeviceExtension[4402] = v13;
    a2->PossibleLevels.LevelCount = v13;
    return 0LL;
  }
  if ( Type == D3DKMT_BRIGHTNESS_INFO_BEGIN_MANUAL_MODE )
  {
    v14 = (bool *)(DeviceExtension + 4401);
LABEL_64:
    v25 = Type - 7;
    if ( !v25 )
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *, unsigned __int64))v5
                            + 10))(
                             *((_QWORD *)v5 + 1),
                             &a2->PossibleLevels,
                             v10);
    v26 = v25 - 1;
    if ( !v26 )
    {
      v43 = 0;
      v35 = 4;
      v37 = 4;
      v33 = L"EnableManualBrightnessMode";
      v31 = 0LL;
      v34 = &v43;
      v32 = 32;
      v36 = &v43;
      v38 = 0LL;
      v42 = 0LL;
      v39 = 0;
      v40 = 0LL;
      v41 = 0LL;
      RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v31, 0LL, 0LL);
      *v14 = v43 != 0;
      if ( v5 )
        DpiCallDrvSetBacklightOptimizationLevel(a1, v5, 0LL);
      return v3;
    }
    v27 = v26 - 1;
    if ( !v27 )
    {
      *v14 = 0;
      v43 = 0;
      if ( v5 )
      {
        if ( (*((int (__fastcall **)(_QWORD, int *, unsigned __int64, char *))v5 + 7))(
               *((_QWORD *)v5 + 1),
               &v43,
               v10,
               v6) >= 0
          && (v43 & 1) != 0 )
        {
          v29 = (void (__fastcall *)(__int64, int *))*((_QWORD *)v5 + 8);
          v30 = *((_QWORD *)v5 + 1);
          v44 = 1;
          v29(v30, &v44);
        }
        LOBYTE(v28) = DeviceExtension[4403];
        DpiCallDrvSetBrightness(a1, v28);
      }
      return v3;
    }
    if ( v27 != 2 )
      return (unsigned int)-1073741811;
    v20 = (unsigned int (__fastcall *)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))*((_QWORD *)v6 + 7);
    return v20(*((_QWORD *)v6 + 1), a2->ChildUid, &a2->PossibleLevels);
  }
LABEL_33:
  v14 = (bool *)(DeviceExtension + 4401);
  if ( !DeviceExtension[4401] )
    return 3221226538LL;
  if ( Type > D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
    goto LABEL_64;
  if ( Type == D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
  {
    Value = a2->BrightnessCaps.Value;
    if ( (int)Value > 3 )
      return 3221225485LL;
    if ( v6 )
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, _QWORD))v6 + 8))(*((_QWORD *)v6 + 1), a2->ChildUid);
    else
      return (unsigned int)DpiCallDrvSetBacklightOptimizationLevel(a1, v5, Value);
  }
  v15 = Type - 1;
  if ( !v15 )
  {
    BrightnessLevels = a2->PossibleLevels.BrightnessLevels;
    p_PossibleLevels = (union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *)&a2->PossibleLevels;
    if ( v5 )
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, __int64, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, UCHAR *))v5
                            + 4))(
                             *((_QWORD *)v5 + 1),
                             256LL,
                             p_PossibleLevels,
                             BrightnessLevels);
    else
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, __int64, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, UCHAR *))v4
                            + 4))(
                             *((_QWORD *)v4 + 1),
                             256LL,
                             p_PossibleLevels,
                             BrightnessLevels);
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( v6 )
    {
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v6 + 5))(
                             *((_QWORD *)v6 + 1),
                             a2->ChildUid,
                             &a2->PossibleLevels);
    }
    else
    {
      v21 = (union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *)&a2->PossibleLevels;
      if ( v5 )
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, unsigned __int64))v5
                              + 6))(
                               *((_QWORD *)v5 + 1),
                               v21,
                               v10);
      else
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, union _D3DKMT_BRIGHTNESS_INFO::$2FE0A4461106716E7D3404DF4AA5DF99 *, unsigned __int64))v4
                              + 6))(
                               *((_QWORD *)v4 + 1),
                               v21,
                               v10);
    }
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    if ( !v6 )
    {
      LOBYTE(a2) = a2->PossibleLevels.LevelCount;
      return (unsigned int)DpiCallDrvSetBrightness(a1, a2);
    }
    v20 = (unsigned int (__fastcall *)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))*((_QWORD *)v6 + 4);
    return v20(*((_QWORD *)v6 + 1), a2->ChildUid, &a2->PossibleLevels);
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    if ( !v6 )
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *, unsigned __int64))v5
                            + 7))(
                             *((_QWORD *)v5 + 1),
                             &a2->PossibleLevels,
                             v10);
    v20 = (unsigned int (__fastcall *)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))*((_QWORD *)v6 + 6);
    return v20(*((_QWORD *)v6 + 1), a2->ChildUid, &a2->PossibleLevels);
  }
  if ( v18 == 1 )
    return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *, unsigned __int64))v5
                          + 8))(
                           *((_QWORD *)v5 + 1),
                           &a2->PossibleLevels,
                           v10);
  return (unsigned int)-1073741811;
}
