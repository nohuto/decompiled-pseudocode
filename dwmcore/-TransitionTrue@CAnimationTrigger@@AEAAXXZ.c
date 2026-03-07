void __fastcall CAnimationTrigger::TransitionTrue(CAnimationTrigger *this)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rbx
  __int64 v4; // rax
  __int64 v5; // r10
  unsigned int v6; // ecx
  __int64 v7; // rbx
  __int64 v8; // rsi
  int *v9; // rcx
  int v10; // xmm1_4
  _QWORD **v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  _QWORD v14[2]; // [rsp+30h] [rbp-50h] BYREF
  int v15; // [rsp+40h] [rbp-40h] BYREF
  _QWORD **v16; // [rsp+48h] [rbp-38h]
  __int64 v17; // [rsp+58h] [rbp-28h]
  __int128 v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+A0h] [rbp+20h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 14);
  for ( i = (_QWORD *)*((_QWORD *)this + 13); i != v1; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 240LL))(*i);
  if ( CNotificationResource::ShouldNotify(this) )
  {
    v4 = *((_QWORD *)this + 6);
    v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1240LL) + 40LL);
    v6 = v4 ? *(_DWORD *)(v4 + 76) : 0;
    v14[0] = v6;
    v14[1] = *((unsigned int *)this + 16);
    ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64, _WORD, void *))CoreUICallSend)(
      v5,
      v14,
      2LL,
      2LL,
      0,
      &unk_18033940E);
    if ( CAnimationTrigger::ShouldSendAnimationNotification(this) )
    {
      v7 = *((_QWORD *)this + 14);
      v8 = *((_QWORD *)this + 13);
      v19 = 0;
      std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>(
        (__int64)&v15,
        &v19);
      while ( v8 != v7 )
      {
        std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::emplace<CBaseExpression * const &>(
          &v15,
          v14,
          v8);
        v8 += 8LL;
      }
      v9 = (int *)((char *)this + 136);
      if ( (int *)((char *)this + 136) != &v15 )
      {
        v10 = *v9;
        *v9 = v15;
        v15 = v10;
        std::_Hash<std::_Uset_traits<IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<IUnknown *>,0>>::_Swap_val(
          v9,
          &v15);
      }
      if ( *((_QWORD *)this + 19) )
        DataProviderManager::TryNotify(
          *(_QWORD *)(*((_QWORD *)this + 2) + 1256LL),
          this,
          *((_QWORD *)this + 10),
          *((_QWORD *)this + 11),
          0);
      std::_Deallocate<16,0>(v17, (v18 - v17) & 0xFFFFFFFFFFFFFFF8uLL);
      v11 = v16;
      v17 = 0LL;
      v18 = 0LL;
      *v16[1] = 0LL;
      v12 = *v11;
      if ( v12 )
      {
        do
        {
          v13 = (_QWORD *)*v12;
          std::_Deallocate<16,0>(v12, 24LL);
          v12 = v13;
        }
        while ( v13 );
      }
      std::_Deallocate<16,0>(v16, 24LL);
    }
  }
}
