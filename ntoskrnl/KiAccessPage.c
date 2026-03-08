/*
 * XREFs of KiAccessPage @ 0x140B10480
 * Callers:
 *     sub_140B0EA74 @ 0x140B0EA74 (sub_140B0EA74.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAccessPage(__int64 (*a1)(void))
{
  int v1; // rdx^4
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rt0
  __int16 v5; // dx
  bool v6; // zf
  __int64 result; // rax

  v4 = a1();
  HIDWORD(v2) = v1;
  LODWORD(v2) = v5;
  v6 = v2 == v4;
  result = -1LL;
  if ( v6 )
    return v3;
  return result;
}
