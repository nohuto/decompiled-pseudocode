/*
 * XREFs of ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x180100B58
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800525D0 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x1800F8868 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180129D70 (McTemplateU0qqq_EventWriteTransfer.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x1801B0A08 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ??0?$com_ptr_t@VISwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChain@@@Z @ 0x1801B0A50 (--0-$com_ptr_t@VISwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChain@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_SwitchRemotingMode(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_SWITCHREMOTINGMODE *a4)
{
  bool v5; // bl
  int v6; // ecx
  int v8; // eax
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 v11; // rax
  int (__fastcall ***v12)(_QWORD, GUID *, struct CResourceTable **); // rcx
  int v13; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v14[72]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+20h] BYREF
  struct CChannelContext *v16; // [rsp+A8h] [rbp+28h] BYREF
  struct CResourceTable *v17; // [rsp+B0h] [rbp+30h] BYREF

  v17 = a3;
  v16 = a2;
  v5 = 0;
  v6 = *((_DWORD *)a4 + 1);
  if ( *((_DWORD *)this + 276) != v6 )
  {
    *((_DWORD *)this + 276) = v6;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qqq_EventWriteTransfer(v6, (unsigned int)&EVTDESC_DETECT_REMOTEAPPMODE_SWITCH, 0, v6 >= 3, v6 == 1);
    if ( *((_DWORD *)this + 276) == 6 )
    {
      PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*((CRenderTargetManager **)g_pComposition + 27));
      wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
        &v15,
        PrimaryMonitorTarget);
      if ( v15 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 144LL))(v15);
        wil::com_ptr_t<ISwapChain,wil::err_returncode_policy>::com_ptr_t<ISwapChain,wil::err_returncode_policy>(
          &v16,
          v11);
        if ( v16 )
        {
          v17 = 0LL;
          v12 = (int (__fastcall ***)(_QWORD, GUID *, struct CResourceTable **))((char *)v16
                                                                               + *(int *)(*((_QWORD *)v16 + 1) + 4LL)
                                                                               + 8);
          if ( (**v12)(v12, &GUID_d56bd476_4f78_4415_941c_d6dd54681d7c, &v17) >= 0 )
          {
            v13 = 7;
            memset_0(v14, 0, 0x40uLL);
            (*(void (__fastcall **)(struct CResourceTable *, int *))(*(_QWORD *)v17 + 64LL))(v17, &v13);
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v17);
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v16);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v15);
    }
  }
  v8 = *((_DWORD *)this + 276);
  if ( v8 )
    v5 = *((_DWORD *)a4 + 2) != 0;
  *((_BYTE *)this + 1275) = v5;
  if ( v8 >= 5 )
    CRenderTargetManager::ForceFullRender(*((CRenderTargetManager **)this + 27));
  return 0LL;
}
