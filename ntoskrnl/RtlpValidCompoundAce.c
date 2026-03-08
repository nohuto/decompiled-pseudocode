/*
 * XREFs of RtlpValidCompoundAce @ 0x1409B8D94
 * Callers:
 *     RtlValidAcl @ 0x1407BB670 (RtlValidAcl.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpValidCompoundAce(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  bool result; // al

  result = a1
        && (v1 = *(unsigned __int16 *)(a1 + 2), ((v1 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v1)
        && (unsigned int)v1 >= 0x18
        && *(_WORD *)(a1 + 8) == 1
        && *(_BYTE *)(a1 + 12) == 1
        && (v2 = *(unsigned __int8 *)(a1 + 13), (unsigned __int8)v2 <= 0xFu)
        && (v3 = 4 * v2 + 8, v1 >= 4 * v2 + 32)
        && *(_BYTE *)(v3 + a1 + 12) == 1
        && (v4 = *(unsigned __int8 *)(v3 + a1 + 13), (unsigned __int8)v4 <= 0xFu)
        && v1 >= v3 + 20 + 4 * v4;
  return result;
}
