/*
 * XREFs of NtMapCMFModule @ 0x140A005D0
 * Callers:
 *     <none>
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x14020E5C8 (MiRemoveFromSystemSpace.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x1402DCE90 (ExConvertExclusiveToSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MmMapViewOfSection @ 0x14069EC70 (MmMapViewOfSection.c)
 *     MiUnmapViewOfSection @ 0x1406A2570 (MiUnmapViewOfSection.c)
 *     MiMapViewInSystemSpace @ 0x1406A55B8 (MiMapViewInSystemSpace.c)
 *     PsCreateSystemThreadEx @ 0x1407DE330 (PsCreateSystemThreadEx.c)
 *     MUIInitializeResourceLock @ 0x14085B81C (MUIInitializeResourceLock.c)
 *     CMFCheckAccess @ 0x1409FECA4 (CMFCheckAccess.c)
 *     CMFFlushHitsFile @ 0x1409FF53C (CMFFlushHitsFile.c)
 *     CMFRegisterEventTime @ 0x1409FFC40 (CMFRegisterEventTime.c)
 *     CMFUnmapModules @ 0x140A004F0 (CMFUnmapModules.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtMapCMFModule(int a1, unsigned int a2, int *a3, unsigned int *a4, _DWORD *a5, PVOID *a6)
{
  unsigned int *v6; // r15
  int *v7; // r12
  unsigned int v8; // esi
  KPROCESSOR_MODE PreviousMode; // r13
  unsigned int v10; // edx
  int v12; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v14; // eax
  unsigned int v15; // ebx
  _DWORD *v16; // rcx
  struct _KTHREAD *v17; // rax
  unsigned int v18; // ebx
  unsigned int v19; // r12d
  int v20; // ebx
  int v21; // r15d
  int v22; // edx
  bool v23; // r13
  PVOID *v24; // rsi
  void *Pool2; // rax
  __int64 v26; // rax
  int v27; // r12d
  NTSTATUS v28; // eax
  signed __int64 v29; // rsi
  signed __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned int v36; // [rsp+50h] [rbp-128h]
  int v37; // [rsp+58h] [rbp-120h]
  PVOID P; // [rsp+60h] [rbp-118h] BYREF
  KPROCESSOR_MODE v39; // [rsp+68h] [rbp-110h]
  unsigned int v40; // [rsp+6Ch] [rbp-10Ch]
  int v41; // [rsp+70h] [rbp-108h]
  ULONG Length[2]; // [rsp+78h] [rbp-100h] BYREF
  int v43; // [rsp+80h] [rbp-F8h]
  __int64 v44; // [rsp+88h] [rbp-F0h] BYREF
  PVOID *v45; // [rsp+90h] [rbp-E8h]
  unsigned int v46; // [rsp+98h] [rbp-E0h]
  HANDLE Handle; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-D0h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-C0h]
  __int128 v50; // [rsp+C8h] [rbp-B0h]
  __int64 v51; // [rsp+D8h] [rbp-A0h]
  __int64 v52; // [rsp+E0h] [rbp-98h] BYREF
  struct _KEVENT Event; // [rsp+E8h] [rbp-90h] BYREF
  __int128 v54; // [rsp+100h] [rbp-78h] BYREF
  __int128 v55; // [rsp+110h] [rbp-68h]
  __int128 v56; // [rsp+120h] [rbp-58h]
  struct _KTHREAD *v58; // [rsp+138h] [rbp-40h]

  v6 = a4;
  v7 = a3;
  v8 = a2;
  v54 = 0LL;
  v55 = 0LL;
  *(_QWORD *)&v56 = 0LL;
  DWORD2(v56) = 0;
  v44 = 0LL;
  memset(&Event, 0, sizeof(Event));
  Handle = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  P = 0LL;
  *(_QWORD *)Length = 0LL;
  v37 = 0;
  v40 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v39 = PreviousMode;
  if ( !PreviousMode || (_DWORD)InitSafeBootMode )
  {
    v10 = -1073741823;
LABEL_3:
    v36 = v10;
    goto LABEL_118;
  }
  if ( (a1 & 0xFFE0FE81) != 0 )
  {
LABEL_6:
    v10 = -1073741811;
    goto LABEL_3;
  }
  v10 = MUIInitializeResourceLock((volatile signed __int64 *)&CMFLock);
  v36 = v10;
  if ( (v10 & 0xC0000000) == 0xC0000000 )
    goto LABEL_118;
  if ( (a1 & 0x20000) != 0 )
  {
    if ( (a1 & 0x180000) != 0 && (a1 & 0x40000) != 0 || (a1 & 0x180000) == 0x180000 )
      goto LABEL_6;
    v12 = a1 & 0x1C0000;
    if ( v12 == (CMFFlagsCache & 0x1C0000) )
    {
LABEL_12:
      v10 = 0;
      goto LABEL_3;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(CMFLock, 1u);
    if ( v12 != (CMFFlagsCache & 0x1C0000) )
    {
      if ( CMFDirectorySectionPointer )
      {
        if ( !v12 )
        {
          v36 = -1073741637;
LABEL_31:
          ExReleaseResourceLite(CMFLock);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v10 = v36;
          goto LABEL_118;
        }
        if ( CMFDirectorySectionPointer )
        {
          v14 = 0x80000000;
          v46 = 0x80000000;
          if ( (CMFFlagsCache & 0x1C0000) != 0 )
            v14 = -1073741824;
          v46 = v14;
          v36 = CMFCheckAccess((__int64)CMFDirectorySectionPointer, v14, PreviousMode);
          if ( (v36 & 0xC0000000) == 0xC0000000 )
            goto LABEL_31;
        }
      }
      v15 = CMFFlagsCache & 0xFFE3FFFF | v12;
      CMFFlagsCache = v15;
      if ( CMFDirectorySectionPointer && ((v15 & 0x80000) != 0 || (v15 & 0x100000) != 0) )
      {
        P = 0LL;
        *(_QWORD *)Length = 104LL;
        v44 = 0LL;
        v52 = 0LL;
        if ( (int)MiMapViewInSystemSpace(
                    (__int64)CMFDirectorySectionPointer,
                    &P,
                    (unsigned __int64 *)Length,
                    &v52,
                    0LL,
                    0LL) >= 0 )
        {
          v16 = P;
          if ( P )
          {
            if ( *(_QWORD *)Length >= 0x68uLL )
            {
              *((_DWORD *)P + 12) &= 0xFFE3FFFF;
              v16[12] |= (CMFFlagsCache & 0x80000) != 0 ? 0x80000 : 0x100000;
              v16 = P;
            }
            MiRemoveFromSystemSpace((ULONG_PTR)v16, 1);
            P = 0LL;
          }
        }
        CMFUnmapModules((CMFFlagsCache & 0x100000) != 0 ? 304 : 32);
        CMFRegisterEventTime(4u);
      }
    }
    v36 = 0;
    goto LABEL_31;
  }
  v17 = KeGetCurrentThread();
  --v17->KernelApcDisable;
  ExAcquireResourceSharedLite(CMFLock, 1u);
  if ( !CMFFlagsCache )
  {
    v18 = a1 | 1;
LABEL_49:
    v19 = v18 & 0xFFFFFECF;
    v40 = v19;
    v20 = v18 & 0x130;
    v41 = (v19 & 0x40) != 0 ? 4 : 2;
    v21 = (v19 & 0x40) != 0 ? -1073741824 : 0x80000000;
    v43 = v21;
    v37 = 10000;
    switch ( v20 )
    {
      case 16:
        if ( (unsigned int)CMFCacheIndex < 0x2710 )
        {
          v37 = CMFCacheIndex;
LABEL_58:
          v23 = (v19 & 2) != 0;
          v24 = &CMFDirectorySectionPointer;
LABEL_69:
          v45 = v24;
          v26 = (__int64)*v24;
          goto LABEL_73;
        }
        if ( v8 < 0x2710 )
        {
          v37 = v8;
          goto LABEL_58;
        }
        if ( CMFFirstAccess )
        {
          CMFRegisterEventTime(1u);
          CMFFirstAccess = 0;
        }
        break;
      case 32:
        if ( v8 < 0x1E && CMFCacheIndex != 10000 )
        {
          v37 = CMFCacheIndex;
          if ( !CMFSegmentSectionPointer )
          {
            Pool2 = (void *)ExAllocatePool2(256LL, 240LL, 1668114000LL);
            P = Pool2;
            if ( !Pool2 )
            {
              v36 = -1073741801;
              goto LABEL_98;
            }
            memset(Pool2, 0, 0xF0uLL);
            if ( _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CMFSegmentSectionPointer,
                   (signed __int64)P,
                   0LL) )
            {
              ExFreePoolWithTag(P, 0);
            }
            P = 0LL;
            v19 = v40;
          }
          v23 = (v19 & 4) != 0;
          v24 = (PVOID *)((char *)CMFSegmentSectionPointer + 8 * v8);
          goto LABEL_69;
        }
        break;
      case 256:
        v37 = CMFCacheIndex;
        v24 = &CMFHitsSectionPointer;
        v45 = &CMFHitsSectionPointer;
        if ( CMFHitsSectionPointer )
          goto LABEL_87;
        CMFHitsLastFlushTime = MEMORY[0xFFFFF78000000014];
        v26 = 0LL;
        v23 = (v19 & 8) != 0;
        v19 = v40;
        v24 = v45;
LABEL_73:
        if ( !v26 )
        {
          ExReleaseResourceLite(CMFLock);
          ExAcquireResourceExclusiveLite(CMFLock, 1u);
          if ( ((CMFFlagsCache ^ v19) & 0x1C0000) != 0 && (CMFFlagsCache & 0x180000) != 0 )
          {
            v22 = -1073741823;
            goto LABEL_56;
          }
          v21 = v43;
          if ( *v24 )
          {
            v27 = v41;
          }
          else
          {
            LODWORD(v48) = 0x8000000;
            *(_QWORD *)((char *)&v48 + 4) = __PAIR64__(v43, v37);
            BYTE12(v48) = v23;
            *((_QWORD *)&v49 + 1) = __PAIR64__(a2, v19);
            v27 = v41;
            LODWORD(v50) = v41;
            *((_QWORD *)&v50 + 1) = v24;
            LODWORD(v51) = v20;
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            *(_QWORD *)&v49 = &Event;
            LODWORD(v54) = 48;
            *((_QWORD *)&v54 + 1) = 0LL;
            DWORD2(v55) = 512;
            *(_QWORD *)&v55 = 0LL;
            v56 = 0LL;
            v36 = PsCreateSystemThreadEx(
                    (__int64)&Handle,
                    0x1FFFFF,
                    &v54,
                    0LL,
                    0LL,
                    (__int64)CMFSystemThreadRoutine,
                    (__int64)&v48,
                    0LL,
                    0LL);
            if ( (v36 & 0xC0000000) == 0xC0000000 )
              goto LABEL_98;
            ZwClose(Handle);
            v28 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            v36 = v28;
            if ( v28 )
            {
              if ( v28 >= 0 )
                v36 = -1073741823;
              goto LABEL_98;
            }
            v40 = DWORD2(v49);
            v36 = DWORD1(v50);
            if ( (DWORD1(v50) & 0xC0000000) == 0xC0000000 )
            {
LABEL_98:
              v7 = a3;
              goto LABEL_99;
            }
            if ( v20 == 16 )
              CMFRegisterEventTime(2u);
          }
          ExConvertExclusiveToSharedLite(CMFLock);
LABEL_88:
          P = 0LL;
          *(_QWORD *)Length = 0LL;
          v44 = 0LL;
          if ( a6 )
          {
            if ( v20 == 256 || (v36 = CMFCheckAccess((__int64)*v24, v21, v39), (v36 & 0xC0000000) != 0xC0000000) )
            {
              v58 = KeGetCurrentThread();
              v36 = MmMapViewOfSection(
                      (int)*v45,
                      (__int64)v58->ApcState.Process,
                      &P,
                      0LL,
                      0,
                      (__int64)&v44,
                      (__int64 *)Length,
                      1,
                      0x400000,
                      v27);
              if ( (v36 & 0xC0000000) == 0xC0000000 )
              {
                P = 0LL;
              }
              else if ( v20 == 256 )
              {
                v29 = CMFHitsLastFlushTime;
                v30 = MEMORY[0xFFFFF78000000014];
                if ( MEMORY[0xFFFFF78000000014] > CMFHitsLastFlushTime + 36000000000LL
                  && v29 == _InterlockedCompareExchange64(
                              &CMFHitsLastFlushTime,
                              MEMORY[0xFFFFF78000000014],
                              CMFHitsLastFlushTime)
                  && (int)CMFFlushHitsFile(P, *(unsigned __int64 *)Length) < 0 )
                {
                  _InterlockedCompareExchange64(&CMFHitsLastFlushTime, v29, v30);
                }
              }
            }
          }
          goto LABEL_98;
        }
LABEL_87:
        v27 = v41;
        goto LABEL_88;
    }
    v22 = -1073741811;
LABEL_56:
    v36 = v22;
    goto LABEL_98;
  }
  if ( (CMFFlagsCache & 0xF) != 0 )
    v18 = CMFFlagsCache & 0xF | a1 & 0xFFFFFFF0;
  else
    v18 = a1 | 1;
  if ( (CMFFlagsCache & 0x100000) != 0 )
  {
    if ( (v18 & 0x10000) == 0 )
    {
      v36 = -1073741672;
      goto LABEL_100;
    }
    v18 |= 0x100000u;
    goto LABEL_47;
  }
  if ( (CMFFlagsCache & 0x80000) == 0 )
  {
    if ( (CMFFlagsCache & 0x40000) != 0 )
      v18 |= 0x40000u;
    goto LABEL_47;
  }
  if ( (v18 & 0x130) != 0x20 || (v18 & 0x10000) != 0 )
  {
    v18 |= 0x80000u;
LABEL_47:
    v8 = a2;
    goto LABEL_49;
  }
  v36 = -1073741672;
LABEL_99:
  v6 = a4;
LABEL_100:
  ExReleaseResourceLite(CMFLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v10 = v36;
  if ( (v36 & 0xC0000000) != 0xC0000000 )
  {
    v31 = 0x7FFFFFFF0000LL;
    if ( a6 )
    {
      v32 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v32 = (__int64)a6;
      *(_QWORD *)v32 = *(_QWORD *)v32;
      *a6 = P;
      P = 0LL;
    }
    if ( a5 )
    {
      v33 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v33 = (__int64)a5;
      *(_DWORD *)v33 = *(_DWORD *)v33;
      *a5 = Length[0];
    }
    if ( v7 )
    {
      v34 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)v7 < 0x7FFFFFFF0000LL )
        v34 = (__int64)v7;
      *(_DWORD *)v34 = *(_DWORD *)v34;
      *v7 = v37;
    }
    if ( v6 )
    {
      if ( (unsigned __int64)v6 < 0x7FFFFFFF0000LL )
        v31 = (__int64)v6;
      *(_DWORD *)v31 = *(_DWORD *)v31;
      *v6 = v40;
    }
    goto LABEL_12;
  }
LABEL_118:
  if ( P )
  {
    MiUnmapViewOfSection(KeGetCurrentThread()->ApcState.Process, (unsigned __int64)P, 0, 0);
    return v36;
  }
  return v10;
}
