/*
 * XREFs of ?Initialize@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJPEAU?$IMapView@W4WindowPosition@ContentManagement@@I@345@@Z @ 0x180091B34
 * Callers:
 *     ?Split@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@SAJPEAU?$IMapView@W4WindowPosition@ContentManagement@@I@345@PEAPEAU6345@1@Z @ 0x180090D84 (-Split@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPred_ea_180090D84.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::Initialize(
        __int64 a1,
        __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64 *); // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v14; // [rsp+58h] [rbp+28h] BYREF
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  v15 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 56LL))(a2, &v14);
  if ( v4 < 0 )
    goto LABEL_17;
  v16 = 0LL;
  v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a2)(
         a2,
         &GUID_1454d187_b3b9_5845_b51e_2e1140cc31b1,
         &v16);
  if ( v4 == -2147467262 )
  {
    v4 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
    RoTransformError(2147500034LL, 2147549183LL, 0LL);
  }
  if ( v4 >= 0 )
  {
    v5 = v16;
    v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 48LL);
    v7 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v4 = v6(v5, &v15);
  }
  v8 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v4 < 0 )
  {
LABEL_17:
    v10 = v15;
  }
  else
  {
    v9 = v14;
    v10 = v15;
    v11 = v15;
    v12 = *(_QWORD *)(a1 + 96);
    if ( v12 != v15 )
    {
      if ( v15 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        v12 = *(_QWORD *)(a1 + 96);
        v10 = v15;
      }
      *(_QWORD *)(a1 + 96) = v11;
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        v10 = v15;
      }
    }
    *(_DWORD *)(a1 + 104) = v9;
    *(_BYTE *)(a1 + 109) = 1;
    v4 = 0;
  }
  if ( v10 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v4;
}
