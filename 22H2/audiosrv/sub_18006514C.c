/*
 * XREFs of sub_18006514C @ 0x18006514C
 * Callers:
 *     sub_180063460 @ 0x180063460 (sub_180063460.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB3A8 @ 0x1800BB3A8 (sub_1800BB3A8.c)
 */

__int64 __fastcall sub_18006514C(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = (**(__int64 (__fastcall ***)(__int64, _DWORD *, __int64))qword_18019EED0)(
             qword_18019EED0,
             dword_18015BA20,
             a2);
  if ( (int)result < 0 )
  {
    sub_1800BB3A8(retaddr, 1221LL, "onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h", (unsigned int)result);
    __debugbreak();
  }
  return result;
}
