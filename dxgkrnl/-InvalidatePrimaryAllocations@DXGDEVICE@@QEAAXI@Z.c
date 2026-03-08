/*
 * XREFs of ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C02E6868
 * Callers:
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C017E400 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C01C7400 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02B7460 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C00032F0 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::InvalidatePrimaryAllocations(DXGDEVICE *this, unsigned int a2)
{
  __int64 v2; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // esi
  _QWORD *v9; // rax
  _BYTE v10[8]; // [rsp+50h] [rbp-48h] BYREF
  DXGPUSHLOCK *v11; // [rsp+58h] [rbp-40h]
  int i; // [rsp+60h] [rbp-38h]

  v2 = a2;
  if ( a2 >= *((_DWORD *)this + 472) )
  {
    WdLogSingleEntry1(1LL, 3761LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < GetNumVidPnSources()",
      3761LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3762LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3762LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 235)) )
  {
    WdLogSingleEntry1(1LL, 3763LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDisplayAdapter(VidPnSourceId)->IsCoreResourceExclusiveOwner()",
      3763LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 116) )
  {
    WdLogSingleEntry1(1LL, 3764LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGDEVICECLIENT_LEGACYUSER == GetClientType()",
      3764LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10, (struct _KTHREAD **)this + 42, 0);
  DXGPUSHLOCK::AcquireExclusive(v11);
  *((_DWORD *)this + v2 + 310) &= ~0x200u;
  v8 = 0;
  for ( i = 2; v8 < *((_DWORD *)this + v2 + 246); ++v8 )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + v2 + 107) + 8LL * v8) )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
      v9[3] = *(_QWORD *)(*((_QWORD *)this + v2 + 107) + 8LL * v8);
      v9[4] = v8;
      v9[5] = v2;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v2 + 107) + 8LL * v8) + 48LL) + 4LL) & 0x10) != 0 )
      {
        WdLogSingleEntry1(1LL, 3776LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"!m_PrimaryAllocation[VidPnSourceId][Index]->m_pAllocation->m_Invalidated",
          3776LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 184LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v2 + 107) + 8LL * v8) + 48LL) + 8LL));
      v5 = *(_QWORD *)(*((_QWORD *)this + v2 + 107) + 8LL * v8);
      *(_DWORD *)(*(_QWORD *)(v5 + 48) + 4LL) |= 0x10u;
      *(_QWORD *)(*((_QWORD *)this + v2 + 107) + 8LL * v8) = 0LL;
      --*((_BYTE *)this + 4 * v2 + 1240);
    }
  }
  DXGDEVICE::SetDisplayedPrimary(this, v2, 0LL, 0, 1u);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
}
