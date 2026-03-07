__int64 __fastcall ACPIThermalReleaseCoolingInterfaces(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rbx
  KIRQL v4; // bp
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // r14
  _QWORD *v8; // rdi
  _QWORD *v9; // rsi
  __int64 v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  v3 = *(_QWORD **)(a1 + 656);
  v4 = v2;
  *(_BYTE *)(a1 + 664) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 656) = 0LL;
    v5 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) == v3 )
    {
      v6 = (_QWORD *)v3[1];
      if ( (_QWORD *)*v6 == v3 )
      {
        *v6 = v5;
        *(_QWORD *)(v5 + 8) = v6;
        v7 = (_QWORD *)v3[2];
        if ( v7 == v3 + 2 )
        {
LABEL_15:
          ACPIThermalReevaluateConstraints(v3);
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          v3[7] = &Event;
          KeReleaseSpinLock(&AcpiThermalConstraintLock, v4);
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          PoDeleteThermalRequest(v3[8]);
          IoFreeWorkItem((PIO_WORKITEM)v3[6]);
          ExFreePoolWithTag(v3, 0x54706341u);
          return 0LL;
        }
        while ( 1 )
        {
          v8 = v7;
          v9 = v7;
          v7 = (_QWORD *)*v7;
          if ( *((_BYTE *)v8 + 36) )
          {
            if ( *((_BYTE *)v8 + 37) != 100 )
              AcpiDiagTracePassiveCoolingConstraint(v8[2], v8[3], 0, 100);
          }
          else if ( *((_BYTE *)v8 + 39) )
          {
            AcpiDiagTraceActiveCoolingConstraint(v8[2], v8[3], 0, 0);
          }
          v8[3] = 0LL;
          v10 = *v9;
          if ( *(_QWORD **)(*v9 + 8LL) != v9 )
            break;
          v11 = (_QWORD *)v9[1];
          if ( (_QWORD *)*v11 != v9 )
            break;
          *v11 = v10;
          *(_QWORD *)(v10 + 8) = v11;
          v12 = (_QWORD *)qword_1C006EA78;
          if ( *(__int64 **)qword_1C006EA78 != &AcpiThermalUnclaimedConstraintList )
            break;
          *v9 = &AcpiThermalUnclaimedConstraintList;
          v9[1] = v12;
          *v12 = v9;
          qword_1C006EA78 = (__int64)v9;
          if ( v7 == v3 + 2 )
            goto LABEL_15;
        }
      }
    }
    __fastfail(3u);
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
  return 0LL;
}
