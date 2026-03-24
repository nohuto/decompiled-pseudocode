/*
 * XREFs of MmFlushVirtualMemory @ 0x140668FB4
 * Callers:
 *     NtFlushVirtualMemory @ 0x140668E50 (NtFlushVirtualMemory.c)
 *     CMFFlushHitsFile @ 0x140958B00 (CMFFlushHitsFile.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     MiFlushSectionInternal @ 0x140219D70 (MiFlushSectionInternal.c)
 *     MiObtainReferencedVadEx @ 0x14021B260 (MiObtainReferencedVadEx.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     KeAreAllApcsDisabled @ 0x14025A4E0 (KeAreAllApcsDisabled.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14025AAB0 (MiUnlockAndDereferenceVadShared.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     MiFlushRelease @ 0x140295690 (MiFlushRelease.c)
 *     MiReferenceControlAreaFile @ 0x14029D540 (MiReferenceControlAreaFile.c)
 *     MiGetProtoPteAddress @ 0x1402B11D0 (MiGetProtoPteAddress.c)
 *     MiDereferenceControlAreaFile @ 0x1402D7994 (MiDereferenceControlAreaFile.c)
 *     MiFlushAcquire @ 0x1402F8FD8 (MiFlushAcquire.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402F908C (MiFlushDirtyBitsToPfn.c)
 *     MiFindLastSubsection @ 0x1402F974C (MiFindLastSubsection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1406BFDE4 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1406BFFC4 (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 __fastcall MmFlushVirtualMemory(_KPROCESS *a1, unsigned __int64 *a2, _QWORD *a3, unsigned int *a4)
{
  unsigned __int64 v4; // r12
  unsigned int v5; // edi
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r14
  unsigned int v10; // ebx
  volatile signed __int32 *v11; // rax
  char *v12; // rsi
  unsigned __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // r13
  __int64 v16; // r15
  int v17; // eax
  struct _KTHREAD *ProtoPteAddress; // rax
  __int64 LastSubsection; // r14
  _QWORD *v20; // r12
  struct _FILE_OBJECT *v21; // rsi
  unsigned int *v22; // r15
  int v23; // ebx
  unsigned int *v25; // rax
  BOOLEAN v26; // [rsp+40h] [rbp-69h]
  unsigned int v27; // [rsp+44h] [rbp-65h]
  unsigned __int64 v28; // [rsp+48h] [rbp-61h] BYREF
  __int64 v29; // [rsp+50h] [rbp-59h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-51h]
  _QWORD *v31; // [rsp+60h] [rbp-49h] BYREF
  unsigned int *v32; // [rsp+68h] [rbp-41h]
  _QWORD *v33; // [rsp+70h] [rbp-39h]
  __int64 v34; // [rsp+78h] [rbp-31h] BYREF
  _OWORD v35[3]; // [rsp+80h] [rbp-29h] BYREF

  v4 = *a2;
  v5 = 0;
  v32 = a4;
  v35[0] = 0LL;
  v33 = a3;
  v7 = *a3 + v4 - 1;
  v8 = v4 & 0xFFFFFFFFFFFFF000uLL;
  v31 = 0LL;
  *a2 = v8;
  v9 = v7 | 0xFFF;
  memset(&v35[1], 0, 32);
  v28 = 0LL;
  v10 = 0;
  LODWORD(v29) = 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->ApcState.Process != a1 )
  {
    v10 = 2;
    KiStackAttachProcess(a1, 0LL, (__int64)v35, a4);
  }
  v27 = 0;
  v26 = KeAreAllApcsDisabled();
  v11 = MiObtainReferencedVadEx(v8, 2, (int *)&v29);
  v12 = (char *)v11;
  if ( !v11 )
  {
    v5 = v29;
    if ( (_DWORD)v29 == -1073741664 )
      v5 = -1073741799;
    goto LABEL_25;
  }
  v13 = *((unsigned int *)v11 + 7) | ((unsigned __int64)*((unsigned __int8 *)v11 + 33) << 32);
  if ( !*a3 )
  {
    v9 = (v13 << 12) | 0xFFF;
    v10 |= 1u;
  }
  v14 = *((_DWORD *)v11 + 12);
  if ( (v14 & 0x100000) != 0 || (v15 = v9 >> 12, v9 >> 12 > v13) )
  {
LABEL_31:
    v5 = -1073741799;
    goto LABEL_24;
  }
  v16 = **((_QWORD **)v11 + 9);
  v29 = v16;
  if ( *(_QWORD *)(v16 + 64) && (v14 & 0x70) != 0x20 )
  {
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
      v28 = MiGetProtoPteAddress((__int64)v12, v15, 0, &v34);
LABEL_16:
      if ( (unsigned int)MiFlushAcquire(v16, (ULONG_PTR)v20, LastSubsection) )
      {
        MiUnlockAndDereferenceVadShared(v12);
        if ( v10 >= 2 )
          KiUnstackDetachProcess((__int64)v35, 0);
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
        MiDereferenceControlAreaFile(v29, (unsigned __int64)v21);
        MiFlushRelease(v29, (ULONG_PTR)v20, LastSubsection);
        return (unsigned int)v23;
      }
      v5 = -1073741670;
      goto LABEL_24;
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
    }
    else if ( (v10 & 1) != 0 )
    {
      v25 = v32;
      *v32 = 0;
      *((_QWORD *)v25 + 1) = 0LL;
      goto LABEL_24;
    }
    goto LABEL_31;
  }
  v5 = -1073741688;
LABEL_24:
  MiUnlockAndDereferenceVadShared(v12);
LABEL_25:
  if ( v10 >= 2 )
    KiUnstackDetachProcess((__int64)v35, 0);
  return v5;
}
