/*
 * XREFs of AcpiDeviceResetInterface @ 0x1C00237D0
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C00165F0 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C002D594 (ACPIInitReferenceDeviceExtension.c)
 */

__int64 __fastcall AcpiDeviceResetInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v4; // r13
  unsigned __int16 v5; // bp
  unsigned __int16 v6; // cx
  char v7; // r15
  _WORD *v8; // rsi
  bool v9; // cf
  unsigned int v10; // edi
  KIRQL v11; // al
  KIRQL v12; // r9
  char v13; // bl
  __int64 v14; // rax
  __int64 v15; // r8
  _QWORD **v16; // r8
  _QWORD *i; // rdx
  __int64 Pool2; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // edx
  __int64 result; // rax
  __int64 v23; // [rsp+20h] [rbp-48h]
  char v24; // [rsp+70h] [rbp+8h]

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD **)(a1 + 64);
  v5 = *(_WORD *)(v2 + 18);
  v6 = *(_WORD *)(v2 + 16);
  v7 = 1;
  v8 = *(_WORD **)(v2 + 24);
  if ( v5 > 1u )
  {
    if ( v5 == 2 )
    {
      v9 = v6 < 0x48u;
    }
    else
    {
      if ( v5 != 3 )
      {
        v10 = -1073741637;
        goto LABEL_43;
      }
      v9 = v6 < 0x50u;
    }
  }
  else
  {
    v9 = v6 < 0x38u;
  }
  if ( v9 )
  {
    v10 = -1073741789;
    goto LABEL_43;
  }
  v11 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v10 = 0;
  v23 = v4[62];
  v12 = v11;
  if ( v4[56] )
  {
    v13 = 1;
    v24 = 1;
LABEL_12:
    v7 = 0;
    goto LABEL_13;
  }
  v14 = v4[55];
  v13 = 0;
  v24 = 0;
  if ( !v14 )
    goto LABEL_12;
  v15 = *(_QWORD *)(v14 + 8);
  if ( (*(_DWORD *)(v15 + 16) & 0x220LL) != 0 )
    goto LABEL_12;
  v16 = (_QWORD **)(v15 + 48);
  for ( i = *v16; i != v16; i = (_QWORD *)*i )
  {
    if ( (*(_DWORD *)(*(i - 1) + 1008LL) & 0x800LL) == 0 )
      goto LABEL_12;
  }
LABEL_13:
  KeReleaseSpinLock(&AcpiPowerLock, v12);
  if ( !v23 && !v13 && !v7 || (Pool2 = ExAllocatePool2(64LL, (unsigned __int16)*v8 + 96LL, 1366319937LL)) == 0 )
  {
    v10 = *(_DWORD *)(a2 + 48);
    goto LABEL_43;
  }
  ACPIInitReferenceDeviceExtension(v4);
  *(_QWORD *)(Pool2 + 8) = v4;
  *(_DWORD *)Pool2 = 1;
  if ( *v8 )
  {
    memmove((void *)(Pool2 + 96), v8, (unsigned __int16)*v8);
    *(_QWORD *)(Pool2 + 80) = Pool2 + 96;
  }
  *(_BYTE *)(Pool2 + 16) = v24;
  *(_BYTE *)(Pool2 + 17) = v23 != 0;
  if ( v24 )
  {
    v19 = v4[56];
LABEL_31:
    *(_QWORD *)(Pool2 + 72) = *(_QWORD *)(v19 + 8);
    goto LABEL_32;
  }
  if ( v7 )
  {
    v19 = v4[55];
    goto LABEL_31;
  }
LABEL_32:
  *(_QWORD *)(Pool2 + 64) = Pool2;
  *(_QWORD *)(Pool2 + 56) = AcpiDeviceResetCompleteResetWorker;
  *(_QWORD *)(Pool2 + 40) = 0LL;
  if ( v5 > 1u )
  {
    *(_OWORD *)v8 = DeviceResetInterface;
    *((_OWORD *)v8 + 1) = *(_OWORD *)&off_1C0060E30;
    *((_OWORD *)v8 + 2) = *(_OWORD *)&off_1C0060E40;
    *((_OWORD *)v8 + 3) = *(_OWORD *)&qword_1C0060E50;
    if ( v5 == 2 )
    {
      *((_QWORD *)v8 + 8) = AcpiDeviceBusSpecificReset;
      *(_DWORD *)v8 = 131144;
    }
    else
    {
      *((_OWORD *)v8 + 4) = *(_OWORD *)&off_1C0060E60;
    }
  }
  else
  {
    *(_OWORD *)v8 = DeviceResetInterface;
    *((_OWORD *)v8 + 1) = *(_OWORD *)&off_1C0060E30;
    *((_OWORD *)v8 + 2) = *(_OWORD *)&off_1C0060E40;
    *((_QWORD *)v8 + 6) = 0LL;
    *(_DWORD *)v8 = 65592;
  }
  *((_QWORD *)v8 + 1) = Pool2;
  v20 = *(_QWORD *)(Pool2 + 80);
  if ( v20 && *(_QWORD *)(v20 + 32) )
    *((_DWORD *)v8 + 10) = *(_DWORD *)(v20 + 40);
  v21 = (v23 != 0) | 2;
  if ( !*(_QWORD *)(Pool2 + 72) )
    v21 = v23 != 0;
  *((_DWORD *)v8 + 10) = v21;
LABEL_43:
  result = v10;
  *(_DWORD *)(a2 + 48) = v10;
  return result;
}
