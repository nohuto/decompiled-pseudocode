/*
 * XREFs of UserSetTimer @ 0x1C0243AE8
 * Callers:
 *     RawInputThread @ 0x1C005CC60 (RawInputThread.c)
 *     vEnableSynchronize @ 0x1C011C670 (vEnableSynchronize.c)
 * Callees:
 *     InternalSetTimer @ 0x1C0075120 (InternalSetTimer.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00791A0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
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
  if ( !v4 )
    UserSessionSwitchLeaveCrit(v1);
  return v2;
}
