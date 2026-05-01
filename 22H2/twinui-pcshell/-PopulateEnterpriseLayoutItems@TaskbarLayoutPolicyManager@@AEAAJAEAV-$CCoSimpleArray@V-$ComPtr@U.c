/*
 * XREFs of ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18020E1C0
 * Callers:
 *     ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x18020D680 (-GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIXMLDOMElement@@@?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIXMLDOMElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18020B07C (--$As@UIXMLDOMElement@@@-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIXML.c)
 *     ?CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z @ 0x18020BB8C (-CanApplyGroupPolicyLayout@TaskbarLayoutPolicyManager@@AEAAJPEAH0@Z.c)
 *     ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x18020BF34 (-CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ.c)
 *     ?GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18020CEC0 (-GetLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18020CFE8 (-GetMDMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18020D464 (-GetPolicyLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@AEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@W4TaskbarPinningSource@@@Z @ 0x18020DE24 (-PopulateAndSetPinned@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@UITaskbarL.c)
 *     ?SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x18020ED88 (-SetMDMPolicyLayoutTimestampToCurrent@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TaskbarLayoutPolicyManager::PopulateEnterpriseLayoutItems(
        TaskbarLayoutPolicyManager *this,
        _QWORD *a2)
{
  __int64 v4; // rdx
  int MDMLayoutXML; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  TaskbarLayoutPolicyManager *v8; // rcx
  TaskbarLayoutPolicyManager *v9; // rcx
  TaskbarLayoutPolicyManager *v10; // rcx
  struct IXMLDOMDocument2 *v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  struct IXMLDOMDocument2 *v18[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v22; // [rsp+80h] [rbp+30h] BYREF
  __int64 v23; // [rsp+88h] [rbp+38h] BYREF

  v18[0] = 0LL;
  if ( (int)TaskbarLayoutPolicyManager::CanApplyGroupPolicyLayout(this, (int *)&v22, (int *)&v23) < 0 || !(_DWORD)v22 )
  {
    if ( (unsigned int)TaskbarLayoutPolicyManager::CanApplyMDMLayout(this, v4) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
      MDMLayoutXML = TaskbarLayoutPolicyManager::GetMDMLayoutXML(v8, v18);
      v6 = MDMLayoutXML;
      if ( MDMLayoutXML < 0 )
      {
        v7 = 486LL;
        goto LABEL_12;
      }
      MDMLayoutXML = TaskbarLayoutPolicyManager::SetMDMPolicyLayoutTimestampToCurrent(v9);
      v6 = MDMLayoutXML;
      if ( MDMLayoutXML < 0 )
      {
        v7 = 487LL;
        goto LABEL_12;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
      MDMLayoutXML = TaskbarLayoutPolicyManager::GetLayoutModificationXML(v10, v18);
      v6 = MDMLayoutXML;
      if ( MDMLayoutXML < 0 )
      {
        v7 = 491LL;
        goto LABEL_12;
      }
    }
LABEL_13:
    v11 = v18[0];
    if ( v18[0] )
    {
      v22 = 0LL;
      v19 = *(_OWORD *)((char *)this + 104);
      v20 = *((_QWORD *)this + 15);
      v12 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int128 *))v18[0]->lpVtbl->setProperty)(
              v18[0],
              *((_QWORD *)this + 16),
              &v19);
      v6 = v12;
      if ( v12 < 0 )
      {
        v13 = 497LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v12);
LABEL_24:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        goto LABEL_27;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      v12 = ((__int64 (__fastcall *)(struct IXMLDOMDocument2 *, _QWORD, __int64 *))v11->lpVtbl->selectSingleNode)(
              v11,
              *((_QWORD *)this + 18),
              &v22);
      v6 = v12;
      if ( v12 < 0 )
      {
        v13 = 498LL;
        goto LABEL_18;
      }
      v23 = 0LL;
      v14 = Microsoft::WRL::ComPtr<IXMLDOMNode>::As<IXMLDOMElement>(&v22, &v23);
      v6 = v14;
      if ( v14 < 0 )
      {
        v16 = 501LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v14);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
        goto LABEL_24;
      }
      v14 = TaskbarLayoutPolicyManager::PopulateAndSetPinned(v15, a2, (__int64)&v22, 3u);
      v6 = v14;
      if ( v14 < 0 )
      {
        v16 = 502LL;
        goto LABEL_23;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    }
    v6 = 0;
    goto LABEL_27;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
  MDMLayoutXML = TaskbarLayoutPolicyManager::GetPolicyLayoutXML(this, v18);
  v6 = MDMLayoutXML;
  if ( MDMLayoutXML >= 0 )
    goto LABEL_13;
  v7 = 482LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)MDMLayoutXML);
LABEL_27:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
  return v6;
}
