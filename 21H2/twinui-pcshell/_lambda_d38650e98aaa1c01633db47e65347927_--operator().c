/*
 * XREFs of _lambda_d38650e98aaa1c01633db47e65347927_::operator() @ 0x180099828
 * Callers:
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_d38650e98aaa1c01633db47e65347927___ @ 0x1800997EC (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_d38650e98aaa1c01633db.c)
 * Callees:
 *     ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x180054A70 (-_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_d38650e98aaa1c01633db47e65347927_::operator()(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const unsigned __int16 **v4; // rdx
  const unsigned __int16 *v5; // rdx
  unsigned __int8 v7[4]; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+34h] [rbp-24h]
  __int128 v9; // [rsp+38h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)v7 = 16;
  v4 = *(const unsigned __int16 ***)a1;
  v8 = 1447309360;
  v5 = *v4;
  v9 = *(_OWORD *)(v2 + 112);
  return ApplicationViewManagement::CPersistence::_PersistData((HKEY *)(a2 + 40), v5, L"VirtualDesktop", v7, 0x18u);
}
