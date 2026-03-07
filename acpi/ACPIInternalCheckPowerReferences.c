char __fastcall ACPIInternalCheckPowerReferences(__int64 a1)
{
  _QWORD *v1; // rdi
  char v2; // bl
  KIRQL v3; // r8
  __int64 v4; // rax

  v1 = *(_QWORD **)(a1 + 416);
  v2 = 1;
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  while ( v1 )
  {
    v4 = v1[1];
    v1 = (_QWORD *)*v1;
    v2 = (*(_DWORD *)(v4 + 16) & 0x810) != 0LL ? v2 : 0;
  }
  KeReleaseSpinLock(&AcpiPowerLock, v3);
  return v2;
}
