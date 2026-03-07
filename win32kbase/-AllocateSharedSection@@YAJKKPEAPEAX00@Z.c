__int64 __fastcall AllocateSharedSection(unsigned int a1, __int64 a2, void **a3, void **a4, void **a5)
{
  void **v5; // r14
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  struct _EPROCESS *CurrentProcess; // rax
  int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // [rsp+20h] [rbp-48h]
  PEPROCESS Process; // [rsp+80h] [rbp+18h] BYREF

  v5 = a5;
  a5 = (void **)a1;
  *v5 = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  result = Win32CreateSection(a3, 6LL, (__int64)a3, (__int64)&a5, v23, 138412032);
  if ( (int)result >= 0 )
  {
    v13 = (unsigned int)a5;
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v10, v9, v11, v12);
    v15 = MapKernelSectionForUserMapping(*a3, CurrentProcess, (unsigned int)v13, v5);
    if ( v15 < 0 )
    {
      if ( *a3 )
      {
        ObfDereferenceObject(*a3);
        *a3 = 0LL;
        return (unsigned int)v15;
      }
LABEL_8:
      KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
    }
    v16 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 72);
    Process = 0LL;
    v19 = PsLookupProcessByProcessId((HANDLE)*(int *)(v16 + 8), &Process);
    if ( v19 < 0
      || (v19 = MapKernelSectionForUserMapping(*a3, Process, v13, a4), ObfDereferenceObject(Process), v19 < 0) )
    {
      v22 = PsGetCurrentProcess(v18, v17, v20, v21);
      MmUnmapViewOfSection(v22);
      if ( !*a3 )
        goto LABEL_8;
      ObfDereferenceObject(*a3);
      *a3 = 0LL;
      *v5 = 0LL;
    }
    return (unsigned int)v19;
  }
  return result;
}
