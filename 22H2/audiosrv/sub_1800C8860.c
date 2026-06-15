/*
 * XREFs of sub_1800C8860 @ 0x1800C8860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C8860(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // edi

  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(*(_QWORD *)*a2 + 48LL))(
         *a2,
         *(_QWORD *)(a1 + 8),
         *(unsigned int *)(a1 + 24),
         *(_QWORD *)(a1 + 16),
         *(_DWORD *)(a1 + 28),
         *(_QWORD *)(a1 + 32));
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return v3;
}
