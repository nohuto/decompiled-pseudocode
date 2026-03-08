/*
 * XREFs of ParseResolutionKeyName @ 0x1C01FEAE0
 * Callers:
 *     ?_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C01FE8CC (-_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ParseModeCap @ 0x1C01FF3DC (ParseModeCap.c)
 */

__int64 __fastcall ParseResolutionKeyName(const void **a1, int a2, int a3)
{
  size_t v6; // r8
  _BYTE v8[528]; // [rsp+30h] [rbp-238h] BYREF

  memset(v8, 0, 0x208uLL);
  v6 = 518LL;
  if ( *(_WORD *)a1 <= 0x206u )
    v6 = *(unsigned __int16 *)a1;
  memmove(v8, a1[1], v6);
  return ParseModeCap((unsigned int)v8, 0, a2, a3, 0LL, 0LL);
}
