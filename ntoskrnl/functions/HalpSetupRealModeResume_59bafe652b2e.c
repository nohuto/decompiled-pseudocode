__int64 __fastcall HalpSetupRealModeResume(__int64 a1, int a2)
{
  __int64 v2; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  *(_DWORD *)HalpWakeVector = a2;
  HalpInterruptSetProcessorStartContext(0LL, 0LL, 0);
  KeSaveStateForHibernate(v5 + 144);
  v2 = v5;
  *(_QWORD *)(v5 + 632) = retaddr;
  *(_QWORD *)(v2 + 536) = &v5;
  *(_QWORD *)(v2 + 504) = 1LL;
  return 0LL;
}
