/*
 * XREFs of sub_18010CAF0 @ 0x18010CAF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18010C9CC @ 0x18010C9CC (sub_18010C9CC.c)
 */

__int64 __fastcall sub_18010CAF0(__int64 a1)
{
  signed int v1; // eax
  unsigned int v2; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 72))(*(_QWORD *)(a1 + 64) + *(int *)(a1 + 80));
  v2 = v1;
  if ( v1 < 0 )
    sub_18010C9CC(v1);
  return v2;
}
