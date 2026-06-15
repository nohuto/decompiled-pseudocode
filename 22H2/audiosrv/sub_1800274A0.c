/*
 * XREFs of sub_1800274A0 @ 0x1800274A0
 * Callers:
 *     sub_180027DD0 @ 0x180027DD0 (sub_180027DD0.c)
 *     sub_18002F090 @ 0x18002F090 (sub_18002F090.c)
 *     sub_18002FD00 @ 0x18002FD00 (sub_18002FD00.c)
 *     sub_180030500 @ 0x180030500 (sub_180030500.c)
 *     sub_18004DF90 @ 0x18004DF90 (sub_18004DF90.c)
 *     sub_1800CF96C @ 0x1800CF96C (sub_1800CF96C.c)
 *     sub_1800E58D0 @ 0x1800E58D0 (sub_1800E58D0.c)
 *     sub_1800E5AC0 @ 0x1800E5AC0 (sub_1800E5AC0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800274A0(__int64 (__fastcall ***a1)(_QWORD, void *, __int64 *), __int64 *a2)
{
  __int64 (__fastcall **v2)(_QWORD, void *, __int64 *); // rax
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v2 = *a1;
  v11 = 0LL;
  v4 = (*v2)(a1, &unk_18015B870, &v11);
  if ( v4 >= 0 )
  {
    v10 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v10);
    v5 = v10;
    if ( v4 >= 0 )
    {
      v6 = v10;
      if ( v10 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        v5 = v10;
      }
      v7 = *a2;
      *a2 = v6;
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        v5 = v10;
      }
      v4 = 0;
    }
    if ( v5 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v4;
}
