/*
 * XREFs of PopPpmHeteroPolicyCallback @ 0x1407D3C00
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x14022AB00 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140281A74 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x1407B9AE8 (PpmReinitializeHeteroEngine.c)
 */

__int64 __fastcall PopPpmHeteroPolicyCallback(_QWORD *a1, int *a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  int v5; // edi

  v3 = *(_QWORD *)&GUID_PROCESSOR_HETEROGENEOUS_POLICY.Data1 - *a1;
  if ( *(_QWORD *)&GUID_PROCESSOR_HETEROGENEOUS_POLICY.Data1 == *a1 )
    v3 = *(_QWORD *)GUID_PROCESSOR_HETEROGENEOUS_POLICY.Data4 - a1[1];
  v4 = 0;
  if ( !v3 && a3 == 4 && a2 )
  {
    v5 = *a2;
    if ( (unsigned int)*a2 > 4 )
      v5 = 0;
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    if ( v5 == PpmHeteroDesiredPolicy )
      goto LABEL_9;
    PpmHeteroDesiredPolicy = v5;
    if ( ((PopHeteroSystem - 1) & 0xFFFFFFFA) != 0 || PopHeteroSystem == 6 )
      v5 = 0;
    if ( v5 == PpmHeteroPolicy )
    {
LABEL_9:
      PpmReleaseLock(&PpmPerfPolicyLock);
    }
    else
    {
      PpmHeteroPolicy = v5;
      PpmReinitializeHeteroEngine(1);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
