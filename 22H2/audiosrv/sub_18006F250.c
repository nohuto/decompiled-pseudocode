/*
 * XREFs of sub_18006F250 @ 0x18006F250
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023350 @ 0x180023350 (sub_180023350.c)
 *     sub_180023370 @ 0x180023370 (sub_180023370.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD58C @ 0x1800CD58C (sub_1800CD58C.c)
 *     sub_1800CD5C4 @ 0x1800CD5C4 (sub_1800CD5C4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18006F250(__int64 a1, __int64 a2)
{
  __int128 v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // r8
  __int64 **v7; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  __int64 v10; // rbx
  _QWORD *k; // r14
  int v12; // eax
  unsigned int v13; // r15d
  __int64 result; // rax
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+30h] [rbp-28h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0LL;
  v4 = 0LL;
  v16 = 0LL;
  sub_180023370((struct _RTL_CRITICAL_SECTION *)(a1 + 16), &v18);
  v5 = **(_QWORD ***)(a1 + 56);
  try
  {
    while ( v5 != *(_QWORD **)(a1 + 56) )
    {
      v6 = v5 + 8;
      if ( (_QWORD)v4 == *((_QWORD *)&v4 + 1) )
      {
        sub_1800CD5C4(&v15, *((_QWORD *)&v4 + 1), v6);
        *(_QWORD *)&v4 = v16;
        *((_QWORD *)&v4 + 1) = *((_QWORD *)&v15 + 1);
      }
      else
      {
        **((_QWORD **)&v4 + 1) = *v6;
        sub_180047458(*((__int64 **)&v4 + 1));
        *((_QWORD *)&v4 + 1) += 8LL;
        *((_QWORD *)&v15 + 1) = *((_QWORD *)&v4 + 1);
      }
      v7 = (__int64 **)v5[2];
      if ( *((_BYTE *)v7 + 25) )
      {
        for ( i = v5[1]; !*(_BYTE *)(i + 25) && v5 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          v5 = (_QWORD *)i;
        v5 = (_QWORD *)i;
      }
      else
      {
        v5 = (_QWORD *)v5[2];
        for ( j = *v7; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v5 = j;
      }
    }
    sub_180023350(&v18);
    v10 = v15;
    for ( k = (_QWORD *)v15; k != *((_QWORD **)&v4 + 1); ++k )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*k + 160LL))(*k, a2);
      v13 = v12;
      if ( v12 < 0 )
      {
        sub_18004BD84((int)retaddr, 835, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp", v12);
        if ( v10 )
        {
          sub_1800CD58C(v10);
          sub_1800472E0(v10, 8 * (((__int64)v4 - v10) >> 3));
        }
        return v13;
      }
    }
    if ( v10 )
    {
      sub_1800CD58C(v10);
      sub_1800472E0(v10, 8 * (((__int64)v4 - v10) >> 3));
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v18) = sub_1800C437C(retaddr, 840LL, "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp");
    return (unsigned int)v18;
  }
  return result;
}
