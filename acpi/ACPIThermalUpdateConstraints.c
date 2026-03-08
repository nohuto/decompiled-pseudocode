/*
 * XREFs of ACPIThermalUpdateConstraints @ 0x1C004221C
 * Callers:
 *     ACPIThermalWorker @ 0x1C00962E0 (ACPIThermalWorker.c)
 * Callees:
 *     AcpiDiagTraceActiveCoolingConstraint @ 0x1C0007500 (AcpiDiagTraceActiveCoolingConstraint.c)
 *     AcpiDiagTraceActiveCoolingDevicePower @ 0x1C0007584 (AcpiDiagTraceActiveCoolingDevicePower.c)
 *     AcpiDiagTracePassiveCoolingConstraint @ 0x1C0008720 (AcpiDiagTracePassiveCoolingConstraint.c)
 *     ACPIThermalReevaluateConstraints @ 0x1C0041A74 (ACPIThermalReevaluateConstraints.c)
 */

void __fastcall ACPIThermalUpdateConstraints(__int64 a1)
{
  __int64 v1; // rdi
  KIRQL v2; // r15
  __int64 *i; // rbx
  char v4; // bp
  __int64 v5; // rdx
  char v6; // r9
  unsigned int v7; // eax
  unsigned int v8; // ecx
  char v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx

  v1 = *(_QWORD *)(a1 + 200);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  for ( i = *(__int64 **)(v1 + 176); i != (__int64 *)(v1 + 176); i = (__int64 *)*i )
  {
    v4 = 0;
    if ( *((_BYTE *)i + 52) )
    {
      if ( *((unsigned __int8 *)i + 53) != *(_DWORD *)(v1 + 96) )
      {
        v5 = i[5];
        v4 = 1;
        v6 = *(_BYTE *)(v1 + 96);
        *((_BYTE *)i + 53) = v6;
        if ( v5 )
          AcpiDiagTracePassiveCoolingConstraint(i[4], v5, 0, v6);
      }
    }
    else
    {
      v7 = *((unsigned __int8 *)i + 54);
      v8 = *(_DWORD *)(v1 + 92);
      v9 = v7 >= v8;
      if ( *((_BYTE *)i + 55) )
      {
        if ( v7 >= v8 )
          goto LABEL_12;
      }
      else if ( v7 < v8 )
      {
        goto LABEL_12;
      }
      v10 = i[5];
      v4 = 1;
      *((_BYTE *)i + 55) = v9;
      if ( v10 )
      {
        AcpiDiagTraceActiveCoolingConstraint(i[4], v10, 0, v9);
        AcpiDiagTraceActiveCoolingDevicePower(i[4], i[5], *((unsigned __int8 *)i + 54), *((_DWORD *)i + 12), v9);
      }
    }
LABEL_12:
    v11 = i[5];
    if ( v11 && v4 )
      ACPIThermalReevaluateConstraints(*(PVOID *)(v11 + 656));
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
}
