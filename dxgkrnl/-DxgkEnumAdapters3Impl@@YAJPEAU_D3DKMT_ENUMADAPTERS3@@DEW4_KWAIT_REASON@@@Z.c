/*
 * XREFs of ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x1C02C9980
 * Callers:
 *     DxgkEnumAdapters3Internal @ 0x1C02CC9A0 (DxgkEnumAdapters3Internal.c)
 *     NtDxgkEnumAdapters3 @ 0x1C02D1A50 (NtDxgkEnumAdapters3.c)
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

__int64 __fastcall DxgkEnumAdapters3Impl(__m128i *a1, char a2, char a3, enum _KWAIT_REASON a4)
{
  unsigned int v6; // edi
  char *v8; // rcx
  __m128i v9; // xmm6
  char *v10; // xmm7_8
  PVOID v11; // rcx
  bool v12; // zf
  int v13; // esi
  DXGGLOBAL *v14; // rax
  __int32 v15; // eax
  __int64 v16; // rcx
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCountInSession; // r15d
  DXGGLOBAL *v19; // rax
  unsigned int v20; // edx
  __int64 v21; // r8
  unsigned int v22; // eax
  size_t v23; // r8
  const void *v24; // rdx
  struct DXGPROCESS *i; // rdi
  int v26; // ecx
  __m128i v28; // [rsp+60h] [rbp-148h]
  char *v29; // [rsp+70h] [rbp-138h]
  __int64 v30; // [rsp+78h] [rbp-130h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-128h]
  __int64 v32; // [rsp+90h] [rbp-118h]
  enum _KWAIT_REASON v33; // [rsp+98h] [rbp-110h]
  PVOID P; // [rsp+A0h] [rbp-108h] BYREF
  _BYTE v35[160]; // [rsp+A8h] [rbp-100h] BYREF
  int v36; // [rsp+148h] [rbp-60h]

  v33 = a4;
  if ( !a1 )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkEnumAdapters3 caller specified NULL D3DKMT_ENUMADAPTERS3, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v6;
  }
  v30 = 0LL;
  *(_OWORD *)Src = 0LL;
  P = 0LL;
  v36 = 0;
  if ( a2 == 1 )
  {
    v8 = &a1[1].m128i_i8[8];
    if ( v8 < (char *)a1 || (unsigned __int64)v8 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v9 = *a1;
    v28 = *a1;
    v10 = (char *)a1[1].m128i_i64[0];
    v29 = v10;
  }
  else
  {
    v9 = *a1;
    v28 = *a1;
    v10 = (char *)a1[1].m128i_i64[0];
    v29 = v10;
  }
  if ( (v9.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    v6 = -1073741811;
    WdLogSingleEntry2(2LL, v9.m128i_i64[0], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkEnumAdapters3 caller specified an invalid filter 0x%I64x, returning 0x%I64x",
      v9.m128i_i64[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v11 = P;
    v12 = P == v35;
    goto LABEL_12;
  }
  v32 = v9.m128i_i64[0];
  if ( v29 )
  {
    Global = DXGGLOBAL::GetGlobal();
    MaximumAdapterCountInSession = _mm_cvtsi128_si32(_mm_srli_si128(v9, 8));
    if ( (unsigned int)DXGGLOBAL::GetMaximumAdapterCountInSession(Global) < MaximumAdapterCountInSession )
    {
      v19 = DXGGLOBAL::GetGlobal();
      MaximumAdapterCountInSession = DXGGLOBAL::GetMaximumAdapterCountInSession(v19);
    }
    v20 = 1;
    if ( MaximumAdapterCountInSession > 1 )
      v20 = MaximumAdapterCountInSession;
    PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements((__int64 *)&P, v20);
    if ( !P )
    {
      v6 = -1073741801;
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
      v11 = P;
      v12 = P == v35;
LABEL_12:
      if ( !v12 )
      {
        if ( v11 )
          ExFreePoolWithTag(v11, 0);
      }
      return v6;
    }
    Src[1] = P;
    HIDWORD(v30) = MaximumAdapterCountInSession;
    LOBYTE(v21) = a3;
    v13 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v30, a2, v21, v33);
    if ( (unsigned int)v30 > MaximumAdapterCountInSession )
    {
      WdLogSingleEntry1(1LL, 1442LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdapters.NumAdapters",
        1442LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (unsigned int)v30 > HIDWORD(v30) )
    {
      WdLogSingleEntry1(1LL, 1443LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.AdaptersBufferCount",
        1443LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v22 = (unsigned int)Src[0];
    if ( (unsigned int)v30 > LODWORD(Src[0]) )
    {
      WdLogSingleEntry1(1LL, 1444LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.RequiredAdaptersBufferCount",
        1444LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v22 = (unsigned int)Src[0];
    }
    if ( v13 < 0 )
      goto LABEL_49;
    if ( HIDWORD(v30) < v22 )
    {
      v13 = -1073741789;
      v28.m128i_i32[2] = 0;
      goto LABEL_34;
    }
    v15 = v30;
  }
  else
  {
    v13 = 0;
    v14 = DXGGLOBAL::GetGlobal();
    v15 = DXGGLOBAL::GetMaximumAdapterCountInSession(v14);
  }
  v28.m128i_i32[2] = v15;
LABEL_34:
  if ( v13 >= 0 )
  {
    if ( a2 == 1 )
    {
      if ( (unsigned __int64)&a1[1].m128i_u64[1] > MmUserProbeAddress || &a1[1].m128i_u64[1] <= (unsigned __int64 *)a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a1 = v28;
      a1[1].m128i_i64[0] = (__int64)v10;
    }
    else
    {
      *a1 = v28;
      a1[1].m128i_i64[0] = (__int64)v10;
    }
    if ( v29 )
    {
      if ( a2 == 1 )
      {
        v23 = 20LL * (unsigned int)v30;
        v24 = Src[1];
        if ( (unsigned __int64)&v29[v23] > MmUserProbeAddress || &v29[v23] <= v29 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v29, v24, v23);
      }
      else
      {
        memmove(v29, Src[1], 20LL * (unsigned int)v30);
      }
    }
    goto LABEL_52;
  }
LABEL_49:
  for ( i = DXGPROCESS::GetCurrent(v16); ; DXGADAPTER::DestroyHandle(
                                             i,
                                             *((_DWORD *)Src[1] + 5 * (unsigned int)(v26 - 1))) )
  {
    v26 = v30;
    if ( !(_DWORD)v30 )
      break;
    LODWORD(v30) = v30 - 1;
  }
LABEL_52:
  if ( P != v35 && P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v13;
}
