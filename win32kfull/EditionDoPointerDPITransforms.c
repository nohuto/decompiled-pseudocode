/*
 * XREFs of EditionDoPointerDPITransforms @ 0x1C01467E0
 * Callers:
 *     <none>
 * Callees:
 *     GetDPITransformationMonitor @ 0x1C01BAD54 (GetDPITransformationMonitor.c)
 */

__int64 __fastcall EditionDoPointerDPITransforms(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 DPITransformationMonitor; // [rsp+30h] [rbp+8h] BYREF

  result = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 40LL);
  if ( (*(_DWORD *)(result + 288) & 0xF) != 2 )
  {
    DPITransformationMonitor = GetDPITransformationMonitor(*a2);
    PhysicalToLogicalDPIPoint(a2, a2, 0LL, &DPITransformationMonitor);
    return PhysicalToLogicalDPIPoint(a3, a3, 0LL, &DPITransformationMonitor);
  }
  return result;
}
