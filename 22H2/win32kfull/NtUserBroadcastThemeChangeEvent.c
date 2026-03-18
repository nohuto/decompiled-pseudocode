/*
 * XREFs of NtUserBroadcastThemeChangeEvent @ 0x1C00B3960
 * Callers:
 *     <none>
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0050C44 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

__int64 __fastcall NtUserBroadcastThemeChangeEvent(unsigned __int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 i; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 j; // rbx
  char v14; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v14);
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
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v14, v5, v6);
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v4;
}
