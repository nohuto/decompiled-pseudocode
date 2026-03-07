__int64 __fastcall KiAddCpuToSystemCpuPartition(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rbx

  KxAcquireSpinLock((PKSPIN_LOCK)(KiSystemCpuPartition + 264));
  v2 = *(_DWORD *)(a1 + 36);
  v3 = KiSystemCpuPartition;
  KeAddProcessorAffinityEx((unsigned __int16 *)KiSystemCpuPartition, v2);
  return KxReleaseSpinLock((volatile signed __int64 *)(v3 + 264));
}
