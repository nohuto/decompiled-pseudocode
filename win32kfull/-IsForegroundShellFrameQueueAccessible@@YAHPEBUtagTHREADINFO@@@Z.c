/*
 * XREFs of ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C00DCFF0
 * Callers:
 *     EditionIsGpqForegroundAccessibleCurrent @ 0x1C0044BD0 (EditionIsGpqForegroundAccessibleCurrent.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C006C010 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C00DCF88 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsForegroundShellFrameQueueAccessible(const struct tagTHREADINFO *a1)
{
  int v2; // eax
  unsigned int v3; // edx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r8

  v2 = IsImmersiveAppRestricted(*((_QWORD *)a1 + 53));
  v3 = 0;
  if ( !v2 )
    return 0LL;
  v5 = *((_QWORD *)a1 + 54);
  if ( gpqForeground != v5 )
    return 0LL;
  if ( (*(_DWORD *)(v5 + 396) & 0x2000000) == 0 )
    return 0LL;
  v6 = *(_QWORD *)(gpqForeground + 120LL);
  if ( !v6 )
    return 0LL;
  v7 = *(_QWORD *)(v6 + 16);
  if ( !v7 )
    return 0LL;
  LOBYTE(v3) = *(_QWORD *)(v7 + 424) == *((_QWORD *)a1 + 53);
  return v3;
}
