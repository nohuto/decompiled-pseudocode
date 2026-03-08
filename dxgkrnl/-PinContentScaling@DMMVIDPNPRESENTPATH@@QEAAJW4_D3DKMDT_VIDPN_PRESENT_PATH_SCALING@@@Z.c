/*
 * XREFs of ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000890C
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0069938 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01A1980 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C03A9DBC (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C03AAEA8 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002680 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00061EC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00087FC (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?IsDriverCustomScalingSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C01A07DC (-IsDriverCustomScalingSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C01A0840 (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsMiniportDriverCCDSupport@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C01A2048 (-IsMiniportDriverCCDSupport@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::PinContentScaling(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a2)
{
  __int64 v2; // rdi
  unsigned __int8 IsDriverAspectRatioCenteredMaxSupported; // al
  int v5; // eax
  char v6; // al
  int v7; // ebp
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  void (__fastcall ***v14)(_QWORD, __int64); // rcx
  int v15; // eax
  int v16; // eax
  char v18; // al
  int v19; // ecx
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // rbx
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  __int64 v33; // rbx
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  __int64 v37; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v38; // [rsp+A8h] [rbp+20h] BYREF

  v2 = a2;
  if ( a2 == D3DKMDT_VPPS_RESERVED1 )
  {
    WdLogSingleEntry2(
      2LL,
      *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
      *(unsigned int *)(*((_QWORD *)this + 12) + 24LL));
    return 3223192389LL;
  }
  if ( DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(this) )
  {
    if ( (_DWORD)v2 == 255 )
    {
      WdLogSingleEntry1(1LL, 614LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v21,
            v20,
            v22,
            0,
            2,
            -1,
            (__int64)L"!this->IsMiniportDriverCCDSupport() || (i_ContentScaling != D3DKMDT_VPPS_NOTSPECIFIED)",
            614LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
  if ( !DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(this) && (_DWORD)v2 == 5 )
  {
    WdLogSingleEntry1(1LL, 617LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v24,
          v23,
          v25,
          0,
          2,
          -1,
          (__int64)L"this->IsMiniportDriverCCDSupport() || (i_ContentScaling != D3DKMDT_VPPS_CUSTOM)",
          617LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( !DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(this) && (_DWORD)v2 == 4 )
  {
    WdLogSingleEntry1(1LL, 618LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v27,
        v26,
        v28,
        0,
        2,
        -1,
        (__int64)L"this->IsMiniportDriverCCDSupport() || (i_ContentScaling != D3DKMDT_VPPS_ASPECTRATIOCENTEREDMAX)",
        618LL,
        0LL,
        0LL,
        0LL,
        0LL);
    goto LABEL_10;
  }
  if ( (_DWORD)v2 != 1 && (_DWORD)v2 != 2 && (_DWORD)v2 != 3 )
  {
    if ( (_DWORD)v2 == 4 )
    {
LABEL_10:
      IsDriverAspectRatioCenteredMaxSupported = DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported(this);
      goto LABEL_11;
    }
    if ( (_DWORD)v2 == 5 )
    {
      IsDriverAspectRatioCenteredMaxSupported = DMMVIDPNPRESENTPATH::IsDriverCustomScalingSupported(this);
LABEL_11:
      if ( IsDriverAspectRatioCenteredMaxSupported )
        goto LABEL_12;
      goto LABEL_55;
    }
    if ( (_DWORD)v2 != 255 )
    {
LABEL_55:
      WdLogSingleEntry3(
        2LL,
        v2,
        *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
        *(unsigned int *)(*((_QWORD *)this + 12) + 24LL));
      return 3223192389LL;
    }
  }
LABEL_12:
  switch ( (_DWORD)v2 )
  {
    case 1:
      LOBYTE(v5) = *((_BYTE *)this + 120);
      goto LABEL_18;
    case 2:
      v5 = *((_DWORD *)this + 30) >> 1;
      goto LABEL_18;
    case 3:
      v5 = *((_DWORD *)this + 30) >> 2;
      goto LABEL_18;
    case 4:
      if ( DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported(this) )
      {
        v5 = *((_DWORD *)this + 30) >> 3;
LABEL_18:
        v6 = v5 & 1;
        goto LABEL_19;
      }
      break;
    case 5:
      if ( DMMVIDPNPRESENTPATH::IsDriverCustomScalingSupported(this) )
      {
        v5 = *((_DWORD *)this + 30) >> 4;
        goto LABEL_18;
      }
      break;
    default:
      goto LABEL_20;
  }
  v6 = 0;
LABEL_19:
  if ( v6 )
  {
LABEL_20:
    v7 = *((_DWORD *)this + 28);
    *((_DWORD *)this + 28) = v2;
    v8 = *((_QWORD *)this + 11);
    v9 = *(_QWORD *)(v8 + 104);
    if ( v9 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v9 + 96), 1u);
      v10 = *(_QWORD *)(v8 + 104);
    }
    else
    {
      v10 = 0LL;
    }
    v11 = *((_QWORD *)this + 12);
    v38 = v10;
    v12 = *(_QWORD *)(v11 + 104);
    if ( v12 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v12 + 96), 1u);
      v13 = *(_QWORD *)(v11 + 104);
    }
    else
    {
      v13 = 0LL;
    }
    v37 = v13;
    if ( !*(_QWORD *)(v10 + 144) || !*(_QWORD *)(v13 + 144) )
    {
      if ( v13 )
      {
        v14 = (void (__fastcall ***)(_QWORD, __int64))(v13 + 88);
        v15 = _InterlockedDecrement((volatile signed __int32 *)(v13 + 96));
        if ( v15 )
        {
          if ( v15 < 0 )
          {
            v29 = v15;
            WdLogSingleEntry1(2LL, v15);
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
                McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                  v31,
                  v30,
                  v32,
                  0,
                  0,
                  -1,
                  (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
                  v29,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
            }
          }
        }
        else if ( v14 )
        {
          (**v14)(v14, 1LL);
        }
      }
      v16 = _InterlockedDecrement((volatile signed __int32 *)(v10 + 96));
      if ( v16 )
      {
        if ( v16 < 0 )
        {
          v33 = v16;
          WdLogSingleEntry1(2LL, v16);
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v35,
                v34,
                v36,
                0,
                0,
                -1,
                (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
                v33,
                0LL,
                0LL,
                0LL,
                0LL);
          }
        }
      }
      else if ( v10 != -88 )
      {
        (**(void (__fastcall ***)(__int64, __int64))(v10 + 88))(v10 + 88, 1LL);
      }
      return 0LL;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v37, 0LL);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v38, 0LL);
    v18 = DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(this);
    v19 = *((_DWORD *)this + 28);
    if ( !v18 )
    {
      if ( v19 == 1 )
        WdLogSingleEntry1(3LL, *((int *)this + 28));
      return 0LL;
    }
    if ( ((v19 - 1) & 0xFFFFFFFB) == 0 )
      return 0LL;
    WdLogSingleEntry1(2LL, *((int *)this + 28));
    WdLogSingleEntry2(2LL, v2, this);
    *((_DWORD *)this + 28) = v7;
    return 3223192389LL;
  }
  WdLogSingleEntry3(
    3LL,
    v2,
    *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
    *(unsigned int *)(*((_QWORD *)this + 12) + 24LL));
  return 3223192326LL;
}
