/*
 * XREFs of DxgkShutdownBootGraphics @ 0x1C0178460
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178EFC (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x1C01DA0A0 (-DxgkCddDestroy@@YAJIIIQEAXE@Z.c)
 *     DpiPowerArbiterThread @ 0x1C0210150 (DpiPowerArbiterThread.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkShutdownBootGraphics(struct DXGDEVICE *a1, unsigned int a2)
{
  struct DXGGLOBAL *Global; // rax
  void *v5; // rcx
  void *v6; // rcx
  struct DXGDEVICE *v7; // rbx
  __int64 v8; // rdi
  struct _KTHREAD **Current; // rax
  _BYTE v11[16]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h]
  char v14; // [rsp+50h] [rbp-10h]
  struct DXGDEVICE *v15; // [rsp+80h] [rbp+20h] BYREF
  struct DXGDEVICE *v16; // [rsp+90h] [rbp+30h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGGLOBAL *)((char *)Global + 1632), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 405) != 4 && *((_DWORD *)DXGGLOBAL::GetGlobal() + 405) )
    InbvNotifyDisplayOwnershipChange(0LL, 0LL);
  v5 = (void *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 189);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL::GetGlobal() + 189) = 0LL;
  }
  v6 = (void *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 203);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL::GetGlobal() + 203) = 0LL;
  }
  v15 = 0LL;
  if ( a1 )
  {
    v7 = a1;
    v15 = a1;
  }
  else
  {
    if ( !a2 )
      goto LABEL_16;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v16, a2, Current, &v15);
    v7 = v15;
    if ( v15 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v15 + 8);
      v7 = v15;
    }
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v16 + 2), v16);
      v7 = v15;
    }
  }
  if ( v7 )
  {
    v8 = *((_QWORD *)v7 + 235);
    if ( v8 )
    {
      v13 = *((_QWORD *)v7 + 235);
      v14 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
      v7 = v15;
      if ( *(_DWORD *)(v8 + 200) == 1 && *((_BYTE *)v15 + 1936) )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 2928) + 736LL)
                                                                             + 8LL)
                                                                 + 560LL))(
          *((_QWORD *)v15 + 100),
          3LL,
          0LL,
          4294967293LL);
        *((_BYTE *)v7 + 1936) = 0;
      }
      if ( v14 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
    }
    if ( !a1 && _InterlockedExchangeAdd64((volatile signed __int64 *)v7 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v15 + 2), v15);
  }
LABEL_16:
  *((_DWORD *)DXGGLOBAL::GetGlobal() + 405) = 4;
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return 0LL;
}
