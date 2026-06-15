/*
 * XREFs of sub_180105034 @ 0x180105034
 * Callers:
 *     sub_1800BA940 @ 0x1800BA940 (sub_1800BA940.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180104D68 @ 0x180104D68 (sub_180104D68.c)
 */

void sub_180105034()
{
  void *v0; // rcx
  __int64 v1; // rax
  __int64 v2; // rbx

  while ( 1 )
  {
    v0 = (void *)qword_18019F748;
    if ( !qword_18019F748 )
      break;
    v1 = *(_QWORD *)qword_18019F748;
    v2 = *(_QWORD *)(qword_18019F748 + 16);
    qword_18019F748 = v1;
    if ( v1 )
      *(_QWORD *)(v1 + 8) = 0LL;
    else
      qword_18019F750 = 0LL;
    sub_180033A70(v0);
    --dword_18019F758;
    sub_180104D68(v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  if ( dword_18019E634 )
    DeleteCriticalSection(&stru_18019F8B0);
}
