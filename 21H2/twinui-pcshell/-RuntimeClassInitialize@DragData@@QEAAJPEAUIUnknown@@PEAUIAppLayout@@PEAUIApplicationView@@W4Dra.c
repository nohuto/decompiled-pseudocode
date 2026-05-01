/*
 * XREFs of ?RuntimeClassInitialize@DragData@@QEAAJPEAUIUnknown@@PEAUIAppLayout@@PEAUIApplicationView@@W4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180487E64
 * Callers:
 *     ??$MakeAndInitialize@VDragData@@V1@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Details@WRL@Microsoft@@YAJPEAPEAVDragData@@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@AEAW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1804871AC (--$MakeAndInitialize@VDragData@@V1@AEAPEAUIUnknown@@AEAPEAUIAppLayout@@AEAPEAUIApplicationView@@.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x180487980 (-InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragData::RuntimeClassInitialize(__int64 a1, IUnknown *a2, __int64 a3, __int64 a4, char a5)
{
  HRESULT Service; // eax
  unsigned int v10; // ebx
  void *v11; // rbx
  int inited; // eax
  __int64 v13; // rdx
  void *ppvOut[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 16), (__int64)a2);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 40), a3);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 48), a4);
  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)ppvOut);
  Service = IUnknown_QueryService(
              a2,
              (const GUID *const)&SID_IImmersiveMonitorService,
              &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
              ppvOut);
  v10 = Service;
  if ( Service >= 0 )
  {
    v17 = 0LL;
    v11 = ppvOut[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    inited = (*(__int64 (__fastcall **)(void *, _QWORD, GUID *, GUID *, __int64 *))(*(_QWORD *)v11 + 72LL))(
               v11,
               0LL,
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
               &v17);
    v10 = inited;
    if ( inited >= 0 )
    {
      inited = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 72LL))(v17, a1 + 56);
      v10 = inited;
      if ( inited >= 0 )
      {
        *(_DWORD *)(a1 + 84) = MulDiv(*(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60), 15, 100);
        *(_DWORD *)(a1 + 88) = MulDiv(*(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60), 10, 100);
        *(_DWORD *)(a1 + 92) = MulDiv(*(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 56), 33, 100);
        inited = DragData::InitDropTargets(a1, a5);
        v10 = inited;
        if ( inited >= 0 )
        {
LABEL_10:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
          goto LABEL_11;
        }
        v13 = 103LL;
      }
      else
      {
        v13 = 97LL;
      }
    }
    else
    {
      v13 = 95LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
      (const char *)(unsigned int)inited);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
    (const char *)(unsigned int)Service);
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)ppvOut);
  return v10;
}
