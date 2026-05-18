/*
 * XREFs of sub_180030110 @ 0x180030110
 * Callers:
 *     sub_180031248 @ 0x180031248 (sub_180031248.c)
 *     sub_18003156C @ 0x18003156C (sub_18003156C.c)
 * Callees:
 *     sub_18002FB34 @ 0x18002FB34 (sub_18002FB34.c)
 *     sub_18002FE38 @ 0x18002FE38 (sub_18002FE38.c)
 *     sub_18009AD6C @ 0x18009AD6C (sub_18009AD6C.c)
 *     sub_18009ADF8 @ 0x18009ADF8 (sub_18009ADF8.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180030110(_QWORD *a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int16 v4; // ax
  __int64 **v5; // rax
  __int64 v6; // rsi
  int v7; // ebx
  char v8; // al
  __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rcx
  __int64 *v12; // [rsp+40h] [rbp+8h] BYREF
  char v13; // [rsp+48h] [rbp+10h] BYREF

  if ( !a1[20] )
  {
    v2 = a1[21];
    if ( v2 )
    {
      v3 = sub_18009ADF8();
      v4 = sub_18009AD6C(a1);
      v5 = sub_18002FB34((__int64)a1, &v12, v2, v4, v3);
    }
    else
    {
      v6 = a1[22];
      if ( !v6 )
        return;
      v7 = sub_18009ADF8();
      v8 = sub_18009AD6C(a1);
      v5 = sub_18002FE38((__int64)a1, &v12, v6, v8, v7);
    }
    v9 = 0LL;
    if ( &v13 != (char *)v5 )
    {
      v9 = *v5;
      *v5 = 0LL;
    }
    v10 = a1[20];
    a1[20] = v9;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v11 + 16))(v11);
    }
  }
}
