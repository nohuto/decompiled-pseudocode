/*
 * XREFs of sub_18013C654 @ 0x18013C654
 * Callers:
 *     sub_18013C050 @ 0x18013C050 (sub_18013C050.c)
 *     sub_18013C100 @ 0x18013C100 (sub_18013C100.c)
 *     sub_18013C1DC @ 0x18013C1DC (sub_18013C1DC.c)
 *     sub_18013C2AC @ 0x18013C2AC (sub_18013C2AC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18013C654(__int64 *a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8

  v2 = *a1;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_BYTE *)(a2 + v3) );
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v2 + 32LL))(v2, a2, v3, 0LL);
}
