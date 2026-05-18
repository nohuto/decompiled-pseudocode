/*
 * XREFs of sub_18002BBF8 @ 0x18002BBF8
 * Callers:
 *     sub_18002873C @ 0x18002873C (sub_18002873C.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180013618 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002BBF8(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-30h]
  _QWORD *v11; // [rsp+40h] [rbp-28h]

  v11 = a3;
  if ( a3[2] )
    std::string::append(a3, &unk_18013C178, 2uLL);
  (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**((_QWORD **)a2 + 1) + 16LL))(*((_QWORD *)a2 + 1), v9, *a2);
  v6 = v9;
  if ( v10 >= 0x10 )
    v6 = (_QWORD *)v9[0];
  std::string::append(a3, v6, v9[2]);
  if ( v10 >= 0x10 )
  {
    v7 = v9[0];
    if ( v10 + 1 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v9[0] - 8LL);
      if ( (unsigned __int64)(v9[0] - v7 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v7, v10 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v7);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)a3 + 1);
  a3[2] = 0LL;
  a3[3] = 15LL;
  *(_BYTE *)a3 = 0;
  return a1;
}
