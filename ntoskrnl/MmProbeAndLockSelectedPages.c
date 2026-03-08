/*
 * XREFs of MmProbeAndLockSelectedPages @ 0x1403CF7D0
 * Callers:
 *     NtReadFileScatter @ 0x140798190 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140799670 (NtWriteFileGather.c)
 * Callees:
 *     MiProbeAndLockComplete @ 0x140267C70 (MiProbeAndLockComplete.c)
 *     MiProbeLockFrame @ 0x140268ED0 (MiProbeLockFrame.c)
 *     MiProbeAndLockPrepare @ 0x14026B160 (MiProbeAndLockPrepare.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     MiLockProbePacketWorkingSet @ 0x1402E0344 (MiLockProbePacketWorkingSet.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402E038C (MiUnlockProbePacketWorkingSet.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiProbePacketContended @ 0x140347478 (MiProbePacketContended.c)
 *     MiProbeLeafFrame @ 0x1403CFA14 (MiProbeLeafFrame.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __stdcall MmProbeAndLockSelectedPages(
        PMDL MemoryDescriptorList,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  unsigned __int64 *Pool; // rdi
  signed __int32 v8; // esi
  unsigned __int64 v9; // rax
  size_t v10; // rbx
  unsigned __int64 *v11; // r13
  unsigned int v12; // r12d
  KPROCESSOR_MODE v13; // r15
  int v14; // ebx
  unsigned __int64 *v15; // r14
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned int v18; // r15d
  __int64 v19; // rsi
  signed __int32 v20; // [rsp+20h] [rbp-E0h]
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v23[22]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE P[4096]; // [rsp+100h] [rbp+0h] BYREF

  memset(v23, 0, sizeof(v23));
  Pool = (unsigned __int64 *)P;
  v8 = Operation != IoReadAccess;
  v9 = (MemoryDescriptorList->ByteCount >> 12) + ((MemoryDescriptorList->ByteCount & 0xFFF) != 0);
  v10 = v9;
  if ( v9 > 0x200 )
  {
    Pool = (unsigned __int64 *)MiAllocatePool(64, 8 * v9, 0x72506D4Du);
    if ( !Pool )
      RtlRaiseStatus(-1073741670);
  }
  v11 = &Pool[v10];
  v12 = 0;
  memmove(Pool, SegmentArray, v10 * 8);
  v13 = AccessMode;
  LOBYTE(v20) = AccessMode;
  v14 = MiProbeAndLockPrepare((__int64)v23, (__int64)MemoryDescriptorList, *Pool, 1uLL, v20, v8, 1);
  if ( v14 >= 0 )
  {
    v15 = Pool;
    if ( Pool < v11 )
    {
      v16 = (_QWORD *)v23[7];
      while ( 1 )
      {
        v17 = *v15;
        v23[1] = v17;
        v23[2] = v17 + 1;
        *v16 = -1LL;
        v23[3] = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v17 > 0x7FFFFFFEFFFFLL )
        {
          if ( v13 )
            break;
        }
        if ( (v23[9] & 0x20) != 0 && v17 >= v23[19] && v17 <= v23[20] )
        {
          if ( v23[21] == -1LL )
          {
            v22 = MI_READ_PTE_LOCK_FREE(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v23[17] = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22) >> 12) & 0xFFFFFFFFFFLL;
          }
          else
          {
            v23[17] = v23[21] + ((v17 - v23[19]) >> 12);
          }
          v18 = 64;
        }
        else
        {
          v14 = MiProbeLeafFrame(v23);
          if ( v14 < 0 )
            goto LABEL_18;
          v18 = 16;
        }
        v14 = MiProbeLockFrame((__int64)v23, 1);
        if ( v14 < 0 )
          goto LABEL_18;
        v19 = v23[7];
        ++v12;
        *(_QWORD *)v23[7] = v23[17];
        v16 = (_QWORD *)(v19 + 8);
        v23[7] = v16;
        if ( !(v12 % v18) && (unsigned int)MiProbePacketContended((__int64)v23) )
        {
          MiUnlockProbePacketWorkingSet((__int64)v23);
          MiLockProbePacketWorkingSet((__int64)v23);
          v16 = (_QWORD *)v23[7];
        }
        if ( ++v15 >= v11 )
          goto LABEL_18;
        v13 = AccessMode;
      }
      ++dword_140C67B70;
      v14 = -1073741819;
    }
LABEL_18:
    v14 = MiProbeAndLockComplete((__int64)v23, v14);
  }
  if ( Pool != (unsigned __int64 *)P )
    ExFreePoolWithTag(Pool, 0);
  if ( v14 < 0 )
    RtlRaiseStatus(v14);
}
