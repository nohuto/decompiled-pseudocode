__int64 __fastcall IaLpssWritePmcsr(unsigned int *a1)
{
  if ( !IaLpssPmcsr || !a1 )
    return 2LL;
  ((void (__fastcall *)(__int64, _QWORD))off_140C06B48[0])(IaLpssPmcsr, *a1);
  return 0LL;
}
