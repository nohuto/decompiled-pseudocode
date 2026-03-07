void __fastcall MultiUserDrvCleanupGraphicsDeviceList(__int64 a1)
{
  __int64 v1; // rbx
  struct tagGRAPHICS_DEVICE *v2; // rcx
  __int64 v3; // rbx
  char *v4; // rdx
  char *v5; // rdx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  DrvCleanupGraphicsDeviceList(*(struct tagGRAPHICS_DEVICE **)(v1 + 1352));
  v2 = *(struct tagGRAPHICS_DEVICE **)(v1 + 1344);
  *(_QWORD *)(v1 + 1352) = 0LL;
  DrvCleanupGraphicsDeviceList(v2);
  *(_QWORD *)(v1 + 1344) = 0LL;
  *(_QWORD *)(v1 + 1264) = 0LL;
  v3 = v1 + 3016;
  v4 = *(char **)(v3 + 40);
  if ( v4 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
    *(_QWORD *)(v3 + 40) = 0LL;
  }
  v5 = *(char **)(v3 + 56);
  if ( v5 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
    *(_QWORD *)(v3 + 56) = 0LL;
  }
  GreCleanupRemoteAdapterContext((struct tagREMOTE_CONTEXT *)v3);
}
