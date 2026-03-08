/*
 * XREFs of PspSetupUserProcessAddressSpace @ 0x14070733C
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     PsGetProcessServerSilo @ 0x1402637E0 (PsGetProcessServerSilo.c)
 *     KeCopyXfdMaskToPeb @ 0x14029618C (KeCopyXfdMaskToPeb.c)
 *     PspWow64SetupUserProcessAddressSpace @ 0x1402961B4 (PspWow64SetupUserProcessAddressSpace.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x140412610 (ZwAllocateVirtualMemory.c)
 *     PspLocateInPEManifest @ 0x1407066D0 (PspLocateInPEManifest.c)
 *     PspWritePebAffinityInfo @ 0x14070687C (PspWritePebAffinityInfo.c)
 *     PspCopyAndFixupParameters @ 0x140707064 (PspCopyAndFixupParameters.c)
 *     PspPrepareSystemDllInitBlock @ 0x1407075A8 (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessNtdllType @ 0x140707820 (PsWow64GetProcessNtdllType.c)
 *     PspMapSiloSharedDataView @ 0x14070783C (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140707874 (MmMapApiSetView.c)
 *     PspGetStandardHandleList @ 0x140797C5C (PspGetStandardHandleList.c)
 */

__int64 __fastcall PspSetupUserProcessAddressSpace(
        ULONG_PTR a1,
        _KPROCESS *a2,
        $115DCDF994C6370D29323EAB0E0C9502 *a3,
        __int64 a4)
{
  void **v5; // r15
  unsigned int *v8; // rbp
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // ebx
  int v13; // r14d
  __int64 ProcessServerSilo; // rax
  int VirtualMemory; // ebx
  ULONG_PTR v16; // rdx
  unsigned int ProcessNtdllType; // eax
  __int64 result; // rax
  ULONG_PTR RegionSize[2]; // [rsp+30h] [rbp-88h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-78h]
  __int128 v21; // [rsp+48h] [rbp-70h] BYREF
  __int64 v22; // [rsp+58h] [rbp-60h]

  RegionSize[0] = 0LL;
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
      v5 = (void **)(v8 + 8);
  }
  else if ( *(_DWORD *)(a4 + 80) == *(_DWORD *)(a4 + 288) )
  {
    v5 = (void **)&v21;
    result = PspGetStandardHandleList(a1, &v21);
    if ( (int)result < 0 )
      return result;
  }
  v12 = v8[2];
  v13 = v12 & 0x1000060;
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
  KiStackAttachProcess(a2, 0, (__int64)a3);
  if ( (*(_BYTE *)(a4 + 8) & 0x10) == 0 || (VirtualMemory = PspLocateInPEManifest((__int64)a2, a4), VirtualMemory >= 0) )
  {
    v16 = *v8 + *((_QWORD *)v8 + 126);
    RegionSize[0] = v16;
    if ( !v13 )
    {
      if ( v16 < 0x20000 )
        v16 = 0x20000LL;
      RegionSize[0] = v16;
    }
    *(_QWORD *)(a4 + 216) = 0LL;
    VirtualMemory = ZwAllocateVirtualMemory(
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      (PVOID *)(a4 + 216),
                      0LL,
                      RegionSize,
                      0x3000u,
                      4u);
    if ( VirtualMemory >= 0 )
    {
      VirtualMemory = PspCopyAndFixupParameters(a1, v5, a4);
      if ( VirtualMemory >= 0 )
      {
        if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0
          || (VirtualMemory = PspPrepareSystemDllInitBlock(0LL, a4), VirtualMemory >= 0) )
        {
          VirtualMemory = PspWow64SetupUserProcessAddressSpace((__int64)a2, a4);
          if ( VirtualMemory >= 0 )
          {
            if ( !a2[1].Affinity.StaticBitmap[30]
              || (ProcessNtdllType = PsWow64GetProcessNtdllType(a2),
                  VirtualMemory = PspPrepareSystemDllInitBlock(ProcessNtdllType, a4),
                  VirtualMemory >= 0) )
            {
              KeCopyXfdMaskToPeb(a2);
              PspWritePebAffinityInfo((__int64)CurrentThread, (__int64)a2);
              if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) == 0 )
              {
                VirtualMemory = MmMapApiSetView(a2);
                if ( VirtualMemory >= 0 )
                  VirtualMemory = PspMapSiloSharedDataView(a2);
              }
            }
          }
        }
      }
    }
  }
  KiUnstackDetachProcess(a3);
  return (unsigned int)VirtualMemory;
}
