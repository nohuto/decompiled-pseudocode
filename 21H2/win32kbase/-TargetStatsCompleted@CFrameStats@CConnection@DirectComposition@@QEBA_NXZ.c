/*
 * XREFs of ?TargetStatsCompleted@CFrameStats@CConnection@DirectComposition@@QEBA_NXZ @ 0x1C0081D84
 * Callers:
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x1C0081570 (-ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z.c)
 *     ?SetCurrentStats@CFrameStats@CConnection@DirectComposition@@QEAA_NPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x1C0081A9C (-SetCurrentStats@CFrameStats@CConnection@DirectComposition@@QEAA_NPEAUtagCOMPOSITION_CONFIRM_FRA.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CConnection::CFrameStats::TargetStatsCompleted(
        DirectComposition::CConnection::CFrameStats *this)
{
  unsigned int v1; // r9d
  unsigned int v2; // edx
  __int64 v3; // rcx
  __int64 v4; // r8

  v1 = *((_DWORD *)this + 1);
  v2 = 0;
  if ( !v1 )
    return 1;
  v3 = *((_QWORD *)this + 5);
  while ( 1 )
  {
    v4 = 104LL * v2;
    if ( *(_QWORD *)(v4 + v3 + 40) )
    {
      if ( *(_DWORD *)(v4 + v3 + 56) && !*(_DWORD *)(v4 + v3 + 80) )
        break;
    }
    if ( ++v2 >= v1 )
      return 1;
  }
  return 0;
}
