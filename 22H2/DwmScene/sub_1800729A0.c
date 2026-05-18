/*
 * XREFs of sub_1800729A0 @ 0x1800729A0
 * Callers:
 *     sub_18007B510 @ 0x18007B510 (sub_18007B510.c)
 * Callees:
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     _Mtx_destroy_in_situ @ 0x18011F9AC (_Mtx_destroy_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800729A0(__int64 a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = *(volatile signed __int32 **)(a1 + 144);
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 56));
  sub_180012938((__int64 *)(a1 + 24));
  return sub_180012938((__int64 *)a1);
}
