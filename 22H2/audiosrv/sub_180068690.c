/*
 * XREFs of sub_180068690 @ 0x180068690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180068690(volatile signed __int32 *a1)
{
  signed __int32 v1; // ebx
  unsigned __int32 v2; // ebx

  v1 = _InterlockedExchangeAdd(a1 + 6, 0xFFFFFFFF);
  --dword_18019E558;
  v2 = v1 - 1;
  if ( !v2 && a1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 32LL))(a1);
  return v2;
}
