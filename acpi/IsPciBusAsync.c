/*
 * XREFs of IsPciBusAsync @ 0x1C0035270
 * Callers:
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C0011430 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     IsPciBusAsyncWorker @ 0x1C0035350 (IsPciBusAsyncWorker.c)
 *     IsPciDeviceWorker @ 0x1C0035980 (IsPciDeviceWorker.c)
 *     IsNsobjPciBus @ 0x1C008A678 (IsNsobjPciBus.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     AcpipAllocatePciBusState @ 0x1C00348CC (AcpipAllocatePciBusState.c)
 *     IsPciBusAsyncWorker @ 0x1C0035350 (IsPciBusAsyncWorker.c)
 */

__int64 __fastcall IsPciBusAsync(volatile signed __int32 *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  char *PciBusState; // rax
  char *v12; // rbx
  char v13; // al

  *a4 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( !v8 )
    return 0LL;
  v9 = *(_QWORD *)(v8 + 8);
  if ( (v9 & 0x2000000) != 0 )
  {
    *a4 = 1;
    return 0LL;
  }
  if ( (v9 & 0x100000000LL) != 0 )
    return 0LL;
  PciBusState = AcpipAllocatePciBusState();
  v12 = PciBusState;
  if ( !PciBusState )
    return 3221225626LL;
  memset(PciBusState + 8, 0, 0x80uLL);
  v13 = gdwfAMLI;
  *(_QWORD *)v12 = a1;
  dword_1C006F938 = 0;
  pszDest = 0;
  if ( (v13 & 4) != 0 )
    _InterlockedIncrement(a1 + 2);
  *((_DWORD *)v12 + 10) = -1;
  *((_QWORD *)v12 + 6) = a2;
  *((_QWORD *)v12 + 7) = a3;
  *((_QWORD *)v12 + 8) = a4;
  return IsPciBusAsyncWorker(a1, 0LL, 0LL, v12);
}
