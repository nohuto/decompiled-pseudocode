/*
 * XREFs of MmFlushVirtualMemory @ 0x14075ED38
 * Callers:
 *     NtFlushVirtualMemory @ 0x14075EBB0 (NtFlushVirtualMemory.c)
 *     CMFFlushHitsFile @ 0x1409FF53C (CMFFlushHitsFile.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     MiFindLastSubsection @ 0x1402A5010 (MiFindLastSubsection.c)
 *     MiFlushAcquire @ 0x1402D4788 (MiFlushAcquire.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402D4830 (MiFlushDirtyBitsToPfn.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     MiGetProtoPteAddress @ 0x14031C780 (MiGetProtoPteAddress.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14031F7B0 (MiUnlockAndDereferenceVadShared.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     MiFlushRelease @ 0x140334AC0 (MiFlushRelease.c)
 *     MiReferenceControlAreaFile @ 0x140344094 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1403441A0 (MiDereferenceControlAreaFile.c)
 *     KeAreAllApcsDisabled @ 0x14034C170 (KeAreAllApcsDisabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x14075EFA8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x14075F248 (FsRtlReleaseFileForCcFlush.c)
 */

__int64 __fastcall MmFlushVirtualMemory(_KPROCESS *a1, unsigned __int64 *a2, _QWORD *a3, struct _IO_STATUS_BLOCK *a4)
{
  unsigned __int64 v4; // r12
  unsigned int v5; // edi
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r14
  unsigned int v10; // ebx
  __int64 v11; // rax
  void *v12; // rsi
  unsigned __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // r13
  __int64 v16; // r15
  int v17; // eax
  struct _KTHREAD *ProtoPteAddress; // rax
  __int64 LastSubsection; // r14
  __int64 *v20; // r12
  struct _FILE_OBJECT *v21; // rsi
  struct _IO_STATUS_BLOCK *v22; // r15
  int v23; // ebx
  struct _IO_STATUS_BLOCK *v25; // rax
  BOOLEAN v26; // [rsp+40h] [rbp-59h]
  unsigned int v27; // [rsp+44h] [rbp-55h]
  unsigned __int64 v28; // [rsp+48h] [rbp-51h] BYREF
  __int64 v29; // [rsp+50h] [rbp-49h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-41h]
  __int64 *v31; // [rsp+60h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK *v32; // [rsp+68h] [rbp-31h]
  _QWORD *v33; // [rsp+70h] [rbp-29h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v34; // [rsp+78h] [rbp-21h] BYREF

  v4 = *a2;
  v5 = 0;
  v32 = a4;
  v34.SavedApcState.ApcListHead[0] = 0LL;
  v33 = a3;
  v7 = *a3 + v4 - 1;
  v8 = v4 & 0xFFFFFFFFFFFFF000uLL;
  v31 = 0LL;
  *a2 = v8;
  v9 = v7 | 0xFFF;
  memset(&v34.SavedApcStateFill[16], 0, 32);
  v28 = 0LL;
  v10 = 0;
  LODWORD(v29) = 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != a1 )
  {
    v10 = 2;
    KiStackAttachProcess(a1, 0, (__int64)&v34);
  }
  v27 = 0;
  v26 = KeAreAllApcsDisabled();
  v11 = MiObtainReferencedVadEx(v8, 2, (int *)&v29);
  v12 = (void *)v11;
  if ( !v11 )
  {
    v5 = v29;
    if ( (_DWORD)v29 == -1073741664 )
      v5 = -1073741799;
    goto LABEL_35;
  }
  v13 = *(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32);
  if ( !*a3 )
  {
    v9 = (v13 << 12) | 0xFFF;
    v10 |= 1u;
  }
  v14 = *(_DWORD *)(v11 + 48);
  if ( (v14 & 0x200000) != 0 )
    goto LABEL_33;
  v15 = v9 >> 12;
  if ( v9 >> 12 > v13 )
    goto LABEL_33;
  v16 = **(_QWORD **)(v11 + 72);
  v29 = v16;
  if ( !*(_QWORD *)(v16 + 64) || (v14 & 0x70) == 0x20 )
  {
    v5 = -1073741688;
    goto LABEL_34;
  }
  *v33 = v9 - v8 + 1;
  if ( !v26 )
  {
    v17 = 0;
    if ( (*(_DWORD *)(v16 + 56) & 0x20000) != 0 )
      v17 = 4;
    v27 = v17;
  }
  MiFlushDirtyBitsToPfn(v8, v9, (__int64)CurrentThread);
  MiGetProtoPteAddress((__int64)v12, v9 >> 12, 0, &v28);
  ProtoPteAddress = (struct _KTHREAD *)MiGetProtoPteAddress((__int64)v12, v8 >> 12, 0, &v31);
  LastSubsection = v28;
  v20 = v31;
  CurrentThread = ProtoPteAddress;
  if ( v28 )
  {
    v28 = MiGetProtoPteAddress((__int64)v12, v15, 0, &v33);
LABEL_16:
    if ( (unsigned int)MiFlushAcquire(v16, (__int64)v20, LastSubsection) )
    {
      MiUnlockAndDereferenceVadShared(v12);
      if ( v10 >= 2 )
        KiUnstackDetachProcess(&v34);
      v21 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v16);
      v22 = v32;
      while ( 1 )
      {
        v23 = FsRtlAcquireFileForCcFlushEx(v21);
        if ( v23 < 0 )
          break;
        v23 = MiFlushSectionInternal((ULONG_PTR)CurrentThread, v28, v20, LastSubsection, 0LL, v27, v22);
        FsRtlReleaseFileForCcFlush(v21);
        if ( v23 != -1073741740 )
          break;
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      }
      MiDereferenceControlAreaFile(v29, (__int64)v21);
      MiFlushRelease(v29, (ULONG_PTR)v20, LastSubsection);
      return (unsigned int)v23;
    }
    v5 = -1073741670;
    goto LABEL_34;
  }
  if ( v31 )
  {
    if ( (v10 & 1) != 0 )
    {
      LastSubsection = MiFindLastSubsection(v16, 0);
      v28 = *(_QWORD *)(LastSubsection + 8)
          + 8
          * (*(unsigned int *)(LastSubsection + 44)
           - (unsigned __int64)(*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF)
           - 1);
      goto LABEL_16;
    }
    goto LABEL_33;
  }
  if ( (v10 & 1) == 0 )
  {
LABEL_33:
    v5 = -1073741799;
    goto LABEL_34;
  }
  v25 = v32;
  v32->Status = 0;
  v25->Information = 0LL;
LABEL_34:
  MiUnlockAndDereferenceVadShared(v12);
LABEL_35:
  if ( v10 >= 2 )
    KiUnstackDetachProcess(&v34);
  return v5;
}
