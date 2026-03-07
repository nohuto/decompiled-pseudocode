__int64 __fastcall VerifierKeWaitForMultipleObjects(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  if ( (unsigned int)ViKeInjectStatusAlerted(a6) )
    return 257LL;
  else
    return ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD, char, char, __int64, __int64))pXdvKeWaitForMultipleObjects)(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8);
}
