/*
 * XREFs of HUBPSM20_IssuingPortDisabledToDevice @ 0x1C00120C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPSM20_IssuingPortDisabledToDevice(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 1328) + 1472LL))(*(_QWORD *)(v1 + 1328), 4042LL);
  *(_WORD *)(v1 + 184) &= ~2u;
  return 3013LL;
}
