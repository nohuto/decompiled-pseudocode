/*
 * XREFs of sub_18007C9F0 @ 0x18007C9F0
 * Callers:
 *     sub_18007C73C @ 0x18007C73C (sub_18007C73C.c)
 *     sub_18007D6E8 @ 0x18007D6E8 (sub_18007D6E8.c)
 * Callees:
 *     sub_18007C828 @ 0x18007C828 (sub_18007C828.c)
 *     sub_18007D064 @ 0x18007D064 (sub_18007D064.c)
 *     sub_18007D1A4 @ 0x18007D1A4 (sub_18007D1A4.c)
 *     sub_18007D580 @ 0x18007D580 (sub_18007D580.c)
 *     sub_18007D634 @ 0x18007D634 (sub_18007D634.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18007C9F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 (__fastcall *a8)(__int64, __int64))
{
  __int64 v9; // r14
  __int64 v11; // rdi
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rbp
  bool v16; // zf

  if ( a2 != a3 )
  {
    v9 = a3;
    v11 = a1;
    if ( a1 != a2 )
    {
      while ( !a8(a2, v11) )
      {
        v11 += 16LL;
        --a4;
        if ( v11 == a2 )
          return;
      }
      v13 = a2 - 16;
      do
      {
        v14 = a5;
        v15 = v9;
        v9 -= 16LL;
        --a5;
        if ( a2 == v9 )
        {
          sub_18007D634(v11, a2, v15);
          return;
        }
        v16 = a8(v9, v13) == 0;
        v13 = a2 - 16;
      }
      while ( v16 );
      if ( a4 == 1 )
      {
        sub_18007D580(v11, a2, v15);
      }
      else if ( a4 > v14 || a4 > a7 )
      {
        if ( v14 > a7 )
          sub_18007C828(v11, a2, v15, a4, v14, a6, a7, a8);
        else
          sub_18007D1A4(v11, a2, v15, a6, (__int64)a8);
      }
      else
      {
        sub_18007D064(v11, a2, v15, a6, (__int64)a8);
      }
    }
  }
}
