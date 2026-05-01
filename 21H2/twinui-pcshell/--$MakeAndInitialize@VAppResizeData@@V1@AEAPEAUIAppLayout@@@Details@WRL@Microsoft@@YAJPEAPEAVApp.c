/*
 * XREFs of ??$MakeAndInitialize@VAppResizeData@@V1@AEAPEAUIAppLayout@@@Details@WRL@Microsoft@@YAJPEAPEAVAppResizeData@@AEAPEAUIAppLayout@@@Z @ 0x180489F68
 * Callers:
 *     ?AppResizeData_CreateInstance@@YAJPEAUIAppLayout@@AEBU_GUID@@PEAPEAX@Z @ 0x18048A20C (-AppResizeData_CreateInstance@@YAJPEAUIAppLayout@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180096F1C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITaggableTarget@@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B8930 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITag_ea_1801B8930.c)
 *     ??1?$ComPtr@VDragData@@@WRL@Microsoft@@QEAA@XZ @ 0x1804755FC (--1-$ComPtr@VDragData@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0AppResizeData@@QEAA@XZ @ 0x18048A048 (--0AppResizeData@@QEAA@XZ.c)
 *     ?ComputeDropTargets@AppResizeData@@AEAAJXZ @ 0x18048A378 (-ComputeDropTargets@AppResizeData@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AppResizeData,AppResizeData,IAppLayout * &>(
        __int64 **a1,
        __int64 *a2)
{
  void *v4; // rax
  unsigned int v5; // ebx
  __int64 *v6; // rdi
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v11; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  if ( v4 )
  {
    v6 = (__int64 *)AppResizeData::AppResizeData((AppResizeData *)v4);
    v11 = v6;
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v6 + 5, *a2);
    v7 = AppResizeData::ComputeDropTargets((AppResizeData *)v6);
    v5 = v7;
    if ( v7 >= 0 )
    {
      if ( v6 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITaggableTarget,CWRLObjectWithSite>::AddRef((__int64)v6);
      *a1 = v6;
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\appresizedata.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<DragData>::~ComPtr<DragData>((__int64)&v11);
  }
  else
  {
    v5 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v10);
  return v5;
}
