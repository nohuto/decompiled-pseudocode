/*
 * XREFs of ACPIThermalCompletePendingIrps @ 0x1C00400B0
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C00410F0 (ACPIThermalLoopEx.c)
 *     ACPIThermalStopZoneWorker @ 0x1C0041F9C (ACPIThermalStopZoneWorker.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     WPP_RECORDER_SF_qqssdddd @ 0x1C00433B0 (WPP_RECORDER_SF_qqssdddd.c)
 */

char __fastcall ACPIThermalCompletePendingIrps(__int64 a1)
{
  __int64 v1; // r15
  char v3; // di
  KIRQL v4; // al
  __int64 *v5; // r12
  __int64 *v6; // rbx
  __int64 *v7; // rsi
  __int64 v8; // r13
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r13
  void *Pool2; // rax
  __int64 v13; // rax
  __int64 **v14; // rcx
  __int64 **v15; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // rcx
  IRP *v18; // rdi
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  KIRQL v22; // [rsp+78h] [rbp-9h]
  _QWORD *v23; // [rsp+80h] [rbp-1h] BYREF
  __int64 *v24; // [rsp+88h] [rbp+7h]
  union _LARGE_INTEGER Time; // [rsp+90h] [rbp+Fh] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+98h] [rbp+17h] BYREF

  v1 = *(_QWORD *)(a1 + 200);
  v24 = (__int64 *)&v23;
  v3 = 0;
  v23 = &v23;
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalLock);
  v5 = (__int64 *)AcpiThermalList;
  v22 = v4;
  if ( (__int64 *)AcpiThermalList == &AcpiThermalList )
    goto LABEL_18;
  do
  {
    v6 = v5;
    v7 = v5;
    v5 = (__int64 *)*v5;
    v8 = v6[2];
    if ( ACPIInternalGetDeviceExtension(*(_QWORD *)(v8 + 40)) != a1 )
      continue;
    v9 = *(_DWORD *)(v8 + 24);
    if ( v9 == 2703488 )
    {
      if ( !_InterlockedExchange64(v6 - 8, 0LL) )
        continue;
      *(_DWORD *)(a1 + 192) |= 0x20000000u;
      v10 = *(v6 - 18);
      *(_OWORD *)v10 = *(_OWORD *)v1;
      *(_OWORD *)(v10 + 16) = *(_OWORD *)(v1 + 16);
      *(_OWORD *)(v10 + 32) = *(_OWORD *)(v1 + 32);
      *(_OWORD *)(v10 + 48) = *(_OWORD *)(v1 + 48);
      *(_OWORD *)(v10 + 64) = *(_OWORD *)(v1 + 64);
      *(_QWORD *)(v10 + 80) = *(_QWORD *)(v1 + 80);
      *(_DWORD *)(v10 + 88) = *(_DWORD *)(v1 + 88);
      *(v6 - 14) = 92LL;
    }
    else if ( v9 == 2703512 )
    {
      v11 = *(v6 - 18);
      *(_OWORD *)v11 = 0LL;
      if ( *(_QWORD *)(v1 + 312) )
      {
        Pool2 = (void *)ExAllocatePool2(64LL, *(unsigned __int16 *)(v1 + 306), 1416651585LL);
        *(_QWORD *)(v11 + 8) = Pool2;
        if ( Pool2 )
        {
          *(_WORD *)v11 = *(_WORD *)(v1 + 304);
          *(_WORD *)(v11 + 2) = *(_WORD *)(v1 + 306);
          memmove(Pool2, *(const void **)(v1 + 312), *(unsigned __int16 *)(v1 + 306));
        }
      }
      *(v6 - 14) = 16LL;
    }
    else
    {
      *(v6 - 14) = 0LL;
    }
    *((_DWORD *)v6 - 30) = 0;
    v13 = *v7;
    if ( *(__int64 **)(*v7 + 8) != v7
      || (v14 = (__int64 **)v7[1], *v14 != v7)
      || (*v14 = (__int64 *)v13, *(_QWORD *)(v13 + 8) = v14, v15 = (__int64 **)v24, (_QWORD **)*v24 != &v23) )
    {
LABEL_26:
      __fastfail(3u);
    }
    v7[1] = (__int64)v24;
    *v7 = (__int64)&v23;
    *v15 = v7;
    v24 = v7;
  }
  while ( v5 != &AcpiThermalList );
  v4 = v22;
LABEL_18:
  KeReleaseSpinLock(&AcpiThermalLock, v4);
  v16 = v23;
  while ( v16 != &v23 )
  {
    v17 = (_QWORD *)*v16;
    v18 = (IRP *)(v16 - 21);
    v19 = v16;
    v16 = v17;
    if ( (_QWORD *)v17[1] != v19 )
      goto LABEL_26;
    v20 = (_QWORD *)v19[1];
    if ( (_QWORD *)*v20 != v19 )
      goto LABEL_26;
    *v20 = v17;
    v17[1] = v20;
    TimeFields = 0LL;
    Time.QuadPart = MEMORY[0xFFFFF78000000008];
    RtlTimeToTimeFields(&Time, &TimeFields);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqssdddd(WPP_GLOBAL_Control->DeviceExtension, TimeFields.Second, TimeFields.Minute, 11);
    IofCompleteRequest(v18, 0);
    v3 = 1;
  }
  return v3;
}
