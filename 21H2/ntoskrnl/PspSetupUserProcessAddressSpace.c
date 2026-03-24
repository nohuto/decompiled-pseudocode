/*
 * XREFs of PspSetupUserProcessAddressSpace @ 0x14061177C
 * Callers:
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     PsGetServerSiloGlobals @ 0x140252E18 (PsGetServerSiloGlobals.c)
 *     PspWow64SetupUserProcessAddressSpace @ 0x1402534F0 (PspWow64SetupUserProcessAddressSpace.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x14025CA80 (PsGetProcessServerSilo.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x1403FA6A0 (ZwAllocateVirtualMemory.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406119C8 (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessNtdllType @ 0x140611C4C (PsWow64GetProcessNtdllType.c)
 *     PspMapSiloSharedDataView @ 0x140611C68 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140611CA0 (MmMapApiSetView.c)
 *     PspWritePebAffinityInfo @ 0x140612654 (PspWritePebAffinityInfo.c)
 *     PspCopyAndFixupParameters @ 0x1406127B4 (PspCopyAndFixupParameters.c)
 *     PspLocateInPEManifest @ 0x14068C03C (PspLocateInPEManifest.c)
 *     PspGetStandardHandleList @ 0x1406C0E74 (PspGetStandardHandleList.c)
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
  _DWORD *v15; // r9
  int inited; // ebx
  ULONG_PTR v17; // rdx
  __int64 result; // rax
  unsigned int ProcessNtdllType; // eax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-78h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-70h]
  __int128 v22; // [rsp+40h] [rbp-68h] BYREF
  __int64 v23; // [rsp+50h] [rbp-58h]

  RegionSize = 0LL;
  v5 = 0LL;
  v23 = 0LL;
  v8 = *(unsigned int **)(a4 + 208);
  v10 = (*(unsigned __int8 *)(a4 + 9) >> 2) & 3;
  CurrentThread = KeGetCurrentThread();
  v22 = 0LL;
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 == 1 )
      v5 = (__int128 *)(v8 + 8);
  }
  else if ( *(_DWORD *)(a4 + 80) == *(_DWORD *)(a4 + 288) )
  {
    v5 = &v22;
    result = PspGetStandardHandleList(a1, &v22);
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
  KiStackAttachProcess(a2, 0LL, a3, v15);
  if ( (*(_BYTE *)(a4 + 8) & 0x10) == 0 || (inited = PspLocateInPEManifest(a2, a4), inited >= 0) )
  {
    v17 = *v8 + *((_QWORD *)v8 + 126);
    RegionSize = v17;
    if ( !v13 )
    {
      if ( v17 < 0x20000 )
        v17 = 0x20000LL;
      RegionSize = v17;
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
  KiUnstackDetachProcess(a3, 0);
  return (unsigned int)inited;
}
