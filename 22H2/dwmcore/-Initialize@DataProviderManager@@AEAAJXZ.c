/*
 * XREFs of ?Initialize@DataProviderManager@@AEAAJXZ @ 0x1800B4408
 * Callers:
 *     ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800B453C (-Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18009F7D8 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InitializeServer@DataProviderManager@@AEAAJXZ @ 0x1800B3E58 (-InitializeServer@DataProviderManager@@AEAAJXZ.c)
 *     ??0BamoDataProviderRegistrarPrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z @ 0x1800B4490 (--0BamoDataProviderRegistrarPrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E3DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall DataProviderManager::Initialize(struct dataprovider_AutoBamos::BamoConnection **this)
{
  int v2; // eax
  unsigned int v3; // edi
  BamoDataProviderRegistrarPrincipal *v4; // rax
  struct dataprovider_AutoBamos::BamoConnection *v5; // rdi
  struct dataprovider_AutoBamos::BamoConnection *v6; // rcx
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = DataProviderManager::InitializeServer((DataProviderManager *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)(unsigned int)v2,
      v8);
    return v3;
  }
  else
  {
    *((_QWORD *)this[3] + 23) = this;
    v4 = (BamoDataProviderRegistrarPrincipal *)DefaultHeap::AllocClear(0x40uLL);
    v5 = v4;
    if ( !v4 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    BamoDataProviderRegistrarPrincipal::BamoDataProviderRegistrarPrincipal(v4, this[3]);
    *(_QWORD *)v5 = &DataProviderRegistrarPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
    *((_QWORD *)v5 + 1) = &BamoDataProviderRegistrarPrincipal::`vftable'{for `IDataProviderRegistrarPrincipal'};
    v6 = this[4];
    if ( v6 )
      (*(void (__fastcall **)(struct dataprovider_AutoBamos::BamoConnection *))(*(_QWORD *)v6 + 8LL))(v6);
    this[4] = v5;
    result = 0LL;
    *((_QWORD *)v5 + 7) = this;
  }
  return result;
}
