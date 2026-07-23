/*
 * XREFs of SleepstudyHelper_Initialize @ 0x1408FB570
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperCreateLibrary @ 0x1407CD140 (SleepstudyHelperCreateLibrary.c)
 */

__int64 __fastcall SleepstudyHelper_Initialize(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  result = SleepstudyHelperCreateLibrary(0x6C687373u, &v6);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    *(_QWORD *)(v6 + 32) = a2;
    *a1 = v5;
  }
  return result;
}
