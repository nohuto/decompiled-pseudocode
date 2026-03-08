/*
 * XREFs of PopEtInitializeBuiltinAppId @ 0x1408532EC
 * Callers:
 *     PopEtInit @ 0x140B678A0 (PopEtInit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopEtInitializeBuiltinAppId(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int16 v4; // cx
  __int64 result; // rax

  v2 = PopEtGlobals;
  *(_WORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 24) &= 0xFFFFC0000000FFFFuLL;
  *(_QWORD *)(a1 + 32) = v2 + 1048;
  *(_QWORD *)(a1 + 40) = v2 + 1056;
  *(_QWORD *)(a1 + 72) = v2 + 1064;
  v4 = *(unsigned __int8 *)(v2 + 1065);
  *(_QWORD *)(a1 + 48) = a2;
  *(_WORD *)(a1 + 86) = 4 * (v4 + 2);
  result = -1LL;
  do
    ++result;
  while ( *(_WORD *)(a2 + 2 * result) );
  *(_WORD *)(a1 + 80) = result;
  return result;
}
