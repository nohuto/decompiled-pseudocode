/*
 * XREFs of ?GetGlobalRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@AEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180017860
 * Callers:
 *     ?get_GamingRelatedProcessNames@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x18003B810 (-get_GamingRelatedProcessNames@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@W.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeserializeRelatedProcessArray@@YAJQEAGKAEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800172E4 (-DeserializeRelatedProcessArray@@YAJQEAGKAEAV-$ComPtr@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180044AD8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044B1C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044B28 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetGlobalRelatedProcessesFromGameConfigStore(__int64 a1, __int64 *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v7; // edi
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  HRESULT ApartmentType; // eax
  int v11; // ecx
  WCHAR *v13; // rax
  WCHAR *v14; // rbx
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  const struct std::nothrow_t *v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v20; // [rsp+50h] [rbp+8h] BYREF
  WCHAR *pAptType; // [rsp+60h] [rbp+18h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+68h] [rbp+20h] BYREF

  v20 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)a1 + 80LL))(a1, 5LL, 0LL, &v20);
  v5 = v4;
  if ( (_WORD)v4 == 2 )
  {
    v6 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    *a2 = 0LL;
    v7 = 0;
    v8 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    if ( v8 )
    {
      v8[4] = 1LL;
      *v8 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable';
      v8[1] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `IWeakReferenceSource'};
      v8[2] = &Microsoft::WRL::RuntimeClass<Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      *v9 = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable';
      v9[1] = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable'{for `IWeakReferenceSource'};
      v9[2] = &Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<HSTRING__ *>>'};
      *((_DWORD *)v9 + 10) = 0;
      *((_DWORD *)v9 + 11) = 0;
      *((_DWORD *)v9 + 12) = 0;
      v9[7] = 0LL;
      ApartmentType = CoGetApartmentType((APTTYPE *)&pAptType, &pAptQualifier);
      v11 = (int)pAptType;
      if ( ApartmentType < 0 )
        v11 = 1;
      LODWORD(pAptType) = v11;
      if ( v11 == 3 || !v11 )
      {
        *((_DWORD *)v9 + 18) = 1;
        *((_DWORD *)v9 + 20) = 0;
      }
      else
      {
        *((_DWORD *)v9 + 18) = 0;
        InitializeSRWLock((PSRWLOCK)v9 + 10);
      }
      *((_DWORD *)v9 + 22) = 0;
      *((_DWORD *)v9 + 24) = 0;
    }
    else
    {
      v7 = -2147024882;
      v9 = 0LL;
    }
    if ( v7 >= 0 )
    {
      *a2 = (__int64)v9;
      v9 = 0LL;
    }
    if ( v9 )
      (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
    if ( v7 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x227,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22C,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v13 = (WCHAR *)operator new[](v20 + 2LL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v13;
  pAptType = v13;
  if ( !v13 )
  {
    v7 = -2147024882;
    v15 = 2147942414LL;
    v16 = 561LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)v15);
    goto LABEL_33;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, WCHAR *, unsigned int *))(*(_QWORD *)a1 + 80LL))(
          a1,
          5LL,
          v13,
          &v20);
  v7 = v17;
  if ( v17 < 0 )
  {
    v16 = 563LL;
LABEL_30:
    v15 = (unsigned int)v17;
    goto LABEL_31;
  }
  v17 = DeserializeRelatedProcessArray(v14, v20, a2);
  v7 = v17;
  if ( v17 < 0 )
  {
    v16 = 564LL;
    goto LABEL_30;
  }
  v7 = 0;
LABEL_33:
  if ( v14 )
    operator delete(v14, v18);
  return (unsigned int)v7;
}
