/*
 * XREFs of HvpIsLogEntryHeaderCoherent @ 0x1407F9C24
 * Callers:
 *     HvpIncrementalLogFileEnumeratorAdvance @ 0x1407F9A98 (HvpIncrementalLogFileEnumeratorAdvance.c)
 * Callees:
 *     HvpLogEntryCheckHeaderChecksum @ 0x1407F9C94 (HvpLogEntryCheckHeaderChecksum.c)
 */

bool __fastcall HvpIsLogEntryHeaderCoherent(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned __int64 v3; // r8
  int v4; // edx
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  bool result; // al

  result = *a1 == 1162638920
        && (v2 = a1[1], v2 > 0x28)
        && (v3 = v2, v2 + (unsigned __int64)a2 <= 0xFFFFFFFF)
        && (v4 = a1[4], (unsigned int)(v4 - 1) <= 0x7FFFDFFF)
        && (v4 & 0xFFF) == 0
        && (v5 = (unsigned int)a1[5], (_DWORD)v5)
        && (v6 = 8 * v5 + 40, v6 <= 0xFFFFFFFF)
        && v3 >= v6
        && (unsigned int)HvpLogEntryCheckHeaderChecksum() != 0;
  return result;
}
