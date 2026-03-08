/*
 * XREFs of EditionIsGpqForegroundAccessibleCurrent @ 0x1C0044BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C00DCFF0 (-IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00F02AC (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
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
  v6 = *(_QWORD *)(v3 + 864);
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
