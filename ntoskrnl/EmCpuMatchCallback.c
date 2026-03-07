__int64 __fastcall EmCpuMatchCallback(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int *a5, int a6)
{
  unsigned int v6; // ebx
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned __int8 *VendorString; // rcx
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx

  v6 = 0;
  if ( !a3 || !a5 || a6 != 4 || a4 != 4 )
    return 1LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( **(_BYTE **)a3 == 42 )
    goto LABEL_17;
  VendorString = CurrentPrcb->VendorString;
  v10 = *(_QWORD *)a3 - (_QWORD)CurrentPrcb->VendorString;
  do
  {
    v11 = VendorString[v10];
    v12 = *VendorString - v11;
    if ( v12 )
      break;
    ++VendorString;
  }
  while ( v11 );
  if ( !v12 )
  {
LABEL_17:
    if ( (unsigned int)EmpCheckOperator(*(_QWORD *)(a3 + 8), (unsigned int)CurrentPrcb->CpuType, a5[1]) )
    {
      if ( (unsigned int)EmpCheckOperator(*(_QWORD *)(a3 + 16), CurrentPrcb->CpuModel, a5[2]) )
        return (unsigned int)EmpCheckOperator(*(_QWORD *)(a3 + 24), CurrentPrcb->CpuStepping, a5[3]) != 0 ? 2 : 0;
    }
  }
  return v6;
}
