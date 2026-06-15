/*
 * XREFs of sub_180072A70 @ 0x180072A70
 * Callers:
 *     sub_180136310 @ 0x180136310 (sub_180136310.c)
 * Callees:
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_180072804 @ 0x180072804 (sub_180072804.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180072A70(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi

  v6 = sub_18006A18C(0x28uLL);
  v7 = 0LL;
  if ( v6 )
    v7 = sub_180072804(v6, a4);
  v8 = SHTaskPoolQueueTask(0LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v8;
}
