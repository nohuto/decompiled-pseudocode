/*
 * XREFs of PopSaveHiberContext @ 0x140A4B9E0
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x140429620 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x140209930 (RtlNumberOfClearBits.c)
 *     RtlCopyBitMap @ 0x140209CA0 (RtlCopyBitMap.c)
 *     PopResetRangeEnum @ 0x14025E8D8 (PopResetRangeEnum.c)
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     IoNotifyDump @ 0x14038D2E0 (IoNotifyDump.c)
 *     IoInitializeDumpStack @ 0x14038D354 (IoInitializeDumpStack.c)
 *     KeActiveTracepointsPresent @ 0x14038D38C (KeActiveTracepointsPresent.c)
 *     IoDumpStackResumeCapable @ 0x14038D3A0 (IoDumpStackResumeCapable.c)
 *     IoGetDumpHiberRanges @ 0x14038DA90 (IoGetDumpHiberRanges.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x1405430DC (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlDisableEnlightenment @ 0x14054310C (HvlDisableEnlightenment.c)
 *     HvlDiscardPagesFromHibernation @ 0x1405498B4 (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x14054991C (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlPrepareForHibernate @ 0x140549C24 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x140549D4C (HvlPrepareForSecureHibernate.c)
 *     VslNotifyShutdown @ 0x14054ED18 (VslNotifyShutdown.c)
 *     KdPowerTransition @ 0x1405657E0 (KdPowerTransition.c)
 *     PopInternalAddToDumpFile @ 0x1405C6658 (PopInternalAddToDumpFile.c)
 *     _PopInternalError @ 0x1405C6A8C (_PopInternalError.c)
 *     PopWriteSecurePages @ 0x1405D0014 (PopWriteSecurePages.c)
 *     DbgUnLoadImageSymbols @ 0x1405E4210 (DbgUnLoadImageSymbols.c)
 *     PopCheckpointSystemSleep @ 0x140A4B974 (PopCheckpointSystemSleep.c)
 *     PopCreateDumpMdl @ 0x140A4BE04 (PopCreateDumpMdl.c)
 *     PopWriteHiberImage @ 0x140A4C0E8 (PopWriteHiberImage.c)
 *     PopCompressHiberBlocks @ 0x140A4C204 (PopCompressHiberBlocks.c)
 *     PopWriteHeaderPages @ 0x140A4DEAC (PopWriteHeaderPages.c)
 *     PopMarkComponentsBootPhase @ 0x140A4F19C (PopMarkComponentsBootPhase.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x140A6AE00 (PopSetMemoryOverwriteRequestAction.c)
 *     PopWriteChecksumPages @ 0x140A6B504 (PopWriteChecksumPages.c)
 *     PopWriteImageHeader @ 0x140A6B59C (PopWriteImageHeader.c)
 *     PopNotifyShutdownListener @ 0x140A6BDA0 (PopNotifyShutdownListener.c)
 */

__int64 __fastcall PopSaveHiberContext(ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // r15d
  __int64 v3; // r8
  __int64 Number; // rdi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // r13
  RTL_BITMAP *v8; // rsi
  unsigned int v9; // r8d
  _DWORD *v10; // rcx
  _DWORD *v11; // rdx
  RTL_BITMAP *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  ULONG_PTR v16; // rbp
  unsigned __int64 v17; // rax
  _QWORD *v18; // rdi
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rbp
  char *v21; // rsi
  _QWORD *v22; // rcx
  PVOID v23; // rax
  int v24; // edi
  unsigned int v25; // r12d
  ULONG v26; // eax
  _DWORD *v27; // rsi
  int v28; // ebp
  __int64 v29; // rdi
  __int64 v30; // r14
  unsigned __int64 v31; // rcx
  int v32; // eax
  int v33; // edi
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // ecx
  unsigned int v37; // r8d
  __int64 v38; // rdx
  ULONG v39; // eax
  _DWORD *v40; // rsi
  int v41; // ebp
  __int64 v42; // rdi
  unsigned __int64 v43; // r14
  unsigned __int64 v44; // r9
  char v46; // [rsp+30h] [rbp-2A8h]
  _OWORD v47[5]; // [rsp+40h] [rbp-298h] BYREF
  unsigned __int64 v48; // [rsp+90h] [rbp-248h]
  __int128 v49; // [rsp+98h] [rbp-240h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-230h]
  _OWORD v51[5]; // [rsp+B0h] [rbp-228h] BYREF
  __int128 v52[5]; // [rsp+100h] [rbp-1D8h] BYREF
  void *v53[40]; // [rsp+150h] [rbp-188h] BYREF
  int v54; // [rsp+2D0h] [rbp-8h]

  v50 = 0LL;
  v49 = 0LL;
  memset(v53, 0, 0x138uLL);
  v2 = 0;
  memset(v47, 0, sizeof(v47));
  Number = KeGetCurrentPrcb()->Number;
  if ( (_DWORD)Number )
  {
    if ( (HvlpFlags & 2) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 20));
      while ( *(_DWORD *)(BugCheckParameter3 + 20) )
        _mm_pause();
      if ( PoResumeFromHibernate )
        return 1073742484;
      _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 24));
      while ( *(_DWORD *)(BugCheckParameter3 + 24) )
        _mm_pause();
    }
  }
  else
  {
    PopCheckpointSystemSleep(19);
  }
  if ( (unsigned int)Number < *(_DWORD *)(BugCheckParameter3 + 256) )
  {
    if ( (_DWORD)Number )
    {
      while ( !*(_BYTE *)(BugCheckParameter3 + 4) )
        _mm_pause();
      LOBYTE(v3) = 1;
      v5 = Number << 7;
      PopCompressHiberBlocks(BugCheckParameter3, v5 + *(_QWORD *)(BugCheckParameter3 + 264), v3);
      _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 12));
      while ( *(_DWORD *)(BugCheckParameter3 + 12) )
        _mm_pause();
      return (unsigned int)PopCompressHiberBlocks(BugCheckParameter3, v5 + *(_QWORD *)(BugCheckParameter3 + 264), 0LL);
    }
    PopWatchdogTimerCount = 0;
    _disable();
    if ( (v54 & 0x200) != 0 )
      PopInternalError(0xA1BC8uLL);
    if ( (PopSimulateHiberBugcheck & 0x80u) != 0 )
    {
      v46 = 0;
    }
    else
    {
      v46 = IoDumpStackResumeCapable();
      if ( v46 )
        goto LABEL_11;
    }
    dword_140C22C88 |= 4u;
    byte_140C22C01 = 1;
LABEL_11:
    if ( (unsigned int)PshedArePluginsPresent() )
    {
      dword_140C22C88 |= 8u;
      byte_140C22C01 = 1;
    }
    if ( !(unsigned __int8)off_140C01EA0[0]() )
    {
      dword_140C22C88 |= 1u;
      byte_140C22C01 = 1;
    }
    if ( KeActiveTracepointsPresent() )
    {
      dword_140C22C88 |= 0x40u;
      byte_140C22C01 = 1;
    }
    v6 = HvlHypervisorConnected == 0;
    v7 = *(_QWORD *)(BugCheckParameter3 + 200);
    *(_QWORD *)(BugCheckParameter3 + 160) = &v49;
    *(_QWORD *)(BugCheckParameter3 + 176) = &PoWakeState;
    *(_BYTE *)(BugCheckParameter3 + 2) = 1;
    if ( !v6 )
    {
      HvlDisableEnlightenment(0);
      off_140C01DF0[0]();
      if ( (HvlpFlags & 2) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 20));
        while ( *(_DWORD *)(BugCheckParameter3 + 20) != (_DWORD)KeNumberProcessors_0 )
          _mm_pause();
        *(_QWORD *)&v47[0] = qword_140CF6C58;
        *((_QWORD *)&v47[0] + 1) = qword_140CF6BF8;
        *(_QWORD *)&v47[1] = qword_140CF6C00;
        *((_QWORD *)&v47[1] + 1) = qword_140CF6BF0;
        *(_QWORD *)&v47[2] = qword_140CF6C10;
        *((_QWORD *)&v47[2] + 1) = qword_140CF6C08;
        v47[3] = xmmword_140CF6C38;
        v47[4] = xmmword_140CF6C48;
        if ( *(_BYTE *)(BugCheckParameter3 + 452) )
        {
          v51[0] = v47[0];
          v51[2] = v47[2];
          v51[1] = v47[1];
          v51[4] = v47[4];
          v51[3] = v47[3];
          v32 = HvlPrepareForSecureHibernate(v51);
        }
        else
        {
          v52[0] = v47[0];
          v52[2] = v47[2];
          v52[1] = v47[1];
          v52[4] = v47[4];
          v52[3] = v47[3];
          v32 = HvlPrepareForHibernate(
                  v52,
                  (_QWORD *)(v7 + 976),
                  (_QWORD *)(v7 + 984),
                  (_QWORD *)(v7 + 992),
                  (_QWORD *)(v7 + 1000));
        }
        v33 = v32;
        if ( v32 < 0 )
        {
          PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0xCuLL, v33, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
        }
        *(_DWORD *)(BugCheckParameter3 + 20) = 0;
        _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 24));
        while ( *(_DWORD *)(BugCheckParameter3 + 24) != (_DWORD)KeNumberProcessors_0 )
          _mm_pause();
        *(_DWORD *)(BugCheckParameter3 + 20) = KeNumberProcessors_0;
        *(_DWORD *)(BugCheckParameter3 + 24) = 0;
      }
      if ( *(_BYTE *)(BugCheckParameter3 + 452) )
        HvlDiscardSecurePagesFromHibernation((PVOID)BugCheckParameter3);
      else
        HvlDiscardPagesFromHibernation((PVOID)BugCheckParameter3);
    }
    ++*(_DWORD *)v7;
    v8 = (RTL_BITMAP *)(BugCheckParameter3 + 48);
    v9 = 0;
    v10 = *(_DWORD **)(BugCheckParameter3 + 56);
    v11 = *(_DWORD **)(BugCheckParameter3 + 40);
    if ( (*(_DWORD *)(BugCheckParameter3 + 48) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        ++v9;
        *v10++ |= *v11++;
      }
      while ( v9 < v8->SizeOfBitMap >> 5 );
    }
    if ( byte_140C22C01 )
    {
      v12 = (RTL_BITMAP *)(BugCheckParameter3 + 32);
    }
    else
    {
      RtlCopyBitMap((unsigned int *)(BugCheckParameter3 + 48), BugCheckParameter3 + 32, 0);
      v12 = (RTL_BITMAP *)(BugCheckParameter3 + 48);
    }
    RtlSetAllBits(v12);
    v13 = *(_QWORD *)(BugCheckParameter3 + 168);
    *(_DWORD *)(BugCheckParameter3 + 184) = 8;
    IoGetDumpHiberRanges(v14, v13);
    if ( !byte_140C22C01 )
      IoNotifyDump(1);
    v15 = __rdtsc();
    v16 = (int)IoInitializeDumpStack(*(_QWORD *)(BugCheckParameter3 + 168));
    v17 = __rdtsc();
    qword_140C22D28 += (((unsigned __int64)HIDWORD(v17) << 32) | (unsigned int)v17) - v15;
    if ( (v16 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 1 )
    {
      PopCheckpointSystemSleep(20);
      PopInternalAddToDumpFile(*(_QWORD *)(BugCheckParameter3 + 168), 0x178u, 0LL);
      KeBugCheckEx(0xA0u, 0xCuLL, v16, *(_QWORD *)(BugCheckParameter3 + 168), 0LL);
    }
    PopMarkComponentsBootPhase((PVOID)BugCheckParameter3);
    v18 = *(_QWORD **)(BugCheckParameter3 + 64);
    PoHiberInProgress = 1;
    if ( v18 != (_QWORD *)(BugCheckParameter3 + 64) )
    {
      do
      {
        v19 = v18[4];
        v20 = v18[3];
        v21 = (char *)v18[5];
        v18 = (_QWORD *)*v18;
        for ( *(_QWORD *)(BugCheckParameter3 + 88) += v19 - v20; v20 < v19; v20 += (unsigned __int64)LODWORD(v53[5]) >> 12 )
        {
          PopCreateDumpMdl(BugCheckParameter3, v53, v20, v19);
          memmove(v21, v53[3], LODWORD(v53[5]));
          v21 += LODWORD(v53[5]);
        }
      }
      while ( v18 != (_QWORD *)(BugCheckParameter3 + 64) );
      v8 = (RTL_BITMAP *)(BugCheckParameter3 + 48);
    }
    PopResetRangeEnum((_QWORD *)BugCheckParameter3);
    v22 = *(_QWORD **)(BugCheckParameter3 + 160);
    v23 = qword_140C22BD8;
    *v22 = qword_140C22BD8;
    v22[1] = v23;
    v22[2] = 0LL;
    v48 = __rdtsc();
    v24 = PopWriteHeaderPages(BugCheckParameter3, v7);
    if ( v24 >= 0 )
    {
      v25 = *(_DWORD *)(v7 + 80);
      if ( *(_BYTE *)(BugCheckParameter3 + 452) )
      {
        v34 = (unsigned int)PopHiberScratchPages;
        v35 = (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 248) + 2);
        *(_DWORD *)(BugCheckParameter3 + 184) = 3;
        *(_QWORD *)(v7 + 96) = v35 + ((unsigned __int64)(4 * v34 + 4095) >> 12);
        PopWriteSecurePages(BugCheckParameter3);
        qword_140C22EB0 = *(unsigned int *)(BugCheckParameter3 + 252);
      }
      *(_DWORD *)(BugCheckParameter3 + 184) = 4;
      *(_QWORD *)(BugCheckParameter3 + 96) = v8;
      v26 = RtlNumberOfClearBits(v8);
      v27 = qword_140C22C58;
      v28 = *(_DWORD *)(BugCheckParameter3 + 280);
      v29 = *(_QWORD *)(BugCheckParameter3 + 272);
      v30 = (v26 + *(_QWORD *)(BugCheckParameter3 + 88)) << 12;
      memset(qword_140C22C58, 0, 0x40uLL);
      v27[6] = 0;
      *(_QWORD *)v27 = v29;
      v27[2] = v28;
      *((_QWORD *)v27 + 2) = v30;
      qword_140C22EB8 = 0LL;
      qword_140C22EC0 = 0LL;
      *(_DWORD *)(BugCheckParameter3 + 328) = 0;
      *(_QWORD *)(BugCheckParameter3 + 344) = 0LL;
      if ( v46 && *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 168) + 128LL) )
        *(_BYTE *)(BugCheckParameter3 + 392) = 1;
      v31 = *(unsigned int *)(BugCheckParameter3 + 252)
          + ((4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12)
          + (unsigned int)(*(_DWORD *)(BugCheckParameter3 + 248) + 2);
      *(_QWORD *)(v7 + 104) = v31;
      *(_QWORD *)(BugCheckParameter3 + 376) = v31 << 12;
      *(_BYTE *)(BugCheckParameter3 + 4) = 1;
      PopWriteHiberImage(BugCheckParameter3);
      _InterlockedIncrement((volatile signed __int32 *)(BugCheckParameter3 + 12));
      while ( 1 )
      {
        v36 = *(_DWORD *)(BugCheckParameter3 + 256);
        if ( *(_DWORD *)(BugCheckParameter3 + 12) == v36 )
          break;
        _mm_pause();
      }
      v37 = 0;
      if ( v36 )
      {
        do
        {
          v38 = v37++;
          v38 <<= 7;
          qword_140C22EB8 += *(_QWORD *)(v38 + *(_QWORD *)(BugCheckParameter3 + 264) + 56);
          *(_QWORD *)(v38 + *(_QWORD *)(BugCheckParameter3 + 264) + 56) = 0LL;
        }
        while ( v37 < *(_DWORD *)(BugCheckParameter3 + 256) );
      }
      qword_140C22EC8 = qword_140C22EE8;
      qword_140C22ED8 = (unsigned int)dword_140C22EF0;
      qword_140C22EE8 = 0LL;
      dword_140C22EF0 = 0;
      *(_DWORD *)(BugCheckParameter3 + 184) = 5;
      *(_QWORD *)(BugCheckParameter3 + 96) = BugCheckParameter3 + 32;
      *(_QWORD *)(BugCheckParameter3 + 112) = 0LL;
      v39 = RtlNumberOfClearBits((PRTL_BITMAP)(BugCheckParameter3 + 32));
      v40 = qword_140C22C58;
      v41 = *(_DWORD *)(BugCheckParameter3 + 280);
      v42 = *(_QWORD *)(BugCheckParameter3 + 272);
      v43 = (unsigned __int64)v39 << 12;
      memset(qword_140C22C58, 0, 0x40uLL);
      v40[6] = 0;
      *(_QWORD *)v40 = v42;
      v40[2] = v41;
      *((_QWORD *)v40 + 2) = v43;
      *(_QWORD *)(v7 + 112) = (unsigned __int64)(*(_QWORD *)(BugCheckParameter3 + 376) + 4095LL) >> 12;
      *(_DWORD *)(BugCheckParameter3 + 12) = 0;
      *(_QWORD *)(BugCheckParameter3 + 344) = 0LL;
      PopWriteHiberImage(BugCheckParameter3);
      *(_DWORD *)(BugCheckParameter3 + 184) = 7;
      PopWriteChecksumPages(BugCheckParameter3);
      v44 = v48;
      *(_DWORD *)(BugCheckParameter3 + 184) = 6;
      PopWriteImageHeader(BugCheckParameter3, v7, v25, v44);
      v24 = *(_DWORD *)(BugCheckParameter3 + 188);
      if ( v24 >= 0 )
      {
        if ( dword_140C227E0 == dword_140C227E8 )
        {
          if ( (PopSimulate & 0x8000) == 0 )
            DbgUnLoadImageSymbols();
          VslNotifyShutdown(1u);
        }
        if ( (PopSimulate & 0x1000) != 0 )
        {
          v24 = -1073741632;
        }
        else
        {
          v24 = 0;
          if ( (PopSimulateHiberBugcheck & 0x10) != 0 )
          {
            v2 = 1073742484;
LABEL_86:
            PopCheckpointSystemSleep(24);
            off_140C01F18[0]();
            return v2;
          }
        }
      }
    }
    KdPowerTransition(4);
    v2 = v24;
    if ( v24 >= 0 && dword_140C227E0 == 5 )
    {
      PopNotifyShutdownListener();
      if ( HvlHypervisorConnected )
        HvlConfigureMemoryZeroingOnReset(0);
      PopSetMemoryOverwriteRequestAction();
    }
    goto LABEL_86;
  }
  return v2;
}
