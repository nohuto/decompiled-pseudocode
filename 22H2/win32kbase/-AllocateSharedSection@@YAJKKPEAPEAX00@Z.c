/*
 * XREFs of ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C0158350
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C005ED70 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0046340 (W32GetThreadWin32Thread.c)
 *     Win32CreateSection @ 0x1C007E7E8 (Win32CreateSection.c)
 *     ?MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z @ 0x1C008FC1C (-MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z.c)
 */

__int64 __fastcall AllocateSharedSection(unsigned int a1, __int64 a2, void **a3, void **a4, void **a5)
{
  void **v5; // r14
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbp
  struct _EPROCESS *CurrentProcess; // rax
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // [rsp+20h] [rbp-48h]
  PEPROCESS Process; // [rsp+80h] [rbp+18h] BYREF

  v5 = a5;
  a5 = (void **)a1;
  *v5 = 0LL;
  *a3 = 0LL;
  *a4 = 0LL;
  result = Win32CreateSection(a3, 6LL, (__int64)a3, (__int64)&a5, v21, 138412032);
  if ( (int)result >= 0 )
  {
    v12 = (unsigned int)a5;
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v10, v9, v11);
    v14 = MapKernelSectionForUserMapping(*a3, CurrentProcess, (unsigned int)v12, v5);
    if ( v14 < 0 )
    {
      if ( *a3 )
      {
        ObfDereferenceObject(*a3);
        *a3 = 0LL;
        return (unsigned int)v14;
      }
LABEL_8:
      KeBugCheckEx(0x50u, 0LL, 0LL, 0x6D626B47uLL, 0LL);
    }
    v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 72);
    Process = 0LL;
    v18 = PsLookupProcessByProcessId((HANDLE)*(int *)(v15 + 8), &Process);
    if ( v18 < 0
      || (v18 = MapKernelSectionForUserMapping(*a3, Process, v12, a4), ObfDereferenceObject(Process), v18 < 0) )
    {
      v20 = PsGetCurrentProcess(v17, v16, v19);
      MmUnmapViewOfSection(v20);
      if ( !*a3 )
        goto LABEL_8;
      ObfDereferenceObject(*a3);
      *a3 = 0LL;
      *v5 = 0LL;
    }
    return (unsigned int)v18;
  }
  return result;
}
