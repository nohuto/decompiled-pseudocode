/*
 * XREFs of UserSetTimer @ 0x1C022FBB8
 * Callers:
 *     GreStartTimers @ 0x1C007B498 (GreStartTimers.c)
 *     vEnableSynchronize @ 0x1C00F3620 (vEnableSynchronize.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003C250 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     InternalSetTimer @ 0x1C0061830 (InternalSetTimer.c)
 */

__int64 __fastcall UserSetTimer(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v4);
  if ( gptmrMaster )
    v2 = InternalSetTimer(0LL, 0LL, 0x32u, (__int64)GreSynchronizeTimer, 0, 132);
  else
    v2 = 0LL;
  if ( !(_BYTE)v4 )
    UserSessionSwitchLeaveCrit(v1);
  return v2;
}
