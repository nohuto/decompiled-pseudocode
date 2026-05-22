/*
 * XREFs of ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x1800CC2E0
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x18016BDD0 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D060 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800893A0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x1800C9BD0 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 *     std::_Sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CB664 (std--_Sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 *     GetConfigurationFlag @ 0x1800CBCCC (GetConfigurationFlag.c)
 *     ?HidStatus@SpatialInteractionDevices@@YAJJ@Z @ 0x1800CBFE0 (-HidStatus@SpatialInteractionDevices@@YAJJ@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::Internal::InitializeValueCaps(
        SpatialInteractionDevices::Internal *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2)
{
  void *v3; // rax
  const struct std::nothrow_t *v4; // rdx
  void *v5; // rcx
  __int64 v6; // rdx
  int v7; // ebx
  void *v9; // rax
  const struct std::nothrow_t *v10; // rdx
  void *v11; // rcx
  void *v12; // rax
  const struct std::nothrow_t *v13; // rdx
  void *v14; // rcx
  __int16 v15; // ax
  struct _HIDP_PREPARSED_DATA *v16; // r9
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  size_t v20; // rax
  struct _HIDP_VALUE_CAPS *v21; // rax
  const struct std::nothrow_t *v22; // rdx
  void *v23; // rcx
  unsigned int v24; // eax
  struct _HIDP_PREPARSED_DATA *v25; // r9
  unsigned int ButtonCaps; // eax
  size_t v27; // rax
  struct _HIDP_BUTTON_CAPS *v28; // rax
  const struct std::nothrow_t *v29; // rdx
  void *v30; // rcx
  unsigned int v31; // eax
  __int16 v32; // ax
  struct _HIDP_PREPARSED_DATA *v33; // r9
  unsigned int ValueCaps; // eax
  size_t v35; // rax
  struct _HIDP_VALUE_CAPS *v36; // rax
  const struct std::nothrow_t *v37; // rdx
  void *v38; // rcx
  unsigned int v39; // eax
  struct _HIDP_PREPARSED_DATA *v40; // r9
  unsigned int v41; // eax
  size_t v42; // rax
  struct _HIDP_BUTTON_CAPS *v43; // rax
  const struct std::nothrow_t *v44; // rdx
  void *v45; // rcx
  unsigned int v46; // eax
  char v47; // di
  struct _HIDP_PREPARSED_DATA *v48; // r9
  unsigned int v49; // eax
  size_t v50; // rax
  struct _HIDP_VALUE_CAPS *v51; // rax
  const struct std::nothrow_t *v52; // rdx
  void *v53; // rcx
  unsigned int v54; // eax
  char v55; // si
  struct SpatialInteractionDevices::HID_HANDLE *v56; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  USHORT ValueCapsLength; // [rsp+50h] [rbp+30h] BYREF

  v3 = operator new[](*((unsigned __int16 *)this + 36) + 16LL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = (void *)*((_QWORD *)this + 26);
  *((_QWORD *)this + 26) = v3;
  if ( v5 )
  {
    operator delete(v5, v4);
    v3 = (void *)*((_QWORD *)this + 26);
  }
  if ( !v3 )
  {
    v6 = 361LL;
LABEL_5:
    v7 = -2147024882;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v9 = operator new[](*((unsigned __int16 *)this + 34) + 16LL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = (void *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = v9;
  if ( v11 )
  {
    operator delete(v11, v10);
    v9 = (void *)*((_QWORD *)this + 27);
  }
  if ( !v9 )
  {
    v6 = 364LL;
    goto LABEL_5;
  }
  v12 = operator new[](*((unsigned __int16 *)this + 35) + 16LL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = (void *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = v12;
  if ( v14 )
  {
    operator delete(v14, v13);
    v12 = (void *)*((_QWORD *)this + 28);
  }
  if ( !v12 )
  {
    v6 = 367LL;
    goto LABEL_5;
  }
  v15 = *((_WORD *)this + 34);
  if ( !v15 )
    goto LABEL_44;
  if ( !*((_WORD *)this + 56) )
  {
LABEL_30:
    if ( v15 && *((_WORD *)this + 55) )
    {
      v25 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 7);
      ValueCapsLength = 0;
      ButtonCaps = HidP_GetButtonCaps(HidP_Input, 0LL, &ValueCapsLength, v25);
      if ( ButtonCaps != -1072627705 )
      {
        v18 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)ButtonCaps);
        if ( v18 < 0 )
        {
          v19 = 392LL;
          return wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)v19,
                   (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                   (const char *)(unsigned int)v18);
        }
        return 0LL;
      }
      v27 = 72LL * ValueCapsLength;
      if ( !is_mul_ok(ValueCapsLength, 0x48uLL) )
        v27 = -1LL;
      v28 = (struct _HIDP_BUTTON_CAPS *)operator new[](v27, (const struct std::nothrow_t *)&std::nothrow);
      v30 = (void *)*((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v28;
      if ( v30 )
      {
        operator delete(v30, v29);
        v28 = (struct _HIDP_BUTTON_CAPS *)*((_QWORD *)this + 18);
      }
      if ( !v28 )
      {
        v6 = 396LL;
        goto LABEL_5;
      }
      v31 = HidP_GetButtonCaps(HidP_Input, v28, &ValueCapsLength, *((PHIDP_PREPARSED_DATA *)this + 7));
      v18 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v31);
      if ( v18 < 0 )
      {
        v19 = 398LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v19,
                 (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                 (const char *)(unsigned int)v18);
      }
      *((_DWORD *)this + 38) = ValueCapsLength;
    }
LABEL_44:
    v32 = *((_WORD *)this + 36);
    if ( v32 )
    {
      if ( *((_WORD *)this + 62) )
      {
        v33 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 7);
        ValueCapsLength = 0;
        ValueCaps = HidP_GetValueCaps(HidP_Feature, 0LL, &ValueCapsLength, v33);
        if ( ValueCaps != -1072627705 )
        {
          v18 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)ValueCaps);
          if ( v18 < 0 )
          {
            v19 = 410LL;
            return wil::details::in1diag3::Return_NtStatus(
                     retaddr,
                     (void *)v19,
                     (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                     (const char *)(unsigned int)v18);
          }
          return 0LL;
        }
        v35 = 72LL * ValueCapsLength;
        if ( !is_mul_ok(ValueCapsLength, 0x48uLL) )
          v35 = -1LL;
        v36 = (struct _HIDP_VALUE_CAPS *)operator new[](v35, (const struct std::nothrow_t *)&std::nothrow);
        v38 = (void *)*((_QWORD *)this + 22);
        *((_QWORD *)this + 22) = v36;
        if ( v38 )
        {
          operator delete(v38, v37);
          v36 = (struct _HIDP_VALUE_CAPS *)*((_QWORD *)this + 22);
        }
        if ( !v36 )
        {
          v6 = 414LL;
          goto LABEL_5;
        }
        v39 = HidP_GetValueCaps(HidP_Feature, v36, &ValueCapsLength, *((PHIDP_PREPARSED_DATA *)this + 7));
        v18 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v39);
        if ( v18 < 0 )
        {
          v19 = 416LL;
          return wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)v19,
                   (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                   (const char *)(unsigned int)v18);
        }
        *((_DWORD *)this + 46) = ValueCapsLength;
        v32 = *((_WORD *)this + 36);
      }
      if ( v32 && *((_WORD *)this + 61) )
      {
        v40 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 7);
        ValueCapsLength = 0;
        v41 = HidP_GetButtonCaps(HidP_Feature, 0LL, &ValueCapsLength, v40);
        if ( v41 != -1072627705 )
        {
          v18 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v41);
          if ( v18 < 0 )
          {
            v19 = 427LL;
            return wil::details::in1diag3::Return_NtStatus(
                     retaddr,
                     (void *)v19,
                     (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                     (const char *)(unsigned int)v18);
          }
          return 0LL;
        }
        v42 = 72LL * ValueCapsLength;
        if ( !is_mul_ok(ValueCapsLength, 0x48uLL) )
          v42 = -1LL;
        v43 = (struct _HIDP_BUTTON_CAPS *)operator new[](v42, (const struct std::nothrow_t *)&std::nothrow);
        v45 = (void *)*((_QWORD *)this + 24);
        *((_QWORD *)this + 24) = v43;
        if ( v45 )
        {
          operator delete(v45, v44);
          v43 = (struct _HIDP_BUTTON_CAPS *)*((_QWORD *)this + 24);
        }
        if ( !v43 )
        {
          v6 = 431LL;
          goto LABEL_5;
        }
        v46 = HidP_GetButtonCaps(HidP_Feature, v43, &ValueCapsLength, *((PHIDP_PREPARSED_DATA *)this + 7));
        v18 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v46);
        if ( v18 < 0 )
        {
          v19 = 433LL;
          return wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)v19,
                   (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                   (const char *)(unsigned int)v18);
        }
        std::_Sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___(
          *((char **)this + 24),
          (char *)(72LL * ValueCapsLength + *((_QWORD *)this + 24)),
          72LL * ValueCapsLength / 72,
          ValueCapsLength);
        *((_DWORD *)this + 50) = ValueCapsLength;
      }
    }
    v47 = 1;
    if ( *((_WORD *)this + 35) && *((_WORD *)this + 59) )
    {
      v48 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 7);
      ValueCapsLength = 0;
      v49 = HidP_GetValueCaps(HidP_Output, 0LL, &ValueCapsLength, v48);
      if ( v49 != -1072627705 )
      {
        v18 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v49);
        if ( v18 < 0 )
        {
          v19 = 452LL;
          return wil::details::in1diag3::Return_NtStatus(
                   retaddr,
                   (void *)v19,
                   (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                   (const char *)(unsigned int)v18);
        }
        return 0LL;
      }
      v50 = 72LL * ValueCapsLength;
      if ( !is_mul_ok(ValueCapsLength, 0x48uLL) )
        v50 = -1LL;
      v51 = (struct _HIDP_VALUE_CAPS *)operator new[](v50, (const struct std::nothrow_t *)&std::nothrow);
      v53 = (void *)*((_QWORD *)this + 20);
      *((_QWORD *)this + 20) = v51;
      if ( v53 )
      {
        operator delete(v53, v52);
        v51 = (struct _HIDP_VALUE_CAPS *)*((_QWORD *)this + 20);
      }
      if ( !v51 )
      {
        v6 = 456LL;
        goto LABEL_5;
      }
      v54 = HidP_GetValueCaps(HidP_Output, v51, &ValueCapsLength, *((PHIDP_PREPARSED_DATA *)this + 7));
      v18 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v54);
      if ( v18 < 0 )
      {
        v19 = 458LL;
        return wil::details::in1diag3::Return_NtStatus(
                 retaddr,
                 (void *)v19,
                 (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                 (const char *)(unsigned int)v18);
      }
      *((_DWORD *)this + 42) = ValueCapsLength;
    }
    if ( *((_WORD *)this + 22) != 11036
      || *((_WORD *)this + 23) != 3
      || *((_WORD *)this + 24) != 256
      || *((_WORD *)this + 32) != 1
      || (v55 = 1, *((_WORD *)this + 33) != 0xFF0A) )
    {
      v55 = 0;
    }
    *((_BYTE *)this + 235) = GetConfigurationFlag((wchar_t *)L"InverseThumbstickX");
    if ( !v55 && !GetConfigurationFlag((wchar_t *)L"InverseThumbstickY") )
      v47 = 0;
    *((_BYTE *)this + 236) = v47;
    *((_BYTE *)this + 233) = GetConfigurationFlag((wchar_t *)L"InverseTouchpadX");
    *((_BYTE *)this + 234) = GetConfigurationFlag((wchar_t *)L"InverseTouchpadY");
    *((_DWORD *)this + 70) = 0;
    *((_QWORD *)this + 36) = 0LL;
    v7 = SpatialInteractionDevices::PrepareSpatialInteractionDeviceParsing(this, v56);
    if ( v7 < 0 )
    {
      v6 = 480LL;
      goto LABEL_6;
    }
    return 0LL;
  }
  v16 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 7);
  ValueCapsLength = 0;
  v17 = HidP_GetValueCaps(HidP_Input, 0LL, &ValueCapsLength, v16);
  if ( v17 == -1072627705 )
  {
    v20 = 72LL * ValueCapsLength;
    if ( !is_mul_ok(ValueCapsLength, 0x48uLL) )
      v20 = -1LL;
    v21 = (struct _HIDP_VALUE_CAPS *)operator new[](v20, (const struct std::nothrow_t *)&std::nothrow);
    v23 = (void *)*((_QWORD *)this + 16);
    *((_QWORD *)this + 16) = v21;
    if ( v23 )
    {
      operator delete(v23, v22);
      v21 = (struct _HIDP_VALUE_CAPS *)*((_QWORD *)this + 16);
    }
    if ( !v21 )
    {
      v6 = 379LL;
      goto LABEL_5;
    }
    v24 = HidP_GetValueCaps(HidP_Input, v21, &ValueCapsLength, *((PHIDP_PREPARSED_DATA *)this + 7));
    v18 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v24);
    if ( v18 < 0 )
    {
      v19 = 381LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v19,
               (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
               (const char *)(unsigned int)v18);
    }
    *((_DWORD *)this + 34) = ValueCapsLength;
    v15 = *((_WORD *)this + 34);
    goto LABEL_30;
  }
  v18 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)v17);
  if ( v18 < 0 )
  {
    v19 = 375LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v19,
             (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
             (const char *)(unsigned int)v18);
  }
  return 0LL;
}
