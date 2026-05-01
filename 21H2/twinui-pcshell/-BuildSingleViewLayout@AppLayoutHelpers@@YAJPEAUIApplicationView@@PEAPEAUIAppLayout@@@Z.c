/*
 * XREFs of ?BuildSingleViewLayout@AppLayoutHelpers@@YAJPEAUIApplicationView@@PEAPEAUIAppLayout@@@Z @ 0x18047CAD8
 * Callers:
 *     ?InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z @ 0x18047DCCC (-InitDragVisual@WindowArrangementView@@AEAAJPEAUIUnknown@@PEAUtagRECT@@AEBUtagPOINT@@1@Z.c)
 *     ?SetApp@CDragVisual@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180495A50 (-SetApp@CDragVisual@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x1804F0E1C (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppLayoutHelpers::BuildSingleViewLayout(
        AppLayoutHelpers *this,
        struct IApplicationView *a2,
        struct IAppLayout **a3)
{
  const struct _GUID *v5; // rdx
  int v6; // ebx
  void *v8; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)a2 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  v6 = CAppLayout_CreateInstance(0LL, v5, &v8);
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(void *, AppLayoutHelpers *, _QWORD, __int64, _QWORD))(*(_QWORD *)v8 + 232LL))(
           v8,
           this,
           0LL,
           1LL,
           0LL);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IApplicationView *))v8)(
             v8,
             &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
             a2);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v6;
}
