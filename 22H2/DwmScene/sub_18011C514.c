/*
 * XREFs of sub_18011C514 @ 0x18011C514
 * Callers:
 *     sub_18011C5D0 @ 0x18011C5D0 (sub_18011C5D0.c)
 * Callees:
 *     _Mtx_destroy_in_situ @ 0x18011F9AC (_Mtx_destroy_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18011C514(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rbx

  Mtx_destroy_in_situ((_Mtx_t)(a1 + 88));
  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    LOBYTE(v2) = v3 != a1 + 24;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, v2);
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  v4 = *(volatile signed __int32 **)(a1 + 8);
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
    if ( !_InterlockedDecrement(v4 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  }
}
