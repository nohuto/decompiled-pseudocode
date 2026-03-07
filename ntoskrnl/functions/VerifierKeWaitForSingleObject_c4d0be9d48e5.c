__int64 __fastcall VerifierKeWaitForSingleObject(__int64 a1, unsigned int a2, char a3, char a4, __int64 a5)
{
  __int64 v5; // rbp
  __int64 v9; // r8
  __int64 v10; // r9

  v5 = a1;
  LOBYTE(a1) = a4;
  if ( (unsigned int)ViKeInjectStatusAlerted(a1) )
    return 257LL;
  LOBYTE(v10) = a4;
  LOBYTE(v9) = a3;
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))pXdvKeWaitForSingleObject)(
           v5,
           a2,
           v9,
           v10,
           a5);
}
