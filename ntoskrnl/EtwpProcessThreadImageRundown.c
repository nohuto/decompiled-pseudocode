/*
 * XREFs of EtwpProcessThreadImageRundown @ 0x14080DC50
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14080D9F8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     PsLookupProcessByProcessId @ 0x1406AC100 (PsLookupProcessByProcessId.c)
 *     PsEnumProcesses @ 0x1407809CC (PsEnumProcesses.c)
 *     EtwpProcessEnumCallback @ 0x14080DD60 (EtwpProcessEnumCallback.c)
 *     EtwpIsStackWalkingEnabled @ 0x14080E2D8 (EtwpIsStackWalkingEnabled.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpProcessThreadImageRundown(__int64 a1, __int64 a2, char a3, unsigned int **a4, unsigned int a5)
{
  NTSTATUS v8; // r15d
  __int64 v10; // rdx
  unsigned int v12; // ecx
  _DWORD *v13; // rax
  _QWORD v14[10]; // [rsp+20h] [rbp-50h] BYREF
  PEPROCESS Process; // [rsp+90h] [rbp+20h] BYREF

  Process = 0LL;
  v8 = 0;
  memset(v14, 0, 0x48uLL);
  v14[0] = a1;
  v14[4] = a2;
  v10 = 1283LL;
  LOBYTE(v14[8]) = a3;
  if ( !a3 )
    v10 = 1284LL;
  BYTE2(v14[8]) = EtwpIsStackWalkingEnabled(a2, v10);
  if ( a1 && (*(_DWORD *)(a1 + 16) & 0x40) != 0 && (*(_DWORD *)(a2 + 12) & 0x2000000) != 0 )
    v14[1] = (char *)&EtwpObjectTypeFilter + 20 * *(unsigned __int8 *)(a2 + 818);
  v14[2] = ExAllocatePool2(64LL, 0x2000LL, 1953985605LL);
  if ( v14[2] )
    LOWORD(v14[3]) = 0x2000;
  if ( a5 && a4 )
  {
    v12 = 0;
    v13 = (_DWORD *)a4 + 3;
    while ( *v13 != -2147483644 )
    {
      ++v12;
      v13 += 4;
      if ( v12 >= a5 )
        goto LABEL_8;
    }
    v8 = PsLookupProcessByProcessId((HANDLE)**a4, &Process);
    if ( v8 >= 0 )
      EtwpProcessEnumCallback(Process);
  }
  else
  {
LABEL_8:
    EtwpProcessEnumCallback((PRKPROCESS)PsIdleProcess);
    PsEnumProcesses((__int64 (__fastcall *)(__int64 *, __int64))EtwpProcessEnumCallback, (__int64)v14);
  }
  if ( v14[2] )
    ExFreePoolWithTag((PVOID)v14[2], 0);
  if ( v14[6] )
    ExFreePoolWithTag((PVOID)v14[6], 0);
  return (unsigned int)v8;
}
