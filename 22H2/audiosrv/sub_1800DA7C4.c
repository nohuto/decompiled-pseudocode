/*
 * XREFs of sub_1800DA7C4 @ 0x1800DA7C4
 * Callers:
 *     sub_18006EBE4 @ 0x18006EBE4 (sub_18006EBE4.c)
 *     sub_180071C64 @ 0x180071C64 (sub_180071C64.c)
 *     sub_180071D1C @ 0x180071D1C (sub_180071D1C.c)
 *     sub_1800F701C @ 0x1800F701C (sub_1800F701C.c)
 *     sub_1800F7230 @ 0x1800F7230 (sub_1800F7230.c)
 *     sub_1800F9390 @ 0x1800F9390 (sub_1800F9390.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DA7C4(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (**(__int64 (__fastcall ***)(__int64, void *, __int64))qword_18019E618)(qword_18019E618, &unk_18015E380, a2);
  v3 = v2;
  if ( v2 < 0 )
    sub_18004BD84((int)retaddr, 1249, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h", v2);
  return v3;
}
