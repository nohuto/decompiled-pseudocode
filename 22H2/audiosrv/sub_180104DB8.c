/*
 * XREFs of sub_180104DB8 @ 0x180104DB8
 * Callers:
 *     sub_1800B8A20 @ 0x1800B8A20 (sub_1800B8A20.c)
 * Callees:
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     sub_180057444 @ 0x180057444 (sub_180057444.c)
 *     sub_180068BD0 @ 0x180068BD0 (sub_180068BD0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void (__fastcall ***__fastcall sub_180104DB8(__int64 a1))(_QWORD, __int64, __int64 *)
{
  void (__fastcall ***v2)(_QWORD, __int64, __int64 *); // rcx
  __int64 v3; // r9
  __int64 v4; // r8
  void (__fastcall ***result)(_QWORD, __int64, __int64 *); // rax
  void (__fastcall ***v6[2])(_QWORD, __int64, __int64 *); // [rsp+20h] [rbp-10h] BYREF
  void (__fastcall ***v7)(_QWORD, __int64, __int64 *); // [rsp+48h] [rbp+18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+20h] BYREF
  LPVOID pv; // [rsp+58h] [rbp+28h] BYREF

  v6[1] = (void (__fastcall ***)(_QWORD, __int64, __int64 *))-2LL;
  sub_180068BD0(&v8);
  v6[0] = 0LL;
  v2 = 0LL;
  v7 = 0LL;
  pv = 0LL;
  v3 = v8;
  if ( !v8 )
    goto LABEL_12;
  if ( (*(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 40LL))(v8, a1, v6) >= 0 )
  {
    v2 = v7;
    if ( v7 != v6[0] )
    {
      sub_18002BB14((__int64 *)&v7, v6[0], (__int64)&unk_18015E390);
      v2 = v7;
    }
    if ( !v2 )
      goto LABEL_9;
    if ( ((int (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *), LPVOID *))(*v2)[5])(v2, &pv) >= 0 )
      sub_180057444((__int64)v7, a1, v4);
  }
  v2 = v7;
LABEL_9:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
    v2 = v7;
  }
  v3 = v8;
LABEL_12:
  if ( v2 )
  {
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v2)[2])(v2);
    v3 = v8;
  }
  result = v6[0];
  if ( v6[0] )
  {
    result = (void (__fastcall ***)(_QWORD, __int64, __int64 *))(*((__int64 (__fastcall **)(void (__fastcall ***)(_QWORD, __int64, __int64 *)))*v6[0]
                                                                 + 2))(v6[0]);
    v3 = v8;
  }
  if ( v3 )
    return (void (__fastcall ***)(_QWORD, __int64, __int64 *))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}
