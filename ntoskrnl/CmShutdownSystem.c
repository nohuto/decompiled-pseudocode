/*
 * XREFs of CmShutdownSystem @ 0x140A0E674
 * Callers:
 *     ExRebootSystemForRecovery @ 0x140604294 (ExRebootSystemForRecovery.c)
 *     PopGracefulShutdown @ 0x140A9D970 (PopGracefulShutdown.c)
 * Callees:
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     CmShutdownSystem0 @ 0x14061375C (CmShutdownSystem0.c)
 *     CmShutdownSystem1 @ 0x140613784 (CmShutdownSystem1.c)
 *     CmShutdownSystem2 @ 0x1406139DC (CmShutdownSystem2.c)
 */

__int64 CmShutdownSystem()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v6 = 0LL;
  CmpInitializeThreadInfo((__int64)v6);
  if ( v2 )
  {
    v4 = (unsigned int)(v2 - 1);
    if ( (_DWORD)v4 )
    {
      if ( (_DWORD)v4 == 1 )
        CmShutdownSystem2();
    }
    else
    {
      CmShutdownSystem1(v1, v0, v4, v3);
    }
  }
  else
  {
    CmShutdownSystem0();
  }
  return CmCleanupThreadInfo(v6);
}
