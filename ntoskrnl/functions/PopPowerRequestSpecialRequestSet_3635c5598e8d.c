__int64 __fastcall PopPowerRequestSpecialRequestSet(__int64 a1, int a2, void *a3)
{
  char v3; // bp
  NTSTATUS v5; // ebx
  __int64 v6; // rsi
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  v3 = 0;
  if ( a2 == 3 && *(_BYTE *)(a1 + 152) )
  {
    v5 = ObReferenceObjectByHandleWithTag(a3, 0x2000u, (POBJECT_TYPE)PsProcessType, 1, 0x72506F50u, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v6 = PsChargeProcessWakeCounter(Object);
      PopAcquirePowerRequestPushLock(1);
      if ( *(_QWORD *)(a1 + 136) )
      {
        v3 = 1;
        v5 = -1073741811;
      }
      else
      {
        v5 = 0;
        *(_QWORD *)(a1 + 136) = Object;
        *(_QWORD *)(a1 + 144) = v6;
      }
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
      if ( v3 )
      {
        if ( v6 )
          PsReleaseProcessWakeCounter(v6);
        ObfDereferenceObjectWithTag(Object, 0x72506F50u);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
