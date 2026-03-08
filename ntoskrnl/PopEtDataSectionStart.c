/*
 * XREFs of PopEtDataSectionStart @ 0x140768310
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x140767578 (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopEtDataSectionStart(unsigned int *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = a1[3];
  if ( a1[1] >= (unsigned int)result )
  {
    v3 = *a1;
    a1[5] = v3;
    result = a2 + v3;
    *((_QWORD *)a1 + 3) = a2 + v3;
  }
  return result;
}
