/*
 * XREFs of ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C01BC060
 * Callers:
 *     DxgkEnumAdapters2 @ 0x1C01BC030 (DxgkEnumAdapters2.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C01B7C70 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ @ 0x1C01BC43C (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x1C01BC474 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C01BC960 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 */

__int64 __fastcall DxgkEnumAdapters2Impl(
        struct _D3DKMT_ENUMADAPTERS2 *a1,
        char a2,
        unsigned __int8 a3,
        enum _KWAIT_REASON a4)
{
  __m128i v7; // xmm6
  char *v8; // r14
  int v9; // edi
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCountInSession; // eax
  __int64 v12; // rcx
  size_t v13; // r8
  const void *v14; // rdx
  DXGGLOBAL *v16; // rax
  unsigned int v17; // r15d
  __int64 v18; // rdx
  unsigned int v19; // eax
  DXGGLOBAL *v20; // rax
  struct DXGPROCESS *i; // rsi
  int v22; // ecx
  struct _D3DKMT_ENUMADAPTERS2 v23; // [rsp+68h] [rbp-230h]
  __int64 v24; // [rsp+78h] [rbp-220h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-218h]
  __int64 v26; // [rsp+90h] [rbp-208h]
  _KWAIT_REASON v27; // [rsp+98h] [rbp-200h]
  _BYTE v28[256]; // [rsp+A0h] [rbp-1F8h] BYREF
  PVOID P; // [rsp+1A0h] [rbp-F8h] BYREF
  char v30; // [rsp+1A8h] [rbp-F0h] BYREF
  int v31; // [rsp+248h] [rbp-50h]

  v27 = a4;
  WatchdogTimeoutReport::WatchdogTimeoutReport(
    v28,
    403LL,
    2069LL,
    2LL,
    KeGetCurrentThread(),
    0LL,
    7,
    0LL,
    0LL,
    1,
    10000);
  if ( !a1 )
  {
    v9 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkEnumAdapters2 caller specified NULL D3DKMT_ENUMADAPTERS2, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_26;
  }
  v24 = 0LL;
  *(_OWORD *)Src = 0LL;
  v26 = 2LL;
  P = 0LL;
  v31 = 0;
  if ( a2 == 1 )
  {
    if ( &a1[1] < a1 || (unsigned __int64)&a1[1] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v7 = *(__m128i *)a1;
    v23 = *a1;
  }
  else
  {
    v7 = *(__m128i *)a1;
    v23 = *a1;
  }
  v8 = (char *)_mm_srli_si128(v7, 8).m128i_u64[0];
  if ( !v8 )
  {
    v9 = 0;
    Global = DXGGLOBAL::GetGlobal();
    MaximumAdapterCountInSession = DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
    goto LABEL_9;
  }
  v16 = DXGGLOBAL::GetGlobal();
  v17 = _mm_cvtsi128_si32(v7);
  if ( DXGGLOBAL::GetMaximumAdapterCountInSession(v16) < v17 )
  {
    v20 = DXGGLOBAL::GetGlobal();
    v17 = DXGGLOBAL::GetMaximumAdapterCountInSession(v20);
  }
  v18 = 1LL;
  if ( v17 > 1 )
    v18 = v17;
  PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(&P, v18);
  if ( P )
  {
    Src[1] = P;
    HIDWORD(v24) = v17;
    v9 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v24, a2, a3, v27);
    if ( (unsigned int)v24 > v17 )
    {
      WdLogSingleEntry1(1LL, 1227LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdapters.NumAdapters",
        1227LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (unsigned int)v24 > HIDWORD(v24) )
    {
      WdLogSingleEntry1(1LL, 1228LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.AdaptersBufferCount",
        1228LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v19 = (unsigned int)Src[0];
    if ( (unsigned int)v24 > LODWORD(Src[0]) )
    {
      WdLogSingleEntry1(1LL, 1229LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.RequiredAdaptersBufferCount",
        1229LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v19 = (unsigned int)Src[0];
    }
    if ( v9 < 0 )
    {
LABEL_47:
      for ( i = DXGPROCESS::GetCurrent(v12);
            ;
            DXGADAPTER::DestroyHandle(i, *((_DWORD *)Src[1] + 5 * (unsigned int)(v22 - 1))) )
      {
        v22 = v24;
        if ( !(_DWORD)v24 )
          break;
        LODWORD(v24) = v24 - 1;
      }
      goto LABEL_22;
    }
    if ( HIDWORD(v24) < v19 )
    {
      v9 = -1073741789;
      v23.NumAdapters = 0;
LABEL_10:
      if ( v9 >= 0 )
      {
        if ( a2 == 1 )
        {
          if ( (unsigned __int64)&a1[1] > MmUserProbeAddress || &a1[1] <= a1 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a1 = v23;
        }
        else
        {
          *a1 = v23;
        }
        if ( v8 )
        {
          if ( a2 == 1 )
          {
            v13 = 20LL * (unsigned int)v24;
            v14 = Src[1];
            if ( (unsigned __int64)&v8[v13] > MmUserProbeAddress || &v8[v13] <= v8 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v8, v14, v13);
          }
          else
          {
            memmove(v8, Src[1], 20LL * (unsigned int)v24);
          }
        }
        goto LABEL_22;
      }
      goto LABEL_47;
    }
    MaximumAdapterCountInSession = v24;
LABEL_9:
    v23.NumAdapters = MaximumAdapterCountInSession;
    goto LABEL_10;
  }
  v9 = -1073741801;
  WdLogSingleEntry1(2LL, -1073741801LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to allocate memory for D3DKMT_ADAPTERINFO buffer, returning 0x%I64x",
    -1073741801LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_22:
  if ( P != &v30 && P )
    ExFreePoolWithTag(P, 0);
  v31 = 0;
  P = 0LL;
LABEL_26:
  WatchdogTimeoutReport::~WatchdogTimeoutReport((WatchdogTimeoutReport *)v28);
  return (unsigned int)v9;
}
