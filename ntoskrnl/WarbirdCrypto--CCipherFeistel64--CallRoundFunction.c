/*
 * XREFs of WarbirdCrypto::CCipherFeistel64::CallRoundFunction @ 0x1402C4D60
 * Callers:
 *     sub_1402C4640 @ 0x1402C4640 (sub_1402C4640.c)
 *     sub_1402C49C0 @ 0x1402C49C0 (sub_1402C49C0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall WarbirdCrypto::CCipherFeistel64::CallRoundFunction(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = *(unsigned int *)(a1 + 16LL * a2 + 8);
  if ( (unsigned int)v2 <= 0x1E )
    __asm { jmp     rax }
  return 0LL;
}
