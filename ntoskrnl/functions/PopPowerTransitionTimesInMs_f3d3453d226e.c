unsigned __int64 __fastcall PopPowerTransitionTimesInMs(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v11; // rdi
  _DWORD *v12; // rbx

  result = (unsigned __int64)KeGetCurrentPrcb();
  v11 = 1000LL * *(unsigned int *)(result + 68);
  if ( a1 )
  {
    result = PopQpcTimeInMs(&qword_140C3CF68, &qword_140C3CF70);
    *a1 = result;
  }
  if ( a2 )
  {
    result = PopQpcTimeInMs(&qword_140C3CF88, &qword_140C3CF90);
    *a2 = result;
  }
  v12 = a5;
  if ( a5 )
  {
    a5 = 0LL;
    result = PopQpcTimeInMs(&a5, &qword_140C3CFA8);
    *v12 = result;
    if ( dword_140C3D1B0 )
    {
      result = (unsigned int)(qword_140C3D028 + result);
      *v12 = result;
    }
  }
  if ( a3 )
  {
    result = qword_140C3CFF0 / v11;
    *a3 = qword_140C3CFF0 / v11;
  }
  if ( a4 )
  {
    result = (qword_140C3D128 + qword_140C3D060) / v11;
    *a4 = result;
  }
  if ( a6 )
  {
    result = qword_140C3CFD0 / v11;
    *a6 = qword_140C3CFD0 / v11;
  }
  return result;
}
