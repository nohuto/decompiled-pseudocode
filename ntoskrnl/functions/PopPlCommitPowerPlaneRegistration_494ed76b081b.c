__int64 __fastcall PopPlCommitPowerPlaneRegistration(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v1 + 24) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 16));
  result = *(_QWORD *)(a1 + 8);
  PopPowerPlane = result;
  return result;
}
