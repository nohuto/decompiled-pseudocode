/*
 * XREFs of SleepstudyHelper_Initialize @ 0x1408474D0
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperCreateLibrary @ 0x140847520 (SleepstudyHelperCreateLibrary.c)
 */

__int64 __fastcall SleepstudyHelper_Initialize(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  result = SleepstudyHelperCreateLibrary(1818784627LL, &v6);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    *(_QWORD *)(v6 + 32) = a2;
    *a1 = v5;
  }
  return result;
}
