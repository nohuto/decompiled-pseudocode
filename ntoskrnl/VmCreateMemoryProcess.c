/*
 * XREFs of VmCreateMemoryProcess @ 0x1409D9550
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x140412610 (ZwAllocateVirtualMemory.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     PsCreateMinimalProcess @ 0x140817C28 (PsCreateMinimalProcess.c)
 */

__int64 __fastcall VmCreateMemoryProcess(__int64 a1, __int64 a2, void *a3, int a4, ULONG_PTR a5, _QWORD *a6)
{
  char v9; // r9
  NTSTATUS v10; // edi
  int v11; // edx
  int v12; // ecx
  int v13; // r14d
  int v14; // eax
  HANDLE v15; // rbx
  PVOID Object; // [rsp+60h] [rbp-20h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-18h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-10h] BYREF
  HANDLE ProcessHandle; // [rsp+A0h] [rbp+20h] BYREF

  BaseAddress = 0LL;
  RegionSize = 0LL;
  ProcessHandle = 0LL;
  v9 = *(_BYTE *)(a1 + 2170);
  if ( (a4 & 0xFFFFFFC0) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v11 = ((a4 & 1) << 13) | 0x4000;
    if ( (a4 & 2) == 0 )
      v11 = (a4 & 1) << 13;
    v12 = v11 | 0x20000;
    if ( (a4 & 4) == 0 )
      v12 = v11;
    v13 = v12 | 0x400;
    if ( (a4 & 0x10) == 0 )
      v13 = v12;
    v14 = PsCreateMinimalProcess(a1, a2, 0LL, v9, a3, v13, (a4 & 0x20 | 0x40u) >> 3, 0LL, a5, 0LL, &ProcessHandle);
    v15 = ProcessHandle;
    v10 = v14;
    if ( v14 >= 0 )
    {
      BaseAddress = (PVOID)0x10000;
      RegionSize = 4294901760LL;
      if ( (v13 & 0x6000) != 0
        || (v10 = ZwAllocateVirtualMemory(ProcessHandle, &BaseAddress, 0LL, &RegionSize, 0x2000u, 1u), v10 >= 0) )
      {
        if ( (a4 & 8) == 0 )
        {
          Object = 0LL;
          ObReferenceObjectByHandle(v15, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
          _InterlockedOr((volatile signed __int32 *)Object + 543, 0x2000u);
          ObfDereferenceObject(Object);
          v15 = ProcessHandle;
        }
        *a6 = v15;
        v15 = 0LL;
        v10 = 0;
      }
    }
    if ( v15 )
      ZwClose(v15);
  }
  return (unsigned int)v10;
}
