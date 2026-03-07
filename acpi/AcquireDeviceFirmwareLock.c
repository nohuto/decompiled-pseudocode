__int64 __fastcall AcquireDeviceFirmwareLock(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int16 a6)
{
  __int64 DeviceFirmwareLockHandlerEntry; // rbp
  int v11; // r13d
  int v12; // edi
  int v13; // eax
  KIRQL v14; // dl
  __int64 v15; // rax
  _QWORD *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rdi
  __int64 v20; // r8
  void *v21; // rcx
  __int64 v22; // rax
  __int64 *v23; // rsi
  KIRQL v24; // dl
  __int64 v25; // r8
  int v27; // [rsp+30h] [rbp-38h]
  __int64 v28; // [rsp+70h] [rbp+8h] BYREF

  v28 = 0LL;
  DeviceFirmwareLockHandlerEntry = 0LL;
  if ( !*(_DWORD *)(a1 + 24) )
    *(_DWORD *)(a1 + 24) = 1;
  v11 = a5;
  v12 = -1073741802;
  do
  {
    switch ( *(_DWORD *)(a1 + 24) )
    {
      case 1:
        v23 = (__int64 *)(a1 + 16);
        v24 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceFirmwareLockGlobalLock);
        if ( *(_QWORD *)a1 != a1 && *v23 )
        {
          DeviceFirmwareLockHandlerEntry = *v23;
          _InterlockedIncrement((volatile signed __int32 *)(*v23 + 64));
        }
        KeReleaseSpinLock(&AcpiDeviceFirmwareLockGlobalLock, v24);
        if ( DeviceFirmwareLockHandlerEntry )
        {
          v25 = *v23;
          v27 = a6;
          *(_DWORD *)(a1 + 24) = 2;
          *(_QWORD *)(a1 + 56) = a2;
          v12 = PerformHandlerInvocation(2, a1, v25, a2, 0LL, 0, v27);
        }
        else
        {
          *(_DWORD *)(a1 + 24) = 3;
        }
        break;
      case 2:
        v12 = *(_DWORD *)(a1 + 40);
        DeviceFirmwareLockHandlerEntry = *(_QWORD *)(a1 + 16);
        if ( v12 >= 0 )
        {
          *(_BYTE *)(a1 + 48) = 1;
LABEL_30:
          *(_DWORD *)(a1 + 24) = 0;
          break;
        }
        DereferenceDeviceFirmwareLockHandlerEntry(*(PVOID *)(a1 + 16));
        if ( v12 != -1073741267 )
          goto LABEL_30;
        *(_DWORD *)(a1 + 24) = 1;
        goto LABEL_16;
      case 3:
        v19 = *(void **)(a1 + 64);
        DeviceFirmwareLockHandlerEntry = FindDeviceFirmwareLockHandlerEntry(
                                           *(unsigned __int8 *)(*(_QWORD *)(a1 + 88) + 41LL),
                                           0LL,
                                           v19);
        if ( v19 )
          DereferenceDeviceFirmwareLockHandlerEntry(v19);
        *(_QWORD *)(a1 + 64) = DeviceFirmwareLockHandlerEntry;
        if ( DeviceFirmwareLockHandlerEntry )
        {
          v22 = *(_QWORD *)(a1 + 72);
          *(_DWORD *)(a1 + 24) = 4;
          if ( v22 )
          {
            v28 = v22;
          }
          else
          {
            ACPIInternalGetDeviceFromNSOBJ(a3, &v28, v20, 0LL);
            *(_QWORD *)(a1 + 72) = v28;
          }
          *(_QWORD *)(a1 + 56) = a2;
          v12 = PerformHandlerInvocation(0, a1, DeviceFirmwareLockHandlerEntry, a2, a4, v11, 0);
        }
        else
        {
          v21 = *(void **)(a1 + 72);
          v12 = 0;
          *(_DWORD *)(a1 + 24) = 0;
          if ( v21 )
          {
            ObfDereferenceObject(v21);
            *(_QWORD *)(a1 + 72) = 0LL;
          }
        }
        break;
      case 4:
        v13 = *(_DWORD *)(a1 + 40);
        if ( v13 == -1073741267 )
        {
          DereferenceDeviceFirmwareLockHandlerEntry(*(PVOID *)(a1 + 64));
          *(_QWORD *)(a1 + 64) = 0LL;
          goto LABEL_12;
        }
        if ( v13 >= 0 )
        {
          *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 64);
          *(_QWORD *)(a1 + 64) = 0LL;
          v14 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceFirmwareLockGlobalLock);
          v15 = *(_QWORD *)(a1 + 16) + 16LL;
          v16 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
          if ( *v16 != v15 )
            __fastfail(3u);
          *(_QWORD *)(a1 + 8) = v16;
          *(_QWORD *)a1 = v15;
          *v16 = a1;
          *(_QWORD *)(v15 + 8) = a1;
          KeReleaseSpinLock(&AcpiDeviceFirmwareLockGlobalLock, v14);
          v17 = *(void **)(a1 + 16);
          *(_DWORD *)(a1 + 24) = 1;
          DereferenceDeviceFirmwareLockHandlerEntry(v17);
          v18 = *(void **)(a1 + 72);
          if ( v18 )
          {
            ObfDereferenceObject(v18);
            *(_QWORD *)(a1 + 72) = 0LL;
          }
        }
        else
        {
LABEL_12:
          *(_DWORD *)(a1 + 24) = 3;
        }
LABEL_16:
        v12 = -1073741802;
        break;
      default:
        *(_DWORD *)(a1 + 24) = 0;
        v12 = -1073741823;
        break;
    }
  }
  while ( *(_DWORD *)(a1 + 24) && v12 == -1073741802 );
  return (unsigned int)v12;
}
