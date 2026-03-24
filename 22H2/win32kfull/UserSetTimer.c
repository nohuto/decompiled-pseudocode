/*
 * XREFs of UserSetTimer @ 0x1C0247C9C
 * Callers:
 *     RawInputThread @ 0x1C0009A50 (RawInputThread.c)
 *     vEnableSynchronize @ 0x1C012F690 (vEnableSynchronize.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C004EFF4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     InternalSetTimer @ 0x1C0080790 (InternalSetTimer.c)
 */

__int64 __fastcall UserSetTimer(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v4);
  if ( gptmrMaster )
    v2 = InternalSetTimer(0LL, 0LL, 50LL, (__int64)GreSynchronizeTimer, 0, 132);
  else
    v2 = 0LL;
  if ( !v4 )
    UserSessionSwitchLeaveCrit(v1);
  return v2;
}
