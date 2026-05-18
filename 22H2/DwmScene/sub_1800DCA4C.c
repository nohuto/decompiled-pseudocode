/*
 * XREFs of sub_1800DCA4C @ 0x1800DCA4C
 * Callers:
 *     sub_18006A690 @ 0x18006A690 (sub_18006A690.c)
 * Callees:
 *     sub_1800DC684 @ 0x1800DC684 (sub_1800DC684.c)
 *     sub_180105588 @ 0x180105588 (sub_180105588.c)
 *     sub_1801056D8 @ 0x1801056D8 (sub_1801056D8.c)
 *     sub_18010591C @ 0x18010591C (sub_18010591C.c)
 *     sub_180105988 @ 0x180105988 (sub_180105988.c)
 *     sub_180105B30 @ 0x180105B30 (sub_180105B30.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
signed __int32 __fastcall sub_1800DCA4C(__int64 *a1, _QWORD *a2, __int64 a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  __int64 v8; // r15
  __int64 i; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  signed __int32 result; // eax
  volatile signed __int32 *v14; // rbx
  __int128 v15; // [rsp+20h] [rbp-89h] BYREF
  struct _Mtx_internal_imp_t *v16; // [rsp+30h] [rbp-79h]
  __int128 v17; // [rsp+38h] [rbp-71h] BYREF
  _QWORD *v18; // [rsp+48h] [rbp-61h]
  _BYTE v19[176]; // [rsp+50h] [rbp-59h] BYREF

  v18 = a2;
  v6 = (struct _Mtx_internal_imp_t *)(a1 + 3);
  v16 = (struct _Mtx_internal_imp_t *)(a1 + 3);
  v7 = Mtx_lock((_Mtx_t)(a1 + 3));
  if ( v7 )
  {
LABEL_23:
    std::_Throw_C_error(v7);
    JUMPOUT(0x1800DCBB9LL);
  }
  v8 = a1[1];
  for ( i = *a1; i != v8 && sub_180105988(i) != a3; i += 128LL )
    ;
  v10 = a2[1];
  if ( i == a1[1] )
  {
    v17 = 0LL;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = a2[1];
      v6 = v16;
    }
    *(_QWORD *)&v17 = *a2;
    *((_QWORD *)&v17 + 1) = v10;
    v11 = sub_1801056D8(v19, a3, &v17);
    v12 = a1[1];
    if ( a1[2] == v12 )
    {
      sub_1800DC684(a1, a1[1]);
    }
    else
    {
      sub_180105588(v12, v11);
      a1[1] += 128LL;
    }
    sub_18010591C(v19);
  }
  else
  {
    v15 = 0LL;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = a2[1];
      v6 = v16;
    }
    *(_QWORD *)&v15 = *a2;
    *((_QWORD *)&v15 + 1) = v10;
    sub_180105B30(i, &v15);
  }
  result = Mtx_unlock(v6);
  if ( result )
  {
    std::_Throw_C_error(result);
    goto LABEL_23;
  }
  v14 = (volatile signed __int32 *)a2[1];
  if ( v14 )
  {
    result = _InterlockedDecrement(v14 + 2);
    if ( !result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      result = _InterlockedDecrement(v14 + 3);
      if ( !result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  return result;
}
