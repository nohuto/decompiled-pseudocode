/*
 * XREFs of MiQueryMemoryPhysicalContiguity @ 0x140A3CCE0
 * Callers:
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x140267B90 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     MiGetLargestPageIndex @ 0x14027DE94 (MiGetLargestPageIndex.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MmSizeOfMdl @ 0x1402CFFB0 (MmSizeOfMdl.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14031F7B0 (MiUnlockAndDereferenceVadShared.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MiQueryVaPhysicalContiguity @ 0x1406469A0 (MiQueryVaPhysicalContiguity.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiQueryMemoryPhysicalContiguity(ULONG_PTR a1, volatile void **a2, __int64 a3, KPROCESSOR_MODE a4)
{
  struct _MDL *v5; // r14
  __int64 v6; // rsi
  unsigned int v7; // ebx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r15
  int v10; // eax
  unsigned int LargestPageIndex; // eax
  char v12; // dl
  char v13; // r9
  unsigned int v14; // r8d
  __int64 *v15; // rcx
  size_t v16; // r12
  _BYTE *v17; // rbx
  SIZE_T v18; // rax
  struct _MDL *Pool; // rax
  __int16 v20; // dx
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r12
  int VaPhysicalContiguity; // eax
  struct _KTHREAD *v25; // rcx
  int v28; // [rsp+34h] [rbp-104h]
  int v29; // [rsp+40h] [rbp-F8h]
  unsigned int v30; // [rsp+44h] [rbp-F4h] BYREF
  struct _MDL *v31; // [rsp+48h] [rbp-F0h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-E8h]
  int v33; // [rsp+58h] [rbp-E0h]
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-D8h]
  __int128 v35; // [rsp+68h] [rbp-D0h]
  __int128 v36; // [rsp+78h] [rbp-C0h]
  volatile void *Address; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v38; // [rsp+90h] [rbp-A8h]
  size_t v39; // [rsp+98h] [rbp-A0h]
  $115DCDF994C6370D29323EAB0E0C9502 v40; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE Src[32]; // [rsp+D0h] [rbp-68h] BYREF

  BugCheckParameter1 = a1;
  v30 = 0;
  memset(&v40, 0, sizeof(v40));
  v5 = 0LL;
  v31 = 0LL;
  v6 = 0LL;
  v28 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a3 != 40 )
  {
    v7 = -1073741820;
    goto LABEL_54;
  }
  if ( a4 )
    ProbeForWrite(a2, 0x28uLL, 8u);
  v35 = *(_OWORD *)a2;
  v36 = *((_OWORD *)a2 + 1);
  Address = a2[4];
  if ( (DWORD2(v36) & 0xFFFFFFFE) != 0 )
    goto LABEL_53;
  v8 = v35;
  if ( (unsigned __int64)v35 > 0x7FFFFFFEFFFFLL )
    goto LABEL_53;
  v9 = v36;
  if ( !(_QWORD)v36 || (v10 = 1, (((_QWORD)v36 - 1LL) & (unsigned __int64)v36) != 0) )
    v10 = 0;
  if ( !v10 || (unsigned __int64)v36 <= 0x1000 )
    goto LABEL_53;
  LargestPageIndex = MiGetLargestPageIndex();
  v14 = LargestPageIndex;
  v29 = LargestPageIndex;
  if ( LargestPageIndex < 3 )
  {
    v15 = &MiLargePageSizes[LargestPageIndex];
    do
    {
      if ( *v15 == (unsigned __int64)v36 >> 12 )
        break;
      ++v14;
      ++v15;
    }
    while ( v14 < 3 );
    v29 = v14;
    v12 = BYTE8(v36);
  }
  if ( v14 == 3 )
  {
LABEL_18:
    v7 = -1073741637;
    goto LABEL_54;
  }
  if ( (((_QWORD)v36 - 1LL) & *((_QWORD *)&v35 + 1)) != 0
    || ((unsigned __int64)v35 & ~((_QWORD)v36 - 1LL)) != (_QWORD)v35 )
  {
    goto LABEL_53;
  }
  v33 = 2 * (v12 & 1);
  v38 = *((_QWORD *)&v35 + 1) / (unsigned __int64)v36;
  v16 = 4 * (*((_QWORD *)&v35 + 1) / (unsigned __int64)v36);
  v39 = v16;
  if ( v16 > 0x20 )
  {
    if ( v16 <= 0xFFFFF000 )
    {
      v18 = MmSizeOfMdl((PVOID)Address, 4 * (*((_QWORD *)&v35 + 1) / (unsigned __int64)v36));
      Pool = (struct _MDL *)MiAllocatePool(64, v18, 0x20206D4Du);
      v5 = Pool;
      v31 = Pool;
      if ( !Pool )
        goto LABEL_26;
      Pool->Next = 0LL;
      v20 = (__int16)Address;
      Pool->Size = 8 * (((v16 + ((unsigned __int16)Address & 0xFFF) + 4095LL) >> 12) + 6);
      Pool->MdlFlags = 0;
      Pool->StartVa = (PVOID)((unsigned __int64)Address & 0xFFFFFFFFFFFFF000uLL);
      Pool->ByteOffset = v20 & 0xFFF;
      Pool->ByteCount = v16;
      MmProbeAndLockPages(Pool, a4, IoWriteAccess);
      v17 = (v5->MdlFlags & 5) != 0
          ? v5->MappedSystemVa
          : MmMapLockedPagesSpecifyCache(v5, 0, MmCached, 0LL, 0, 0x40000010u);
      if ( !v17 )
      {
LABEL_26:
        v7 = -1073741670;
        goto LABEL_54;
      }
      goto LABEL_31;
    }
LABEL_53:
    v7 = -1073741811;
    goto LABEL_54;
  }
  v17 = Src;
  if ( v13 )
    ProbeForWrite(Address, 4 * (*((_QWORD *)&v35 + 1) / (unsigned __int64)v36), 4u);
LABEL_31:
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v40);
    v28 = 1;
  }
  v21 = v8 >> 12;
  v22 = v9 >> 12;
  CurrentThread = 0LL;
  if ( v38 )
  {
    while ( 1 )
    {
      if ( v6
        && (v21 < (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32))
         || v21 > (*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32))) )
      {
        MiUnlockAndDereferenceVadShared((PVOID)v6);
        v6 = 0LL;
      }
      v23 = v21 << 12;
      if ( !v6 )
      {
        v6 = MiObtainReferencedVadEx(v21 << 12, 2, (int *)&v30);
        if ( !v6 )
        {
          v7 = v30;
          goto LABEL_56;
        }
      }
      v21 += v22;
      if ( v21 - 1 > (*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) )
        break;
      if ( (*(_DWORD *)(v6 + 48) & 0x70) != 0 || (*(_DWORD *)(v6 + 48) & 0x200000) == 0 )
        goto LABEL_18;
      *(_DWORD *)&v17[4 * (_QWORD)CurrentThread] = 0;
      VaPhysicalContiguity = MiQueryVaPhysicalContiguity(BugCheckParameter1 + 1664, v23, v29, v33);
      v25 = CurrentThread;
      *(_DWORD *)&v17[4 * (_QWORD)CurrentThread] ^= (*(_DWORD *)&v17[4 * (_QWORD)CurrentThread] ^ VaPhysicalContiguity) & 3;
      CurrentThread = (struct _KTHREAD *)((char *)&v25->Header.Lock + 1);
      if ( (unsigned __int64)&v25->Header.Lock + 1 >= v38 )
      {
        v16 = v39;
        goto LABEL_46;
      }
    }
    v7 = -1073741800;
  }
  else
  {
LABEL_46:
    if ( v6 )
    {
      MiUnlockAndDereferenceVadShared((PVOID)v6);
      v6 = 0LL;
    }
    if ( v28 )
    {
      KiUnstackDetachProcess(&v40);
      v28 = 0;
    }
    if ( v17 == Src )
      memmove((void *)Address, v17, v16);
    v7 = 0;
  }
LABEL_54:
  if ( v6 )
    MiUnlockAndDereferenceVadShared((PVOID)v6);
LABEL_56:
  if ( v28 )
    KiUnstackDetachProcess(&v40);
  if ( v5 )
  {
    if ( (v5->MdlFlags & 2) != 0 )
      MmUnlockPages(v5);
    ExFreePoolWithTag(v5, 0);
  }
  return v7;
}
