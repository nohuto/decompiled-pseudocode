__int64 __fastcall SmmAssignDomain(__int64 a1, __int64 a2, int a3)
{
  KIRQL v6; // al

  ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  *(_QWORD *)(a1 + 112) = a2;
  *(_DWORD *)(a1 + 104) = a3;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v6);
  return ExReleasePushLockExclusiveEx(a1 + 80, 0LL);
}
