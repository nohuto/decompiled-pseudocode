__int64 __fastcall AcpiPlatformLevelDeviceReset(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  int v6; // edi
  KIRQL v7; // bp
  __int64 v8; // r8
  __int64 v9; // r11
  _QWORD *v10; // r10
  _QWORD *v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-8h]

  v2 = *(_QWORD **)(a1 + 8);
  if ( !v2[96] )
    return 3221225486LL;
  if ( !*(_QWORD *)(a1 + 72) )
    return 3221225659LL;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  if ( v2[119] )
  {
    v6 = -2147483631;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 72);
    v10 = (_QWORD *)(v9 + 48);
    v11 = *(_QWORD **)(v9 + 48);
    while ( v11 != v10 )
    {
      if ( !(unsigned __int8)AcpiResetDeviceAlreadyProcessed(v9, v11 - 5, v8, *v11, v14) )
      {
        v13 = *(_QWORD *)(v12 + 32);
        *(_QWORD *)(v13 + 1008) |= 0x8000000uLL;
        *(_QWORD *)(v13 + 952) = a1;
        _InterlockedIncrement((volatile signed __int32 *)a1);
      }
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v7);
  if ( v6 >= 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 88), 1u);
    return (unsigned int)IoRequestDeviceRemovalForReset(v2[98], (4 * (unsigned __int8)*a2) & 4);
  }
  return (unsigned int)v6;
}
