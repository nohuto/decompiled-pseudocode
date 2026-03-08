/*
 * XREFs of MiCopyPagesIntoEnclave @ 0x140A3A34C
 * Callers:
 *     NtLoadEnclaveData @ 0x140A3C600 (NtLoadEnclaveData.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x140267B90 (MmProbeAndLockPages.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiCreatePteCopyList @ 0x1402F54C0 (MiCreatePteCopyList.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiMakeProtectionMask @ 0x140320CC0 (MiMakeProtectionMask.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     MiGetPteFromCopyList @ 0x14032DE90 (MiGetPteFromCopyList.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeAddEnclavePage @ 0x14056DC68 (KeAddEnclavePage.c)
 *     MiGetVmPartition @ 0x140626FC4 (MiGetVmPartition.c)
 *     MiCountCommittedPages @ 0x140644EA8 (MiCountCommittedPages.c)
 *     MiGetPageForEnclave @ 0x140645A8C (MiGetPageForEnclave.c)
 *     MiInitializeEnclavePfn @ 0x140645B58 (MiInitializeEnclavePfn.c)
 *     MiReturnEnclavePage @ 0x140646460 (MiReturnEnclavePage.c)
 *     MiWriteEnclavePte @ 0x1406465DC (MiWriteEnclavePte.c)
 *     MiReleasePteCopyList @ 0x14065EA2C (MiReleasePteCopyList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCopyPagesIntoEnclave(
        _KPROCESS *BugCheckParameter1,
        __int64 a2,
        char a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        int a7,
        _QWORD *a8,
        _DWORD *a9)
{
  char *Pool; // r14
  unsigned int ProtectionMask; // eax
  char v14; // r8
  char v16; // cl
  char v17; // cl
  char v18; // r8
  int v19; // ebx
  signed int v20; // ebx
  unsigned __int64 v21; // rdx
  unsigned __int64 PteAddress; // rbx
  unsigned __int64 v23; // r13
  int v24; // esi
  unsigned int v25; // r12d
  char v26; // al
  __int64 v27; // rbx
  unsigned __int64 v28; // rcx
  size_t v29; // rbx
  char *v30; // r15
  __int64 v31; // rbx
  char *v32; // r15
  unsigned __int64 PageForEnclave; // rax
  ULONG_PTR v34; // r12
  unsigned __int64 PteFromCopyList; // r13
  unsigned __int64 v36; // rbx
  __int64 v37; // r8
  unsigned __int64 ValidPte; // rax
  int v40; // [rsp+34h] [rbp-1D4h]
  int v41; // [rsp+38h] [rbp-1D0h]
  unsigned int v42; // [rsp+3Ch] [rbp-1CCh]
  unsigned __int64 v43; // [rsp+48h] [rbp-1C0h]
  char v44; // [rsp+50h] [rbp-1B8h]
  void *Src; // [rsp+58h] [rbp-1B0h]
  ULONG_PTR v46; // [rsp+60h] [rbp-1A8h]
  unsigned __int64 v48; // [rsp+78h] [rbp-190h]
  __int64 VmPartition; // [rsp+90h] [rbp-178h]
  __int64 v51; // [rsp+A8h] [rbp-160h]
  __int128 v52; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-148h]
  $115DCDF994C6370D29323EAB0E0C9502 v54; // [rsp+C8h] [rbp-140h] BYREF
  struct _MDL MemoryDescriptorList[4]; // [rsp+100h] [rbp-108h] BYREF

  v43 = a4;
  memset(&v54, 0, sizeof(v54));
  v52 = 0LL;
  v53 = 0LL;
  memset(MemoryDescriptorList, 0, 0xB8uLL);
  Pool = 0LL;
  ProtectionMask = MiMakeProtectionMask(a7 & 0x5FFFFFFF);
  v41 = ProtectionMask;
  if ( (ProtectionMask & 7) == 0 || ProtectionMask > 7 || (ProtectionMask & 5) == 5 )
    return 3221225541LL;
  if ( (ProtectionMask & 2) != 0 )
  {
    if ( ((__int64)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink & 0x100) != 0
      && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) == 0 )
    {
      return 3221227012LL;
    }
    v14 |= 4u;
  }
  v16 = v14 | 2;
  if ( (ProtectionMask & 4) == 0 )
    v16 = v14;
  v17 = v16 | 1;
  v18 = v17 | 0x40;
  if ( (*(_DWORD *)(a2 + 64) & 2) == 0 )
    v18 = v17;
  v44 = v18;
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
    v41 = ProtectionMask & 2 | 4;
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v54);
  v19 = -(MiCountCommittedPages(a4, a4 + a6 - 1, a2, (__int64)&BugCheckParameter1[1].ActiveProcessors.StaticBitmap[26]) != 0);
  KiUnstackDetachProcess(&v54);
  v20 = v19 & 0xC0000018;
  if ( v20 < 0 )
    return (unsigned int)v20;
  PteAddress = MiGetPteAddress(v43);
  v46 = PteAddress;
  v48 = PteAddress + 8 * (v21 - 1);
  if ( v21 > 0x14 )
    LODWORD(v21) = 20;
  MiCreatePteCopyList(v21 + 1, (__int64)&v52);
  if ( !DWORD1(v52) )
    return 3221225626LL;
  v23 = a5;
  if ( (a5 & 0xFFF) == 0 || (Pool = (char *)MiAllocatePool(256, 0x10000uLL, 0x44456D4Du)) != 0LL )
  {
    VmPartition = MiGetVmPartition((__int64)&BugCheckParameter1[1].ActiveProcessors.StaticBitmap[26]);
    v24 = 0;
    *a8 = 0LL;
    v51 = (__int64)(*(_QWORD *)(a2 + 80) << 25) >> 16;
    while ( 1 )
    {
      if ( PteAddress > v48 )
        goto LABEL_24;
      v25 = 16;
      if ( (unsigned __int64)((__int64)(v48 - PteAddress + 8) >> 3) < 0x10 )
        v25 = (__int64)(v48 - PteAddress + 8) >> 3;
      v42 = v25;
      v26 = a3;
      if ( a3 == 1 )
      {
        v27 = v25;
        if ( (unsigned __int64)v25 << 12 )
        {
          v28 = v23 + ((unsigned __int64)v25 << 12);
          if ( v28 > 0x7FFFFFFF0000LL || v28 < v23 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v26 = 1;
      }
      else
      {
        v27 = v25;
      }
      if ( Pool )
      {
        v29 = v27 << 12;
        memmove(Pool, (const void *)v23, v29);
        v30 = Pool;
      }
      else
      {
        v29 = v27 << 12;
        if ( v26 == 1 )
        {
          MemoryDescriptorList[0].Next = 0LL;
          MemoryDescriptorList[0].Size = 8 * (((v29 + (v23 & 0xFFF) + 4095) >> 12) + 6);
          MemoryDescriptorList[0].MdlFlags = 0;
          MemoryDescriptorList[0].StartVa = (PVOID)(v23 & 0xFFFFFFFFFFFFF000uLL);
          MemoryDescriptorList[0].ByteOffset = v23 & 0xFFF;
          MemoryDescriptorList[0].ByteCount = v29;
          MmProbeAndLockPages(MemoryDescriptorList, 0, IoReadAccess);
          v30 = (char *)MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000000);
          if ( !v30 )
            break;
        }
        else
        {
          v30 = (char *)v23;
        }
      }
      Src = (void *)(v29 + v23);
      KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v54);
      v31 = v43;
      v32 = &v30[-v43];
      while ( v25 )
      {
        PageForEnclave = MiGetPageForEnclave(a2, VmPartition);
        v34 = PageForEnclave;
        if ( PageForEnclave == -1LL )
        {
          v24 = -1073741801;
          break;
        }
        PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList((unsigned int *)&v52, PageForEnclave, -1LL);
        v24 = KeAddEnclavePage(v51, (__int64)&v32[v31], (__int64)(PteFromCopyList << 25) >> 16, v31, v44, a9);
        v36 = ZeroPte;
        v40 = 0;
        if ( MiPteInShadowRange(PteFromCopyList) )
        {
          if ( MiPteHasShadow() )
          {
            v40 = 1;
            if ( HIBYTE(word_140C6697C) )
              goto LABEL_56;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          {
            goto LABEL_56;
          }
          if ( (ZeroPte & 1) != 0 )
            v36 = ZeroPte | 0x8000000000000000uLL;
        }
LABEL_56:
        *(_QWORD *)PteFromCopyList = v36;
        if ( v40 )
          MiWritePteShadow(PteFromCopyList, v36, v37);
        if ( v24 < 0 )
        {
          MiReturnEnclavePage(v34);
          break;
        }
        MiInitializeEnclavePfn(v34, v46, v41);
        ValidPte = MiMakeValidPte(v46, v34, v41 | 0x80000000);
        MiWriteEnclavePte(v46, ValidPte, a2, 0, 1);
        v31 = v43 + 4096;
        v43 += 4096LL;
        v46 += 8LL;
        v25 = --v42;
        *a8 += 4096LL;
      }
      if ( (MemoryDescriptorList[0].MdlFlags & 2) != 0 )
        MmUnlockPages(MemoryDescriptorList);
      KiUnstackDetachProcess(&v54);
      v23 = (unsigned __int64)Src;
      PteAddress = v46;
    }
  }
  v24 = -1073741670;
LABEL_24:
  if ( (MemoryDescriptorList[0].MdlFlags & 2) != 0 )
    MmUnlockPages(MemoryDescriptorList);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
  MiReleasePteCopyList((__int64)&v52);
  return (unsigned int)v24;
}
