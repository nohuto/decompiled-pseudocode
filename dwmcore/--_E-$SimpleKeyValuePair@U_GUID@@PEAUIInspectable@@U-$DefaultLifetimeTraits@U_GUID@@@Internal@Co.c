/*
 * XREFs of ??_E?$SimpleKeyValuePair@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@$00@Internal@Collections@Foundation@Windows@@UEAAPEAXI@Z @ 0x18028F740
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U?$IReference@I@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18028EF00 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@U-$IReference@I@Foundati.c)
 *     ?Release@ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ @ 0x1802948BC (-Release@ReferencedGitCookie@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAKXZ.c)
 */

_BYTE *__fastcall Windows::Foundation::Collections::Internal::SimpleKeyValuePair<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1>::`vector deleting destructor'(
        _BYTE *a1,
        char a2)
{
  bool v2; // zf
  void *v4; // rcx

  v2 = a1[88] == 0;
  v4 = (void *)*((_QWORD *)a1 + 10);
  if ( v2 )
  {
    if ( v4 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Release(v4);
  }
  *((_QWORD *)a1 + 10) = 0LL;
  a1[88] = 0;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IReference<unsigned int>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IReference<unsigned int>,Microsoft::WRL::FtmBase>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
