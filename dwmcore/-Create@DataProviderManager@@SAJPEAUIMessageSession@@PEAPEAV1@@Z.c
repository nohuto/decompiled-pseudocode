/*
 * XREFs of ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800FC400
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800AE4F0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0DataProviderManager@@AEAA@PEAUIMessageSession@@@Z @ 0x1800FC4C4 (--0DataProviderManager@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ??0DataProviderRegistrarPrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z @ 0x1800FC580 (--0DataProviderRegistrarPrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z.c)
 *     ?InitializeServer@DataProviderManager@@AEAAJXZ @ 0x1800FC86C (-InitializeServer@DataProviderManager@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VDataProviderManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801B0A98 (--1-$ComPtr@VDataProviderManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall DataProviderManager::Create(struct IMessageSession *a1, struct DataProviderManager **a2)
{
  DataProviderManager *v4; // rax
  DataProviderManager *v5; // rax
  DataProviderManager *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  DataProviderRegistrarPrincipal *v9; // rax
  DataProviderRegistrarPrincipal *v10; // rax
  __int64 v11; // rcx
  DataProviderRegistrarPrincipal *v12; // rdi
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DataProviderManager *v15; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = (DataProviderManager *)DefaultHeap::AllocClear(0x80uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = DataProviderManager::DataProviderManager(v4, a1);
  v15 = v5;
  v6 = v5;
  if ( !v5 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)0x8007000ELL);
    v8 = -2147024882;
    goto LABEL_12;
  }
  CMILRefCountImpl::AddReference((DataProviderManager *)((char *)v5 + 8));
  v7 = DataProviderManager::InitializeServer(v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)(unsigned int)v7);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)v8);
LABEL_12:
    Microsoft::WRL::ComPtr<DataProviderManager>::~ComPtr<DataProviderManager>(&v15);
    return v8;
  }
  *(_QWORD *)(*((_QWORD *)v6 + 3) + 248LL) = v6;
  v9 = (DataProviderRegistrarPrincipal *)DefaultHeap::AllocClear(0x40uLL);
  if ( !v9 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v10 = DataProviderRegistrarPrincipal::DataProviderRegistrarPrincipal(
          v9,
          *((struct dataprovider_AutoBamos::BamoConnection **)v6 + 3));
  v11 = *((_QWORD *)v6 + 4);
  v12 = v10;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  *((_QWORD *)v6 + 4) = v12;
  result = 0LL;
  *((_QWORD *)v12 + 7) = v6;
  *a2 = v6;
  return result;
}
