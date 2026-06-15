/*
 * XREFs of sub_1800029E0 @ 0x1800029E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002AA0 @ 0x180002AA0 (sub_180002AA0.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB290 @ 0x1800BB290 (sub_1800BB290.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800029E0(__int64 a1, void (__fastcall *a2)(_QWORD))
{
  int v3; // eax
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int128 j; // rdi
  unsigned __int64 v7; // rdx
  __int64 v9; // rbx
  __int64 i; // rdi
  unsigned __int64 v11; // rdx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int64 v15; // [rsp+70h] [rbp+18h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v3 = sub_180002AA0(a1, &v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    sub_18004BD84(retaddr, 1918LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v3);
    v9 = v12;
    if ( (_QWORD)v12 )
    {
      for ( i = v12; i != *((_QWORD *)&v12 + 1); i += 8LL )
        sub_18000F708(i);
      v11 = (v13 - v9) & 0xFFFFFFFFFFFFFFF8uLL;
      v15 = v11;
      v16 = v9;
      if ( v11 >= 0x1000 )
      {
        sub_1800BB290(&v16, &v15);
        v11 = v15;
        v9 = v16;
      }
      sub_18006A148(v9, v11);
    }
    return v4;
  }
  else
  {
    v5 = v12;
    for ( j = v12; (_QWORD)j != *((_QWORD *)&j + 1); *(_QWORD *)&j = j + 8 )
      a2(*(_QWORD *)j);
    if ( v5 )
    {
      *(_QWORD *)&j = v5;
      if ( v5 != *((_QWORD *)&j + 1) )
      {
        do
        {
          sub_18000F708(j);
          *(_QWORD *)&j = j + 8;
        }
        while ( (_QWORD)j != *((_QWORD *)&j + 1) );
      }
      v7 = (v13 - v5) & 0xFFFFFFFFFFFFFFF8uLL;
      v15 = v7;
      v16 = v5;
      if ( v7 >= 0x1000 )
      {
        sub_1800BB290(&v16, &v15);
        v7 = v15;
        v5 = v16;
      }
      sub_18006A148(v5, v7);
    }
    return 0LL;
  }
}
