/*
 * XREFs of sub_1800AF398 @ 0x1800AF398
 * Callers:
 *     sub_18001AF08 @ 0x18001AF08 (sub_18001AF08.c)
 *     sub_18007354C @ 0x18007354C (sub_18007354C.c)
 * Callees:
 *     sub_18000F8D8 @ 0x18000F8D8 (sub_18000F8D8.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
int __fastcall sub_1800AF398(__int64 a1, __int64 *a2)
{
  int v4; // eax
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  __int64 v7; // r12
  volatile signed __int32 *v8; // rsi
  __int64 v9; // rdx
  signed __int32 v10; // eax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  int result; // eax
  __int64 v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+28h] [rbp-40h]
  __int64 *v19; // [rsp+30h] [rbp-38h]
  _Mtx_t v20; // [rsp+38h] [rbp-30h]

  v20 = (_Mtx_t)(a1 + 128);
  v4 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v4 )
  {
LABEL_26:
    std::_Throw_C_error(v4);
    JUMPOUT(0x1800AF50ELL);
  }
  v5 = *(__int64 **)(a1 + 72);
  v19 = v5;
  v6 = *(__int64 **)(a1 + 64);
  if ( v6 == v5 )
    goto LABEL_16;
  do
  {
    v7 = 0LL;
    v8 = 0LL;
    v9 = v6[1];
    if ( v9 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v9 + 8);
        if ( !v10 )
          break;
        if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10) )
        {
          v7 = *v6;
          v8 = (volatile signed __int32 *)v6[1];
          break;
        }
      }
    }
    v11 = *a2;
    if ( v8 )
    {
      if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    if ( v7 == v11 )
      break;
    v6 += 2;
  }
  while ( v6 != v5 );
  if ( v6 == v19 )
  {
LABEL_16:
    v12 = a2[1];
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 12));
      v12 = a2[1];
    }
    v13 = *a2;
    v17 = *a2;
    v18 = v12;
    v14 = *(_QWORD **)(a1 + 72);
    if ( *(_QWORD **)(a1 + 80) == v14 )
    {
      sub_18000F8D8((_QWORD *)(a1 + 64), v14, &v17);
      v15 = v18;
    }
    else
    {
      *v14 = v13;
      v14[1] = v12;
      v15 = 0LL;
      v18 = 0LL;
      *(_QWORD *)(a1 + 72) += 16LL;
    }
    if ( v15 && _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  }
  result = Mtx_unlock(v20);
  if ( result )
  {
    std::_Throw_C_error(result);
    goto LABEL_26;
  }
  return result;
}
