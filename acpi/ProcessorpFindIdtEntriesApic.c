NTSTATUS __fastcall ProcessorpFindIdtEntriesApic(
        PDEVICE_OBJECT Pdo,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        char a7,
        int a8)
{
  __int64 v8; // rdi
  int DeviceIdtAssignment; // ebx
  __int128 v12; // xmm0
  NTSTATUS result; // eax
  unsigned __int16 v14; // r14
  char v15; // r15
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  NTSTATUS SecondaryInterruptAffinity; // esi
  __int64 v21; // r8
  __int128 v22; // xmm0
  __int64 v23; // r8
  __int128 v24; // xmm0
  _WORD v25[2]; // [rsp+58h] [rbp-49h] BYREF
  _BYTE v26[4]; // [rsp+5Ch] [rbp-45h] BYREF
  unsigned int v27; // [rsp+60h] [rbp-41h] BYREF
  __int128 v28; // [rsp+68h] [rbp-39h] BYREF
  __int64 v29; // [rsp+78h] [rbp-29h]
  __int128 v30; // [rsp+80h] [rbp-21h] BYREF
  __int128 v31; // [rsp+90h] [rbp-11h]
  void *v32; // [rsp+A0h] [rbp-1h]
  char v35[8]; // [rsp+118h] [rbp+77h]

  LODWORD(v29) = 0;
  v8 = a3;
  v26[0] = 0;
  v25[0] = 0;
  v30 = 0LL;
  v27 = 0;
  v31 = 0LL;
  v28 = 0LL;
  DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, a5, a8, &v30);
  if ( DeviceIdtAssignment >= 0 )
  {
    v12 = v30;
    *(_DWORD *)(v8 + 32) = DWORD1(v31);
    v25[0] = IrqMachinePolicy;
    *(_BYTE *)(v8 + 4) = 1;
    *(_OWORD *)(v8 + 16) = v12;
    IrqPolicyGetDevicePolicy(Pdo, (__int64)v25, (__int64)v26);
    *(_WORD *)(v8 + 6) = v25[0];
    return DeviceIdtAssignment;
  }
  if ( *(_BYTE *)(v8 + 4) )
  {
    v14 = *(_WORD *)(v8 + 6);
    v15 = *(_BYTE *)(v8 + 8);
    v28 = *(_OWORD *)(v8 + 16);
  }
  else
  {
    if ( (int)IrqPolicyGetDevicePolicy(Pdo, (__int64)v25, (__int64)v26) >= 0 )
    {
      v14 = v25[0];
    }
    else
    {
      v14 = IrqMachinePolicy;
      v28 = 0LL;
    }
    v15 = v26[0];
  }
  v16 = 16LL;
  v35[0] = a7 & 1;
  v29 = 16LL;
  v25[0] = v14;
  if ( (unsigned __int8)IcIsInterruptTypeSecondary(a5) )
  {
    SecondaryInterruptAffinity = ProcessorpGetSecondaryInterruptAffinity(v18, a4, &v28);
    if ( SecondaryInterruptAffinity < 0 )
      return SecondaryInterruptAffinity;
    v15 = 0;
    SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                   (__int64)Pdo,
                                   (__int64 *)&v28,
                                   v21,
                                   v35[0],
                                   a4,
                                   a5,
                                   a6,
                                   a8,
                                   &v27);
LABEL_34:
    if ( SecondaryInterruptAffinity < 0 )
      return SecondaryInterruptAffinity;
  }
  else
  {
    if ( (_QWORD)v28 )
    {
      if ( (unsigned __int8)ProcessorpValidateTargetSet(&v28) )
      {
        result = ProcessorpFindAffinitizedIdtEntries((__int64)Pdo, (__int64 *)&v28, v19, v35[0], a4, a5, a6, a8, &v27);
        v17 = (unsigned int)result;
        if ( result >= 0 )
        {
          v22 = v28;
          *(_DWORD *)(v8 + 32) = v27;
          *(_OWORD *)(v8 + 16) = v22;
          *(_WORD *)(v8 + 6) = v14;
          *(_BYTE *)(v8 + 8) = v15;
          *(_BYTE *)(v8 + 4) = 1;
          return result;
        }
      }
      else
      {
        v17 = 3221225659LL;
      }
      if ( v14 == 4 )
      {
        if ( a2 && (*(_BYTE *)(a2 + 4) & 4) != 0 )
          return v17;
        v14 = IrqMachinePolicy;
        v25[0] = IrqMachinePolicy;
      }
    }
    if ( ProcessorpPreferredCpuSetActive )
      goto LABEL_31;
    LOBYTE(v19) = a6 & 1;
    if ( !(unsigned __int8)IrqPolicyQuerySteeringEnabledForInterrupt(a5, v17, v19) || v14 != 6 )
      goto LABEL_31;
    v27 = 0;
    v30 = 0LL;
    v32 = 0LL;
    v31 = 0LL;
    do
    {
      LOBYTE(v17) = v15;
      SecondaryInterruptAffinity = ProcessorpSelectProcessorSetFromPartitions(6LL, v17, &v28, &v30);
      if ( SecondaryInterruptAffinity < 0 )
        break;
      SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                     (__int64)Pdo,
                                     (__int64 *)&v28,
                                     v19,
                                     v35[0],
                                     a4,
                                     a5,
                                     a6,
                                     a8,
                                     &v27);
    }
    while ( SecondaryInterruptAffinity < 0 );
    v8 = a3;
    v14 = v25[0];
    v16 = v29;
    if ( v32 )
      IntPartFree(v32);
    if ( SecondaryInterruptAffinity < 0 )
    {
LABEL_31:
      v27 = 0;
      v30 = 0LL;
      v32 = 0LL;
      v31 = 0LL;
      while ( 1 )
      {
        LOBYTE(v19) = ProcessorpPreferredCpuSetActive;
        LOBYTE(v17) = v15;
        SecondaryInterruptAffinity = ProcessorpSelectProcessorSetFromClusters(
                                       v14,
                                       v17,
                                       v19,
                                       (unsigned int)&v28,
                                       (__int64)&v30);
        if ( SecondaryInterruptAffinity < 0 )
          return SecondaryInterruptAffinity;
        SecondaryInterruptAffinity = ProcessorpFindAffinitizedIdtEntries(
                                       (__int64)Pdo,
                                       (__int64 *)&v28,
                                       v23,
                                       v35[0],
                                       a4,
                                       a5,
                                       a6,
                                       a8,
                                       &v27);
        if ( SecondaryInterruptAffinity >= 0 )
          goto LABEL_34;
      }
    }
  }
  v24 = v28;
  *(_DWORD *)(v8 + 32) = v27;
  *(_OWORD *)(v16 + v8) = v24;
  *(_WORD *)(v8 + 6) = v14;
  *(_BYTE *)(v8 + 8) = v15;
  *(_BYTE *)(v8 + 4) = 1;
  return SecondaryInterruptAffinity;
}
