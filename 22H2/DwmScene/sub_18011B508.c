/*
 * XREFs of sub_18011B508 @ 0x18011B508
 * Callers:
 *     sub_18011751C @ 0x18011751C (sub_18011751C.c)
 *     sub_180117864 @ 0x180117864 (sub_180117864.c)
 *     sub_180117C08 @ 0x180117C08 (sub_180117C08.c)
 *     sub_1801180B4 @ 0x1801180B4 (sub_1801180B4.c)
 * Callees:
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     sub_18011A848 @ 0x18011A848 (sub_18011A848.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18011F97C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_18011B508(__int64 a1, __int64 a2)
{
  const wchar_t *v2; // r14
  struct _Mtx_internal_imp_t *v4; // rsi
  int v5; // eax
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 **v9; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  int v12; // eax
  volatile __int32 *v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF

  v2 = (const wchar_t *)a2;
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 256), 0) )
  {
    if ( *(_QWORD *)(a2 + 24) >= 8uLL )
      v2 = *(const wchar_t **)a2;
    sub_1801163DC(
      &qword_18020DDF0,
      4,
      "A recursive call to TriggerHandlers() with property name '%ls' was ignored.",
      v2);
  }
  else
  {
    v14 = a1;
    v13[0] = (volatile __int32 *)&v14;
    v4 = (struct _Mtx_internal_imp_t *)(a1 + 160);
    v13[1] = (volatile __int32 *)(a1 + 160);
    v5 = Mtx_lock((_Mtx_t)(a1 + 160));
    if ( v5 )
      goto LABEL_20;
    v6 = *(_QWORD **)(a1 + 240);
    v7 = (_QWORD *)*v6;
    while ( v7 != v6 )
    {
      v8 = v7[12];
      if ( !v8 )
      {
        std::_Xbad_function_call();
LABEL_20:
        std::_Throw_C_error(v5);
LABEL_21:
        std::_Throw_C_error(v12);
        JUMPOUT(0x18011B641LL);
      }
      (*(void (__fastcall **)(__int64, const wchar_t *))(*(_QWORD *)v8 + 16LL))(v8, v2);
      v9 = (__int64 **)v7[2];
      if ( *((_BYTE *)v9 + 25) )
      {
        for ( i = v7[1]; !*(_BYTE *)(i + 25) && v7 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          v7 = (_QWORD *)i;
        v7 = (_QWORD *)i;
      }
      else
      {
        v7 = (_QWORD *)v7[2];
        for ( j = *v9; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v7 = j;
      }
    }
    v12 = Mtx_unlock(v4);
    if ( v12 )
      goto LABEL_21;
    sub_18011A848(v13);
  }
}
