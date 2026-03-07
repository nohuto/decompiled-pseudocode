char __fastcall AcpiDeviceResetMarkDeviceRemoved(__int64 a1)
{
  char v2; // di
  KIRQL v3; // r9
  _QWORD **v4; // r8
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx

  v2 = 1;
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v4 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 952) + 72LL) + 48LL);
  v5 = *v4;
  while ( v5 != v4 )
  {
    v6 = *(v5 - 1);
    v5 = (_QWORD *)*v5;
    v7 = *(_QWORD *)(v6 + 784);
    if ( v7 && (*(_DWORD *)(v7 + 48) & 0x4000000) == 0 )
    {
      v2 = 0;
      break;
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v3);
  return v2;
}
