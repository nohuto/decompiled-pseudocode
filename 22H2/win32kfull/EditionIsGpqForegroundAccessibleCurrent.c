/*
 * XREFs of EditionIsGpqForegroundAccessibleCurrent @ 0x1C00ECF30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C00A6FF0 (-IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00B7D5C (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall EditionIsGpqForegroundAccessibleCurrent(int a1)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rdx
  int v4; // r8d
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = PtiCurrentShared();
  v3 = *((_QWORD *)v2 + 53);
  v4 = *(_DWORD *)(v3 + 12);
  v6 = *(_QWORD *)(v3 + 888);
  if ( !a1
    || !gpqForeground
    || v4 < 0
    || (unsigned int)IsForegroundShellFrameQueueAccessible(v2)
    || (unsigned __int8)CheckAccess(&v6, gpqForeground + 432LL) )
  {
    return 1LL;
  }
  MSGLUA_GPQFOREGROUND();
  return 0LL;
}
