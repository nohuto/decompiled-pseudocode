/*
 * XREFs of ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C01C7720
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
 *     ?GetPinnedPrimary@DXGDEVICE@@QEAAII@Z @ 0x1C000B384 (-GetPinnedPrimary@DXGDEVICE@@QEAAII@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::UnpinPrimaryAllocations(DXGDEVICE *this, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned int v8; // ebp
  __int64 i; // rdi
  __int64 v10; // rax
  _BYTE v11[8]; // [rsp+50h] [rbp-48h] BYREF
  DXGPUSHLOCK *v12; // [rsp+58h] [rbp-40h]
  int v13; // [rsp+60h] [rbp-38h]

  v2 = a2;
  if ( a2 >= *((_DWORD *)this + 472) )
  {
    WdLogSingleEntry1(1LL, 3900LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < GetNumVidPnSources()",
      3900LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3901LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      3901LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 235)) )
  {
    WdLogSingleEntry1(1LL, 3902LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDisplayAdapter(VidPnSourceId)->IsCoreResourceExclusiveOwner()",
      3902LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 116) != 1 )
  {
    WdLogSingleEntry1(1LL, 3903LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGDEVICECLIENT_USER == GetClientType()",
      3903LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)DXGDEVICE::GetPinnedPrimary((struct _KTHREAD **)this, v2) )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *((_QWORD *)this + 235) == v7 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)this + 42, 0);
      DXGPUSHLOCK::AcquireExclusive(v12);
      v8 = 0;
      v13 = 2;
      for ( i = v2; v8 < *((_DWORD *)this + v2 + 246); ++v8 )
      {
        v10 = *(_QWORD *)(*((_QWORD *)this + v2 + 107) + 8LL * v8);
        if ( v10 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v10 + 48) + 4LL) & 1) == 0 )
          {
            WdLogSingleEntry1(1LL, 3919LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_PrimaryAllocation[VidPnSourceId][Index]->m_pAllocation->m_Primary",
              3919LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 224LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v2 + 107) + 8LL * v8) + 24LL));
        }
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
    }
    else
    {
      i = v2;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v4, v5, v6) + 24) = i;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)this + 42, 0);
    DXGPUSHLOCK::AcquireExclusive(v12);
    *((_DWORD *)this + i + 310) &= 0xFFFFFCFF;
    v13 = 2;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
    DXGDEVICE::SetDisplayedPrimary(this, v2, 0LL, 0, 1u);
  }
}
