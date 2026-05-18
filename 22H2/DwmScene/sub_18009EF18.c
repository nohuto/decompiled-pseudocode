/*
 * XREFs of sub_18009EF18 @ 0x18009EF18
 * Callers:
 *     sub_18009F2C0 @ 0x18009F2C0 (sub_18009F2C0.c)
 *     sub_1800A1B00 @ 0x1800A1B00 (sub_1800A1B00.c)
 * Callees:
 *     sub_18001FFEC @ 0x18001FFEC (sub_18001FFEC.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18009EF18(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rcx

  *a1 = &Spectre::Engine::Shader::`vftable';
  sub_18001FFEC(a1 + 17, (__int64)(a1 + 17));
  v2 = (volatile signed __int32 *)a1[16];
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (volatile signed __int32 *)a1[13];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  return sub_180022184((__int64)a1);
}
