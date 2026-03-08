/*
 * XREFs of DpiGetDxgAdapterSafe @ 0x1C01A3BCC
 * Callers:
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C01A2B10 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 * Callees:
 *     DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel @ 0x1C0007720 (DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel.c)
 */

__int64 __fastcall DpiGetDxgAdapterSafe(struct _DEVICE_OBJECT *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v3; // rbx
  unsigned int v6; // r12d
  _QWORD *v7; // r14
  struct _KMUTANT *v8; // r13
  __int64 *v9; // rdi
  struct _DEVICE_OBJECT *v10; // rcx
  PDEVICE_OBJECT AttachedDeviceReference; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  _QWORD *i; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // r8
  _QWORD *j; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx

  v3 = 0LL;
  *a2 = 0LL;
  v6 = -1073741811;
  KeWaitForSingleObject(Mutex, Executive, 0, 0, 0LL);
  _InterlockedExchange64(&qword_1C013B4D8, (__int64)KeGetCurrentThread());
  v7 = (_QWORD *)qword_1C013B4C8;
  if ( (_QWORD *)*v7 != v7 )
  {
    do
    {
      if ( v3 )
        break;
      v8 = (struct _KMUTANT *)(v7 + 9);
      KeWaitForSingleObject(v7 + 9, Executive, 0, 0, 0LL);
      v9 = (__int64 *)v7[7];
      if ( (__int64 *)*v9 != v9 )
      {
        do
        {
          if ( v3 )
            break;
          if ( *((_DWORD *)v9 + 4) == 1953656900 && *((_DWORD *)v9 + 5) == 2 )
          {
            v10 = (struct _DEVICE_OBJECT *)v9[3];
            if ( v10 == a1 || (struct _DEVICE_OBJECT *)v9[19] == a1 )
            {
              v3 = v9;
            }
            else
            {
              AttachedDeviceReference = IoGetAttachedDeviceReference(v10);
              if ( a1 == AttachedDeviceReference )
                v3 = v9;
              ObfDereferenceObject(AttachedDeviceReference);
            }
            if ( v3 )
              goto LABEL_26;
            KeWaitForSingleObject(v9 + 450, Executive, 0, 0, 0LL);
            v12 = (_QWORD *)v9[448];
            v13 = v12;
            for ( i = (_QWORD *)*v12; i != v13; i = (_QWORD *)*i )
            {
              if ( (struct _DEVICE_OBJECT *)v12[3] == a1 )
                v3 = *(__int64 **)(v12[4] + 64LL);
              v12 = i;
            }
            KeReleaseMutex((PRKMUTEX)(v9 + 450), 0);
            if ( v3 )
              goto LABEL_26;
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)(v9 + 415), 1u);
            v15 = (_QWORD *)v9[458];
            v16 = v15;
            for ( j = (_QWORD *)*v15; j != v16; j = (_QWORD *)*j )
            {
              if ( (struct _DEVICE_OBJECT *)v15[3] == a1 )
                v3 = *(__int64 **)(v15[4] + 64LL);
              v15 = j;
            }
            ExReleaseResourceLite((PERESOURCE)(v9 + 415));
            KeLeaveCriticalRegion();
            if ( v3 )
            {
LABEL_26:
              KeEnterCriticalRegion();
              if ( *((_BYTE *)v3 + 484) )
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v3[3] + 64) + 4104LL));
              ExAcquireResourceSharedLite((PERESOURCE)v3[21], 1u);
              if ( *((_DWORD *)v3 + 59) == 2 )
              {
                v19 = v3[489];
                if ( v19 )
                {
                  _InterlockedIncrement64((volatile signed __int64 *)(v19 + 24));
                  *a3 = -1LL;
                  v6 = 0;
                  *a2 = v3[489];
                }
              }
              if ( *((_BYTE *)v3 + 484) )
              {
                v20 = *(_QWORD *)(v3[3] + 64);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 4104), 0xFFFFFFFF) == 1 )
                  DpiScheduleDelayedDevicePowerRequiredAtPassiveLevel((KSPIN_LOCK *)v20);
              }
              ExReleaseResourceLite((PERESOURCE)v3[21]);
              KeLeaveCriticalRegion();
            }
          }
          v9 = (__int64 *)*v9;
        }
        while ( *v9 != v7[7] );
        v8 = (struct _KMUTANT *)(v7 + 9);
      }
      KeReleaseMutex(v8, 0);
      v7 = (_QWORD *)*v7;
    }
    while ( *v7 != qword_1C013B4C8 );
  }
  _InterlockedExchange64(&qword_1C013B4D8, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( !*a2 )
    WdLogSingleEntry1(3LL, 0LL);
  return v6;
}
