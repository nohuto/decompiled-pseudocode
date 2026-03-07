__int64 __fastcall ViDeadlockKeInitializeMutex_Exit(__int64 a1, __int64 a2)
{
  return VfDeadlockInitializeResource(*(LONG **)(a1 + 16), a2, *(void **)a1);
}
