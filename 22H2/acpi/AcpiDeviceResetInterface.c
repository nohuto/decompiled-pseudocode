/*
 * XREFs of AcpiDeviceResetInterface @ 0x1C0031180
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0010C50 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C0017F20 (ACPIInitReferenceDeviceExtension.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

__int64 __fastcall AcpiDeviceResetInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v4; // rbp
  _WORD *v5; // r14
  KIRQL v6; // al
  __int64 v7; // rbx
  unsigned int v8; // edi
  KIRQL v9; // r9
  __int64 v10; // rax
  char v11; // r13
  char v12; // r12
  __int64 result; // rax
  __int64 v14; // r8
  _QWORD **v15; // r8
  _QWORD *i; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edx

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD **)(a1 + 64);
  v5 = *(_WORD **)(v2 + 24);
  if ( *(_WORD *)(v2 + 16) < 0x38u )
  {
    v8 = -1073741789;
    goto LABEL_9;
  }
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v7 = v4[57];
  v8 = 0;
  v9 = v6;
  if ( v4[51] )
  {
    v11 = 1;
LABEL_4:
    v12 = 0;
    goto LABEL_5;
  }
  v10 = v4[50];
  v11 = 0;
  if ( !v10 )
    goto LABEL_4;
  v14 = *(_QWORD *)(v10 + 8);
  v12 = 1;
  if ( (*(_DWORD *)(v14 + 16) & 0x220LL) != 0 )
    goto LABEL_4;
  v15 = (_QWORD **)(v14 + 48);
  for ( i = *v15; i != v15; i = (_QWORD *)*i )
  {
    if ( (*(_DWORD *)(*(i - 1) + 960LL) & 0x800LL) == 0 )
      goto LABEL_4;
  }
LABEL_5:
  KeReleaseSpinLock(&AcpiPowerLock, v9);
  if ( !v7 && !v11 && !v12
    || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)*v5 + 88LL, 0x51706341u),
        (v18 = PoolWithTag) == 0LL) )
  {
    v8 = *(_DWORD *)(a2 + 48);
    goto LABEL_9;
  }
  memset(PoolWithTag, 0, 0x58uLL);
  ACPIInitReferenceDeviceExtension((__int64)v4);
  v18[1] = v4;
  *(_DWORD *)v18 = 1;
  if ( *v5 )
  {
    memmove(v18 + 11, v5, (unsigned __int16)*v5);
    v18[10] = v18 + 11;
  }
  *((_BYTE *)v18 + 16) = v11;
  if ( v11 )
  {
    v19 = v4[51];
  }
  else
  {
    if ( !v12 )
      goto LABEL_26;
    v19 = v4[50];
  }
  v18[9] = *(_QWORD *)(v19 + 8);
LABEL_26:
  v18[8] = v18;
  v18[7] = AcpiDeviceResetCompleteResetWorker;
  v18[5] = 0LL;
  *(_OWORD *)v5 = DeviceResetInterface;
  *((_OWORD *)v5 + 1) = *(_OWORD *)&off_1C006F168;
  *((_OWORD *)v5 + 2) = *(_OWORD *)&off_1C006F178;
  *((_QWORD *)v5 + 6) = 0LL;
  *((_QWORD *)v5 + 1) = v18;
  v20 = v18[10];
  if ( v20 && *(_QWORD *)(v20 + 32) )
    *((_DWORD *)v5 + 10) = *(_DWORD *)(v20 + 40);
  v21 = (v7 != 0) | 2;
  if ( !v18[9] )
    v21 = v7 != 0;
  *((_DWORD *)v5 + 10) = v21;
LABEL_9:
  result = v8;
  *(_DWORD *)(a2 + 48) = v8;
  return result;
}
