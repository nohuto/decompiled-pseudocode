/*
 * XREFs of ??$MakeAndInitialize@VDragData@@V1@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Details@WRL@Microsoft@@YAJPEAPEAVDragData@@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180486E1C
 * Callers:
 *     ?DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@AEBU_GUID@@PEAPEAX@Z @ 0x1804871AC (-DragData_CreateInstance@@YAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180096EFC (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITaggableTarget@@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B8780 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITag_ea_1801B8780.c)
 *     ??1?$ComPtr@VDragData@@@WRL@Microsoft@@QEAA@XZ @ 0x18047526C (--1-$ComPtr@VDragData@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0DragData@@QEAA@XZ @ 0x180486EF8 (--0DragData@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180487AD4 (-RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4Dra.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<DragData,DragData,IUnknown * &,IAppLayout * &,IApplicationView * &,enum WindowArrangementViewDragData::DragDataFlags &>(
        DragData **a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5)
{
  void *v9; // rax
  int v10; // edi
  DragData *v11; // rbx
  DragData *v13; // [rsp+30h] [rbp-28h] BYREF
  void *v14; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v9 = operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v9;
  if ( v9 )
  {
    v11 = DragData::DragData((DragData *)v9);
    v13 = v11;
    v14 = 0LL;
    v10 = DragData::RuntimeClassInitialize(v11, *a2, *a3, *a4, *a5);
    if ( v10 >= 0 )
    {
      if ( v11 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITaggableTarget,CWRLObjectWithSite>::AddRef((__int64)v11);
      *a1 = v11;
      v10 = 0;
    }
    Microsoft::WRL::ComPtr<DragData>::~ComPtr<DragData>((__int64)&v13);
  }
  else
  {
    v10 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v14);
  return (unsigned int)v10;
}
