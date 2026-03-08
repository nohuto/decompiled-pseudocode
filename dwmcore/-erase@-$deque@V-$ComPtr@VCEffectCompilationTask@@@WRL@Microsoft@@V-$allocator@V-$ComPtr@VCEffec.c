/*
 * XREFs of ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18001A780
 * Callers:
 *     ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x1800E382C (-TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z.c)
 * Callees:
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x18001A620 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompi.c)
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x18001A8A8 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompilationTas.c)
 *     ?pop_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18001AA18 (-pop_back@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEf.c)
 *     ?pop_front@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18001AAE0 (-pop_front@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCE.c)
 */

__int64 **__fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::erase(
        __int64 *a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v5; // rdx
  __int64 **v6; // rbx
  __int64 *v7; // r9
  __int64 *v8; // r8
  __int64 *v9; // r10
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  __int64 *v12; // r11
  __int64 *v13; // r11
  __int64 *v14; // r15
  __int64 *v15; // rax
  _QWORD v17[3]; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v18[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 *v19; // [rsp+48h] [rbp-38h]
  __int64 *v20[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v21; // [rsp+60h] [rbp-20h]
  _QWORD v22[3]; // [rsp+68h] [rbp-18h] BYREF

  v5 = *(__int64 **)(a3 + 16);
  v6 = (__int64 **)a1;
  if ( a1 )
    a1 = (__int64 *)*a1;
  v7 = *(__int64 **)(a4 + 16);
  if ( v6 )
    v8 = *v6;
  else
    v8 = 0LL;
  v9 = v6[3];
  v10 = (char *)v5 - (char *)v9;
  v11 = (char *)v7 - (char *)v5;
  if ( v7 == v5 )
  {
    a2[1] = 0LL;
    *a2 = a1;
    a2[2] = v5;
  }
  else
  {
    v12 = v6[4];
    v17[1] = 0LL;
    v13 = (__int64 *)((char *)v12 + (_QWORD)v9);
    v18[1] = 0LL;
    v20[1] = 0LL;
    v14 = *v6;
    v17[0] = v8;
    v17[2] = v7;
    if ( v10 < (char *)v13 - (char *)v7 )
    {
      v18[0] = a1;
      v19 = v5;
      v21 = v9;
      v20[0] = v14;
      std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
        v22,
        v20,
        v18,
        (__int64)v17);
      do
      {
        std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_front(v6);
        --v11;
      }
      while ( v11 );
    }
    else
    {
      v20[0] = a1;
      v21 = v5;
      v19 = v13;
      v18[0] = v14;
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64 **, __int64 **))std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>)(
        v22,
        v17,
        v18,
        v20);
      do
      {
        std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_back(v6);
        --v11;
      }
      while ( v11 );
    }
    a2[1] = 0LL;
    v15 = *v6;
    a2[2] = (__int64 *)((char *)v6[3] + v10);
    *a2 = v15;
  }
  return a2;
}
