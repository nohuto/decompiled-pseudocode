/*
 * XREFs of ?DodSetIndirectSwapchain@ADAPTER_DISPLAY@@QEAAJIPEAX@Z @ 0x1C02B7D70
 * Callers:
 *     DxgkSetDodIndirectSwapchain @ 0x1C02D09A0 (DxgkSetDodIndirectSwapchain.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z @ 0x1C032B14C (-UpdateRenderAdapterLuid@OUTPUTDUPL_MGR_INDIRECT@@QEAAJU_LUID@@@Z.c)
 *     ?SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z @ 0x1C0355AA8 (-SwapChainOpenInternal@@YAPEAUDXGSWAPCHAIN_CONTAINER@@PEAX@Z.c)
 *     ?SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z @ 0x1C03CF198 (-SetIndirectSwapChainHandles@BLTQUEUE@@QEAAJPEAX@Z.c)
 */

int __fastcall ADAPTER_DISPLAY::DodSetIndirectSwapchain(ADAPTER_DISPLAY *this, __int64 a2, void *a3)
{
  __int64 v3; // r14
  struct DXGSWAPCHAIN_CONTAINER *v6; // rax
  struct _LUID v7; // rbx
  OUTPUTDUPL_MGR_INDIRECT *v9; // rsi
  int updated; // r15d
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(_QWORD, _QWORD, void *, struct _LUID); // rax
  int v13; // eax
  __int64 v14; // rsi
  _BYTE v15[16]; // [rsp+50h] [rbp-38h] BYREF

  v3 = (unsigned int)a2;
  if ( !*((_QWORD *)this + 56) )
    return -1073741811;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 24) )
  {
    a2 = (unsigned int)a2;
LABEL_4:
    WdLogSingleEntry1(3LL, a2);
    return -1073741811;
  }
  a2 = *((_QWORD *)this + 2);
  if ( (*(_DWORD *)(a2 + 436) & 0x100) == 0 )
    goto LABEL_4;
  v6 = SwapChainOpenInternal(a3);
  if ( !v6 || !*(_QWORD *)v6 )
  {
    WdLogSingleEntry1(2LL, a3);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Swap-chain handle (0x%I64x) is invalid",
      (__int64)a3,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741811;
  }
  v7 = *(struct _LUID *)(*(_QWORD *)v6 + 200LL);
  if ( v7 )
  {
    ObfDereferenceObject(v6);
    v9 = (OUTPUTDUPL_MGR_INDIRECT *)((*((_QWORD *)this + 15) - 24LL) & -(__int64)(*((_QWORD *)this + 15) != 0LL));
    if ( v7 == *((_QWORD *)v9 + 16)
      || (updated = OUTPUTDUPL_MGR_INDIRECT::UpdateRenderAdapterLuid(v9, v7), updated >= 0) )
    {
      v11 = *((_QWORD *)this + 2);
      v12 = *(__int64 (__fastcall **)(_QWORD, _QWORD, void *, struct _LUID))(v11 + 2136);
      if ( v12 )
      {
        v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v12)(
                *(_QWORD *)(v11 + 2112),
                (unsigned int)v3,
                a3,
                v7);
        v14 = v13;
        if ( v13 >= 0 )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (ADAPTER_DISPLAY *)((char *)this + 200), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
          *((struct _LUID *)this + 35) = v7;
          if ( v15[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
          return BLTQUEUE::SetIndirectSwapChainHandles(
                   (BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)this + 56) + 8LL) + 2920 * v3),
                   a3);
        }
        else
        {
          WdLogSingleEntry2(2LL, v13, *((_QWORD *)this + 2));
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Dod driver failed SetSwapChainHandle call with 0x%I64x",
            v14,
            *((_QWORD *)this + 2),
            0LL,
            0LL,
            0LL);
          return v14;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v11);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"SetSwapChain function not supported by Dod driver",
          *((_QWORD *)this + 2),
          0LL,
          0LL,
          0LL,
          0LL);
        return -1073741637;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v9);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to reconfigure the OUTPUTDUPL_MGR_INDIRECT (0xI64x) for a new render adapter.",
        (__int64)v9,
        0LL,
        0LL,
        0LL,
        0LL);
      return updated;
    }
  }
  else
  {
    WdLogSingleEntry1((unsigned int)(v7.HighPart + 2), 8520LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Got zero LUID for swapchain render adapter Luid ",
      8520LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return -1073741595;
  }
}
