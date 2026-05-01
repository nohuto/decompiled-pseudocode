/*
 * XREFs of ?FindAppItem@CAppLayout@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutItem@@PEAI@Z @ 0x1804F13B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$FindEx@VCAppLayoutItemFinderByApplication@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByApplication@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804F06E0 (--$FindEx@VCAppLayoutItemFinderByApplication@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@U.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::FindAppItem(
        RTL_SRWLOCK *this,
        struct IImmersiveApplication *a2,
        struct IAppLayoutItem **a3,
        unsigned int *a4)
{
  RTL_SRWLOCK *v8; // rbp
  RTL_SRWLOCK *v9; // r15
  __int64 v10; // r8
  int v11; // esi
  unsigned int v12; // r14d
  struct IImmersiveApplication *v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF

  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0;
  v8 = this + 2;
  AcquireSRWLockShared(this + 2);
  v15 = 0LL;
  v14 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
  v9 = this + 8;
  v11 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByApplication>(
          &this[8].Ptr,
          (__int64)&v14,
          v10,
          &v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  if ( v11 >= 0 )
  {
    v12 = v16;
    if ( a3 )
      v11 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IAppLayoutItem **))v9->Ptr + v16))(
              *((_QWORD *)v9->Ptr + v16),
              &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
              a3);
    if ( v11 >= 0 && a4 )
      *a4 = v12;
  }
  if ( v8 )
    ReleaseSRWLockShared(v8);
  return (unsigned int)v11;
}
