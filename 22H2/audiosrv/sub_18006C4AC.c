/*
 * XREFs of sub_18006C4AC @ 0x18006C4AC
 * Callers:
 *     sub_18001D800 @ 0x18001D800 (sub_18001D800.c)
 *     sub_18001D9E0 @ 0x18001D9E0 (sub_18001D9E0.c)
 *     sub_18002C8F0 @ 0x18002C8F0 (sub_18002C8F0.c)
 *     sub_180036AC8 @ 0x180036AC8 (sub_180036AC8.c)
 *     sub_18004AB00 @ 0x18004AB00 (sub_18004AB00.c)
 *     sub_18004ACE0 @ 0x18004ACE0 (sub_18004ACE0.c)
 *     sub_18004B090 @ 0x18004B090 (sub_18004B090.c)
 *     sub_18004B5C0 @ 0x18004B5C0 (sub_18004B5C0.c)
 *     sub_18004C134 @ 0x18004C134 (sub_18004C134.c)
 *     sub_18005AC34 @ 0x18005AC34 (sub_18005AC34.c)
 *     sub_18005B5E8 @ 0x18005B5E8 (sub_18005B5E8.c)
 *     sub_18005C718 @ 0x18005C718 (sub_18005C718.c)
 *     sub_18005E2C4 @ 0x18005E2C4 (sub_18005E2C4.c)
 *     sub_180068D78 @ 0x180068D78 (sub_180068D78.c)
 *     sub_1800702D8 @ 0x1800702D8 (sub_1800702D8.c)
 *     sub_180116134 @ 0x180116134 (sub_180116134.c)
 *     sub_180116450 @ 0x180116450 (sub_180116450.c)
 *     sub_1801268FC @ 0x1801268FC (sub_1801268FC.c)
 *     sub_18012ADBC @ 0x18012ADBC (sub_18012ADBC.c)
 * Callees:
 *     ApiSetQueryApiSetPresence @ 0x18006C830 (ApiSetQueryApiSetPresence.c)
 */

char sub_18006C4AC()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18019E2D8 == 1 )
    return 1;
  if ( dword_18019E2D8 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence(L"FH", &v1) < 0 )
    return 0;
  result = v1;
  dword_18019E2D8 = 2 - (v1 != 0);
  return result;
}
