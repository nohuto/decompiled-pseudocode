/*
 * XREFs of sub_1800CDDB0 @ 0x1800CDDB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001FFEC @ 0x18001FFEC (sub_18001FFEC.c)
 *     sub_180022184 @ 0x180022184 (sub_180022184.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800CDDB0(_QWORD *a1, char a2)
{
  volatile signed __int32 *v4; // rcx

  *a1 = &Spectre::Engine::ConstantBuffer::`vftable';
  sub_18001FFEC(a1 + 14, (__int64)(a1 + 14));
  v4 = (volatile signed __int32 *)a1[13];
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  sub_180022184((__int64)a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
