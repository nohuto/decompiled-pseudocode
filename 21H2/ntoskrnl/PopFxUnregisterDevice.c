/*
 * XREFs of PopFxUnregisterDevice @ 0x1407B46BC
 * Callers:
 *     PopFxUnregisterDeviceOrWait @ 0x140736910 (PopFxUnregisterDeviceOrWait.c)
 *     PoFxUnregisterDevice @ 0x1407D52D0 (PoFxUnregisterDevice.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     PopFxAddLogEntry @ 0x140282184 (PopFxAddLogEntry.c)
 *     PoFxActivateComponent @ 0x140283CB0 (PoFxActivateComponent.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x14039AF90 (IoReleaseRemoveLockAndWaitEx.c)
 *     PopFxAssignDeviceToDevNode @ 0x1403BE604 (PopFxAssignDeviceToDevNode.c)
 *     PopFxRemoveDevice @ 0x1403BF014 (PopFxRemoveDevice.c)
 *     PopFxDestroyDeviceDpm @ 0x1403CD788 (PopFxDestroyDeviceDpm.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopPluginUnregisterDevice @ 0x14056E33C (PopPluginUnregisterDevice.c)
 *     PopPlCalculateDevicePowerDraw @ 0x14057E5A4 (PopPlCalculateDevicePowerDraw.c)
 *     PopPlLockPowerPlane @ 0x14057E6F0 (PopPlLockPowerPlane.c)
 *     PopPlPublishSystemPowerChange @ 0x14057E9B8 (PopPlPublishSystemPowerChange.c)
 *     PopPlUnlockPowerPlane @ 0x14057F180 (PopPlUnlockPowerPlane.c)
 *     PopPepUnregisterDevice @ 0x1407B4A1C (PopPepUnregisterDevice.c)
 *     PopPlUnregisterComponent @ 0x1408F9C2C (PopPlUnregisterComponent.c)
 */

__int64 __fastcall PopFxUnregisterDevice(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // eax
  unsigned int i; // ebx
  unsigned int v4; // ebx
  struct _KEVENT *v5; // rsi
  REGHANDLE v6; // rbx
  unsigned int j; // r8d
  ULONG_PTR v8; // rcx
  __int64 v9; // r14
  unsigned __int16 *v10; // r12
  int v11; // ebx
  int v12; // eax
  __int64 v13; // r8
  int v14; // r15d
  __int64 v15; // rax
  int v16; // ecx
  unsigned __int64 k; // rbx
  __int64 result; // rax
  int v19; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v20; // [rsp+3Ch] [rbp-CCh] BYREF
  int v21; // [rsp+40h] [rbp-C8h] BYREF
  int v22; // [rsp+44h] [rbp-C4h] BYREF
  int v23; // [rsp+48h] [rbp-C0h] BYREF
  int v24; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h] BYREF
  struct _KEVENT *v26; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+78h] [rbp-90h] BYREF
  int *v29; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  _DWORD *v31; // [rsp+A8h] [rbp-60h]
  __int64 v32; // [rsp+B0h] [rbp-58h]
  __int64 v33; // [rsp+B8h] [rbp-50h]
  _DWORD v34[2]; // [rsp+C0h] [rbp-48h] BYREF
  int *v35; // [rsp+C8h] [rbp-40h]
  __int64 v36; // [rsp+D0h] [rbp-38h]
  int *v37; // [rsp+D8h] [rbp-30h]
  __int64 v38; // [rsp+E0h] [rbp-28h]
  int *v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  __int64 *v41; // [rsp+F8h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp-8h]

  if ( (*(_DWORD *)(BugCheckParameter2 + 824) & 1) == 0 )
  {
    v2 = *(_DWORD *)(BugCheckParameter2 + 828);
    for ( i = 0; i < v2; ++i )
    {
      PoFxActivateComponent(BugCheckParameter2, i, 2);
      v2 = *(_DWORD *)(BugCheckParameter2 + 828);
    }
    v4 = 0;
    if ( v2 )
    {
      do
        KeWaitForSingleObject(
          (PVOID)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8LL * v4++) + 104LL),
          Executive,
          0,
          0,
          0LL);
      while ( v4 < *(_DWORD *)(BugCheckParameter2 + 828) );
    }
  }
  v5 = *(struct _KEVENT **)(BugCheckParameter2 + 48);
  if ( v5 )
  {
    PopFxRemoveDevice(BugCheckParameter2, (_QWORD *)BugCheckParameter2);
    v26 = v5;
    PopFxAddLogEntry((__int64)v5, 0, 2, 0LL);
    if ( PopDiagHandleRegistered )
    {
      v6 = PopDiagHandle;
      if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_UNREGISTRATION) )
      {
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = (ULONGLONG)&v26;
        EtwWrite(v6, &POP_ETW_EVENT_DEVICE_UNREGISTRATION, 0LL, 1u, &UserData);
      }
    }
    PopFxAssignDeviceToDevNode((__int64)v5, 0LL);
  }
  for ( j = 0; j < *(_DWORD *)(BugCheckParameter2 + 828); ++j )
  {
    if ( *(int *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8LL * j) + 96LL) > 0 )
      _InterlockedDecrement(&PopFxResidentComponentCount);
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), 0LL, 0x20u);
  PopPepUnregisterDevice(*(PVOID *)(BugCheckParameter2 + 56));
  v8 = *(_QWORD *)(BugCheckParameter2 + 64);
  if ( v8 )
    PopPluginUnregisterDevice(v8, *(_QWORD *)(BugCheckParameter2 + 72));
  v9 = *(_QWORD *)(BugCheckParameter2 + 1184);
  if ( v9 )
  {
    v10 = *(unsigned __int16 **)(v9 + 16);
    PopPlLockPowerPlane((__int64)v10);
    v11 = *(_DWORD *)(v9 + 32);
    v20 = 0;
    v21 = 1;
    v12 = PopPlCalculateDevicePowerDraw(BugCheckParameter2, &v21, &v20, 0LL);
    *(_DWORD *)(v9 + 32) = v12;
    v14 = v12 - v11;
    if ( (unsigned int)dword_140C02228 > 5 )
    {
      v23 = v12;
      v30 = 2LL;
      LOWORD(v19) = 1;
      v32 = 2LL;
      v29 = &v19;
      v34[1] = 0;
      v31 = v34;
      v33 = *(_QWORD *)(BugCheckParameter2 + 224);
      v34[0] = *(unsigned __int16 *)(BugCheckParameter2 + 216);
      v35 = &v22;
      v37 = &v23;
      v39 = &v24;
      v15 = *(_QWORD *)(v9 + 16);
      v22 = v14;
      v36 = 4LL;
      v38 = 4LL;
      v24 = v14;
      v40 = 4LL;
      v16 = *(_DWORD *)(v15 + 28);
      v41 = &v25;
      LODWORD(v25) = v14 + v16;
      v42 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02228,
        (unsigned __int8 *)byte_14002A405,
        0LL,
        0LL,
        9u,
        &v28);
    }
    PopPlPublishSystemPowerChange(v10, v14, v13);
    for ( k = 0LL;
          k < *(unsigned int *)(BugCheckParameter2 + 828);
          PopPlUnregisterComponent(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8 * k++)) )
    {
      ;
    }
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 1184) = 0LL;
    PopPlUnlockPowerPlane((__int64)v10);
  }
  if ( v5 )
    KeSetEvent(v5 + 4, 0, 0);
  result = *(unsigned int *)(BugCheckParameter2 + 824);
  if ( (result & 1) != 0 )
    return PopFxDestroyDeviceDpm((__int64)v5, BugCheckParameter2);
  return result;
}
