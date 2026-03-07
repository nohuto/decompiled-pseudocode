void __fastcall AcpiFunctionLevelDeviceResetComplete(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( a4 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(a4 + 8))(a2, *(_QWORD *)(a4 + 16));
    ExFreePoolWithTag((PVOID)a4, 0);
  }
}
