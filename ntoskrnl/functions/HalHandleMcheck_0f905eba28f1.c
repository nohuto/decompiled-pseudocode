char __fastcall HalHandleMcheck(__int64 a1, __int64 a2, int *a3)
{
  char result; // al
  int v4; // eax
  __int64 v5; // rbx

  result = HalpMcaEnabled;
  if ( HalpMcaEnabled )
  {
    if ( a3 )
    {
      v4 = *a3;
      *(_OWORD *)a3 = 0LL;
      *a3 = v4;
    }
    v5 = *(_QWORD *)&KeGetPcr()->HalReserved[6];
    *(_QWORD *)(v5 + 32) = a3;
    result = HalpHandleMachineCheck(a1);
    *(_QWORD *)(v5 + 32) = 0LL;
  }
  return result;
}
