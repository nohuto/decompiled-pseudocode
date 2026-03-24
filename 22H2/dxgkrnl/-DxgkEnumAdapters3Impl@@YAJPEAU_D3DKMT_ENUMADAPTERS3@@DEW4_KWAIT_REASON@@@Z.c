/*
 * XREFs of ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x1C0173BF0
 * Callers:
 *     NtDxgkEnumAdapters3 @ 0x1C0173BC0 (NtDxgkEnumAdapters3.c)
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

__int64 __fastcall DxgkEnumAdapters3Impl(struct _D3DKMT_ENUMADAPTERS3 *a1, __int64 a2, char a3, enum _KWAIT_REASON a4)
{
  char v5; // r12
  struct _D3DKMT_ENUMADAPTERS3 *v6; // rdi
  __m128i v7; // xmm6
  __int64 v8; // xmm7_8
  char *v9; // r14
  int v10; // esi
  DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  int MaximumAdapterCount; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int128 v18; // xmm6
  size_t v19; // r8
  const void *v20; // rdx
  DXGGLOBAL *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // r15d
  unsigned int v27; // edx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // rax
  unsigned int v34; // edi
  __int64 v35; // rax
  PVOID v36; // rcx
  bool v37; // zf
  __int64 v38; // rax
  DXGGLOBAL *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  struct _KTHREAD **i; // rdi
  int v45; // ecx
  __int64 v46; // [rsp+28h] [rbp-150h] BYREF
  void *Src[2]; // [rsp+30h] [rbp-148h]
  __int64 v48; // [rsp+40h] [rbp-138h]
  _BYTE v49[24]; // [rsp+48h] [rbp-130h]
  _KWAIT_REASON v50; // [rsp+60h] [rbp-118h]
  PVOID P; // [rsp+70h] [rbp-108h] BYREF
  _BYTE v52[160]; // [rsp+78h] [rbp-100h] BYREF
  int v53; // [rsp+118h] [rbp-60h]

  v50 = a4;
  v5 = a2;
  v6 = a1;
  if ( !a1 )
  {
    v33 = WdLogNewEntry5_WdError(0LL, a2);
    v34 = -1073741811;
    *(_QWORD *)(v33 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v33);
    return v34;
  }
  *(_OWORD *)&v49[8] = 0LL;
  v46 = 0LL;
  *(_OWORD *)Src = 0LL;
  P = 0LL;
  v53 = 0;
  if ( (_BYTE)a2 == 1 )
  {
    a1 = (struct _D3DKMT_ENUMADAPTERS3 *)((char *)a1 + 24);
    if ( a1 < v6 || (unsigned __int64)a1 > MmUserProbeAddress )
    {
      a1 = (struct _D3DKMT_ENUMADAPTERS3 *)MmUserProbeAddress;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v7 = *(__m128i *)v6;
    *(_OWORD *)v49 = *(_OWORD *)v6;
    v8 = *((_QWORD *)v6 + 2);
    *(_QWORD *)&v49[16] = v8;
  }
  else
  {
    v7 = *(__m128i *)a1;
    *(_OWORD *)v49 = *(_OWORD *)a1;
    v8 = *((_QWORD *)a1 + 2);
    *(_QWORD *)&v49[16] = v8;
  }
  if ( (v7.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    v35 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v35 + 24) = v7.m128i_i64[0];
    v34 = -1073741811;
    *(_QWORD *)(v35 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    v36 = P;
    v37 = P == v52;
LABEL_46:
    if ( !v37 && v36 )
      ExFreePoolWithTag(v36, 0);
    return v34;
  }
  v48 = v7.m128i_i64[0];
  v9 = *(char **)&v49[16];
  if ( !*(_QWORD *)&v49[16] )
  {
    v10 = 0;
    Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
    MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global, v12);
LABEL_10:
    *(_DWORD *)&v49[8] = MaximumAdapterCount;
    goto LABEL_11;
  }
  v22 = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v26 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
  *(_DWORD *)&v49[8] = v26;
  if ( (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(v22, v23) < v26 )
  {
    v39 = DXGGLOBAL::GetGlobal(v25, v24);
    v26 = DXGGLOBAL::GetMaximumAdapterCount(v39, v40);
    *(_DWORD *)&v49[8] = v26;
  }
  v27 = 1;
  if ( v26 > 1 )
    v27 = v26;
  PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(&P, v27);
  if ( !P )
  {
    v38 = WdLogNewEntry5_WdError(v29, v28);
    v34 = -1073741801;
    *(_QWORD *)(v38 + 24) = -1073741801LL;
    WdLogEvent5_WdError(v38);
    v36 = P;
    v37 = P == v52;
    goto LABEL_46;
  }
  Src[1] = P;
  HIDWORD(v46) = v26;
  LOBYTE(v30) = a3;
  v10 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v46, v5, v30, v50);
  if ( (unsigned int)v46 > v26 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v31, v14);
    *(_QWORD *)(v41 + 24) = 1399LL;
    WdLogEvent5_WdAssertion(v41);
  }
  v15 = HIDWORD(v46);
  if ( (unsigned int)v46 > HIDWORD(v46) )
  {
    v42 = WdLogNewEntry5_WdAssertion(HIDWORD(v46), v14);
    *(_QWORD *)(v42 + 24) = 1400LL;
    WdLogEvent5_WdAssertion(v42);
  }
  v32 = (unsigned int)Src[0];
  if ( (unsigned int)v46 > LODWORD(Src[0]) )
  {
    v43 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v43 + 24) = 1401LL;
    WdLogEvent5_WdAssertion(v43);
    v32 = (unsigned int)Src[0];
  }
  if ( v10 < 0 )
    goto LABEL_52;
  if ( HIDWORD(v46) >= v32 )
  {
    MaximumAdapterCount = v46;
    goto LABEL_10;
  }
  v10 = -1073741789;
  *(_DWORD *)&v49[8] = 0;
LABEL_11:
  v18 = *(_OWORD *)v49;
  if ( v10 >= 0 )
  {
    if ( v5 == 1 )
    {
      if ( (unsigned __int64)v6 + 24 > MmUserProbeAddress || (struct _D3DKMT_ENUMADAPTERS3 *)((char *)v6 + 24) <= v6 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)v6 = v18;
      *((_QWORD *)v6 + 2) = v8;
    }
    else
    {
      *(_OWORD *)v6 = *(_OWORD *)v49;
      *((_QWORD *)v6 + 2) = v8;
    }
    if ( v9 )
    {
      if ( v5 == 1 )
      {
        v19 = 20LL * (unsigned int)v46;
        v20 = Src[1];
        if ( (unsigned __int64)&v9[v19] > MmUserProbeAddress || &v9[v19] <= v9 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v9, v20, v19);
      }
      else
      {
        memmove(v9, Src[1], 20LL * (unsigned int)v46);
      }
    }
    goto LABEL_23;
  }
LABEL_52:
  for ( i = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v15, v14, v16, v17);
        ;
        DXGADAPTER::DestroyHandle(i, *((unsigned int *)Src[1] + 5 * (unsigned int)(v45 - 1))) )
  {
    v45 = v46;
    if ( !(_DWORD)v46 )
      break;
    LODWORD(v46) = v46 - 1;
  }
LABEL_23:
  if ( P != v52 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return (unsigned int)v10;
}
