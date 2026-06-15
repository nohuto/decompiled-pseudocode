/*
 * XREFs of sub_180109A24 @ 0x180109A24
 * Callers:
 *     sub_18007CC52 @ 0x18007CC52 (sub_18007CC52.c)
 *     sub_180109AB0 @ 0x180109AB0 (sub_180109AB0.c)
 *     sub_180109B50 @ 0x180109B50 (sub_180109B50.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109E10 @ 0x180109E10 (sub_180109E10.c)
 */

int __fastcall sub_180109A24(__int64 a1, __int64 a2)
{
  __int64 (__fastcall **v3)(); // rax
  void *v4; // rdi
  __int64 (__fastcall ***v5)(_QWORD, __int64); // rcx

  v3 = off_180149750;
  *(_QWORD *)a1 = off_180149750;
  if ( *(_BYTE *)(a1 + 16) )
  {
    LOBYTE(a2) = 1;
    LODWORD(v3) = sub_180109E10(a1, a2);
  }
  v4 = *(void **)(a1 + 24);
  if ( v4 )
  {
    DeleteCriticalSection(*(LPCRITICAL_SECTION *)(a1 + 24));
    LODWORD(v3) = sub_18006A148(v4);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v5 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 8);
    if ( v5 )
    {
      LODWORD(v3) = (**v5)(v5, 1LL);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
  return (int)v3;
}
