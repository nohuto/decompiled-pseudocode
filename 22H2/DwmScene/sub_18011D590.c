/*
 * XREFs of sub_18011D590 @ 0x18011D590
 * Callers:
 *     <none>
 * Callees:
 *     sub_180026B1C @ 0x180026B1C (sub_180026B1C.c)
 *     sub_18011CE0C @ 0x18011CE0C (sub_18011CE0C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18011F97C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18011D590(__int64 a1, __int64 a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  char v6; // bp
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v17; // [rsp+40h] [rbp-28h] BYREF

  v17 = 0;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v5 = Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v5 )
    goto LABEL_15;
  v17 = ++*(_DWORD *)(a1 + 88);
  v6 = *(_BYTE *)(a1 + 112);
  if ( !v6 )
  {
    sub_18011CE0C((__int64 *)(a1 + 96), (__int64)&v16, &v17);
    v8 = v16 + 40;
    if ( v16 + 40 != a2 )
    {
      v9 = *(_QWORD *)(v16 + 96);
      if ( v9 )
      {
        LOBYTE(v7) = v9 != v8;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v7);
        *(_QWORD *)(v8 + 56) = 0LL;
      }
      sub_180026B1C(v8, a2);
    }
  }
  v10 = Mtx_unlock(v4);
  if ( v10 )
  {
LABEL_16:
    std::_Throw_C_error(v10);
    JUMPOUT(0x18011D6B5LL);
  }
  if ( !v6 )
    goto LABEL_11;
  v12 = *(_QWORD *)(a2 + 56);
  if ( !v12 )
  {
    std::_Xbad_function_call();
LABEL_15:
    std::_Throw_C_error(v5);
    goto LABEL_16;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_11:
  v13 = v17;
  v14 = *(_QWORD *)(a2 + 56);
  if ( v14 )
  {
    LOBYTE(v11) = v14 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v11);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return v13;
}
