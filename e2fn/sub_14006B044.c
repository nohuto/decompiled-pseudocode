void __fastcall sub_14006B044(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx

  if ( a2 )
  {
    _mm_lfence();
    v2 = a1 + 5;
    v3 = a1 + 6;
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64, _QWORD *, _QWORD *))(qword_1400DF678 + 2160))(
           qword_1400DF6A8,
           a1[7],
           a2,
           a1 + 5,
           a1 + 6) )
    {
      *v2 = 0LL;
      *v3 = 0LL;
    }
  }
}
