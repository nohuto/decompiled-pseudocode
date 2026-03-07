__int64 __fastcall PiControlGetPropertyData(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned int v4; // ecx
  __int64 result; // rax
  struct _DEVICE_OBJECT *v8; // r13
  __int64 DeviceNode; // r14
  unsigned int *v10; // rsi
  unsigned int v11; // r12d
  __int64 v12; // rdx
  int BufferForUserModeCaller; // ebx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  DEVICE_REGISTRY_PROPERTY v21; // edx
  NTSTATUS DeviceProperty; // eax
  char v23; // si
  int UserModeCallersCopy; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  bool v30; // zf
  unsigned int v31; // eax
  __int64 v32; // rdx
  unsigned int v33; // edx
  int ResultLength; // [rsp+20h] [rbp-40h]
  PVOID PropertyBuffer; // [rsp+40h] [rbp-20h] BYREF
  __int128 v36; // [rsp+48h] [rbp-18h] BYREF
  int v37; // [rsp+A8h] [rbp+48h] BYREF
  char v38; // [rsp+B8h] [rbp+58h]

  v38 = a4;
  v4 = *a2;
  v37 = 0;
  PropertyBuffer = 0LL;
  v36 = 0LL;
  WORD1(v36) = v4;
  LOWORD(v36) = v4;
  if ( (unsigned __int16)(v4 - 1) > 0x18Fu || (v4 & 1) != 0 )
    return 3221225485LL;
  result = PiControlMakeUserModeCallersCopy((char *)&v36 + 8, *((_QWORD *)a2 + 1), v4, 2LL, a4, 1);
  if ( (int)result >= 0 )
  {
    PpDevNodeLockTree(0LL);
    v8 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(&v36, 1131441744LL);
    PiControlFreeUserModeCallersBuffer(a4, *((void **)&v36 + 1));
    if ( !v8 || (DeviceNode = (__int64)v8->DeviceObjectExtension->DeviceNode) == 0 )
    {
      BufferForUserModeCaller = -1073741810;
      goto LABEL_32;
    }
    if ( (unsigned int)(*(_DWORD *)(DeviceNode + 300) - 789) <= 1 )
    {
      BufferForUserModeCaller = -1073741738;
      goto LABEL_32;
    }
    v10 = (unsigned int *)(a2 + 16);
    v11 = *((_DWORD *)a2 + 8);
    BufferForUserModeCaller = PiControlAllocateBufferForUserModeCaller(
                                (__int64 *)&PropertyBuffer,
                                v11,
                                a4,
                                *((_QWORD *)a2 + 3));
    if ( BufferForUserModeCaller >= 0 )
    {
      v14 = *((_DWORD *)a2 + 4);
      if ( v14 <= 8 )
      {
        if ( v14 == 8 )
        {
          v21 = DevicePropertyAddress;
          goto LABEL_17;
        }
        v15 = v14 - 1;
        if ( !v15 )
        {
          v21 = DevicePropertyPhysicalDeviceObjectName;
          goto LABEL_17;
        }
        v16 = v15 - 1;
        if ( !v16 )
        {
          v21 = DevicePropertyBusTypeGuid;
          goto LABEL_17;
        }
        v17 = v16 - 1;
        if ( !v17 )
        {
          v21 = DevicePropertyLegacyBusType;
          goto LABEL_17;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          v21 = DevicePropertyBusNumber;
          goto LABEL_17;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          BufferForUserModeCaller = PiControlGetDevicePowerData(DeviceNode, v12, v11, PropertyBuffer, a2 + 16);
          v29 = -1073741789;
          v30 = BufferForUserModeCaller == -2147483643;
LABEL_45:
          if ( v30 )
            BufferForUserModeCaller = v29;
          goto LABEL_19;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          v21 = DevicePropertyRemovalPolicy;
LABEL_17:
          DeviceProperty = IoGetDeviceProperty(v8, v21, v11, PropertyBuffer, (PULONG)a2 + 8);
LABEL_18:
          BufferForUserModeCaller = DeviceProperty;
          goto LABEL_19;
        }
        if ( v20 == 1 )
        {
          BufferForUserModeCaller = CmGetDeviceRegProp(
                                      PiPnpRtlCtx,
                                      *(_QWORD *)(DeviceNode + 48),
                                      0,
                                      34,
                                      (__int64)&v37,
                                      (__int64)PropertyBuffer,
                                      (__int64)(a2 + 16),
                                      0);
          if ( BufferForUserModeCaller >= 0 )
          {
            if ( v37 != 4 )
            {
              BufferForUserModeCaller = -1073741584;
              goto LABEL_32;
            }
            goto LABEL_19;
          }
          v29 = -1073741772;
          v30 = BufferForUserModeCaller == -1073741275;
          goto LABEL_45;
        }
LABEL_54:
        BufferForUserModeCaller = -1073741811;
        goto LABEL_32;
      }
      v25 = v14 - 10;
      if ( !v25 )
      {
        if ( v11 < 4 )
        {
          BufferForUserModeCaller = -1073741789;
        }
        else
        {
          PpHotSwapGetDevnodeRemovalPolicy(DeviceNode, 0, (unsigned int *)PropertyBuffer);
          BufferForUserModeCaller = 0;
        }
        *v10 = 4;
        goto LABEL_19;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
        v21 = DevicePropertyInstallState;
        goto LABEL_17;
      }
      v27 = v26 - 2;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( !v28 )
        {
          DeviceProperty = PiControlGetDeviceStack(DeviceNode, v11, PropertyBuffer, a2 + 16);
          goto LABEL_18;
        }
        v31 = v28 - 1;
        if ( v31 )
        {
          if ( v31 != 1 )
            goto LABEL_54;
          v32 = 1LL;
        }
        else
        {
          v32 = 0LL;
        }
        BufferForUserModeCaller = PnpGetDeviceDependencyList(DeviceNode, v32, PropertyBuffer, v11 >> 1, a2 + 16);
        v33 = 2 * *v10;
        *v10 = v33;
        if ( ((int)(BufferForUserModeCaller + 0x80000000) < 0 || BufferForUserModeCaller == -1073741789) && v33 <= 2 )
        {
          *v10 = 0;
          BufferForUserModeCaller = -1073741772;
        }
LABEL_19:
        if ( BufferForUserModeCaller >= 0 )
          goto LABEL_20;
        goto LABEL_32;
      }
      *v10 = 4;
      if ( v11 >= 4 )
      {
        BufferForUserModeCaller = 0;
        *(_DWORD *)PropertyBuffer = *(_DWORD *)(DeviceNode + 684);
LABEL_20:
        v23 = v38;
        LOBYTE(ResultLength) = v38;
        UserModeCallersCopy = PiControlMakeUserModeCallersCopy(a2 + 12, PropertyBuffer, v11, 1LL, ResultLength, 0);
        if ( UserModeCallersCopy < 0 )
          BufferForUserModeCaller = UserModeCallersCopy;
        goto LABEL_22;
      }
      BufferForUserModeCaller = -1073741789;
    }
LABEL_32:
    v23 = v38;
LABEL_22:
    PpDevNodeUnlockTree(0LL);
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x43706E50u);
    PiControlFreeUserModeCallersBuffer(v23, PropertyBuffer);
    return (unsigned int)BufferForUserModeCaller;
  }
  return result;
}
