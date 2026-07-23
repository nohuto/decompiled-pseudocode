/*
 * XREFs of PspSetupUserProcessAddressSpace @ 0x1406A122C
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x14027DFF0 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     PspWow64SetupUserProcessAddressSpace @ 0x140286360 (PspWow64SetupUserProcessAddressSpace.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1403FA880 (ZwAllocateVirtualMemory.c)
 *     PspLocateInPEManifest @ 0x1405EBEAC (PspLocateInPEManifest.c)
 *     PspGetStandardHandleList @ 0x14061FD84 (PspGetStandardHandleList.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406A1478 (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessNtdllType @ 0x1406A16FC (PsWow64GetProcessNtdllType.c)
 *     PspMapSiloSharedDataView @ 0x1406A1718 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1406A1750 (MmMapApiSetView.c)
 *     PspWritePebAffinityInfo @ 0x1406A2104 (PspWritePebAffinityInfo.c)
 *     PspCopyAndFixupParameters @ 0x1406A2264 (PspCopyAndFixupParameters.c)
 */

__int64 __fastcall PspSetupUserProcessAddressSpace(__int64 a1, _KPROCESS *a2, __int64 a3, __int64 a4)
{
  __int128 *v5; // r15
  unsigned int *v8; // rbp
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // ebx
  int v13; // r14d
  __int64 ProcessServerSilo; // rax
  int inited; // ebx
  ULONG_PTR v16; // rdx
  __int64 result; // rax
  unsigned int ProcessNtdllType; // eax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-78h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-70h]
  __int128 v21; // [rsp+40h] [rbp-68h] BYREF
  __int64 v22; // [rsp+50h] [rbp-58h]

  RegionSize = 0LL;
  v5 = 0LL;
  v22 = 0LL;
  v8 = *(unsigned int **)(a4 + 208);
  v10 = (*(unsigned __int8 *)(a4 + 9) >> 2) & 3;
  CurrentThread = KeGetCurrentThread();
  v21 = 0LL;
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
      v5 = (__int128 *)(v8 + 8);
  }
  else if ( *(_DWORD *)(a4 + 80) == *(_DWORD *)(a4 + 288) )
  {
    v5 = &v21;
    result = PspGetStandardHandleList(a1, (__int64)&v21);
    if ( (int)result < 0 )
      return result;
  }
  v12 = v8[2];
  v13 = v12 & 0x60;
  if ( (PspGlobalFlags & 1) != 0 )
  {
    v12 |= 0x8000u;
    v8[2] = v12;
  }
  if ( !v8[259] )
    v8[259] = PsDefaultLoaderThreads;
  ProcessServerSilo = PsGetProcessServerSilo((__int64)a2);
  if ( *((_BYTE *)PsGetServerSiloGlobals(ProcessServerSilo) + 1048) )
    v8[2] = v12 | 0x20000000;
  KiStackAttachProcess(a2, 0, a3);
  if ( (*(_BYTE *)(a4 + 8) & 0x10) == 0 || (inited = PspLocateInPEManifest((__int64)a2, a4), inited >= 0) )
  {
    v16 = *v8 + *((_QWORD *)v8 + 126);
    RegionSize = v16;
    if ( !v13 )
    {
      if ( v16 < 0x20000 )
        v16 = 0x20000LL;
      RegionSize = v16;
    }
    *(_QWORD *)(a4 + 216) = 0LL;
    inited = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(a4 + 216), 0LL, &RegionSize, 0x3000u, 4u);
    if ( inited >= 0 )
    {
      inited = PspCopyAndFixupParameters(a1, v5, a4);
      if ( inited >= 0 )
      {
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
          inited = PspPrepareSystemDllInitBlock(0LL, a4);
        if ( inited >= 0 )
        {
          inited = PspWow64SetupUserProcessAddressSpace((__int64)a2, a4);
          if ( inited >= 0 )
          {
            if ( a2[1].AffinityPadding[10] )
            {
              ProcessNtdllType = PsWow64GetProcessNtdllType(a2);
              inited = PspPrepareSystemDllInitBlock(ProcessNtdllType, a4);
            }
            if ( inited >= 0 )
            {
              PspWritePebAffinityInfo(CurrentThread, a2);
              inited = MmMapApiSetView(a2);
              if ( inited >= 0 )
                inited = PspMapSiloSharedDataView(a2);
            }
          }
        }
      }
    }
  }
  KiUnstackDetachProcess(a3, 0LL);
  return (unsigned int)inited;
}
