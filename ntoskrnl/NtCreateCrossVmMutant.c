__int64 __fastcall NtCreateCrossVmMutant(_QWORD *a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  char PreviousMode; // di
  __int64 v9; // rdx
  int CrossVmMutant; // edx
  __int64 v12; // [rsp+48h] [rbp-10h] BYREF

  v12 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a1;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  CrossVmMutant = ExpCreateCrossVmMutant((unsigned int)&v12, a2, a3, a4, a5, a6, PreviousMode);
  if ( CrossVmMutant >= 0 )
    *a1 = v12;
  return (unsigned int)CrossVmMutant;
}
