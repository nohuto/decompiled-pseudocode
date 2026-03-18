/*
 * XREFs of CiSystemUpdateMediaBufferingState @ 0x1C0002E10
 * Callers:
 *     CiSchedulerProcessDeadlines @ 0x1C0001250 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerRefreshTaskIndexQosProperties @ 0x1C00030B0 (CiSchedulerRefreshTaskIndexQosProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiSystemUpdateMediaBufferingState(__int64 a1)
{
  __int64 result; // rax

  if ( (CiTotalTasksBuffering != 0) != CiCurrentMediaBufferingState
    && (!CiTotalTasksBuffering || !CiTotalTasksDeadlineExpired) )
  {
    CiCurrentMediaBufferingState = CiTotalTasksBuffering != 0;
    LOBYTE(a1) = CiTotalTasksBuffering != 0;
    return PoNotifyMediaBuffering(a1);
  }
  return result;
}
