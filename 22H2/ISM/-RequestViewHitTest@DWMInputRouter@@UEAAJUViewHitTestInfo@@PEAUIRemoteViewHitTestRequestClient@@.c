/*
 * XREFs of ?RequestViewHitTest@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAUIRemoteViewHitTestRequestClient@@@Z @ 0x180139660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x1801396D4 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 */

__int64 __fastcall DWMInputRouter::RequestViewHitTest(__int64 a1, __int128 *a2, __int64 a3)
{
  __int64 v5; // xmm1_8
  __int64 v6; // xmm1_8
  void (__fastcall *v7)(__int64, __int128 *); // rax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v5 = *((_QWORD *)a2 + 2);
  v9 = *a2;
  v10 = v5;
  DWMInputRouter::RequestViewHitTestHelper(a1 - 24, &v9, a2);
  if ( a3 )
  {
    v6 = *((_QWORD *)a2 + 2);
    v7 = *(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 24LL);
    v9 = *a2;
    v10 = v6;
    v7(a3, &v9);
  }
  return 0LL;
}
