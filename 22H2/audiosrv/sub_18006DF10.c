/*
 * XREFs of sub_18006DF10 @ 0x18006DF10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023350 @ 0x180023350 (sub_180023350.c)
 *     sub_180023370 @ 0x180023370 (sub_180023370.c)
 *     sub_18006D9FC @ 0x18006D9FC (sub_18006D9FC.c)
 *     sub_18006DFE8 @ 0x18006DFE8 (sub_18006DFE8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006DF10(__int64 a1, __int64 a2, char a3, __int64 *a4)
{
  _QWORD *i; // rbx
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 **v12[2]; // [rsp+20h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 v14; // [rsp+58h] [rbp+28h] BYREF
  __int64 *v15; // [rsp+68h] [rbp+38h] BYREF

  v15 = a4;
  v14 = a2;
  if ( a4 )
    *a4 = 0LL;
  sub_180023370((struct _RTL_CRITICAL_SECTION *)(a1 + 408), &v13);
  if ( a3 )
  {
    if ( v15 )
    {
      for ( i = *(_QWORD **)(a1 + 448); i; i = (_QWORD *)*i )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i[1] + 56LL) + 16LL))(*(_QWORD *)(i[1] + 56LL));
        v8 = v15;
        v9 = *v15;
        if ( *v15 <= v7 )
        {
          v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i[1] + 56LL) + 16LL))(*(_QWORD *)(i[1] + 56LL));
          v8 = v15;
          v9 = v10;
        }
        *v8 = v9;
      }
    }
    sub_18006DFE8(a1 + 448);
  }
  else
  {
    v12[0] = (__int64 **)&v14;
    v12[1] = &v15;
    sub_18006D9FC((__int64 *)(a1 + 448), v12);
  }
  sub_180023350(&v13);
  return 0LL;
}
