char __fastcall CEffectCompilationService::TryAddDeadTask(
        CEffectCompilationService *this,
        struct CEffectCompilationTask *a2)
{
  struct CEffectCompilationTask *v2; // rdi
  __int64 *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbx
  _QWORD v9[3]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v10[3]; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v11[32]; // [rsp+50h] [rbp-20h] BYREF
  struct CEffectCompilationTask *v12; // [rsp+90h] [rbp+20h] BYREF
  struct CEffectCompilationTask *v13; // [rsp+98h] [rbp+28h] BYREF

  v13 = a2;
  v2 = a2;
  if ( *((_BYTE *)this + 72) )
    return 0;
  if ( *((_BYTE *)this + 216) )
    return 0;
  v9[1] = 0LL;
  v4 = (__int64 *)((char *)this + 176);
  v5 = *((_QWORD *)this + 25);
  v6 = *v4;
  v10[1] = 0LL;
  v7 = v5 + v4[4];
  v10[2] = v5;
  v9[0] = v6;
  v9[2] = v7;
  v10[0] = v6 & -(__int64)(v4 != 0LL);
  if ( *(_QWORD *)(((__int64 (__fastcall *)(_BYTE *, _QWORD *, _QWORD *, struct CEffectCompilationTask **))std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_4dd7fdf0f202170b065b5df198adf56c___)(
                     v11,
                     v10,
                     v9,
                     &v13)
                 + 16) != v7 )
    return 0;
  if ( *((_QWORD *)this + 26) > 0x40uLL )
  {
    *((_BYTE *)this + 216) = 1;
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_front(v4);
    v2 = v13;
    *((_BYTE *)this + 216) = 0;
  }
  v12 = v2;
  if ( v2 )
    (**(void (__fastcall ***)(struct CEffectCompilationTask *))v2)(v2);
  std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Emplace_back_internal<Microsoft::WRL::ComPtr<CEffectCompilationTask>>(
    v4,
    &v12);
  if ( v12 )
    (*(void (__fastcall **)(struct CEffectCompilationTask *))(*(_QWORD *)v12 + 8LL))(v12);
  return 1;
}
