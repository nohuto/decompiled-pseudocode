__int64 __fastcall CRIMBase::SensorDispatcherObject::GetWorkAndWait(__int64 a1, __int64 a2)
{
  void *v4; // rsi
  __int64 v5; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1, 0LL);
  v4 = *(void **)(a1 + 48);
  if ( !v4 )
    goto LABEL_7;
  if ( *(_DWORD *)(a1 + 20) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 710LL);
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
  {
    *(_QWORD *)a2 = v4;
    *(_QWORD *)(a2 + 8) = v5;
    ObfReferenceObject(v4);
    ObfReferenceObject(*(PVOID *)(a2 + 8));
  }
  else
  {
LABEL_7:
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  ExReleasePushLockSharedEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return a2;
}
