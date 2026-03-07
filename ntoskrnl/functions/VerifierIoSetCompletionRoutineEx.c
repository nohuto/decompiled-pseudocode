__int64 __fastcall VerifierIoSetCompletionRoutineEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7)
{
  if ( (unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return 3221225626LL;
  else
    return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, char, char, char))pXdvIoSetCompletionRoutineEx)(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
}
