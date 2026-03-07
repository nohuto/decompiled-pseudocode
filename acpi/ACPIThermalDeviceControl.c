__int64 __fastcall ACPIThermalDeviceControl(ULONG_PTR a1, __int64 a2)
{
  unsigned int v4; // edi
  union _LARGE_INTEGER v5; // r14
  __int64 DeviceExtension; // rax
  __int64 v7; // r13
  __int64 v8; // rsi
  _DWORD *v9; // r15
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned __int8 *v18; // rax
  char *v19; // r14
  unsigned int v20; // r12d
  unsigned __int8 *v21; // rax
  unsigned __int8 *v22; // rax
  int v23; // r9d
  KIRQL v24; // dl
  __int64 v25; // rax
  _QWORD *v26; // rbx
  _QWORD *v27; // rax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  int v34; // [rsp+80h] [rbp-80h]
  union _LARGE_INTEGER Time; // [rsp+88h] [rbp-78h] BYREF
  union _LARGE_INTEGER v36; // [rsp+90h] [rbp-70h] BYREF
  union _LARGE_INTEGER v37; // [rsp+98h] [rbp-68h] BYREF
  union _LARGE_INTEGER v38; // [rsp+A0h] [rbp-60h] BYREF
  union _LARGE_INTEGER v39; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD *v40; // [rsp+B0h] [rbp-50h]
  struct _TIME_FIELDS TimeFields; // [rsp+B8h] [rbp-48h] BYREF
  struct _TIME_FIELDS v42; // [rsp+C8h] [rbp-38h] BYREF
  struct _TIME_FIELDS v43; // [rsp+D8h] [rbp-28h] BYREF
  struct _TIME_FIELDS v44; // [rsp+E8h] [rbp-18h] BYREF
  struct _TIME_FIELDS v45; // [rsp+F8h] [rbp-8h] BYREF

  if ( *(_BYTE *)(a2 + 64) )
  {
    v4 = -1073741822;
    *(_DWORD *)(a2 + 48) = -1073741822;
LABEL_3:
    IofCompleteRequest((PIRP)a2, 0);
    return v4;
  }
  v5.QuadPart = MEMORY[0xFFFFF78000000008];
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v7 = *(_QWORD *)(a2 + 184);
  v8 = DeviceExtension;
  v9 = *(_DWORD **)(DeviceExtension + 200);
  v10 = *(_DWORD *)(v7 + 24);
  if ( v10 > 0x32C018 )
  {
    v28 = v10 - 3325980;
    if ( !v28 )
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
    v29 = v28 - 4;
    if ( !v29 )
      return (unsigned int)ACPIIoctlEnumChildren(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
    v30 = v29 - 28;
    if ( v30 )
    {
      v31 = v30 - 4;
      if ( v31 )
      {
        v32 = v31 - 4;
        if ( !v32 )
          return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
        if ( v32 != 4 )
        {
LABEL_44:
          v4 = -1073741637;
          goto LABEL_45;
        }
      }
      return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
    }
    return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
  }
  if ( v10 == 3325976 )
    return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
  v11 = v10 - 2703488;
  if ( v11 )
  {
    v12 = v11 - 24;
    if ( v12 )
    {
      v13 = v12 - 16364;
      if ( v13 )
      {
        v14 = v13 - 4;
        if ( v14 )
        {
          v15 = v14 - 4;
          if ( v15 )
          {
            v16 = v15 - 606068;
            if ( v16 )
            {
              if ( v16 == 4 )
                return (unsigned int)ACPIIoctlEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
              goto LABEL_44;
            }
            return (unsigned int)ACPIIoctlAsyncEvalControlMethod(a1, (IRP *)a2, *(_QWORD *)(a2 + 184));
          }
          v18 = *(unsigned __int8 **)(a2 + 24);
          Time = v5;
          TimeFields = 0LL;
          v9[24] = *v18;
          RtlTimeToTimeFields(&Time, &TimeFields);
          v19 = (char *)(v8 + 8);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qDqssdddd(WPP_GLOBAL_Control->DeviceExtension, TimeFields.Minute, TimeFields.Hour, 15);
          v20 = 536871168;
        }
        else
        {
          v21 = *(unsigned __int8 **)(a2 + 24);
          v36 = v5;
          v42 = 0LL;
          v9[23] = *v21;
          RtlTimeToTimeFields(&v36, &v42);
          v19 = (char *)(v8 + 8);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qDqssdddd(WPP_GLOBAL_Control->DeviceExtension, v42.Minute, v42.Hour, 14);
          v20 = 536870913;
        }
      }
      else
      {
        v22 = *(unsigned __int8 **)(a2 + 24);
        v37 = v5;
        v43 = 0LL;
        v9[25] = *v22;
        RtlTimeToTimeFields(&v37, &v43);
        v19 = (char *)(v8 + 8);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDqssdddd(WPP_GLOBAL_Control->DeviceExtension, v43.Minute, v43.Hour, 13);
        v20 = 536870924;
      }
    }
    else
    {
      v38 = v5;
      v20 = 0x20000000;
      v44 = 0LL;
      RtlTimeToTimeFields(&v38, &v44);
      v19 = (char *)(v8 + 8);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqssdddd(WPP_GLOBAL_Control->DeviceExtension, v44.Minute, v44.Hour, 16);
    }
  }
  else
  {
    v40 = *(_DWORD **)(a2 + 24);
    v39 = v5;
    v45 = 0LL;
    v34 = *v9 != *v40 ? 0x20000002 : 0;
    RtlTimeToTimeFields(&v39, &v45);
    v19 = (char *)(v8 + 8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDDqssdddd(WPP_GLOBAL_Control->DeviceExtension, v45.Minute, v45.Hour, v23);
    v20 = v34;
  }
  v24 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalLock);
  if ( *v19 < 0 || (*(_DWORD *)(v8 + 192) & 0x8000000) != 0 )
  {
    KeReleaseSpinLock(&AcpiThermalLock, v24);
    *(_QWORD *)(a2 + 56) = 0LL;
    v4 = -1073741810;
    *(_DWORD *)(a2 + 48) = -1073741810;
    goto LABEL_3;
  }
  if ( *(_DWORD *)(v7 + 24) == 2703488 )
  {
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)ACPIThermalCancelRequest);
    if ( *(_BYTE *)(a2 + 68) )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
      {
        KeReleaseSpinLock(&AcpiThermalLock, v24);
        v4 = -1073741536;
LABEL_45:
        *(_QWORD *)(a2 + 56) = 0LL;
        *(_DWORD *)(a2 + 48) = v4;
        goto LABEL_3;
      }
    }
  }
  v25 = *(_QWORD *)(a2 + 184);
  v26 = (_QWORD *)(a2 + 168);
  v4 = 259;
  *(_BYTE *)(v25 + 3) |= 1u;
  v27 = (_QWORD *)qword_1C006EA68;
  if ( *(__int64 **)qword_1C006EA68 != &AcpiThermalList )
    __fastfail(3u);
  *v26 = &AcpiThermalList;
  v26[1] = v27;
  *v27 = v26;
  qword_1C006EA68 = (__int64)v26;
  KeReleaseSpinLock(&AcpiThermalLock, v24);
  ACPIThermalLoopEx(v8, v20, 0LL);
  return v4;
}
