/*
 * XREFs of ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C02E89D4
 * Callers:
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C017E400 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C01C7400 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02B7460 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C02D27C8 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C02B73F8 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C02E75E0 (-PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinAllDirectFlipAllocations(
        DXGDEVICE *this,
        unsigned int a2,
        int a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v4; // rdi
  struct DXGALLOCATION *v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rsi
  __int64 v8; // rcx
  int v10; // [rsp+90h] [rbp+18h] BYREF
  struct COREDEVICEACCESS *v11; // [rsp+98h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  v4 = a2;
  if ( a2 >= *((_DWORD *)this + 472) )
  {
    WdLogSingleEntry1(1LL, 7138LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < GetNumVidPnSources()",
      7138LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 7139LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      7139LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 235)) )
  {
    WdLogSingleEntry1(1LL, 7140LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDisplayAdapter(VidPnSourceId)->IsCoreResourceExclusiveOwner()",
      7140LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 116) != 1 )
  {
    WdLogSingleEntry1(1LL, 7141LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGDEVICECLIENT_USER == GetClientType()",
      7141LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)this + v4 + 310) & 0x100) != 0 )
  {
    WdLogSingleEntry1(1LL, 7142LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_PrimaryDescription[VidPnSourceId].Pinned == FALSE",
      7142LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)this + v4 + 310) & 0x200) != 0 )
  {
    WdLogSingleEntry1(1LL, 7143LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_PrimaryDescription[VidPnSourceId].DisplayModeSet == FALSE",
      7143LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LODWORD(v11) = 0;
  LOBYTE(v10) = 0;
  do
  {
    v6 = DXGDEVICE::PopDirectFlipAllocationFromList(
           (struct _KTHREAD **)this,
           v4,
           (unsigned int *)&v11,
           (unsigned __int8 *)&v10);
    v7 = (struct _EX_RUNDOWN_REF *)v6;
    if ( v6 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 224LL))(
        *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
        *((_QWORD *)v6 + 3));
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v7[5].Count + 72));
      ExReleaseRundownProtection(v7 + 11);
    }
  }
  while ( !(_BYTE)v10 );
  v8 = *((_QWORD *)this + 235);
  if ( v8 == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
    ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v8 + 2920), v4);
  return 0LL;
}
