/*
 * XREFs of ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C01EC350
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C003E754 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C017779C (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C01EA1E0 (--0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C01F05EC (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C02B6F10 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateDisplayCore(
        struct DXGADAPTER *this,
        struct ADAPTER_DISPLAY **a2,
        __int64 a3,
        __int64 a4)
{
  _BOOL8 v6; // rcx
  char *v7; // rax
  ADAPTER_DISPLAY *v8; // rax
  ADAPTER_DISPLAY *v9; // rdi
  int v10; // esi
  __int64 result; // rax
  bool v12; // zf
  const wchar_t *v13; // r9
  __int64 v14; // rax
  const wchar_t *v15; // r9

  if ( !this )
  {
    WdLogSingleEntry1(1LL, 4337LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pAdapter != NULL", 4337LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 4338LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"o_ppDisplayCore != NULL", 4338LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_QWORD *)this + 76)
    || !*((_QWORD *)this + 77)
    || !*((_QWORD *)this + 78)
    || !*((_QWORD *)this + 80)
    || !*((_QWORD *)this + 81) && !DXGADAPTER::DriverSupportSetTimingsFromVidPn(this)
    || !*((_QWORD *)this + 82) && *((int *)this + 705) < 2200
    || !*((_QWORD *)this + 69)
    || !*((_QWORD *)this + 70) )
  {
    if ( *((int *)this + 705) >= 1200 || (*((_DWORD *)this + 109) & 0x10) != 0 )
    {
      if ( !*((_QWORD *)this + 76)
        && !*((_QWORD *)this + 77)
        && !*((_QWORD *)this + 78)
        && !*((_QWORD *)this + 79)
        && !*((_QWORD *)this + 80)
        && !*((_QWORD *)this + 81)
        && !*((_QWORD *)this + 82)
        && !*((_QWORD *)this + 68)
        && !*((_QWORD *)this + 69)
        && !*((_QWORD *)this + 70)
        && !*((_QWORD *)this + 84)
        && !*((_QWORD *)this + 83)
        && !*((_QWORD *)this + 98)
        && !*((_QWORD *)this + 144)
        && !*((_QWORD *)this + 145)
        && !*((_QWORD *)this + 146)
        && !*((_QWORD *)this + 147) )
      {
        if ( !*((_DWORD *)this + 418) && !*((_DWORD *)this + 419) )
          goto LABEL_64;
        WdLogSingleEntry3(2LL, *((unsigned int *)this + 418), *((unsigned int *)this + 419), -1073741735LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Number of VidPn Source 0x%I64x or Target 0x%I64x are not 0 on render only adapter 0x%I64x (Status = 0x%I64x).",
          *((unsigned int *)this + 418),
          *((unsigned int *)this + 419),
          -1073741735LL,
          0LL,
          0LL);
        return 3221225561LL;
      }
      WdLogSingleEntry2(2LL, this, -1073741735LL);
      v13 = L"Not all the display relevant DDIs on adapter 0x%I64x are NULL (Status = 0x%I64x).";
    }
    else
    {
      WdLogSingleEntry2(2LL, this, -1073741735LL);
      v13 = L"Miniport did not provide required DDIs on adapter 0x%I64x (Status = 0x%I64x).";
    }
LABEL_90:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, (__int64)this, -1073741735LL, 0LL, 0LL, 0LL);
    return 3221225561LL;
  }
  if ( !*((_QWORD *)this + 366) )
  {
    if ( *((_QWORD *)this + 103) )
    {
      v6 = *((_QWORD *)this + 86) == 0LL;
      if ( (*((_QWORD *)this + 84) == 0LL) == v6 )
        goto LABEL_16;
      WdLogSingleEntry2(2LL, this, -1073741735LL);
      v13 = L"Either both GetScanLine & ControlInterrupts must be implemented or neither, on adapter 0x%I64x are implement"
             "ed (Status = 0x%I64x).";
    }
    else
    {
      WdLogSingleEntry2(2LL, this, -1073741735LL);
      v13 = L"Not all the display only relevant DDIs on adapter 0x%I64x are implemented (Status = 0x%I64x).";
    }
    goto LABEL_90;
  }
  if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn(this) )
    v12 = *((_QWORD *)this + 128) == 0LL;
  else
    v12 = *((_QWORD *)this + 79) == 0LL;
  if ( v12 || !*((_QWORD *)this + 84) || !*((_QWORD *)this + 68) && *((int *)this + 705) < 1200 )
  {
    WdLogSingleEntry2(2LL, this, -1073741735LL);
    v13 = L"Not all the display relevant DDIs for full WDDM on adapter 0x%I64x are implemented 0x%I64x).";
    goto LABEL_90;
  }
LABEL_16:
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, a2, a3, a4) + 24) = this;
  if ( *((int *)this + 705) >= 1200 && !*((_DWORD *)this + 418) && !*((_DWORD *)this + 419) )
  {
LABEL_64:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
    result = 0LL;
    *a2 = 0LL;
    return result;
  }
  if ( (unsigned int)(*((_DWORD *)this + 418) - 1) > 0xF )
  {
    WdLogSingleEntry2(2LL, this, *((unsigned int *)this + 418));
    v14 = *((unsigned int *)this + 418);
    v15 = L"Adapter 0x%I64x: Incorrect number of outputs 0x%I64x";
    goto LABEL_84;
  }
  if ( !*((_DWORD *)this + 419) )
  {
    WdLogSingleEntry2(2LL, this, 0LL);
    v14 = *((unsigned int *)this + 419);
    v15 = L"Adapter 0x%I64x: Incorrect number of targets 0x%I64x";
LABEL_84:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v15, (__int64)this, v14, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( *((_BYTE *)this + 2832) && *((int *)this + 638) >= 4608 && (!*((_BYTE *)this + 2752) || !*((_BYTE *)this + 2753)) )
  {
    WdLogSingleEntry1(2LL, 4511LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver reports WDDM version 1.2 but does not implement all mandatory WDDM 1.2 display features.",
      4511LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( !*((_QWORD *)this + 83) )
    *((_QWORD *)this + 83) = W32kStub_UserRemoveWindowedSwapChain;
  if ( !*((_QWORD *)this + 98) )
    *((_QWORD *)this + 98) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( !*((_QWORD *)this + 135) )
    *((_QWORD *)this + 135) = W32kStub_GreSfmOpenTokenEvent;
  if ( !*((_QWORD *)this + 145) )
    *((_QWORD *)this + 145) = W32kStub_GreSfmOpenTokenEvent;
  if ( !*((_QWORD *)this + 146) )
    *((_QWORD *)this + 146) = W32kStub_GreSfmOpenTokenEvent;
  if ( !*((_QWORD *)this + 147) )
    *((_QWORD *)this + 147) = W32kStub_GreSfmOpenTokenEvent;
  v7 = (char *)operator new[](0x400uLL, 0x4B677844u, 64LL);
  if ( v7 && (v8 = ADAPTER_DISPLAY::ADAPTER_DISPLAY(v7, this), (v9 = v8) != 0LL) )
  {
    v10 = ADAPTER_DISPLAY::Initialize(v8);
    if ( v10 < 0 )
    {
      ADAPTER_DISPLAY::Destroy(v9);
      ADAPTER_DISPLAY::`scalar deleting destructor'(v9);
    }
    else
    {
      WdLogSingleEntry2(4LL, v9, this);
      *a2 = v9;
    }
    return (unsigned int)v10;
  }
  else
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating ADAPTER_DISPLAY class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
