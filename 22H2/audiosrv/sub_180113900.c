/*
 * XREFs of sub_180113900 @ 0x180113900
 * Callers:
 *     sub_180113900 @ 0x180113900 (sub_180113900.c)
 *     sub_180113A88 @ 0x180113A88 (sub_180113A88.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_180103778 @ 0x180103778 (sub_180103778.c)
 *     sub_180111228 @ 0x180111228 (sub_180111228.c)
 *     sub_180113900 @ 0x180113900 (sub_180113900.c)
 */

char __fastcall sub_180113900(__int64 a1, int a2, unsigned int a3, unsigned int a4, __int64 a5, __int64 *a6)
{
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // r15d
  _QWORD *i; // rax
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rbx
  _QWORD *v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h] BYREF
  int v20; // [rsp+70h] [rbp+8h]

  v20 = a1;
  if ( a4 > 8 || a3 > 1 )
    return 0;
  v8 = 9LL * (int)a3;
  v9 = v8 + (int)a4;
  v10 = *(_QWORD *)(a1 + 48 * v9 + 56);
  v18 = (_QWORD *)v10;
  if ( v10 )
  {
    do
    {
      v19 = *sub_1800B91A0(v10, &v18);
      v11 = v19;
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11) - 2 <= 1 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 64LL))(v11);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 104LL))(v11) && (!v12 || a2 == v12) )
        {
          for ( i = (_QWORD *)*a6; i && i[2] != v11; i = (_QWORD *)*i )
            ;
          if ( i )
            return 0;
          v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 120LL))(v11);
          v16 = v14;
          v10 = (unsigned int)(v14 - 1);
          if ( (unsigned int)v10 <= 7 )
          {
            sub_180111228(a6, (__int64)&v19, v15);
            if ( !(unsigned __int8)sub_180113900(v20, a2, a3, v16, a5, (__int64)a6) )
              return 0;
            sub_180103778(a6);
            v10 = v8 + v16;
            if ( *(_BYTE *)(v8 + v16 + a5) )
              *(_BYTE *)(v9 + a5) = 1;
          }
        }
      }
    }
    while ( v18 );
  }
  return 1;
}
