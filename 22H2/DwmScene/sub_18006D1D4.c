/*
 * XREFs of sub_18006D1D4 @ 0x18006D1D4
 * Callers:
 *     sub_18006D1D4 @ 0x18006D1D4 (sub_18006D1D4.c)
 *     sub_180072160 @ 0x180072160 (sub_180072160.c)
 *     sub_18007240C @ 0x18007240C (sub_18007240C.c)
 *     sub_180076910 @ 0x180076910 (sub_180076910.c)
 * Callees:
 *     sub_180012938 @ 0x180012938 (sub_180012938.c)
 *     sub_18006D1D4 @ 0x18006D1D4 (sub_18006D1D4.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006D1D4(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rdi
  volatile signed __int32 *v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_18006D1D4(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_180012938(v6 + 6);
    v7 = (volatile signed __int32 *)v6[5];
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
