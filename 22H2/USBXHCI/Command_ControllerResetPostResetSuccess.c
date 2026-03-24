/*
 * XREFs of Command_ControllerResetPostResetSuccess @ 0x1C002DFB4
 * Callers:
 *     Controller_InternalReset @ 0x1C00322D8 (Controller_InternalReset.c)
 * Callees:
 *     DynamicLock_Release @ 0x1C0006D40 (DynamicLock_Release.c)
 *     Command_InternalSendCommand @ 0x1C0006D80 (Command_InternalSendCommand.c)
 *     DynamicLock_Acquire @ 0x1C0007340 (DynamicLock_Acquire.c)
 */

__int64 __fastcall Command_ControllerResetPostResetSuccess(__int64 a1, int a2, int a3, int a4)
{
  __int64 v5; // rcx
  __int64 *v6; // r8
  int v7; // r9d
  __int64 **v8; // rcx
  __int64 *v9; // rax
  __int64 *v10; // rdx
  __int64 *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v16; // [rsp+28h] [rbp-8h]

  v5 = *(_QWORD *)(a1 + 112);
  v16 = &v15;
  v15 = (__int64)&v15;
  DynamicLock_Acquire(v5, a2, a3, a4);
  v8 = (__int64 **)(a1 + 96);
  *(_DWORD *)(a1 + 36) = 1;
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == (__int64 *)v8 )
      break;
    if ( (__int64 **)v9[1] != v8
      || (v10 = (__int64 *)*v9, *(__int64 **)(*v9 + 8) != v9)
      || (*v8 = v10, v10[1] = (__int64)v8, v11 = v16, (__int64 *)*v16 != &v15) )
    {
LABEL_11:
      __fastfail(3u);
    }
    v9[1] = (__int64)v16;
    v6 = &v15;
    *v9 = (__int64)&v15;
    *v11 = (__int64)v9;
    v16 = v9;
  }
  while ( 1 )
  {
    v12 = v15;
    if ( (__int64 *)v15 == &v15 )
      return DynamicLock_Release(*(_QWORD *)(a1 + 112), v15, (int)v6, v7);
    if ( *(__int64 **)(v15 + 8) != &v15 )
      goto LABEL_11;
    v13 = *(_QWORD *)v15;
    if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 )
      goto LABEL_11;
    v15 = *(_QWORD *)v15;
    *(_QWORD *)(v13 + 8) = &v15;
    Command_InternalSendCommand(a1, v12, (int)v6, v7);
  }
}
