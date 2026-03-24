/*
 * XREFs of ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x180018F18
 * Callers:
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x180018D28 (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 * Callees:
 *     ??$_Move_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x180018FD8 (--$_Move_unchecked@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@V.c)
 */

_QWORD *__fastcall std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
        _QWORD *a1,
        __int64 **a2,
        __int64 **a3,
        __int64 a4)
{
  __int64 *v5; // r10
  __int64 v7; // rdx
  __int64 *v8; // r9
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD **v13; // rax
  _QWORD *v14; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v19[24]; // [rsp+50h] [rbp-18h] BYREF

  v5 = a2[2];
  if ( *a2 )
    v7 = **a2;
  else
    v7 = 0LL;
  v8 = a3[2];
  if ( *a3 )
    v9 = **a3;
  else
    v9 = 0LL;
  v10 = *(_QWORD **)a4;
  if ( *(_QWORD *)a4 )
    v10 = (_QWORD *)*v10;
  v16[1] = *(_QWORD *)(a4 + 16);
  v17[0] = v9;
  v17[1] = v8;
  v18[0] = v7;
  v16[0] = v10;
  v18[1] = v5;
  v11 = ((__int64 (__fastcall *)(_BYTE *, _QWORD *, _QWORD *, _QWORD *))std::_Move_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>)(
          v19,
          v18,
          v17,
          v16);
  *a1 = 0LL;
  a1[1] = 0LL;
  v12 = *(_QWORD *)(v11 + 8);
  v13 = *(_QWORD ***)a4;
  *(_QWORD *)(a4 + 16) = v12;
  if ( v13 )
  {
    v14 = *v13;
    if ( v14 )
      *a1 = *v14;
  }
  a1[2] = v12;
  return a1;
}
