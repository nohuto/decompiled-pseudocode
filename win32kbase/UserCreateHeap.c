PVOID __fastcall UserCreateHeap(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        NTSTATUS (__stdcall *a5)(PVOID Base, PVOID *CommitAddress, PSIZE_T CommitSize))
{
  SIZE_T v6; // r15
  int v7; // ebx
  __int64 CurrentProcess; // rsi
  _DWORD v11[2]; // [rsp+50h] [rbp-71h] BYREF
  __int64 v12; // [rsp+58h] [rbp-69h] BYREF
  __int64 v13; // [rsp+60h] [rbp-61h] BYREF
  struct _RTL_HEAP_PARAMETERS Parameters; // [rsp+70h] [rbp-51h] BYREF

  v6 = (unsigned int)a4;
  v7 = a2;
  v13 = 0LL;
  v11[1] = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  v12 = 0LL;
  v11[0] = v7;
  if ( (int)MmMapViewOfSection(a1, CurrentProcess, &v12, 0LL, 0x4000LL, v11, &v13, 2, 0x400000, 2) < 0 )
    return 0LL;
  MmUnmapViewOfSection(CurrentProcess);
  memset(&Parameters, 0, sizeof(Parameters));
  Parameters.Length = 96;
  Parameters.InitialCommit = 0x4000LL;
  Parameters.InitialReserve = v6;
  Parameters.CommitRoutine = a5;
  return RtlCreateHeap(0x309u, a3, (unsigned int)v6, 0x4000uLL, 0LL, &Parameters);
}
