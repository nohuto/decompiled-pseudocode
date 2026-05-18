/*
 * XREFs of sub_18001D3DC @ 0x18001D3DC
 * Callers:
 *     sub_18001DA88 @ 0x18001DA88 (sub_18001DA88.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001D3DC(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_18001D33C(a1, a2);
}
