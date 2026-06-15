/*
 * XREFs of sub_18005535C @ 0x18005535C
 * Callers:
 *     sub_180055424 @ 0x180055424 (sub_180055424.c)
 * Callees:
 *     sub_180029D24 @ 0x180029D24 (sub_180029D24.c)
 *     sub_1800552C8 @ 0x1800552C8 (sub_1800552C8.c)
 *     sub_180068310 @ 0x180068310 (sub_180068310.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005535C(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  _QWORD *v8; // rdi
  int v9; // eax
  _QWORD *v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h]

  v6 = 0;
  *a1 = 0LL;
  v7 = sub_18006A18C(616LL, &unk_18019F848);
  if ( v7 )
  {
    v8 = (_QWORD *)sub_1800552C8(v7);
    v11 = v8;
    v12 = 0LL;
    v9 = sub_180029D24((__int64)v8, *a2, *a3);
    if ( v9 < 0 || (v9 = (*(__int64 (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8), v9 < 0) )
    {
      v6 = v9;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(v8[71] + 8LL))(v8 + 71);
      *a1 = v8;
    }
    sub_180068310(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v6;
}
