/*
 * XREFs of MiUnmapViewOfSection @ 0x1406A2570
 * Callers:
 *     MmUnmapViewOfSection @ 0x1406A07B0 (MmUnmapViewOfSection.c)
 *     AlpcViewDestroyProcedure @ 0x1406A2290 (AlpcViewDestroyProcedure.c)
 *     NtUnmapViewOfSectionEx @ 0x1406A24A0 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapImageInSystemSpace @ 0x1406A556C (MiUnmapImageInSystemSpace.c)
 *     MiMapViewOfSection @ 0x1407D51F0 (MiMapViewOfSection.c)
 *     EtwpCoverageEnsureUserModeView @ 0x140871504 (EtwpCoverageEnsureUserModeView.c)
 *     IopCloseIoRing @ 0x140946200 (IopCloseIoRing.c)
 *     PsShutdownSystem @ 0x1409B05A4 (PsShutdownSystem.c)
 *     NtMapCMFModule @ 0x140A005D0 (NtMapCMFModule.c)
 *     MiUnmapImageForEnclaveUse @ 0x140A3BD1C (MiUnmapImageForEnclaveUse.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MiLocateVadEvent @ 0x14020DC50 (MiLocateVadEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiVadMapsLargeImage @ 0x140327280 (MiVadMapsLargeImage.c)
 *     MiReferenceControlAreaFile @ 0x140344094 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1403441A0 (MiDereferenceControlAreaFile.c)
 *     MiUpdateVadStartVpn @ 0x14034CF40 (MiUpdateVadStartVpn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     MiCheckSecuredVad @ 0x1406A0F38 (MiCheckSecuredVad.c)
 *     DbgkUnMapViewOfSection @ 0x1406A10EC (DbgkUnMapViewOfSection.c)
 *     MiUnmapVad @ 0x1406A2850 (MiUnmapVad.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 *     PerfLogImageUnload @ 0x1407EA8E0 (PerfLogImageUnload.c)
 */

__int64 __fastcall MiUnmapViewOfSection(PRKPROCESS PROCESS, unsigned __int64 a2, int a3, int a4)
{
  __int64 v4; // rsi
  struct _KPROCESS *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned int v10; // edx
  unsigned int v11; // ecx
  __int64 v12; // r9
  unsigned __int64 v13; // rbp
  __int64 v14; // r12
  int v15; // ebx
  __int64 *v17; // rax
  __int64 *v18; // rbx
  __int64 v19; // r15
  __int64 v20; // rbp
  unsigned int v21; // r8d
  unsigned int v22; // edx
  unsigned int v23; // r8d
  int v24; // edx
  __int64 VadEvent; // rax
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rax
  int v30[2]; // [rsp+50h] [rbp-88h] BYREF
  int v31; // [rsp+58h] [rbp-80h]
  int v32; // [rsp+5Ch] [rbp-7Ch]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-78h] BYREF

  v30[0] = 0;
  v31 = 0;
  v4 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v30[1] = a3;
  v32 = a4 & 0x4000000;
  v7 = KeGetCurrentThread()->ApcState.Process;
  if ( (a4 & 0x4000000) != 0 && a2 != (a2 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225712LL;
  if ( v7 != PROCESS )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v31 = 1;
  }
  v8 = MiObtainReferencedVadEx(a2, 1, v30);
  v9 = v8;
  if ( !v8 )
  {
    v15 = v30[0];
    if ( v30[0] == -1073741664 )
      v15 = -1073741799;
    goto LABEL_15;
  }
  v10 = *(_DWORD *)(v8 + 48);
  v11 = v10 >> 4;
  if ( (v10 & 0x200000) == 0 || (v11 & 7) == 1 )
  {
    v12 = *(unsigned int *)(v8 + 24);
    v13 = (v12 | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) << 12;
    if ( (v11 & 7) == 2 && (v10 & 0xF80) == 0x380 )
      v4 = (v12 | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32)) << 12;
    v14 = ((*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32))
         - (v12 | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
         + 1) << 12;
    if ( (v10 & 8) != 0 && (PROCESS[1].DirectoryTableBase & 0x2000000000LL) == 0 )
    {
      v30[0] = MiCheckSecuredVad(v8, v13, v14, 0x55u, KeGetCurrentThread()->PreviousMode);
      v15 = v30[0];
      if ( v30[0] < 0 )
        goto LABEL_50;
    }
    if ( v32 )
    {
      if ( v13 != a2 || (VadEvent = MiLocateVadEvent()) == 0 )
      {
        v15 = -1073741800;
        goto LABEL_50;
      }
      v26 = *(_QWORD *)(VadEvent + 8);
      *(_QWORD *)(VadEvent + 8) = 0LL;
      v27 = KeAbPreAcquire(v26 + 40, 0LL);
      v28 = v27;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 40), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v26 + 40), v27, v26 + 40);
      if ( v28 )
        *(_BYTE *)(v28 + 18) = 1;
      MiUpdateVadStartVpn(v26, *(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32));
      *(_DWORD *)(v26 + 28) = *(_DWORD *)(v9 + 28);
      *(_BYTE *)(v26 + 33) = *(_BYTE *)(v9 + 33);
    }
    if ( v4 && (unsigned int)MiVadMapsLargeImage(v9) )
    {
      v29 = MiLocateVadEvent();
      v4 += (unsigned __int64)*(unsigned __int8 *)(v29 + 8) << 16;
      v14 = *(_QWORD *)(v29 + 16) << 12;
    }
    if ( (PerfGlobalGroupMask & 4) != 0 )
    {
      if ( v4 )
      {
        if ( PROCESS[1].Header.WaitListHead.Flink )
        {
          if ( (HIDWORD(PROCESS[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          {
            v17 = *(__int64 **)(v9 + 72);
            v18 = (__int64 *)*v17;
            if ( *v17 )
            {
              if ( v18[8] )
              {
                v19 = *v18;
                v20 = MiReferenceControlAreaFile(*v17);
                if ( (*(_DWORD *)(v9 + 64) & 0x8000000) != 0 )
                {
                  v23 = 0;
                  v24 = 0;
                }
                else
                {
                  v21 = *(unsigned __int8 *)(v19 + 15);
                  v22 = v21 >> 1;
                  v23 = v21 >> 4;
                  v24 = v22 & 7;
                }
                PerfLogImageUnload(
                  v20 + 88,
                  v20,
                  PROCESS,
                  v4,
                  v14,
                  *(_DWORD *)(*(_QWORD *)(v19 + 56) + 60LL),
                  v23,
                  v24,
                  1);
                MiDereferenceControlAreaFile((__int64)v18, v20);
              }
            }
          }
        }
      }
    }
    if ( (*(_DWORD *)(v9 + 48) & 0x70) == 0x10 )
      MiDeleteVad((PVOID)v9);
    else
      MiUnmapVad((PVOID)v9);
    v15 = 0;
    goto LABEL_15;
  }
  v15 = -1073741799;
LABEL_50:
  MiUnlockAndDereferenceVad((PVOID)v9);
LABEL_15:
  if ( v31 )
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  if ( v15 >= 0 )
  {
    if ( v4 )
      DbgkUnMapViewOfSection(PROCESS, v4);
  }
  return (unsigned int)v15;
}
