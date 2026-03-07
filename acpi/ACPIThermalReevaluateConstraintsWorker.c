void __fastcall ACPIThermalReevaluateConstraintsWorker(ULONG_PTR IoObject, _BYTE *Context, PIO_WORKITEM IoWorkItem)
{
  __int64 DeviceExtension; // r15
  KIRQL v5; // bp
  __int64 **v6; // r14
  __int64 *v7; // rdx
  unsigned __int8 v8; // si
  char v9; // di
  unsigned __int8 v10; // cl
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // rdx
  struct _KEVENT *v14; // rcx

  DeviceExtension = ACPIInternalGetDeviceExtension(IoObject);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  if ( Context[44] )
  {
    v6 = (__int64 **)(Context + 16);
    do
    {
      v7 = *v6;
      v8 = 100;
      Context[44] = 0;
      v9 = 0;
      while ( v7 != (__int64 *)v6 )
      {
        if ( *((_BYTE *)v7 + 36) )
        {
          v10 = *((_BYTE *)v7 + 37);
          if ( v10 >= v8 )
            v10 = v8;
          v8 = v10;
        }
        else if ( *((_BYTE *)v7 + 39) )
        {
          v9 = 1;
        }
        v7 = (__int64 *)*v7;
      }
      KeReleaseSpinLock(&AcpiThermalConstraintLock, v5);
      if ( v8 != Context[42] )
      {
        v11 = Context[40] == 0;
        Context[42] = v8;
        if ( !v11 )
        {
          AcpiDiagTraceDevicePassiveCooling(DeviceExtension, v8);
          LOBYTE(v12) = v8;
          PoSetThermalPassiveCooling(*((_QWORD *)Context + 8), v12);
        }
      }
      if ( v9 != Context[43] )
      {
        v11 = Context[41] == 0;
        Context[43] = v9;
        if ( !v11 )
        {
          AcpiDiagTraceDeviceActiveCooling(DeviceExtension, v9);
          LOBYTE(v13) = v9;
          PoSetThermalActiveCooling(*((_QWORD *)Context + 8), v13);
        }
      }
      v5 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
    }
    while ( Context[44] );
  }
  v14 = (struct _KEVENT *)*((_QWORD *)Context + 7);
  Context[45] = 0;
  if ( v14 )
    KeSetEvent(v14, 0, 0);
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v5);
}
