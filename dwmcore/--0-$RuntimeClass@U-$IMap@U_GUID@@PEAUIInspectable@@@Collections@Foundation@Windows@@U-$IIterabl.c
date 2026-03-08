/*
 * XREFs of ??0?$RuntimeClass@U?$IMap@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@234@VFtmBase@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x18028E510
 * Callers:
 *     ??0?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultHash@U_GUID@@@1234@AEBU?$DefaultEqualityPredicate@U_GUID@@@1234@Upermission@01234@@Z @ 0x18028E36C (--0-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collections@Foundation@W.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18028EB68 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IMap<_GUID,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *> *>,Microsoft::WRL::FtmBase>::RuntimeClass<Windows::Foundation::Collections::IMap<_GUID,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *> *>,Microsoft::WRL::FtmBase>(
        _QWORD *a1)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // rcx

  *a1 = &Windows::Foundation::Collections::IMap<_GUID,IInspectable *>::`vftable';
  a1[2] = &IDDASwapChain::`vftable'{for `IDeviceResource'};
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 3));
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  *a1 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IMap<_GUID,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *> *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IMap<_GUID,IInspectable *>'};
  a1[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IMap<_GUID,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *> *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *> *>,Microsoft::WRL::FtmBase>'};
  a1[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IMap<_GUID,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *> *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *> *>'};
  a1[3] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IMap<_GUID,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *> *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  a1[8] = 1LL;
  if ( v2 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v2 + 8LL))(v2);
  return a1;
}
