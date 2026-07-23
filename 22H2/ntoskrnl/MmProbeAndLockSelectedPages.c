/*
 * XREFs of MmProbeAndLockSelectedPages @ 0x14030EB80
 * Callers:
 *     NtReadFileScatter @ 0x14067E2A0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x14067EA40 (NtWriteFileGather.c)
 * Callees:
 *     MiProbeAndLockPrepare @ 0x14020A2B0 (MiProbeAndLockPrepare.c)
 *     MiProbeLockFrame @ 0x14020AC90 (MiProbeLockFrame.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MiProbeLeafFrame @ 0x14027DEC0 (MiProbeLeafFrame.c)
 *     MiProbePacketContended @ 0x140288A88 (MiProbePacketContended.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     MiProbeAndLockComplete @ 0x14030EDF0 (MiProbeAndLockComplete.c)
 *     MiLockProbePacketWorkingSet @ 0x14030F1D8 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x14030F220 (MiUnlockProbePacketWorkingSet.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __stdcall MmProbeAndLockSelectedPages(
        PMDL MemoryDescriptorList,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  unsigned __int64 *Pool; // rdi
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  size_t v10; // rbx
  unsigned __int64 *v11; // r12
  unsigned int v12; // r13d
  NTSTATUS v13; // ebx
  unsigned __int64 *v14; // r15
  _QWORD *v15; // rsi
  unsigned __int64 v16; // rcx
  unsigned int v17; // r14d
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v23[22]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE P[4096]; // [rsp+100h] [rbp+0h] BYREF

  memset(v23, 0, 0xA8uLL);
  Pool = (unsigned __int64 *)P;
  v8 = Operation != IoReadAccess;
  v9 = (MemoryDescriptorList->ByteCount >> 12) + ((MemoryDescriptorList->ByteCount & 0xFFF) != 0);
  v10 = (unsigned int)v9;
  if ( v9 > 0x200 )
  {
    Pool = (unsigned __int64 *)MiAllocatePool(64, 8LL * (unsigned int)v9, 0x72506D4Du);
    if ( !Pool )
      RtlRaiseStatus(-1073741670);
  }
  v11 = &Pool[v10];
  v12 = 0;
  memmove(Pool, SegmentArray, v10 * 8);
  v13 = MiProbeAndLockPrepare((__int64)v23, (__int64)MemoryDescriptorList, *Pool, 1u, AccessMode, v8, 1);
  if ( v13 >= 0 )
  {
    v14 = Pool;
    if ( Pool < v11 )
    {
      v15 = (_QWORD *)v23[6];
      while ( 1 )
      {
        v16 = *v14;
        v23[0] = v16;
        v23[1] = v16 + 1;
        *v15 = -1LL;
        v23[2] = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v16 >= 0x7FFFFFFF0000LL )
        {
          if ( AccessMode )
            break;
        }
        if ( (v23[8] & 0x20) != 0 && v16 <= v23[19] && v16 >= v23[18] )
        {
          if ( v23[20] == -1LL )
          {
            v22 = MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v19 = v22;
            if ( MiPteInShadowRange((unsigned __int64)&v22)
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v19 & 1) != 0
              && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v22 >> 3) & 0x1FF)) & 0x20) != 0 )
                  v19 |= 0x20uLL;
              }
            }
            v23[16] = (v19 >> 12) & 0xFFFFFFFFFLL;
          }
          else
          {
            v23[16] = v23[20] + ((v16 - v23[18]) >> 12);
          }
          v17 = 64;
        }
        else
        {
          v13 = MiProbeLeafFrame(v23);
          if ( v13 < 0 )
            goto LABEL_12;
          v17 = 16;
        }
        v13 = MiProbeLockFrame(v23);
        if ( v13 >= 0 )
        {
          v18 = v23[6];
          ++v12;
          *(_QWORD *)v23[6] = v23[16];
          v15 = (_QWORD *)(v18 + 8);
          v23[6] = (unsigned __int64)v15;
          if ( !(v12 % v17) && MiProbePacketContended((__int64)v23) )
          {
            MiUnlockProbePacketWorkingSet(v23);
            MiLockProbePacketWorkingSet(v23);
            v15 = (_QWORD *)v23[6];
          }
          if ( ++v14 < v11 )
            continue;
        }
        goto LABEL_12;
      }
      ++dword_140C4E778;
      v13 = -1073741819;
    }
LABEL_12:
    v13 = MiProbeAndLockComplete(v23, (unsigned int)v13, 7LL);
  }
  if ( Pool != (unsigned __int64 *)P )
    ExFreePoolWithTag(Pool, 0);
  if ( v13 < 0 )
    RtlRaiseStatus(v13);
}
