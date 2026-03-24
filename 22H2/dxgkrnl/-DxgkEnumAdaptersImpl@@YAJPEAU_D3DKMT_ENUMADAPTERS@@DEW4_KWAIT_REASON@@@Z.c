/*
 * XREFs of ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x1C0221CF8
 * Callers:
 *     DxgkEnumAdapters @ 0x1C0223E40 (DxgkEnumAdapters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00EDC54 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C013C0D4 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 */

__int64 __fastcall DxgkEnumAdaptersImpl(struct _D3DKMT_ENUMADAPTERS *a1, __int64 a2, __int64 a3, enum _KWAIT_REASON a4)
{
  struct _D3DKMT_ENUMADAPTERS *v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _OWORD *v16; // rax
  unsigned int v17; // [rsp+20h] [rbp-188h] BYREF
  unsigned int v18; // [rsp+24h] [rbp-184h]
  __int64 v19; // [rsp+28h] [rbp-180h]
  _DWORD *v20; // [rsp+30h] [rbp-178h]
  __int64 v21; // [rsp+38h] [rbp-170h]
  _DWORD v22[84]; // [rsp+40h] [rbp-168h] BYREF

  v4 = a1;
  if ( a1 )
  {
    memset(v22, 0, 0x144uLL);
    v17 = 0;
    v19 = 0LL;
    v20 = &v22[1];
    v18 = 16;
    v7 = 2LL;
    v21 = 2LL;
    LOBYTE(v8) = 1;
    v10 = (int)DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v17, 1, v8, 6u);
    v11 = v17;
    if ( v17 > 0x10 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v17, v9);
      *(_QWORD *)(v12 + 24) = 1006LL;
      WdLogEvent5_WdAssertion(v12);
      v11 = v17;
    }
    if ( (unsigned int)v11 > v18 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v11, v9);
      *(_QWORD *)(v13 + 24) = 1007LL;
      WdLogEvent5_WdAssertion(v13);
      v11 = v17;
    }
    if ( (unsigned int)v11 > (unsigned int)v19 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v11, v9);
      *(_QWORD *)(v14 + 24) = 1008LL;
      WdLogEvent5_WdAssertion(v14);
      v11 = v17;
    }
    if ( (int)v10 >= 0 )
    {
      v22[0] = v11;
      if ( (unsigned __int64)&v4[1] > MmUserProbeAddress || &v4[1] <= v4 )
        *(_BYTE *)MmUserProbeAddress = 0;
      v16 = v22;
      do
      {
        *(_OWORD *)&v4->NumAdapters = *v16;
        *(_OWORD *)&v4->Adapters[0].NumOfSources = v16[1];
        *(_OWORD *)&v4->Adapters[1].AdapterLuid.HighPart = v16[2];
        *(_OWORD *)&v4->Adapters[2].AdapterLuid.LowPart = v16[3];
        *(_OWORD *)&v4->Adapters[3].hAdapter = v16[4];
        *(_OWORD *)&v4->Adapters[3].bPresentMoveRegionsPreferred = v16[5];
        *(_OWORD *)&v4->Adapters[4].NumOfSources = v16[6];
        v4 = (struct _D3DKMT_ENUMADAPTERS *)((char *)v4 + 128);
        *(_OWORD *)&v4[-1].Adapters[15].AdapterLuid.LowPart = v16[7];
        v16 += 8;
        --v7;
      }
      while ( v7 );
      *(_OWORD *)&v4->NumAdapters = *v16;
      *(_OWORD *)&v4->Adapters[0].NumOfSources = v16[1];
      *(_OWORD *)&v4->Adapters[1].AdapterLuid.HighPart = v16[2];
      *(_OWORD *)&v4->Adapters[2].AdapterLuid.LowPart = v16[3];
      v4->Adapters[3].hAdapter = *((_DWORD *)v16 + 16);
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v11, v9);
      *(_QWORD *)(v15 + 24) = v10;
      WdLogEvent5_WdError(v15);
    }
    return (unsigned int)v10;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
}
