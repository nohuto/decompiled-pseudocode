__int64 __fastcall ACPIThermalReadTemperatureComplete(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // rdi
  KSPIN_LOCK *v6; // rbx
  KIRQL v7; // al
  int v8; // ebp
  bool v9; // bp
  __int64 v10; // rdx

  v3 = *(_DWORD *)(a2 + 48);
  v5 = *(_QWORD *)(a3 + 200);
  if ( v3 == -1073741536 )
  {
    v6 = (KSPIN_LOCK *)(a3 + 184);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a3 + 184));
    v8 = *(_DWORD *)(a3 + 192);
    KeReleaseSpinLock(v6, v7);
    v9 = (v8 & 0x4000000) == 0;
  }
  else
  {
    v9 = 1;
    if ( v3 >= 0 )
    {
      v10 = *(unsigned int *)(v5 + 224);
      *(_BYTE *)(v5 + 272) = 0;
      ACPIThermalUpdateTemperature(a3, v10);
    }
    else
    {
      *(_BYTE *)(v5 + 272) = 1;
    }
  }
  KeSetEvent((PRKEVENT)(v5 + 248), 0, 0);
  if ( v9 )
    ACPIThermalLoopEx(a3, 536871424, 0);
  return 3221225494LL;
}
