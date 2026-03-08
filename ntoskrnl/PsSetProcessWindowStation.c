/*
 * XREFs of PsSetProcessWindowStation @ 0x14079A5C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetProcessWindowStation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1336) = a2;
}
