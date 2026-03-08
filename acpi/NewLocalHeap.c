/*
 * XREFs of NewLocalHeap @ 0x1C004F05C
 * Callers:
 *     HeapAlloc @ 0x1C004EC38 (HeapAlloc.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0007768 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004E224 (LogError.c)
 *     PrintDebugMessage @ 0x1C004EB7C (PrintDebugMessage.c)
 */

__int64 __fastcall NewLocalHeap(_QWORD *a1)
{
  unsigned int v2; // esi
  _QWORD *v3; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rbx

  v2 = 0;
  v3 = ExAllocateFromNPagedLookasideList(&AMLIContextLookAsideList);
  *a1 = v3;
  v4 = v3;
  if ( v3 )
  {
    v5 = (unsigned int)gdwCtxtBlkSize;
    memset(v3, 0, (unsigned int)gdwCtxtBlkSize);
    *(_DWORD *)v4 = 1346454856;
    v4[1] = (char *)v4 + v5;
    v4[4] = v4 + 7;
    v4[6] = v4 + 5;
    v4[5] = v4 + 5;
  }
  else
  {
    LogError(-1073741670);
    AcpiDiagTraceAmlError(0LL, -1073741670);
    PrintDebugMessage(111, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1073741670;
  }
  return v2;
}
