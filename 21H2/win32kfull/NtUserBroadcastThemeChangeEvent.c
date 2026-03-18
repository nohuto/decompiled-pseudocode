/*
 * XREFs of NtUserBroadcastThemeChangeEvent @ 0x1C0117050
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00AC3EC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall NtUserBroadcastThemeChangeEvent(unsigned __int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 i; // rdi
  __int64 v8; // rcx
  __int64 j; // rbx
  char v11; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v11);
  for ( i = gppiList; i; i = *(_QWORD *)(i + 376) )
  {
    for ( j = *(_QWORD *)(i + 320); j; j = *(_QWORD *)(j + 664) )
    {
      if ( *(_DWORD *)(j + 896) )
      {
        PostEventMessageEx((struct tagTHREADINFO *)j, *(struct tagQ **)(j + 432), 0x19u, 0LL, 0, a1, a2, 0LL);
        v4 = 1;
      }
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v11, v5, v6);
  UserSessionSwitchLeaveCrit(v8);
  return v4;
}
