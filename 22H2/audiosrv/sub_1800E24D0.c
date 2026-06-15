/*
 * XREFs of sub_1800E24D0 @ 0x1800E24D0
 * Callers:
 *     sub_1800E4C40 @ 0x1800E4C40 (sub_1800E4C40.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD4DC @ 0x1800CD4DC (sub_1800CD4DC.c)
 *     sub_1800E25B8 @ 0x1800E25B8 (sub_1800E25B8.c)
 *     sub_1800E2BEC @ 0x1800E2BEC (sub_1800E2BEC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800E24D0(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // [rsp+40h] [rbp+20h] BYREF
  __int64 v9; // [rsp+48h] [rbp+28h] BYREF

  v9 = 0LL;
  result = sub_1800CD4DC(a2, &v9);
  if ( (int)result >= 0 && v9 )
  {
    v8 = 0LL;
    if ( (int)sub_1800E25B8(&v9, &v8) >= 0 && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 208LL))(v8) )
    {
      v4 = *a1;
      v5 = *(_QWORD **)(v4 + 8);
      if ( *(_QWORD **)(v4 + 16) == v5 )
      {
        sub_1800E2BEC(v4, v5, &v8);
      }
      else
      {
        v6 = v8;
        *v5 = v8;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        *(_QWORD *)(v4 + 8) += 8LL;
      }
    }
    result = sub_1800461B8(&v8);
  }
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return result;
}
