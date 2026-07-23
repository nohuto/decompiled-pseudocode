/*
 * XREFs of PopSetSpecialRequest @ 0x1408E1D0C
 * Callers:
 *     PopPowerRequestActionInfo @ 0x14066F888 (PopPowerRequestActionInfo.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopDiagTracePowerRequestChange @ 0x1402705D4 (PopDiagTracePowerRequestChange.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PopAcquirePowerRequestPushLock @ 0x14066E888 (PopAcquirePowerRequestPushLock.c)
 *     PsChargeProcessWakeCounter @ 0x1406BCA00 (PsChargeProcessWakeCounter.c)
 *     PsReleaseProcessWakeCounter @ 0x1406CE130 (PsReleaseProcessWakeCounter.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PopSetSpecialRequest(__int64 a1, int a2, ULONG_PTR a3)
{
  char v3; // bp
  int v5; // ebx
  PVOID v6; // rsi
  __int64 v7; // r14
  _QWORD *Tag; // [rsp+20h] [rbp-38h]
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  v3 = 0;
  if ( a2 == 3 )
  {
    LODWORD(Tag) = 1917874000;
    v5 = ObpReferenceObjectByHandleWithTag(a3, 0x2000LL, PsProcessType, 1, Tag, &Object, 0LL, 0LL);
    if ( v5 >= 0 )
    {
      v6 = Object;
      v7 = PsChargeProcessWakeCounter((__int64)Object);
      PopAcquirePowerRequestPushLock(1);
      if ( *(_QWORD *)(a1 + 120) )
      {
        v3 = 1;
        v5 = -1073741811;
      }
      else
      {
        if ( v6 )
          ObfReferenceObjectWithTag(v6, 0x72506F50u);
        *(_QWORD *)(a1 + 120) = v6;
        *(_QWORD *)(a1 + 128) = v7;
        ++*(_DWORD *)(a1 + 44);
        PopDiagTracePowerRequestChange(a1);
        v5 = 0;
      }
      PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
      if ( v3 )
        PsReleaseProcessWakeCounter(v7);
      ObfDereferenceObjectWithTag(v6, 0x72506F50u);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
