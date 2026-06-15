/*
 * XREFs of sub_1800B7D60 @ 0x1800B7D60
 * Callers:
 *     sub_1800B8350 @ 0x1800B8350 (sub_1800B8350.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800B7D60(__int64 a1)
{
  __int64 v2; // rsi
  __int64 *v3; // rbp
  __int64 *v4; // rdi
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    v3 = *(__int64 **)(a1 + 72);
    v4 = *(__int64 **)(a1 + 64);
    if ( (__int64 *)v2 != v3 )
    {
      do
      {
        v5 = *v4;
        if ( *v4 )
        {
          *v4 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        ++v4;
      }
      while ( v4 != v3 );
    }
    sub_1800472E0(v2, (*(_QWORD *)(a1 + 80) - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  *(_DWORD *)(a1 + 20) = -1073741823;
}
