/*
 * XREFs of sub_18013C398 @ 0x18013C398
 * Callers:
 *     sub_1800F5B0C @ 0x1800F5B0C (sub_1800F5B0C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013C7F0 @ 0x18013C7F0 (sub_18013C7F0.c)
 */

__int64 __fastcall sub_18013C398(__int64 a1)
{
  int v2; // eax
  __int64 v3; // r10
  __int64 (__fastcall *v4)(__int64, const char *, __int64); // r11
  const char *v5; // rdx
  __int64 result; // rax

  v2 = sub_18013C7F0();
  v5 = "]";
  if ( !v2 )
    v5 = "}";
  result = v4(v3, v5, 1LL);
  if ( (int)result >= 0 )
    --*(_DWORD *)(a1 + 136);
  return result;
}
