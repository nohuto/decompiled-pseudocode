/*
 * XREFs of NtUnloadKeyEx @ 0x140875ED0
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E6A0 (CmCleanupThreadInfo.c)
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 */

__int64 NtUnloadKeyEx()
{
  void *v0; // r9
  __int64 v1; // r10
  unsigned int v2; // r8d
  __int64 v4[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)v4 = 0LL;
  CmpInitializeThreadInfo((__int64)v4);
  CmUnloadKey(v1, 0, 1, v0);
  CmCleanupThreadInfo(v4);
  return v2;
}
