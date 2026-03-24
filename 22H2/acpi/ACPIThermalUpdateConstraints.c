/*
 * XREFs of ACPIThermalUpdateConstraints @ 0x1C0014B28
 * Callers:
 *     ACPIThermalWorker @ 0x1C009AB00 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalReevaluateConstraints @ 0x1C000E1B0 (ACPIThermalReevaluateConstraints.c)
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0030454 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTraceActiveCoolingDevicePower @ 0x1C0030EB8 (AcpiDiagTraceActiveCoolingDevicePower.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C0049FBC (AcpiDiagTracePassiveCoolingConstraint.c)
 */

void __fastcall ACPIThermalUpdateConstraints(__int64 a1)
{
  __int64 v1; // rdi
  KIRQL v2; // r15
  __int64 *i; // rbx
  char v4; // bp
  unsigned int v5; // eax
  unsigned int v6; // ecx
  char v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx

  v1 = *(_QWORD *)(a1 + 200);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  for ( i = *(__int64 **)(v1 + 176); i != (__int64 *)(v1 + 176); i = (__int64 *)*i )
  {
    v4 = 0;
    if ( *((_BYTE *)i + 52) )
    {
      if ( *((unsigned __int8 *)i + 53) != *(_DWORD *)(v1 + 96) )
      {
        v10 = i[5];
        v4 = 1;
        *((_BYTE *)i + 53) = *(_BYTE *)(v1 + 96);
        if ( v10 )
          AcpiDiagTracePassiveCoolingConstraint(i[4], v10, 0LL);
      }
    }
    else
    {
      v5 = *((unsigned __int8 *)i + 54);
      v6 = *(_DWORD *)(v1 + 92);
      v7 = v5 >= v6;
      if ( *((_BYTE *)i + 55) )
      {
        if ( v5 >= v6 )
          goto LABEL_6;
      }
      else if ( v5 < v6 )
      {
        goto LABEL_6;
      }
      v9 = i[5];
      v4 = 1;
      *((_BYTE *)i + 55) = v7;
      if ( v9 )
      {
        AcpiDiagTraceActiveCoolingConstraint(i[4], v9, 0LL);
        AcpiDiagTraceActiveCoolingDevicePower(i[4], i[5], *((unsigned __int8 *)i + 54), *((_DWORD *)i + 12), v7);
      }
    }
LABEL_6:
    v8 = i[5];
    if ( v8 )
    {
      if ( v4 )
        ACPIThermalReevaluateConstraints(*(PVOID *)(v8 + 616));
    }
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
}
