/*
 * XREFs of PopPpmHeteroPolicyCallback @ 0x1408601B0
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x1402D1F40 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1402D1F90 (PpmAcquireLock.c)
 *     PpmReinitializeHeteroEngine @ 0x140828C88 (PpmReinitializeHeteroEngine.c)
 */

__int64 __fastcall PopPpmHeteroPolicyCallback(_QWORD *a1, int *a2, int a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  if ( *(_QWORD *)&GUID_PROCESSOR_HETEROGENEOUS_POLICY.Data1 == *a1
    && *(_QWORD *)GUID_PROCESSOR_HETEROGENEOUS_POLICY.Data4 == a1[1]
    && a3 == 4
    && (v3 = 0, a2) )
  {
    v4 = *a2;
    if ( (unsigned int)*a2 > 4 )
      v4 = 0;
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    if ( v4 == PpmHeteroDesiredPolicy )
      goto LABEL_12;
    PpmHeteroDesiredPolicy = v4;
    if ( ((PopHeteroSystem - 1) & 0xFFFFFFFA) != 0 )
      v4 = 0;
    if ( v4 == PpmHeteroPolicy )
    {
LABEL_12:
      PpmReleaseLock(&PpmPerfPolicyLock);
    }
    else
    {
      PpmHeteroPolicy = v4;
      PpmReinitializeHeteroEngine(1, 1);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
