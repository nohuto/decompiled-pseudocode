/*
 * XREFs of sub_18006F0C0 @ 0x18006F0C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023350 @ 0x180023350 (sub_180023350.c)
 *     sub_180023370 @ 0x180023370 (sub_180023370.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD4DC @ 0x1800CD4DC (sub_1800CD4DC.c)
 *     sub_1800CD548 @ 0x1800CD548 (sub_1800CD548.c)
 *     sub_1800CD5C4 @ 0x1800CD5C4 (sub_1800CD5C4.c)
 *     sub_1800CD9A8 @ 0x1800CD9A8 (sub_1800CD9A8.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18006F0C0(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rcx
  __int64 *v7; // rdx
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *v9[5]; // [rsp+20h] [rbp-28h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  char v13; // [rsp+68h] [rbp+20h] BYREF

  sub_180023370((struct _RTL_CRITICAL_SECTION *)(a1 + 24), v9);
  v4 = *(_QWORD *)(a1 + 64);
  try
  {
    while ( v4 != *(_QWORD *)(a1 + 72) )
    {
      sub_1800CD9A8(&v13, v4);
      v11 = 0LL;
      v5 = sub_1800CD4DC(&v13, &v11);
      v6 = v11;
      if ( v5 >= 0 && v11 )
      {
        v12 = 0LL;
        if ( (int)sub_1800CD548(&v11, &v12) >= 0
          && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 232LL))(v12) )
        {
          v7 = *(__int64 **)(a2 + 8);
          if ( *(__int64 **)(a2 + 16) == v7 )
          {
            sub_1800CD5C4(a2, v7, &v12);
          }
          else
          {
            *v7 = v12;
            sub_180047458(v7);
            *(_QWORD *)(a2 + 8) += 8LL;
          }
        }
        sub_1800461B8(&v12);
        v6 = v11;
      }
      if ( v6 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      sub_180071C14(&v13);
      v4 += 8LL;
    }
    sub_180023350(v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_1800C437C(retaddr, 548LL, "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp");
  }
  return result;
}
