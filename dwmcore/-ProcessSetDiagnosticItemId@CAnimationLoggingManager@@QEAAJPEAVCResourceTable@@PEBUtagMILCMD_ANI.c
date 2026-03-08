/*
 * XREFs of ?ProcessSetDiagnosticItemId@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETDIAGNOSTICITEMID@@@Z @ 0x180212F6C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x18003E800 (-GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z.c)
 *     ?RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x18003EA18 (-RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180049354 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetDiagnosticItemId(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_SETDIAGNOSTICITEMID *a3)
{
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v6; // rdi
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rax
  int v9; // edx
  _QWORD *v10; // rax
  _QWORD *v11; // r15
  int v12; // esi
  int v13; // ebx
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(
                          *(CResourceTable **)(*((_QWORD *)this + 6) + 32LL),
                          *((_DWORD *)a3 + 2));
  v6 = ResourceWithoutType;
  if ( ResourceWithoutType )
  {
    DebugInfoForResource = CAnimationLoggingManager::GetDebugInfoForResource(this, ResourceWithoutType);
    v9 = *((_DWORD *)a3 + 4);
    *((_DWORD *)DebugInfoForResource + 10) = v9;
    *((_DWORD *)DebugInfoForResource + 11) = *((_DWORD *)a3 + 5);
    if ( *((_DWORD *)a3 + 4) )
    {
      if ( *((_DWORD *)a3 + 3) != -1 )
      {
        v10 = operator new(0x20uLL);
        v11 = v10;
        if ( v10 )
        {
          v12 = *((_DWORD *)a3 + 3);
          v13 = *((_DWORD *)a3 + 2);
          v14 = *(_QWORD *)(*((_QWORD *)this + 2) + 496LL);
          *v10 = this;
          (*(void (__fastcall **)(CAnimationLoggingManager *))(*(_QWORD *)this + 8LL))(this);
          *((_DWORD *)v11 + 2) = v13;
          v11[2] = v14;
          *((_DWORD *)v11 + 6) = v12;
          v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 656LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 656LL));
          v16 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), _QWORD *, __int64))(*(_QWORD *)v15 + 152LL))(
                  v15,
                  lambda_c032fb9048ad168ba2bd3d1dd4629f64_::_lambda_invoker_cdecl_,
                  v11,
                  3LL);
          if ( v16 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              362LL,
              (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
              (const char *)(unsigned int)v16,
              v17);
        }
      }
    }
    else if ( !*((_QWORD *)DebugInfoForResource + 3) && !v9 )
    {
      CAnimationLoggingManager::RemoveResourceDebugInfo(this, v6);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x135,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
      (const char *)0x88980403LL);
    return 2291663875LL;
  }
}
