/*
 * XREFs of ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C013B380
 * Callers:
 *     DxgkEnumAdapters2 @ 0x1C013B350 (DxgkEnumAdapters2.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00EDC54 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C013C0B0 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C013C0D4 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x1C013C798 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@.c)
 */

__int64 __fastcall DxgkEnumAdapters2Impl(
        struct _D3DKMT_ENUMADAPTERS2 *a1,
        __int64 a2,
        unsigned __int8 a3,
        enum _KWAIT_REASON a4)
{
  char v6; // r12
  struct _D3DKMT_ENUMADAPTERS2 *v7; // rsi
  __m128i v8; // xmm6
  char *v9; // r14
  int v10; // edi
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  size_t v17; // r8
  const void *v18; // rdx
  PVOID v19; // rcx
  bool v20; // zf
  DXGGLOBAL *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // r15d
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // rax
  DXGGLOBAL *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  struct _KTHREAD **i; // rsi
  int v38; // ecx
  struct _D3DKMT_ENUMADAPTERS2 v39; // [rsp+28h] [rbp-130h]
  __int64 v40; // [rsp+38h] [rbp-120h] BYREF
  void *Src[2]; // [rsp+40h] [rbp-118h]
  __int64 v42; // [rsp+50h] [rbp-108h]
  PVOID P; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v44[160]; // [rsp+68h] [rbp-F0h] BYREF
  int v45; // [rsp+108h] [rbp-50h]

  v6 = a2;
  v7 = a1;
  if ( !a1 )
  {
    v31 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v31 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    return 3221225485LL;
  }
  v40 = 0LL;
  *(_OWORD *)Src = 0LL;
  v42 = 2LL;
  P = 0LL;
  v45 = 0;
  if ( (_BYTE)a2 == 1 )
  {
    if ( ++a1 < v7 || (unsigned __int64)a1 > MmUserProbeAddress )
    {
      a1 = (struct _D3DKMT_ENUMADAPTERS2 *)MmUserProbeAddress;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v8 = *(__m128i *)v7;
    v39 = *v7;
  }
  else
  {
    v8 = *(__m128i *)a1;
    v39 = *a1;
  }
  v9 = (char *)_mm_srli_si128(v8, 8).m128i_u64[0];
  if ( !v9 )
  {
    v10 = 0;
    Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
    MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
LABEL_9:
    v39.NumAdapters = MaximumAdapterCount;
    goto LABEL_10;
  }
  v22 = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v25 = _mm_cvtsi128_si32(v8);
  if ( DXGGLOBAL::GetMaximumAdapterCount(v22) < v25 )
  {
    v32 = DXGGLOBAL::GetGlobal(v24, v23);
    v25 = DXGGLOBAL::GetMaximumAdapterCount(v32);
  }
  v26 = 1LL;
  if ( v25 > 1 )
    v26 = v25;
  PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(&P, v26);
  if ( !P )
  {
    v33 = WdLogNewEntry5_WdError(v28, v27);
    v10 = -1073741801;
    *(_QWORD *)(v33 + 24) = -1073741801LL;
    WdLogEvent5_WdError(v33);
    v19 = P;
    v20 = P == v44;
    goto LABEL_23;
  }
  Src[1] = P;
  HIDWORD(v40) = v25;
  v10 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v40, v6, a3, a4);
  if ( (unsigned int)v40 > v25 )
  {
    v34 = WdLogNewEntry5_WdAssertion(v29, v13);
    *(_QWORD *)(v34 + 24) = 1184LL;
    WdLogEvent5_WdAssertion(v34);
  }
  v14 = HIDWORD(v40);
  if ( (unsigned int)v40 > HIDWORD(v40) )
  {
    v35 = WdLogNewEntry5_WdAssertion(HIDWORD(v40), v13);
    *(_QWORD *)(v35 + 24) = 1185LL;
    WdLogEvent5_WdAssertion(v35);
  }
  v30 = (unsigned int)Src[0];
  if ( (unsigned int)v40 > LODWORD(Src[0]) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v36 + 24) = 1186LL;
    WdLogEvent5_WdAssertion(v36);
    v30 = (unsigned int)Src[0];
  }
  if ( v10 < 0 )
    goto LABEL_47;
  if ( HIDWORD(v40) >= v30 )
  {
    MaximumAdapterCount = v40;
    goto LABEL_9;
  }
  v10 = -1073741789;
  v39.NumAdapters = 0;
LABEL_10:
  if ( v10 >= 0 )
  {
    if ( v6 == 1 )
    {
      if ( (unsigned __int64)&v7[1] > MmUserProbeAddress || &v7[1] <= v7 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v7 = v39;
    }
    else
    {
      *v7 = v39;
    }
    if ( v9 )
    {
      if ( v6 == 1 )
      {
        v17 = 20LL * (unsigned int)v40;
        v18 = Src[1];
        if ( (unsigned __int64)&v9[v17] > MmUserProbeAddress || &v9[v17] <= v9 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v9, v18, v17);
      }
      else
      {
        memmove(v9, Src[1], 20LL * (unsigned int)v40);
      }
    }
    goto LABEL_22;
  }
LABEL_47:
  for ( i = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v14, v13, v15, v16);
        ;
        DXGADAPTER::DestroyHandle(i, *((unsigned int *)Src[1] + 5 * (unsigned int)(v38 - 1))) )
  {
    v38 = v40;
    if ( !(_DWORD)v40 )
      break;
    LODWORD(v40) = v40 - 1;
  }
LABEL_22:
  v19 = P;
  v20 = P == v44;
LABEL_23:
  if ( !v20 )
  {
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
  }
  return (unsigned int)v10;
}
