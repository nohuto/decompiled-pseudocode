/*
 * XREFs of ?RemoveInvalidWeakPointersNoLock@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180046878
 * Callers:
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x180045570 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18004646C (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180037918 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180047264 (-erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ??A?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@2@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18004731C (--A-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$shared_ptr@V.c)
 *     ??1?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800475B0 (--1-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ.c)
 *     ?_Reserve@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x180048314 (-_Reserve@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@IEAA.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RemoveInvalidWeakPointersNoLock(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this)
{
  char *v1; // rbx
  _QWORD *v2; // r14
  _QWORD *v3; // rdi
  void **v4; // rcx
  __int64 v5; // r15
  _QWORD *v6; // rsi
  _QWORD *v7; // r15
  __int64 **v8; // r12
  unsigned __int64 v9; // r13
  __int64 **v10; // r14
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 *v17; // rbx
  __int64 *v18; // r15
  __int64 v19; // rcx
  __int128 v20; // [rsp+28h] [rbp-49h] BYREF
  __int64 **v21; // [rsp+38h] [rbp-39h]
  __int64 v22; // [rsp+40h] [rbp-31h] BYREF
  _QWORD *v23; // [rsp+48h] [rbp-29h] BYREF
  char *v24; // [rsp+50h] [rbp-21h]
  _QWORD *v25; // [rsp+58h] [rbp-19h]
  __int64 v26; // [rsp+60h] [rbp-11h]
  _QWORD *v27; // [rsp+68h] [rbp-9h]
  __int64 v28; // [rsp+70h] [rbp-1h]
  void *v29[3]; // [rsp+78h] [rbp+7h] BYREF
  unsigned __int64 v30; // [rsp+90h] [rbp+1Fh]

  v28 = -2LL;
  v1 = (char *)this + 88;
  v24 = (char *)this + 88;
  v2 = (_QWORD *)*((_QWORD *)this + 11);
  v27 = v2;
  v3 = (_QWORD *)*v2;
  v25 = v3;
  if ( v3 == v2 )
    return;
  do
  {
    v4 = (void **)(v3 + 2);
    v20 = 0LL;
    v21 = 0LL;
    v5 = v3[6];
    v6 = *(_QWORD **)(v5 + 8);
    v7 = *(_QWORD **)(v5 + 16);
    v8 = 0LL;
    v9 = 0LL;
    if ( v6 == v7 )
      goto LABEL_26;
    v10 = v21;
    do
    {
      v11 = (_QWORD *)*v6;
      v23 = v11;
      if ( v11 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
      v22 = 0LL;
      if ( v11
        && (*(int (__fastcall **)(_QWORD *, GUID *, __int64 *))(*v11 + 24LL))(
             v11,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             &v22) >= 0
        && v22 )
      {
        if ( &v23 >= v8 || v9 > (unsigned __int64)&v23 )
        {
          if ( v8 == v10 )
          {
            std::vector<Microsoft::WRL::WeakRef>::_Reserve(&v20);
            v8 = (__int64 **)*((_QWORD *)&v20 + 1);
            v9 = v20;
            v10 = v21;
          }
          *v8 = v11;
          v14 = *v11;
          v13 = v11;
        }
        else
        {
          v12 = (__int64)((__int64)&v23 - v9) >> 3;
          v26 = v12;
          if ( v8 == v10 )
          {
            std::vector<Microsoft::WRL::WeakRef>::_Reserve(&v20);
            v8 = (__int64 **)*((_QWORD *)&v20 + 1);
            v9 = v20;
            v12 = v26;
            v10 = v21;
          }
          v13 = *(__int64 **)(v9 + 8 * v12);
          *v8 = v13;
          if ( !v13 )
            goto LABEL_19;
          v14 = *v13;
        }
        (*(void (__fastcall **)(__int64 *))(v14 + 8))(v13);
LABEL_19:
        *((_QWORD *)&v20 + 1) = ++v8;
      }
      v15 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      if ( v11 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      ++v6;
    }
    while ( v6 != v7 );
    v3 = v25;
    v2 = v27;
    v4 = (void **)(v25 + 2);
    v1 = v24;
LABEL_26:
    if ( (__int64)((__int64)v8 - v9) >> 3 )
    {
      v16 = *(_QWORD *)std::unordered_map<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>::operator[](
                         v1,
                         v4)
          + 8LL;
      if ( (__int128 *)v16 != &v20 )
      {
        v17 = *(__int64 **)v16;
        if ( *(_QWORD *)v16 )
        {
          v18 = *(__int64 **)(v16 + 8);
          if ( v17 != v18 )
          {
            do
            {
              v19 = *v17;
              if ( *v17 )
              {
                *v17 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
              }
              ++v17;
            }
            while ( v17 != v18 );
            v17 = *(__int64 **)v16;
          }
          operator delete(v17);
        }
        *(_QWORD *)v16 = v9;
        *(_QWORD *)(v16 + 8) = v8;
        *(_QWORD *)(v16 + 16) = v21;
        v20 = 0LL;
        v21 = 0LL;
        v1 = v24;
      }
    }
    else
    {
      v30 = 7LL;
      v29[2] = 0LL;
      LOWORD(v29[0]) = 0;
      std::wstring::assign(v29, v4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      std::_Hash<std::_Umap_traits<std::wstring,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::shared_ptr<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>>>,0>>::erase(
        v1,
        v29);
      if ( v30 >= 8 )
        operator delete(v29[0]);
    }
    std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>(&v20);
    v3 = (_QWORD *)*v3;
    v25 = v3;
  }
  while ( v3 != v2 );
}
