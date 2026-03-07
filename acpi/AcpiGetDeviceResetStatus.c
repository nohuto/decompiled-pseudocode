__int64 __fastcall AcpiGetDeviceResetStatus(__int64 a1, _BYTE *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // rcx

  result = 0LL;
  v6 = *(_QWORD *)(a1 + 80);
  if ( !v6 || (result = (*(__int64 (__fastcall **)(_QWORD))(v6 + 72))(*(_QWORD *)(v6 + 8)), (int)result < 0) || !*a2 )
  {
    *a4 = 0LL;
    if ( *(int *)(a1 + 88) <= 0 )
    {
      *a2 = 0;
      *a3 = 0LL;
    }
    else
    {
      *a2 = 1;
      *a3 |= 2uLL;
      if ( *(_BYTE *)(a1 + 18) )
        *a4 |= 1uLL;
      return 0LL;
    }
  }
  return result;
}
