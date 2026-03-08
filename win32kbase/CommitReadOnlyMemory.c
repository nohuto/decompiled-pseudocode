/*
 * XREFs of CommitReadOnlyMemory @ 0x1C00ADE80
 * Callers:
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C00ADCB4 (-HMGrowHandleTable@@YAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CommitReadOnlyMemory(__int64 a1, ULONG_PTR *a2, __int64 a3, _DWORD *a4)
{
  __int64 CurrentProcess; // rbp
  NTSTATUS v9; // ebx
  char *v10; // rdi
  PVOID BaseAddress; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h] BYREF

  v13 = 0LL;
  BaseAddress = 0LL;
  v14 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  v9 = MmMapViewOfSection(a1, CurrentProcess, &BaseAddress, 0LL, 4096LL, &v14, &v13, 2, 0x400000, 2);
  if ( v9 >= 0 )
  {
    v10 = (char *)BaseAddress + a3;
    BaseAddress = v10;
    v9 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, a2, 0x1000u, 2u);
    if ( a4 )
      *a4 = (_DWORD)BaseAddress - (_DWORD)v10;
    MmUnmapViewOfSection(CurrentProcess);
  }
  return (unsigned int)v9;
}
