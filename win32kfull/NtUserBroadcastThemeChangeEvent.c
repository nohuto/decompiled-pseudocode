/*
 * XREFs of NtUserBroadcastThemeChangeEvent @ 0x1C00EBA10
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0044D58 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall NtUserBroadcastThemeChangeEvent(unsigned __int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 i; // rdi
  __int64 v6; // rcx
  __int64 j; // rbx
  char v9; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v9);
  for ( i = gppiList; i; i = *(_QWORD *)(i + 368) )
  {
    for ( j = *(_QWORD *)(i + 320); j; j = *(_QWORD *)(j + 664) )
    {
      if ( *(_DWORD *)(j + 904) )
      {
        PostEventMessageEx((struct tagTHREADINFO *)j, *(struct tagQ **)(j + 432), 0x19u, 0LL, 0, a1, a2, 0LL);
        v4 = 1;
      }
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v9);
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
