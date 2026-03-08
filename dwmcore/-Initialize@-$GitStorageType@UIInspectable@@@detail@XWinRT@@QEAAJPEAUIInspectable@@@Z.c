/*
 * XREFs of ?Initialize@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAUIInspectable@@@Z @ 0x180293120
 * Callers:
 *     ?Insert@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAUIInspectable@@PEAE@Z @ 0x180293620 (-Insert@-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collections@Foundat.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Acquire@Git@Details@Internal@Windows@@QEAAJXZ @ 0x18028F9A0 (-Acquire@Git@Details@Internal@Windows@@QEAAJXZ.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ @ 0x1802948BC (-Release@ReferencedGitCookie@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ.c)
 */

__int64 __fastcall XWinRT::detail::GitStorageType<IInspectable>::Initialize(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _DWORD *v6; // rax
  Windows::Internal::Details::Git *v7; // rcx
  void *v8; // rdi
  int v9; // ebp
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
    return 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a2)(a2, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v10) < 0 )
  {
    v6 = DefaultHeap::Alloc(8uLL);
    v8 = v6;
    if ( v6 )
    {
      *v6 = 1;
      v6[1] = 0;
      v9 = Windows::Internal::Details::Git::Acquire(v7);
      if ( v9 >= 0 )
        v9 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64))(*(_QWORD *)qword_1803E2E60 + 24LL))(
               qword_1803E2E60,
               a2,
               &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
               (__int64)v8 + 4);
      if ( v9 < 0 )
      {
        XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Release(v8);
      }
      else
      {
        *(_QWORD *)a1 = v8;
        *(_BYTE *)(a1 + 8) = 1;
      }
    }
    else
    {
      v9 = -2147024882;
    }
    v2 = v9;
  }
  else
  {
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = a2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  return v2;
}
