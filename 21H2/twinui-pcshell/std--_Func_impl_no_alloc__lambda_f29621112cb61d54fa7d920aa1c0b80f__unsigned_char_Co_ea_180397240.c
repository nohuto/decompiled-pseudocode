/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f29621112cb61d54fa7d920aa1c0b80f__unsigned_char_Concurrency::task_bool___::_Delete_this @ 0x180397240
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800901A4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_f29621112cb61d54fa7d920aa1c0b80f__unsigned_char_Concurrency::task_bool___::_Delete_this(
        char *a1,
        __int64 a2)
{
  char *v2; // rdi
  char *v4; // rcx
  char v5; // si

  v2 = a1 + 8;
  v4 = (char *)*((_QWORD *)a1 + 8);
  v5 = a2;
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v2;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    *((_QWORD *)v2 + 7) = 0LL;
  }
  if ( v5 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
}
