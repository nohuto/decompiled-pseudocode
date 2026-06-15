/*
 * XREFs of sub_18013C3EC @ 0x18013C3EC
 * Callers:
 *     sub_1800F5B0C @ 0x1800F5B0C (sub_1800F5B0C.c)
 *     sub_1800F5F10 @ 0x1800F5F10 (sub_1800F5F10.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013C7F0 @ 0x18013C7F0 (sub_18013C7F0.c)
 */

__int64 __fastcall sub_18013C3EC(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  if ( !(unsigned int)sub_18013C7F0() )
    return 2147758081LL;
  result = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(*(_QWORD *)*v2 + 32LL))(*v2, "]", 1LL);
  if ( (int)result >= 0 )
  {
    --*(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 140) = 1;
  }
  return result;
}
