/*
 * XREFs of KeAddGroupAffinityEx @ 0x1402AE370
 * Callers:
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAddGroupAffinityEx(unsigned __int16 *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax

  if ( *a1 > a2 )
    goto LABEL_2;
  if ( a1[1] > a2 )
  {
    *a1 = a2 + 1;
LABEL_2:
    result = a2;
    *(_QWORD *)&a1[4 * a2 + 4] |= a3;
  }
  return result;
}
