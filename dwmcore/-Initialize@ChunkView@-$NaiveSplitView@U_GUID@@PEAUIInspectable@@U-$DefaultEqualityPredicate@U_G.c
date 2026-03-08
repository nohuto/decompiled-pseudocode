/*
 * XREFs of ?Initialize@ChunkView@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@QEAAJPEAU?$IIterator@PEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@456@@Z @ 0x180293480
 * Callers:
 *     ?Force@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x180291944 (-Force@-$NaiveSplitView@U_GUID@@PEAUIInspectable@@U-$DefaultEqualityPredicate@U_GUID@@@Internal@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddPair@Chunk@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@QEAAJPEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@456@@Z @ 0x18028FA48 (-AddPair@Chunk@-$NaiveSplitView@U_GUID@@PEAUIInspectable@@U-$DefaultEqualityPredicate@U_GUID@@@I.c)
 *     ?InternalRelease@?$ComPtr@VChunk@?$NaiveSplitView@U_GUID@@PEAUIInspectable@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18029389C (-InternalRelease@-$ComPtr@VChunk@-$NaiveSplitView@U_GUID@@PEAUIInspectable@@U-$DefaultEqualityPr.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::ChunkView::Initialize(
        __int64 a1,
        __int64 *a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned int v7; // r15d
  int v8; // edi
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64 *, __int64 *); // rdi
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+28h] [rbp-8h] BYREF
  char v14; // [rsp+70h] [rbp+40h] BYREF
  __int64 v15; // [rsp+78h] [rbp+48h] BYREF

  v15 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Chunk>::InternalRelease(&v15);
  v4 = DefaultHeap::Alloc(0x90uLL);
  v5 = (__int64)v4;
  if ( v4 )
  {
    v4[3] = 0;
    *(_QWORD *)v4 = &Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Chunk::`vftable';
    v4[2] = 1;
    v6 = *a2;
    v15 = v5;
    v7 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64 *, char *))(v6 + 56))(a2, &v14);
    if ( v8 >= 0 )
    {
      while ( v14 )
      {
        if ( v7 < 0x10 )
        {
          v9 = *a2;
          v12 = 0LL;
          v10 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(v9 + 48);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
          v8 = v10(a2, &v12);
          if ( v8 >= 0 )
          {
            v8 = Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Chunk::AddPair(
                   v5,
                   v12);
            if ( v8 >= 0 )
              v8 = (*(__int64 (__fastcall **)(__int64 *, char *))(*a2 + 64))(a2, &v14);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
          ++v7;
          if ( v8 >= 0 )
            continue;
        }
        if ( v8 < 0 )
          goto LABEL_15;
        break;
      }
      if ( *(_QWORD *)(a1 + 72) != v5 )
      {
        if ( v5 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
          v5 = v15;
        }
        v13 = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 72) = v5;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Chunk>::InternalRelease(&v13);
      }
    }
  }
  else
  {
    v15 = 0LL;
    v8 = -2147024882;
  }
LABEL_15:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Chunk>::InternalRelease(&v15);
  return (unsigned int)v8;
}
