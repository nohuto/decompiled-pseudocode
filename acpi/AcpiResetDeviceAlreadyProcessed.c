char __fastcall AcpiResetDeviceAlreadyProcessed(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 i; // rax

  v2 = a1 + 48;
  for ( i = *(_QWORD *)(a2 + 48); ; i = *(_QWORD *)(i + 8) )
  {
    if ( i == v2 )
      return 0;
    if ( *(_QWORD *)(i - 8) == *(_QWORD *)(a2 + 32) )
      break;
  }
  return 1;
}
