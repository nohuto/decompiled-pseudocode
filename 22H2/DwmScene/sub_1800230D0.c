/*
 * XREFs of sub_1800230D0 @ 0x1800230D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800C98E0 @ 0x1800C98E0 (sub_1800C98E0.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800230D0(__int64 a1, char a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  sub_1800C98E0(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
