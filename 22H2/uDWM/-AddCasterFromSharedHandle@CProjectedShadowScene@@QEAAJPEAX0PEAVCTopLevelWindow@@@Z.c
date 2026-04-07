/*
 * XREFs of ?AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z @ 0x1800BB7C8
 * Callers:
 *     ?AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z @ 0x180094400 (-AddProjectedShadowCaster@CTopLevelWindow@@QEAAJPEAVCProjectedShadowScene@@PEAX1@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x18001202C (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012D8C (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ?AddCasterFromSharedHandle@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAXPEAVCVisual@@@Z @ 0x1800BB8B8 (-AddCasterFromSharedHandle@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAXPEAVCVi.c)
 *     ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800BC6DC (-UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 */

__int64 __fastcall CProjectedShadowScene::AddCasterFromSharedHandle(
        CProjectedShadowScene::CProjectedShadowSceneInstance **this,
        void *a2,
        void *a3,
        struct CTopLevelWindow *a4)
{
  int updated; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  CDesktopManager *v11; // rcx
  struct IDCompositionDesktopDevicePartner *DCompositionInteropDevice; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  updated = CProjectedShadowScene::CProjectedShadowSceneInstance::AddCasterFromSharedHandle(this[3], a2, a4);
  v9 = updated;
  if ( updated >= 0 )
  {
    updated = CProjectedShadowScene::CProjectedShadowSceneInstance::AddCasterFromSharedHandle(this[4], a3, a4);
    v9 = updated;
    if ( updated >= 0 )
    {
      *((_BYTE *)a4 + 241) |= 0x20u;
      updated = CProjectedShadowScene::UpdateProjectedShadowReceiverVisual((CProjectedShadowScene *)this);
      v9 = updated;
      if ( updated >= 0 )
      {
        DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice(v11);
        updated = (*(__int64 (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)DCompositionInteropDevice
                                                                                        + 24LL))(DCompositionInteropDevice);
        v9 = updated;
        if ( updated >= 0 )
        {
          v9 = 0;
          goto LABEL_11;
        }
        v10 = 66LL;
      }
      else
      {
        v10 = 65LL;
      }
    }
    else
    {
      v10 = 62LL;
    }
  }
  else
  {
    v10 = 61LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)(unsigned int)updated);
LABEL_11:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v9;
}
