__int64 __fastcall VerifierIoAllocateDriverObjectExtension(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  if ( !(unsigned int)VfFaultsInjectResourceFailure(0LL) )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD *))pXdvIoAllocateDriverObjectExtension)(
             a1,
             a2,
             a3,
             a4);
  *a4 = 0LL;
  return 3221225626LL;
}
