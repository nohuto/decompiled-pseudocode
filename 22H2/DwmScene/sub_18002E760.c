/*
 * XREFs of sub_18002E760 @ 0x18002E760
 * Callers:
 *     sub_18002E5A8 @ 0x18002E5A8 (sub_18002E5A8.c)
 * Callees:
 *     sub_18002D4BC @ 0x18002D4BC (sub_18002D4BC.c)
 */

__int64 __fastcall sub_18002E760(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = sub_18002D4BC(a1, (__int64)"{");
  v5 = sub_18002D4BC(v4, (__int64)"Count");
  v6 = sub_18002D4BC(v5, (__int64)&unk_18013CEB0);
  v7 = std::ostream::operator<<(v6, *a2);
  v8 = sub_18002D4BC(v7, (__int64)",Quality");
  v9 = sub_18002D4BC(v8, (__int64)&unk_18013CEB0);
  v10 = std::ostream::operator<<(v9, a2[1]);
  v11 = sub_18002D4BC(v10, (__int64)&unk_18013CEAC);
  sub_18002D4BC(v11, (__int64)&unk_18013CEA8);
  return a1;
}
