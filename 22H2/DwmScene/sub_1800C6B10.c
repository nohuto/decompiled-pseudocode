/*
 * XREFs of sub_1800C6B10 @ 0x1800C6B10
 * Callers:
 *     sub_180021E4C @ 0x180021E4C (sub_180021E4C.c)
 *     sub_1800C6B60 @ 0x1800C6B60 (sub_1800C6B60.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall sub_1800C6B10(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx

  *a1 = &Spectre::Engine::GpuQuery::`vftable';
  v2 = (volatile signed __int32 *)a1[10];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_180062318((__int64)a1);
}
