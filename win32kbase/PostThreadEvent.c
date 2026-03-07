bool __fastcall PostThreadEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  bool v13; // bl
  _BYTE v15[24]; // [rsp+40h] [rbp-18h] BYREF

  v7 = a3;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v15, a2, a3, a4);
  v12 = (int)qword_1C02D7518;
  if ( qword_1C02D7518 )
    v12 = qword_1C02D7518(30LL, a1, a2, v7, a4, a5);
  v13 = v12 != 0;
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v15, v9, v10, v11);
  return v13;
}
