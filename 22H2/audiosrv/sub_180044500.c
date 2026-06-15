/*
 * XREFs of sub_180044500 @ 0x180044500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180044500(__int64 a1)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( !v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 32) + 32LL))(a1 + 32);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return v2;
}
