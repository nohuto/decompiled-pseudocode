/*
 * XREFs of PopSaveHiberContext @ 0x140AA1810
 * Callers:
 *     PopSaveHiberContextWrapper @ 0x140420200 (PopSaveHiberContextWrapper.c)
 * Callees:
 *     RtlSetAllBits @ 0x14028BD00 (RtlSetAllBits.c)
 *     RtlCopyBitMap @ 0x1402B3480 (RtlCopyBitMap.c)
 *     RtlNumberOfClearBits @ 0x14035C4F0 (RtlNumberOfClearBits.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvlConfigureMemoryZeroingOnReset @ 0x14053D15C (HvlConfigureMemoryZeroingOnReset.c)
 *     HvlDisableEnlightenment @ 0x14053D18C (HvlDisableEnlightenment.c)
 *     HvlDiscardPagesFromHibernation @ 0x1405442A0 (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x140544308 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlPrepareForHibernate @ 0x140544744 (HvlPrepareForHibernate.c)
 *     HvlPrepareForSecureHibernate @ 0x14054486C (HvlPrepareForSecureHibernate.c)
 *     VslNotifyShutdown @ 0x140549918 (VslNotifyShutdown.c)
 *     IoDumpStackResumeCapable @ 0x14054D798 (IoDumpStackResumeCapable.c)
 *     IoGetDumpHiberRanges @ 0x14054E17C (IoGetDumpHiberRanges.c)
 *     IoInitializeDumpStack @ 0x14054E39C (IoInitializeDumpStack.c)
 *     IoNotifyDump @ 0x14054E4A0 (IoNotifyDump.c)
 *     KdPowerTransition @ 0x1405655B0 (KdPowerTransition.c)
 *     PopInternalAddToDumpFile @ 0x140580CC0 (PopInternalAddToDumpFile.c)
 *     _PopInternalError @ 0x140581228 (_PopInternalError.c)
 *     PopResetRangeEnum @ 0x14058CA64 (PopResetRangeEnum.c)
 *     PopWriteSecurePages @ 0x14058CB30 (PopWriteSecurePages.c)
 *     DbgUnLoadImageSymbols @ 0x1405A5410 (DbgUnLoadImageSymbols.c)
 *     PopSetMemoryOverwriteRequestAction @ 0x140A9D8B4 (PopSetMemoryOverwriteRequestAction.c)
 *     PopCompressHiberBlocks @ 0x140A9EE04 (PopCompressHiberBlocks.c)
 *     PopCreateDumpMdl @ 0x140A9F0B4 (PopCreateDumpMdl.c)
 *     PopIsMktmeEnabled @ 0x140AA040C (PopIsMktmeEnabled.c)
 *     PopMarkComponentsBootPhase @ 0x140AA049C (PopMarkComponentsBootPhase.c)
 *     PopWriteChecksumPages @ 0x140AA23E0 (PopWriteChecksumPages.c)
 *     PopWriteHeaderPages @ 0x140AA2478 (PopWriteHeaderPages.c)
 *     PopWriteHiberImage @ 0x140AA272C (PopWriteHiberImage.c)
 *     PopWriteImageHeader @ 0x140AA2B28 (PopWriteImageHeader.c)
 *     PopNotifyShutdownListener @ 0x140AA5D2C (PopNotifyShutdownListener.c)
 *     PopCheckpointSystemSleep @ 0x140AA7378 (PopCheckpointSystemSleep.c)
 */

__int64 __fastcall PopSaveHiberContext(char *Address)
{
  __int64 Number; // rbx
  int v3; // ebx
  __int64 v4; // rbx
  __int16 v5; // dx
  volatile signed __int32 *SchedulerAssist; // rcx
  bool v7; // zf
  __int64 v8; // r15
  int v9; // eax
  int v10; // ebx
  _DWORD *v11; // rsi
  unsigned int v12; // r8d
  _DWORD *v13; // rcx
  _DWORD *v14; // rdx
  RTL_BITMAP *v15; // r13
  RTL_BITMAP *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  ULONG_PTR v20; // rdi
  unsigned __int64 v21; // rax
  char *v22; // rbx
  char *v23; // rax
  unsigned __int64 v24; // rbp
  char *v25; // r13
  unsigned __int64 v26; // rdi
  _QWORD *v27; // rcx
  PVOID v28; // rax
  unsigned int v29; // r12d
  __int64 v30; // rax
  __int64 v31; // rcx
  ULONG v32; // eax
  _DWORD *v33; // rdi
  int v34; // esi
  __int64 v35; // rbx
  __int64 v36; // rbp
  unsigned __int64 v37; // rcx
  int v38; // ecx
  unsigned int v39; // r8d
  __int64 v40; // rdx
  ULONG v41; // eax
  _DWORD *v42; // rdi
  int v43; // esi
  __int64 v44; // rbx
  unsigned __int64 v45; // rbp
  unsigned __int64 v46; // r9
  char v48; // [rsp+30h] [rbp-2A8h]
  _OWORD v49[5]; // [rsp+40h] [rbp-298h] BYREF
  unsigned __int64 v50; // [rsp+90h] [rbp-248h]
  __int128 v51; // [rsp+98h] [rbp-240h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-230h]
  _OWORD v53[5]; // [rsp+B0h] [rbp-228h] BYREF
  __int128 v54[5]; // [rsp+100h] [rbp-1D8h] BYREF
  void *v55[40]; // [rsp+150h] [rbp-188h] BYREF
  int v56; // [rsp+2D0h] [rbp-8h]

  v51 = 0LL;
  v52 = 0LL;
  memset(v55, 0, 0x138uLL);
  memset(v49, 0, sizeof(v49));
  Number = KeGetCurrentPrcb()->Number;
  if ( (_DWORD)Number )
  {
    if ( (HvlpFlags & 2) != 0 )
    {
      _InterlockedAdd((volatile signed __int32 *)Address + 5, 1u);
      while ( *((_DWORD *)Address + 5) )
        _mm_pause();
      if ( PoResumeFromHibernate )
        return 1073742484;
      _InterlockedAdd((volatile signed __int32 *)Address + 6, 1u);
      while ( *((_DWORD *)Address + 6) )
        _mm_pause();
    }
  }
  else
  {
    PopCheckpointSystemSleep(19LL);
  }
  if ( (unsigned int)Number >= *((_DWORD *)Address + 64) )
    return 0;
  if ( !(_DWORD)Number )
  {
    v5 = v56;
    PopWatchdogTimerCount = 0;
    _disable();
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x200000u);
    if ( (v5 & 0x200) != 0 )
      PopInternalError(0xA1C3EuLL);
    if ( (PopSimulateHiberBugcheck & 0x80u) == 0 )
    {
      v48 = IoDumpStackResumeCapable();
      if ( v48 )
        goto LABEL_29;
    }
    else
    {
      v48 = 0;
    }
    dword_140C3CB28 |= 4u;
    byte_140C3CAA1 = 1;
LABEL_29:
    if ( (unsigned int)PshedArePluginsPresent() )
    {
      dword_140C3CB28 |= 8u;
      byte_140C3CAA1 = 1;
    }
    if ( !(unsigned __int8)off_140C01C60[0]() )
    {
      dword_140C3CB28 |= 1u;
      byte_140C3CAA1 = 1;
    }
    if ( byte_140C3CAA1 && PopIsMktmeEnabled() )
      KeBugCheckEx(0xA0u, 0x112uLL, 0xAuLL, (ULONG_PTR)Address, 0LL);
    v7 = HvlHypervisorConnected == 0;
    v8 = *((_QWORD *)Address + 25);
    *((_QWORD *)Address + 20) = &v51;
    *((_QWORD *)Address + 22) = &PoWakeState;
    Address[2] = 1;
    if ( !v7 )
    {
      PopHibernateHvMinloopEnabled = 1;
      HvlDisableEnlightenment(0);
      off_140C01BB0[0]();
      if ( (HvlpFlags & 2) != 0 )
      {
        _InterlockedAdd((volatile signed __int32 *)Address + 5, 1u);
        while ( *((_DWORD *)Address + 5) != (_DWORD)KeNumberProcessors_0 )
          _mm_pause();
        *(_QWORD *)&v49[0] = qword_140D184D8;
        *((_QWORD *)&v49[0] + 1) = qword_140D18478;
        *(_QWORD *)&v49[1] = qword_140D18480;
        *((_QWORD *)&v49[1] + 1) = qword_140D18470;
        *(_QWORD *)&v49[2] = qword_140D18490;
        *((_QWORD *)&v49[2] + 1) = qword_140D18488;
        v49[3] = xmmword_140D184B8;
        v49[4] = xmmword_140D184C8;
        if ( Address[452] )
        {
          v53[0] = v49[0];
          v53[2] = v49[2];
          v53[1] = v49[1];
          v53[4] = v49[4];
          v53[3] = v49[3];
          v9 = HvlPrepareForSecureHibernate(v53);
        }
        else
        {
          v54[0] = v49[0];
          v54[2] = v49[2];
          v54[1] = v49[1];
          v54[4] = v49[4];
          v54[3] = v49[3];
          v9 = HvlPrepareForHibernate(
                 v54,
                 (LONGLONG *)(v8 + 976),
                 (_QWORD *)(v8 + 984),
                 (_QWORD *)(v8 + 992),
                 (_QWORD *)(v8 + 1000));
        }
        v10 = v9;
        if ( v9 < 0 )
        {
          PopInternalAddToDumpFile(*((_QWORD *)Address + 21), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0xCuLL, v10, *((_QWORD *)Address + 21), 0LL);
        }
        *((_DWORD *)Address + 5) = 0;
        _InterlockedAdd((volatile signed __int32 *)Address + 6, 1u);
        while ( *((_DWORD *)Address + 6) != (_DWORD)KeNumberProcessors_0 )
          _mm_pause();
        *((_DWORD *)Address + 5) = KeNumberProcessors_0;
        *((_DWORD *)Address + 6) = 0;
      }
      if ( Address[452] )
        HvlDiscardSecurePagesFromHibernation(Address);
      else
        HvlDiscardPagesFromHibernation(Address);
    }
    ++*(_DWORD *)v8;
    v11 = Address + 48;
    v12 = 0;
    v13 = (_DWORD *)*((_QWORD *)Address + 7);
    v14 = (_DWORD *)*((_QWORD *)Address + 5);
    if ( (*((_DWORD *)Address + 12) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        ++v12;
        *v13++ |= *v14++;
      }
      while ( v12 < *v11 >> 5 );
    }
    v15 = (RTL_BITMAP *)(Address + 32);
    if ( byte_140C3CAA1 )
    {
      v16 = (RTL_BITMAP *)(Address + 32);
    }
    else
    {
      RtlCopyBitMap((unsigned int *)Address + 12, (__int64)(Address + 32), 0);
      v16 = (RTL_BITMAP *)(Address + 48);
    }
    RtlSetAllBits(v16);
    v17 = *((_QWORD *)Address + 21);
    *((_DWORD *)Address + 46) = 8;
    IoGetDumpHiberRanges(v18, v17);
    if ( !byte_140C3CAA1 )
      IoNotifyDump(1);
    v19 = __rdtsc();
    v20 = (int)IoInitializeDumpStack(*((_QWORD *)Address + 21));
    v21 = __rdtsc();
    qword_140C3CFE8 += (((unsigned __int64)HIDWORD(v21) << 32) | (unsigned int)v21) - v19;
    if ( (v20 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 1 )
    {
      PopCheckpointSystemSleep(20LL);
      PopInternalAddToDumpFile(*((_QWORD *)Address + 21), 0x178u, 0LL);
      KeBugCheckEx(0xA0u, 0xCuLL, v20, *((_QWORD *)Address + 21), 0LL);
    }
    PopMarkComponentsBootPhase(Address);
    PoHiberInProgress = 1;
    v22 = (char *)*((_QWORD *)Address + 8);
    if ( v22 != Address + 64 )
    {
      do
      {
        v23 = v22;
        v22 = *(char **)v22;
        v24 = *((_QWORD *)v23 + 4);
        v25 = (char *)*((_QWORD *)v23 + 5);
        v26 = *((_QWORD *)v23 + 3);
        *((_QWORD *)Address + 11) += v24 - v26;
        while ( v26 < v24 )
        {
          PopCreateDumpMdl((__int64)Address, (ULONG_PTR)v55, v26, v24);
          memmove(v25, v55[3], LODWORD(v55[5]));
          v25 += LODWORD(v55[5]);
          v26 += (unsigned __int64)LODWORD(v55[5]) >> 12;
        }
      }
      while ( v22 != Address + 64 );
      v15 = (RTL_BITMAP *)(Address + 32);
    }
    PopResetRangeEnum(Address);
    v27 = (_QWORD *)*((_QWORD *)Address + 20);
    v28 = qword_140C3CA78;
    *v27 = qword_140C3CA78;
    v27[1] = v28;
    v27[2] = 0LL;
    v50 = __rdtsc();
    v3 = PopWriteHeaderPages(Address, v8);
    if ( v3 >= 0 )
    {
      v29 = *(_DWORD *)(v8 + 80);
      if ( Address[452] )
      {
        v30 = (unsigned int)PopHiberScratchPages;
        v31 = (unsigned int)(*((_DWORD *)Address + 62) + 2);
        *((_DWORD *)Address + 46) = 3;
        *(_QWORD *)(v8 + 96) = v31 + ((unsigned __int64)(4 * v30 + 4095) >> 12);
        PopWriteSecurePages((ULONG_PTR)Address);
        qword_140C3D170 = *((unsigned int *)Address + 63);
      }
      *((_DWORD *)Address + 46) = 4;
      *((_QWORD *)Address + 12) = v11;
      v32 = RtlNumberOfClearBits((PRTL_BITMAP)Address + 3);
      v33 = qword_140C3CAF8;
      v34 = *((_DWORD *)Address + 70);
      v35 = *((_QWORD *)Address + 34);
      v36 = (*((_QWORD *)Address + 11) + v32) << 12;
      memset(qword_140C3CAF8, 0, 0x40uLL);
      v33[6] = 0;
      *(_QWORD *)v33 = v35;
      v33[2] = v34;
      *((_QWORD *)v33 + 2) = v36;
      qword_140C3D178 = 0LL;
      qword_140C3D180 = 0LL;
      *((_DWORD *)Address + 82) = 0;
      *((_QWORD *)Address + 43) = 0LL;
      if ( v48 && *(_QWORD *)(*((_QWORD *)Address + 21) + 128LL) )
        Address[392] = 1;
      v37 = *((unsigned int *)Address + 63)
          + ((4 * (unsigned __int64)(unsigned int)PopHiberScratchPages + 4095) >> 12)
          + (unsigned int)(*((_DWORD *)Address + 62) + 2);
      *(_QWORD *)(v8 + 104) = v37;
      *((_QWORD *)Address + 47) = v37 << 12;
      Address[4] = 1;
      PopWriteHiberImage((ULONG_PTR)Address);
      _InterlockedIncrement((volatile signed __int32 *)Address + 3);
      while ( 1 )
      {
        v38 = *((_DWORD *)Address + 64);
        if ( *((_DWORD *)Address + 3) == v38 )
          break;
        _mm_pause();
      }
      v39 = 0;
      if ( v38 )
      {
        do
        {
          v40 = v39++;
          v40 <<= 7;
          qword_140C3D178 += *(_QWORD *)(v40 + *((_QWORD *)Address + 33) + 56);
          *(_QWORD *)(v40 + *((_QWORD *)Address + 33) + 56) = 0LL;
        }
        while ( v39 < *((_DWORD *)Address + 64) );
      }
      qword_140C3D188 = qword_140C3D1A8;
      qword_140C3D198 = (unsigned int)dword_140C3D1B0;
      qword_140C3D1A8 = 0LL;
      dword_140C3D1B0 = 0;
      *((_DWORD *)Address + 46) = 5;
      *((_QWORD *)Address + 12) = v15;
      *((_QWORD *)Address + 14) = 0LL;
      v41 = RtlNumberOfClearBits(v15);
      v42 = qword_140C3CAF8;
      v43 = *((_DWORD *)Address + 70);
      v44 = *((_QWORD *)Address + 34);
      v45 = (unsigned __int64)v41 << 12;
      memset(qword_140C3CAF8, 0, 0x40uLL);
      v42[6] = 0;
      *((_QWORD *)v42 + 2) = v45;
      *(_QWORD *)v42 = v44;
      v42[2] = v43;
      *(_QWORD *)(v8 + 112) = (unsigned __int64)(*((_QWORD *)Address + 47) + 4095LL) >> 12;
      *((_DWORD *)Address + 3) = 0;
      *((_QWORD *)Address + 43) = 0LL;
      PopWriteHiberImage((ULONG_PTR)Address);
      *((_DWORD *)Address + 46) = 7;
      PopWriteChecksumPages(Address);
      v46 = v50;
      *((_DWORD *)Address + 46) = 6;
      PopWriteImageHeader(Address, v8, v29, v46);
      v3 = *((_DWORD *)Address + 47);
      if ( v3 >= 0 )
      {
        if ( dword_140C3CD80 == dword_140C3CD88 )
        {
          if ( (PopSimulate & 0x8000) == 0 )
            DbgUnLoadImageSymbols();
          VslNotifyShutdown(1u);
        }
        if ( (PopSimulate & 0x1000) != 0 )
        {
          v3 = -1073741632;
        }
        else
        {
          v3 = 0;
          if ( (PopSimulateHiberBugcheck & 0x10) != 0 )
          {
            v3 = 1073742484;
LABEL_91:
            PopCheckpointSystemSleep(24LL);
            off_140C01CD8[0]();
            return (unsigned int)v3;
          }
        }
      }
    }
    KdPowerTransition(4);
    if ( v3 >= 0 && dword_140C3CD80 == 5 )
    {
      PopNotifyShutdownListener();
      if ( HvlHypervisorConnected )
        HvlConfigureMemoryZeroingOnReset(0);
      PopSetMemoryOverwriteRequestAction();
    }
    goto LABEL_91;
  }
  while ( !Address[4] )
    _mm_pause();
  v4 = Number << 7;
  PopCompressHiberBlocks((__int64)Address, v4 + *((_QWORD *)Address + 33), 1);
  _InterlockedAdd((volatile signed __int32 *)Address + 3, 1u);
  while ( *((_DWORD *)Address + 3) )
    _mm_pause();
  return (unsigned int)PopCompressHiberBlocks((__int64)Address, v4 + *((_QWORD *)Address + 33), 0);
}
