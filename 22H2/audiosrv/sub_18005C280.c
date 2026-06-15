/*
 * XREFs of sub_18005C280 @ 0x18005C280
 * Callers:
 *     sub_18005C098 @ 0x18005C098 (sub_18005C098.c)
 * Callees:
 *     sub_180029D24 @ 0x180029D24 (sub_180029D24.c)
 *     sub_18005C32C @ 0x18005C32C (sub_18005C32C.c)
 *     sub_180068310 @ 0x180068310 (sub_180068310.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005C280(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  v6 = sub_18006A18C(656LL, &unk_18019F848);
  if ( v6 )
  {
    v7 = sub_18005C32C(v6);
    v10 = v7;
    v11 = 0LL;
    v8 = sub_180029D24(v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v7 + 568) + 8LL))(v7 + 568);
      *a1 = v7;
      v8 = 0;
    }
    sub_180068310(&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
