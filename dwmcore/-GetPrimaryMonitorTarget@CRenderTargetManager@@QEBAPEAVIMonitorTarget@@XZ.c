/*
 * XREFs of ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800525D0
 * Callers:
 *     ?GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x180032A40 (-GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z.c)
 *     ?Present@CRenderTargetManager@@QEAAJXZ @ 0x18004D1E0 (-Present@CRenderTargetManager@@QEAAJXZ.c)
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004DCA8 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004E430 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?CalculatePresentAndGlitchDeadlines@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004ED40 (-CalculatePresentAndGlitchDeadlines@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z @ 0x1800509B0 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAA_NPEAVCFrameInfo@@I@Z.c)
 *     ?PostPresent@CRenderTargetManager@@QEAA_N_N@Z @ 0x180053430 (-PostPresent@CRenderTargetManager@@QEAA_N_N@Z.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800664C0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x1800A8D04 (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x1800CD87C (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1800CDAF4 (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x180100B58 (-Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUta.c)
 *     ?GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z @ 0x1801B9E90 (-GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1801E6860 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?SendMetaData@CRemoteAppRenderTarget@@IEBAJAEBU_DWMIndirectMetaData@@@Z @ 0x1801E8A90 (-SendMetaData@CRemoteAppRenderTarget@@IEBAJAEBU_DWMIndirectMetaData@@@Z.c)
 *     ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x1802151A8 (-LockAndRead@CDebugVisualImage@@QEAAXXZ.c)
 *     SendRemotingMetaData @ 0x18022B584 (SendRemotingMetaData.c)
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z @ 0x180253D70 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180279008 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

struct IMonitorTarget *__fastcall CRenderTargetManager::GetPrimaryMonitorTarget(CRenderTargetManager *this)
{
  volatile signed __int32 **v1; // rbx
  volatile signed __int32 *v2; // rdi
  volatile signed __int32 *v3; // rbx
  __int64 v4; // rax
  volatile signed __int32 *v5; // rax
  __int64 v6; // rcx
  int v8; // eax
  int v9; // edi
  BOOL v10; // eax
  char v11; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+80h] [rbp+20h] BYREF
  volatile signed __int32 *v15; // [rsp+88h] [rbp+28h] BYREF

  v1 = (volatile signed __int32 **)*((_QWORD *)this + 1);
  v2 = 0LL;
  if ( v1 == *((volatile signed __int32 ***)this + 2) )
    return (struct IMonitorTarget *)v2;
  v3 = *v1;
  v15 = 0LL;
  v4 = *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1
     - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9.Data4
       - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v4 )
  {
    v15 = v3;
LABEL_6:
    if ( *((int *)v3 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
    {
      while ( 1 )
      {
        v8 = IsKernelDebuggerPresent();
        Response = 63;
        v9 = v8;
        if ( !v8 )
        {
          v10 = IsDebuggerPresent();
          v11 = Response;
          if ( v10 )
            v11 = 103;
          LOBYTE(Response) = v11;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
          word_1803392B0,
          word_1803392B0,
          "Function: ",
          L"CMILRefCountImpl::AddReference",
          ", ",
          L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          23);
        if ( v9 )
        {
          DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
        }
        else
        {
          DbgPrintEx(
            0x65u,
            0,
            "(No kernel debugger is present.) Respond with:\n"
            "  g                    -- Go (continue)\n"
            "  eb 0x%p 'p';g  -- terminate Process\n"
            "  eb 0x%p 't';g  -- terminate Thread\n"
            " or regular debugging.\n",
            &Response,
            &Response);
          __debugbreak();
        }
        if ( (char)Response > 98 )
        {
          if ( (char)Response == 103 )
            break;
          if ( (char)Response == 105 )
            goto LABEL_37;
          if ( (char)Response != 112 )
          {
            if ( (char)Response != 116 )
              goto LABEL_36;
            goto LABEL_34;
          }
LABEL_35:
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_36:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
        }
        else
        {
          if ( (char)Response == 98 || (char)Response == 66 )
          {
            __debugbreak();
            break;
          }
          if ( (char)Response == 71 )
            break;
          if ( (char)Response != 73 )
          {
            if ( (char)Response != 80 )
            {
              if ( (char)Response != 84 )
                goto LABEL_36;
LABEL_34:
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_36;
            }
            goto LABEL_35;
          }
LABEL_37:
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
        }
      }
    }
    _InterlockedIncrement(v3 + 2);
    v5 = v15;
    v2 = v15;
    goto LABEL_8;
  }
  if ( (*(int (__fastcall **)(volatile signed __int32 *, GUID *, volatile signed __int32 **))(*(_QWORD *)v3 + 40LL))(
         v3,
         &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
         &v15) >= 0 )
    goto LABEL_6;
  v5 = 0LL;
  v15 = 0LL;
LABEL_8:
  if ( v5 )
  {
    v6 = (__int64)v5 + *(int *)(*((_QWORD *)v5 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (struct IMonitorTarget *)v2;
}
