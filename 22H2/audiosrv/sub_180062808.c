/*
 * XREFs of sub_180062808 @ 0x180062808
 * Callers:
 *     sub_180062644 @ 0x180062644 (sub_180062644.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180062808(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  if ( *(_QWORD *)(a4 + 112) )
  {
    *(_QWORD *)(a1 + 112) = a1 + 8;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a4 + 112) + 16LL))(*(_QWORD *)(a4 + 112));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a4 + 112) + 24LL))(*(_QWORD *)(a4 + 112));
    *(_QWORD *)(a4 + 112) = 0LL;
  }
  else
  {
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  *(_QWORD *)(a1 + 120) = *a2;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_BYTE *)(a1 + 144) = 1;
  *(_DWORD *)(a1 + 148) = 1;
  *(_QWORD *)(a1 + 152) = 0LL;
  return a1;
}
