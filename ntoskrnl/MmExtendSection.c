/*
 * XREFs of MmExtendSection @ 0x1407267DC
 * Callers:
 *     CcSetFileSizesEx @ 0x14029F9B0 (CcSetFileSizesEx.c)
 *     NtExtendSection @ 0x1407265B0 (NtExtendSection.c)
 *     MiAllocateVirtualMemory @ 0x1407C5270 (MiAllocateVirtualMemory.c)
 *     MiCreateSection @ 0x1407D05D0 (MiCreateSection.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiUpdateLastSubsectionSize @ 0x1402A4BE0 (MiUpdateLastSubsectionSize.c)
 *     MiUnlockControlAreaSectionExtend @ 0x1402A4E28 (MiUnlockControlAreaSectionExtend.c)
 *     MiLockControlAreaSectionExtend @ 0x1402A4EFC (MiLockControlAreaSectionExtend.c)
 *     MiFindLastSubsection @ 0x1402A5010 (MiFindLastSubsection.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x140344094 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1403441A0 (MiDereferenceControlAreaFile.c)
 *     MiSubsectionNeedsExtents @ 0x140633720 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x1406337C0 (MiUpdateActiveSubsection.c)
 *     MiExtendSection @ 0x140726AAC (MiExtendSection.c)
 *     FsRtlSetFileSize @ 0x14079BDF4 (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x1407F4020 (FsRtlGetFileSize.c)
 */

__int64 __fastcall MmExtendSection(__int64 a1, LARGE_INTEGER *a2, int a3)
{
  ULONG_PTR v6; // rax
  ULONG_PTR v7; // rbx
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r12
  unsigned int v11; // r14d
  __int64 LastSubsection; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r12
  int updated; // eax
  struct _FILE_OBJECT *v17; // rsi
  NTSTATUS v18; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v20; // rax
  __int64 v21; // rsi
  LARGE_INTEGER *v22; // rcx
  bool v23; // zf
  unsigned __int64 v24; // rax
  ULONG_PTR v25; // r14
  int v26; // eax
  _OWORD v27[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]
  LARGE_INTEGER FileSize; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp+58h] BYREF

  FileSize.QuadPart = 0LL;
  memset(v27, 0, sizeof(v27));
  v28 = 0LL;
  v6 = MiSectionControlArea(a1);
  v7 = v6;
  if ( (*(_DWORD *)(v6 + 56) & 0x420) != 0 || !*(_QWORD *)(v6 + 64) )
    return 3221225607LL;
  if ( a2->QuadPart > 0x3FFFFFFFFFF000uLL )
    return 3221225536LL;
  v8 = *(_QWORD *)v6;
  v9 = a2->QuadPart + 4095;
  DWORD2(v27[0]) = 16;
  v10 = v9 >> 12;
  MiLockControlAreaSectionExtend(v6, (__int64)v27);
  if ( (*(_DWORD *)(v7 + 56) & 0x8000) == 0 )
  {
    v24 = *(_QWORD *)(a1 + 48);
    if ( a2->QuadPart <= v24 )
    {
      a2->QuadPart = v24;
      MiUnlockControlAreaSectionExtend(v7, (__int64)v27);
      return 0LL;
    }
  }
  if ( !a3 )
  {
    MiUnlockControlAreaSectionExtend(v7, (__int64)v27);
    BugCheckParameter2 = MiReferenceControlAreaFile(v7);
    DWORD2(v27[0]) = 32;
    v17 = (struct _FILE_OBJECT *)BugCheckParameter2;
    MiLockControlAreaSectionExtend(v7, (__int64)v27);
    v18 = FsRtlGetFileSize(v17, &FileSize);
    if ( v18 < 0 )
    {
      v25 = BugCheckParameter2;
    }
    else
    {
      if ( a2->QuadPart <= (unsigned __int64)FileSize.QuadPart )
      {
LABEL_20:
        if ( *(_QWORD *)(v8 + 32) )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          v20 = KeAbPreAcquire((__int64)&qword_140C651D0, 0LL);
          v21 = v20;
          if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C651D0, 0LL) )
            ExfAcquirePushLockExclusiveEx(&qword_140C651D0, v20, (__int64)&qword_140C651D0);
          if ( v21 )
            *(_BYTE *)(v21 + 18) = 1;
          v22 = *(LARGE_INTEGER **)(v8 + 32);
          if ( v22 )
            *v22 = FileSize;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C651D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C651D0);
          KeAbPostRelease((ULONG_PTR)&qword_140C651D0);
          v23 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v23
            && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        MiUnlockControlAreaSectionExtend(v7, (__int64)v27);
        MiDereferenceControlAreaFile(v7, BugCheckParameter2);
        DWORD2(v27[0]) = 16;
        MiLockControlAreaSectionExtend(v7, (__int64)v27);
        goto LABEL_6;
      }
      v25 = BugCheckParameter2;
      if ( (*(_DWORD *)(a1 + 60) & 0x44) != 0 )
      {
        FileSize = *a2;
        v26 = FsRtlSetFileSize((PFILE_OBJECT)BugCheckParameter2);
        if ( v26 >= 0 )
          goto LABEL_20;
        v18 = v26;
      }
      else
      {
        v18 = -1073741689;
      }
    }
    MiUnlockControlAreaSectionExtend(v7, (__int64)v27);
    MiDereferenceControlAreaFile(v7, v25);
    return (unsigned int)v18;
  }
LABEL_6:
  v11 = 0;
  BugCheckParameter2 = 0LL;
  LastSubsection = MiFindLastSubsection(v7, 0);
  v13 = *(unsigned int *)(v8 + 8) | ((unsigned __int64)(*(_WORD *)(v8 + 12) & 0x3FF) << 32);
  if ( v10 <= v13 )
  {
    *(LARGE_INTEGER *)(a1 + 48) = *a2;
    if ( (unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 24), -1LL, -1LL) < a2->QuadPart )
    {
      _InterlockedExchange64((volatile __int64 *)(v8 + 24), a2->QuadPart);
      MiUpdateLastSubsectionSize(LastSubsection, a2, 0);
    }
  }
  else
  {
    v14 = v10 - v13;
    if ( v14 <= (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFFu) )
    {
      if ( (*(_BYTE *)(v7 + 62) & 0xC) != 0 && *(_QWORD *)(LastSubsection + 8) )
      {
        MiSubsectionNeedsExtents((_DWORD *)LastSubsection);
        BugCheckParameter2 = LastSubsection;
      }
      updated = MiUpdateLastSubsectionSize(LastSubsection, a2, v14);
    }
    else
    {
      updated = MiExtendSection(
                  LastSubsection,
                  (_DWORD)a2,
                  *(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF,
                  (unsigned int)v14 - (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFF),
                  (__int64)&BugCheckParameter2);
    }
    v11 = updated;
    if ( updated >= 0 )
    {
      v11 = 0;
      _InterlockedExchange64((volatile __int64 *)(v8 + 24), a2->QuadPart);
      *(LARGE_INTEGER *)(a1 + 48) = *a2;
    }
  }
  MiUnlockControlAreaSectionExtend(v7, (__int64)v27);
  if ( BugCheckParameter2 )
    return (unsigned int)MiUpdateActiveSubsection((_QWORD *)BugCheckParameter2);
  return v11;
}
