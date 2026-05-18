/*
 * XREFs of sub_180098FC0 @ 0x180098FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180098FC0(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 88) = qword_18021AB40;
  *(_DWORD *)(a1 + 96) = dword_18021AB48;
  *(_QWORD *)(a1 + 100) = qword_18021AB40;
  result = (unsigned int)dword_18021AB48;
  *(_DWORD *)(a1 + 108) = dword_18021AB48;
  return result;
}
