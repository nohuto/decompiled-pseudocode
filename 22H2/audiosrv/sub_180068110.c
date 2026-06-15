/*
 * XREFs of sub_180068110 @ 0x180068110
 * Callers:
 *     sub_180068064 @ 0x180068064 (sub_180068064.c)
 *     sub_1800BF950 @ 0x1800BF950 (sub_1800BF950.c)
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180068110(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (**(__int64 (__fastcall ***)(__int64, const IID *, __int64))qword_18019EED0)(
         qword_18019EED0,
         &stru_18015B920,
         a1);
  v2 = v1;
  if ( v1 < 0 )
    sub_18005E8F8((__int64)"GetPolicyConfig", 4642, v1);
  return v2;
}
