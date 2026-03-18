/*
 * XREFs of UserSetTimer @ 0x1C022CE98
 * Callers:
 *     GreStartTimers @ 0x1C003DA38 (GreStartTimers.c)
 *     vEnableSynchronize @ 0x1C00BBAB0 (vEnableSynchronize.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00E2FC0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     InternalSetTimer @ 0x1C00E6510 (InternalSetTimer.c)
 */

__int64 __fastcall UserSetTimer(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = a1;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v10, a2, a3, a4);
  if ( gptmrMaster )
    v8 = InternalSetTimer(0LL, 0LL, 0x32u, (__int64)GreSynchronizeTimer, 0, 132);
  else
    v8 = 0LL;
  if ( !(_BYTE)v10 )
    UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
