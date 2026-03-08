/*
 * XREFs of ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1C030DD7C
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C02B3024 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 *     DxgkEnsureVmBusInterface @ 0x1C031108C (DxgkEnsureVmBusInterface.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z @ 0x1C0050BF8 (--_GDXG_GUEST_GLOBAL_VMBUS@@QEAAPEAXI@Z.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x1C020B474 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 *     ?CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z @ 0x1C036DF68 (-CreateGpadlFromMdl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAU_MDL@@PEAI@Z.c)
 *     ?EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ @ 0x1C0371044 (-EnsureVmBusChannel@DXG_GUEST_GLOBAL_VMBUS@@QEAAJXZ.c)
 */

__int64 __fastcall DXGGLOBAL::EnsureVmBusInterface(DXGGLOBAL *this)
{
  char *v1; // rbp
  char v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rcx
  PMDL PagesForMdl; // rax
  struct _MDL **v7; // r14
  __int64 v8; // rsi
  const wchar_t *v9; // r9
  unsigned int v10; // esi
  PVOID MappedSystemVa; // rax
  int v12; // eax
  __int64 v13; // r12
  const wchar_t *v14; // r9
  __int64 v15; // r13
  int GpadlFromMdl; // eax
  _QWORD *v17; // rcx

  v1 = (char *)this + 456;
  v3 = 0;
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 456));
  if ( *((_QWORD *)this + 214) )
  {
    v7 = (struct _MDL **)((char *)this + 1752);
  }
  else
  {
    v3 = 1;
    v4 = operator new[](0x48uLL, 0x4B677844u, 256LL);
    if ( !v4 )
    {
      *((_QWORD *)this + 214) = 0LL;
      v7 = (struct _MDL **)((char *)this + 1752);
      v10 = -1073741801;
      goto LABEL_19;
    }
    DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE(v4, 2);
    *((_QWORD *)this + 214) = v5;
    PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, 0x808uLL, MmNonCached, 0);
    v7 = (struct _MDL **)((char *)this + 1752);
    *((_QWORD *)this + 219) = PagesForMdl;
    if ( !PagesForMdl )
    {
      v8 = 5746LL;
      WdLogSingleEntry1(2LL, 5746LL);
      v9 = L"MmAllocatePagesForMdlEx failed";
LABEL_5:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
      v10 = -1073741801;
      goto LABEL_19;
    }
    if ( (PagesForMdl->MdlFlags & 5) != 0 )
      MappedSystemVa = PagesForMdl->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
    *((_QWORD *)this + 218) = MappedSystemVa;
    if ( !MappedSystemVa )
    {
      v8 = 5753LL;
      WdLogSingleEntry1(2LL, 5753LL);
      v9 = L"MmGetSystemAddressForMdlSafe failed";
      goto LABEL_5;
    }
  }
  v12 = DXG_GUEST_GLOBAL_VMBUS::EnsureVmBusChannel(*((struct VMBCHANNEL__ ***)this + 214));
  v10 = v12;
  if ( v12 >= 0 )
  {
    if ( *((_DWORD *)this + 435) )
      goto LABEL_23;
    GpadlFromMdl = DXG_GUEST_GLOBAL_VMBUS::CreateGpadlFromMdl(
                     *((DXG_GUEST_GLOBAL_VMBUS **)this + 214),
                     *v7,
                     (unsigned int *)this + 435);
    v10 = GpadlFromMdl;
    if ( GpadlFromMdl >= 0 )
      goto LABEL_23;
    v15 = 5783LL;
    v13 = GpadlFromMdl;
    WdLogSingleEntry2(2LL, GpadlFromMdl, 5783LL);
    v14 = L"CreateGpadlFromMdl failed: 0x%I64x";
  }
  else
  {
    v13 = v12;
    WdLogSingleEntry1(2LL, v12);
    v14 = L"Failed to create global VM bus channel, returning 0x%I64x";
    v15 = 0LL;
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, v13, v15, 0LL, 0LL, 0LL);
  if ( !v3 )
    goto LABEL_23;
LABEL_19:
  if ( *v7 )
  {
    MmFreePagesFromMdl(*v7);
    *((_QWORD *)this + 218) = 0LL;
    *v7 = 0LL;
  }
  v17 = (_QWORD *)*((_QWORD *)this + 214);
  if ( v17 )
  {
    DXG_GUEST_GLOBAL_VMBUS::`scalar deleting destructor'(v17);
    *((_QWORD *)this + 214) = 0LL;
  }
LABEL_23:
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v10;
}
