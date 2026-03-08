/*
 * XREFs of NtUnloadKey @ 0x140749B90
 * Callers:
 *     <none>
 * Callees:
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     CmUnloadKey @ 0x140749BD8 (CmUnloadKey.c)
 */

__int64 NtUnloadKey()
{
  __int64 v0; // r10
  unsigned int v1; // r8d
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v3 = 0LL;
  CmpInitializeThreadInfo((__int64)v3);
  CmUnloadKey(v0, 0LL, 0LL, 0LL);
  CmCleanupThreadInfo(v3);
  return v1;
}
