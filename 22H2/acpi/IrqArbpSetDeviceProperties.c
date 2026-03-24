/*
 * XREFs of IrqArbpSetDeviceProperties @ 0x1C0092578
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0093900 (IrqArbCommitAllocation.c)
 *     IrqArbUpdateInterruptProperties @ 0x1C00B71B4 (IrqArbUpdateInterruptProperties.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     IrqPolicySetDeviceAffinity @ 0x1C0092208 (IrqPolicySetDeviceAffinity.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C00936A0 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C00938DC (IrqArbGsivFromIrq.c)
 */

__int64 __fastcall IrqArbpSetDeviceProperties(PRTL_RANGE a1, __int128 *a2)
{
  __int128 v2; // xmm1
  PVOID *p_Owner; // rax
  __int128 v4; // xmm2
  struct _DEVICE_OBJECT *Owner; // rsi
  char v6; // di
  char v7; // r15
  unsigned int v8; // r14d
  PRTL_RANGE v9; // r13
  NTSTATUS DeviceIdtAssignment; // ebx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  _DWORD *UserData; // rbx
  unsigned int *PoolWithTag; // rax
  unsigned int *Data; // rsi
  __int128 v16; // xmm0
  unsigned int v17; // edi
  unsigned int v18; // eax
  _DWORD *v19; // rbx
  __int64 v20; // r13
  int v21; // eax
  NTSTATUS NextRange; // eax
  PRTL_RANGE Range; // [rsp+40h] [rbp-59h] BYREF
  PVOID *v25; // [rsp+48h] [rbp-51h]
  PDEVICE_OBJECT Pdo; // [rsp+50h] [rbp-49h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+58h] [rbp-41h] BYREF
  __int128 v28; // [rsp+78h] [rbp-21h]
  __int128 v29; // [rsp+88h] [rbp-11h]
  __int128 v30; // [rsp+98h] [rbp-1h] BYREF
  __int128 v31; // [rsp+A8h] [rbp+Fh]

  v2 = *a2;
  p_Owner = &a1->Owner;
  v4 = a2[1];
  Owner = (struct _DEVICE_OBJECT *)a1->Owner;
  v6 = 0;
  v7 = 0;
  v25 = &a1->Owner;
  v8 = 0;
  Pdo = Owner;
  v9 = a1;
  Range = a1;
  v28 = v2;
  v29 = v4;
  v30 = 0LL;
  v31 = 0LL;
  *(_OWORD *)&Iterator.RangeListHead = v2;
  *(_OWORD *)&Iterator.Current = v4;
  while ( 1 )
  {
    if ( a1->Owner == *p_Owner )
    {
      v11 = IrqArbGsivFromIrq(LODWORD(a1->Start));
      DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(Owner, v11, 0LL, &v30);
      if ( DeviceIdtAssignment < 0 )
        return (unsigned int)DeviceIdtAssignment;
      v12 = DWORD2(v31);
      v8 += DWORD2(v31);
      UserData = Range->UserData;
      if ( (UserData[1] & 2) == 0 && !v6 )
      {
        IrqPolicySetDeviceAffinity((__int64)Owner, (unsigned __int16 *)&v30);
        v12 = DWORD2(v31);
        v6 = 1;
      }
      if ( v8 > v12 && UserData[2] == 3 )
        v7 = 1;
    }
    DeviceIdtAssignment = RtlGetNextRange(&Iterator, &Range, 1u);
    if ( DeviceIdtAssignment == -2147483622 )
      break;
    a1 = Range;
    p_Owner = v25;
  }
  if ( !v8 )
    return (unsigned int)DeviceIdtAssignment;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 88 * v8 + 8, 0x49706341u);
  Data = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag + 1, 0, 0x5CuLL);
    v16 = v28;
    *Data = v8;
    Range = v9;
    *(_OWORD *)&Iterator.RangeListHead = v16;
    v17 = v7 != 0 ? v8 : 0;
    *(_OWORD *)&Iterator.Current = v29;
    while ( 1 )
    {
      if ( v9->Owner == *v25 )
      {
        v18 = IrqArbGsivFromIrq(LODWORD(v9->Start));
        DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(Pdo, v18, 0LL, &v30);
        if ( DeviceIdtAssignment < 0 )
          goto LABEL_28;
        if ( v7 )
          v17 -= DWORD2(v31);
        v19 = Range->UserData;
        v20 = 22LL * v17;
        memmove(&Data[v20 + 2], v19 + 8, 88LL * DWORD2(v31));
        v21 = v19[1];
        if ( (v21 & 0x10) != 0 && v19[2] == 1 )
        {
          Data[v20 + 17] |= 1u;
          v21 = v19[1];
        }
        if ( !v7 )
          v17 += DWORD2(v31);
        v19[1] = v21 & 0xFFFFFFFE;
      }
      NextRange = RtlGetNextRange(&Iterator, &Range, 1u);
      if ( v17 >= v8 || NextRange == -2147483622 )
        break;
      v9 = Range;
    }
    DeviceIdtAssignment = IoSetDevicePropertyData(
                            Pdo,
                            &INTERRUPT_CONNECTION_DATA_PKEY,
                            0,
                            0,
                            0x1003u,
                            88 * v8 + 8,
                            Data);
LABEL_28:
    ExFreePoolWithTag(Data, 0);
    return (unsigned int)DeviceIdtAssignment;
  }
  return 3221225626LL;
}
