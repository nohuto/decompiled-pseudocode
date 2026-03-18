/*
 * XREFs of ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C017E6B0
 * Callers:
 *     DxgkEnumAdapters2 @ 0x1C017E680 (DxgkEnumAdapters2.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ @ 0x1C017EA8C (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x1C017EAC4 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C017EFB0 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C018CFB8 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  size_t v12; // r8
  const void *v13; // rdx
  DXGGLOBAL *v15; // rax
  unsigned int v16; // r15d
  __int64 v17; // rdx
  unsigned int v18; // eax
  DXGGLOBAL *v19; // rax
  struct DXGPROCESS *i; // rsi
  int v21; // ecx
  struct _D3DKMT_ENUMADAPTERS2 v22; // [rsp+68h] [rbp-230h]
  __int64 v23; // [rsp+78h] [rbp-220h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-218h]
  __int64 v25; // [rsp+90h] [rbp-208h]
  _KWAIT_REASON v26; // [rsp+98h] [rbp-200h]
  _BYTE v27[256]; // [rsp+A0h] [rbp-1F8h] BYREF
  PVOID P; // [rsp+1A0h] [rbp-F8h] BYREF
  char v29; // [rsp+1A8h] [rbp-F0h] BYREF
  int v30; // [rsp+248h] [rbp-50h]

  v26 = a4;
  WatchdogTimeoutReport::WatchdogTimeoutReport(
    v27,
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
  v23 = 0LL;
  *(_OWORD *)Src = 0LL;
  v25 = 2LL;
  P = 0LL;
  v30 = 0;
  if ( a2 == 1 )
  {
    if ( &a1[1] < a1 || (unsigned __int64)&a1[1] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v7 = *(__m128i *)a1;
    v22 = *a1;
  }
  else
  {
    v7 = *(__m128i *)a1;
    v22 = *a1;
  }
  v8 = (char *)_mm_srli_si128(v7, 8).m128i_u64[0];
  if ( !v8 )
  {
    v9 = 0;
    Global = DXGGLOBAL::GetGlobal();
    MaximumAdapterCountInSession = DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
    goto LABEL_9;
  }
  v15 = DXGGLOBAL::GetGlobal();
  v16 = _mm_cvtsi128_si32(v7);
  if ( DXGGLOBAL::GetMaximumAdapterCountInSession(v15) < v16 )
  {
    v19 = DXGGLOBAL::GetGlobal();
    v16 = DXGGLOBAL::GetMaximumAdapterCountInSession(v19);
  }
  v17 = 1LL;
  if ( v16 > 1 )
    v17 = v16;
  PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(&P, v17);
  if ( P )
  {
    Src[1] = P;
    HIDWORD(v23) = v16;
    v9 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v23, a2, a3, v26);
    if ( (unsigned int)v23 > v16 )
    {
      WdLogSingleEntry1(1LL, 1223LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdapters.NumAdapters",
        1223LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (unsigned int)v23 > HIDWORD(v23) )
    {
      WdLogSingleEntry1(1LL, 1224LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.AdaptersBufferCount",
        1224LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v18 = (unsigned int)Src[0];
    if ( (unsigned int)v23 > LODWORD(Src[0]) )
    {
      WdLogSingleEntry1(1LL, 1225LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.RequiredAdaptersBufferCount",
        1225LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v18 = (unsigned int)Src[0];
    }
    if ( v9 < 0 )
    {
LABEL_47:
      for ( i = DXGPROCESS::GetCurrent(); ; DXGADAPTER::DestroyHandle(
                                              i,
                                              *((_DWORD *)Src[1] + 5 * (unsigned int)(v21 - 1))) )
      {
        v21 = v23;
        if ( !(_DWORD)v23 )
          break;
        LODWORD(v23) = v23 - 1;
      }
      goto LABEL_22;
    }
    if ( HIDWORD(v23) < v18 )
    {
      v9 = -1073741789;
      v22.NumAdapters = 0;
LABEL_10:
      if ( v9 >= 0 )
      {
        if ( a2 == 1 )
        {
          if ( (unsigned __int64)&a1[1] > MmUserProbeAddress || &a1[1] <= a1 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a1 = v22;
        }
        else
        {
          *a1 = v22;
        }
        if ( v8 )
        {
          if ( a2 == 1 )
          {
            v12 = 20LL * (unsigned int)v23;
            v13 = Src[1];
            if ( (unsigned __int64)&v8[v12] > MmUserProbeAddress || &v8[v12] <= v8 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v8, v13, v12);
          }
          else
          {
            memmove(v8, Src[1], 20LL * (unsigned int)v23);
          }
        }
        goto LABEL_22;
      }
      goto LABEL_47;
    }
    MaximumAdapterCountInSession = v23;
LABEL_9:
    v22.NumAdapters = MaximumAdapterCountInSession;
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
  if ( P != &v29 && P )
    ExFreePoolWithTag(P, 0);
  v30 = 0;
  P = 0LL;
LABEL_26:
  WatchdogTimeoutReport::~WatchdogTimeoutReport((WatchdogTimeoutReport *)v27);
  return (unsigned int)v9;
}
