__int64 __fastcall HalpIommuSetupMessageInterruptRouting(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(a1 + 280))(
           *(_QWORD *)(a1 + 16),
           a2,
           *(_QWORD *)(a1 + 512),
           *(unsigned int *)(a1 + 520));
}
