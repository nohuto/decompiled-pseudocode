void __fastcall PopSetDisplayStatus(int a1)
{
  unsigned int ProcessSessionId; // ebx
  __int64 v3; // rdx

  ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  PopAcquireAdaptiveLock(1, v3);
  PopSetSessionDisplayStatus(ProcessSessionId, a1, 1);
  PopReleaseAdaptiveLock();
}
