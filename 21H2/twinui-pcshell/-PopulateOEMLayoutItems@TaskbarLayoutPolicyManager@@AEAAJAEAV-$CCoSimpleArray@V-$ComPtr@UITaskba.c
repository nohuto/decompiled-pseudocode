/*
 * XREFs of ?PopulateOEMLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18020E590
 * Callers:
 *     ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x18020D830 (-GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18020D578 (-GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@W4TaskbarPinningSource@@@Z @ 0x18020DFD4 (-PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskbarL.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutPolicyManager::PopulateOEMLayoutItems(TaskbarLayoutPolicyManager *this, _QWORD *a2)
{
  int OEMLayoutXML; // eax
  unsigned int v5; // edi
  struct IXMLDOMDocument2 *v6; // rbx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  struct IXMLDOMDocument2 *v15; // [rsp+78h] [rbp+38h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  OEMLayoutXML = TaskbarLayoutPolicyManager::GetOEMLayoutXML(this, &v15);
  v5 = OEMLayoutXML;
  if ( OEMLayoutXML >= 0 )
  {
    v6 = v15;
    if ( v15 )
    {
      v14 = 0LL;
      v11 = *(_OWORD *)((char *)this + 104);
      v12 = *((_QWORD *)this + 15);
      v7 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int128 *))v15->lpVtbl->setProperty)(
             v15,
             *((_QWORD *)this + 16),
             &v11);
      v5 = v7;
      if ( v7 < 0 )
      {
        v8 = 516LL;
LABEL_10:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v7);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        goto LABEL_13;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      v7 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int64 *))v6->lpVtbl->selectSingleNode)(
             v6,
             *((_QWORD *)this + 18),
             &v14);
      v5 = v7;
      if ( v7 < 0 )
      {
        v8 = 517LL;
        goto LABEL_10;
      }
      v7 = TaskbarLayoutPolicyManager::PopulateAndSetPinned(v9, a2, (__int64)&v14, 2u);
      v5 = v7;
      if ( v7 < 0 )
      {
        v8 = 518LL;
        goto LABEL_10;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    }
    v5 = 0;
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FF,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)OEMLayoutXML);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return v5;
}
