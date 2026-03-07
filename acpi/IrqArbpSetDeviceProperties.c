__int64 __fastcall IrqArbpSetDeviceProperties(PRTL_RANGE a1, __int128 *a2)
{
  __int128 v2; // xmm1
  PVOID *p_Owner; // rax
  __int128 v4; // xmm2
  struct _DEVICE_OBJECT *Owner; // r12
  char v6; // si
  char v7; // r15
  unsigned int v8; // r14d
  PRTL_RANGE v9; // r13
  int v10; // eax
  int DeviceIdtAssignment; // edi
  unsigned int v12; // ecx
  _DWORD *UserData; // rbx
  char *Pool2; // rax
  char *Data; // rsi
  __int128 v17; // xmm0
  unsigned int v18; // ebx
  int v19; // eax
  _DWORD *v20; // rdi
  __int64 v21; // r13
  int v22; // eax
  PRTL_RANGE Range; // [rsp+40h] [rbp-59h] BYREF
  PVOID *v24; // [rsp+48h] [rbp-51h]
  PDEVICE_OBJECT Pdo; // [rsp+50h] [rbp-49h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+58h] [rbp-41h] BYREF
  __int128 v27; // [rsp+78h] [rbp-21h]
  __int128 v28; // [rsp+88h] [rbp-11h]
  __int128 v29; // [rsp+98h] [rbp-1h] BYREF
  __int128 v30; // [rsp+A8h] [rbp+Fh]

  v2 = *a2;
  p_Owner = &a1->Owner;
  v4 = a2[1];
  Owner = (struct _DEVICE_OBJECT *)a1->Owner;
  v6 = 0;
  v7 = 0;
  v24 = &a1->Owner;
  v8 = 0;
  Pdo = Owner;
  v9 = a1;
  Range = a1;
  v27 = v2;
  v28 = v4;
  v29 = 0LL;
  v30 = 0LL;
  *(_OWORD *)&Iterator.RangeListHead = v2;
  *(_OWORD *)&Iterator.Current = v4;
  while ( 1 )
  {
    if ( a1->Owner == *p_Owner )
    {
      v10 = IrqArbGsivFromIrq(LODWORD(a1->Start));
      DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(Owner, v10, 0, &v29);
      if ( DeviceIdtAssignment < 0 )
        return (unsigned int)DeviceIdtAssignment;
      v12 = DWORD2(v30);
      v8 += DWORD2(v30);
      UserData = Range->UserData;
      if ( (UserData[1] & 2) == 0 && !v6 )
      {
        IrqPolicySetDeviceAffinity(Owner, &v29);
        v12 = DWORD2(v30);
        v6 = 1;
      }
      if ( v8 > v12 && UserData[2] == 3 )
        v7 = 1;
    }
    DeviceIdtAssignment = RtlGetNextRange(&Iterator, &Range, 1u);
    if ( DeviceIdtAssignment == -2147483622 )
      break;
    a1 = Range;
    p_Owner = v24;
  }
  if ( v8 )
  {
    Pool2 = (char *)ExAllocatePool2(256LL, 88 * v8 + 8, 1232102209LL);
    Data = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    v17 = v27;
    *(_DWORD *)Pool2 = v8;
    Range = v9;
    *(_OWORD *)&Iterator.RangeListHead = v17;
    v18 = v7 != 0 ? v8 : 0;
    *(_OWORD *)&Iterator.Current = v28;
    while ( 1 )
    {
      if ( v9->Owner == *v24 )
      {
        v19 = IrqArbGsivFromIrq(LODWORD(v9->Start));
        DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(Pdo, v19, 0, &v29);
        if ( DeviceIdtAssignment < 0 )
          goto LABEL_30;
        if ( v7 )
          v18 -= DWORD2(v30);
        v20 = Range->UserData;
        v21 = 88LL * v18;
        memmove(&Data[v21 + 8], v20 + 8, 88LL * DWORD2(v30));
        v22 = v20[1];
        if ( (v22 & 0x10) != 0 && v20[2] == 1 )
        {
          *(_DWORD *)&Data[v21 + 68] |= 1u;
          v22 = v20[1];
        }
        if ( !v7 )
          v18 += DWORD2(v30);
        v20[1] = v22 & 0xFFFFFFFE;
      }
      if ( RtlGetNextRange(&Iterator, &Range, 1u) == -2147483622 || v18 >= v8 )
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
LABEL_30:
    ExFreePoolWithTag(Data, 0);
  }
  return (unsigned int)DeviceIdtAssignment;
}
