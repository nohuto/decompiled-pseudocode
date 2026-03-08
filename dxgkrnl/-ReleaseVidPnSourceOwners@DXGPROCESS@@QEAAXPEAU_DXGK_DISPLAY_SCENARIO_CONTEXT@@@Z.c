/*
 * XREFs of ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017C4F4
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8400 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     DxgkReleaseProcessVidPnSourceOwners @ 0x1C0342350 (DxgkReleaseProcessVidPnSourceOwners.c)
 * Callees:
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0003504 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0006714 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C00071C4 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007398 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E58D0 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

void __fastcall DXGPROCESS::ReleaseVidPnSourceOwners(struct _KTHREAD **this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  char *v4; // r14
  struct _KTHREAD *v5; // rsi
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v7; // rbx
  ADAPTER_DISPLAY **v8; // rdi
  _QWORD v9[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v10[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v11[144]; // [rsp+70h] [rbp-90h] BYREF

  if ( this[16] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 3423LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsMutexOwner()", 3423LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = (char *)(this + 27);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 27, 0LL);
  this[28] = KeGetCurrentThread();
  v5 = this[40];
  v10[0] = this + 40;
  while ( 1 )
  {
    v10[1] = v5;
    Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v10);
    v7 = Current;
    if ( !Current )
      break;
    v8 = (ADAPTER_DISPLAY **)*((_QWORD *)Current + 235);
    if ( v8 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v9, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, (struct DXGADAPTER *const)v8, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11, 0LL) >= 0 )
      {
        if ( !v8[365] )
        {
          WdLogSingleEntry1(1LL, 3459LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
            3459LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v8[365], v7)
          || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(v8[365], v7) )
        {
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v11);
          DxgkReleaseVidPnSourceOwnerAndRestartCdds(v7, a2, 0);
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11);
      if ( v9[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v9);
    }
    v5 = *(struct _KTHREAD **)v5;
  }
  *((_QWORD *)v4 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
}
