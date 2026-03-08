/*
 * XREFs of PopFxNotifySystemStateTransition @ 0x140588B24
 * Callers:
 *     PopHandleNextState @ 0x140AA4FAC (PopHandleNextState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall PopFxNotifySystemStateTransition(__int64 a1, char a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  int *v7; // r8
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 34088);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 64);
    v5 = *(_QWORD *)(v3 + 72);
    if ( v4 )
    {
      if ( *(_QWORD *)(v4 + 104) )
      {
        if ( a2 )
        {
          v8 = a3;
          v6 = 39LL;
          v7 = &v8;
        }
        else
        {
          v9 = a3;
          v6 = 40LL;
          v7 = &v9;
        }
        (*(void (__fastcall **)(__int64, __int64, int *))(v4 + 104))(v5, v6, v7);
      }
    }
  }
}
