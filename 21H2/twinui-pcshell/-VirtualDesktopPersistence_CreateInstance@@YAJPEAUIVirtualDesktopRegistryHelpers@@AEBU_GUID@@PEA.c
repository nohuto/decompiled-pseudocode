/*
 * XREFs of ?VirtualDesktopPersistence_CreateInstance@@YAJPEAUIVirtualDesktopRegistryHelpers@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A6010
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x18049F4A8 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VVirtualDesktopPersistence@@V1@AEAPEAUIVirtualDesktopRegistryHelpers@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopPersistence@@AEAPEAUIVirtualDesktopRegistryHelpers@@@Z @ 0x1804A4E48 (--$MakeAndInitialize@VVirtualDesktopPersistence@@V1@AEAPEAUIVirtualDesktopRegistryHelpers@@@Deta.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopPersistence@@@WRL@Microsoft@@IEAAKXZ @ 0x1804A512C (-InternalRelease@-$ComPtr@VVirtualDesktopPersistence@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall VirtualDesktopPersistence_CreateInstance(
        struct IVirtualDesktopRegistryHelpers *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // eax
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  _DWORD *v9; // rcx
  volatile int *v10; // rcx
  volatile int *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IVirtualDesktopRegistryHelpers *v14; // [rsp+30h] [rbp+8h] BYREF
  volatile int *v15; // [rsp+38h] [rbp+10h] BYREF

  v14 = a1;
  *a3 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopPersistence>::InternalRelease(&v15);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopPersistence,VirtualDesktopPersistence,IVirtualDesktopRegistryHelpers * &>(
         (__int64 *)&v15,
         (__int64 *)&v14);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 281LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppersistence.cpp",
      (const char *)v6);
    goto LABEL_12;
  }
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_406cafa5_0c9b_4bc2_8c6d_833d4e5d703c, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v11 = v15;
    *a3 = (void *)v15;
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v11 + 8LL))(v11);
    v5 = 0;
  }
  else if ( InlineIsEqualGUID(v8, v8) || InlineIsEqualGUID(v9, &GUID_8b7b392d_3980_4b4d_a71a_1982b2ef2162) )
  {
    v10 = v15;
    v5 = 0;
    *a3 = (void *)v15;
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  else
  {
    v5 = -2147467262;
  }
  if ( v5 < 0 )
  {
    v6 = (unsigned int)v5;
    v7 = 282LL;
    goto LABEL_11;
  }
LABEL_12:
  Microsoft::WRL::ComPtr<VirtualDesktopPersistence>::InternalRelease(&v15);
  return (unsigned int)v5;
}
