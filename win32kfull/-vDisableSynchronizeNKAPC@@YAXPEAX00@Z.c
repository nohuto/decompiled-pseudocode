void __fastcall vDisableSynchronizeNKAPC(void *a1, void *a2, void *a3)
{
  unsigned int v3; // ebx

  v3 = (unsigned int)a1;
  UserEnterUserCritSec(a1, a2, a3);
  vDisableTimers(v3);
  UserLeaveUserCritSec();
}
