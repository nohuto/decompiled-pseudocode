/*
 * XREFs of sub_1800522A8 @ 0x1800522A8
 * Callers:
 *     sub_18002A5E8 @ 0x18002A5E8 (sub_18002A5E8.c)
 *     sub_180073BA4 @ 0x180073BA4 (sub_180073BA4.c)
 *     sub_180073D04 @ 0x180073D04 (sub_180073D04.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800522A8(__int64 (__fastcall ***a1)(_QWORD, _DWORD *, __int64 *), __int64 *a2)
{
  __int64 (__fastcall **v2)(_QWORD, _DWORD *, __int64 *); // rax
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp+10h] BYREF
  __int64 v12; // [rsp+40h] [rbp+20h] BYREF

  v2 = *a1;
  v12 = 0LL;
  v4 = (*v2)(a1, &dword_18015B870, &v12);
  if ( v4 >= 0 )
  {
    v11 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v11);
    v6 = v11;
    v4 = v5;
    if ( v5 >= 0 )
    {
      v7 = v11;
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        v6 = v11;
      }
      v8 = *a2;
      *a2 = v7;
      if ( v8 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 16LL))(v8, v6);
        v6 = v11;
      }
      v4 = 0;
    }
    if ( v6 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v4;
}
