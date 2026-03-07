__int64 __fastcall NtDCompositionConfirmFrame(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int128 *v4; // rbx
  _BYTE *v6; // rdi
  __int64 v7; // r14
  unsigned int v8; // r13d
  int v9; // ebx
  int v10; // eax
  size_t v11; // r8
  const void *v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v16; // rbx
  volatile signed __int32 *v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // r9
  unsigned __int64 v21; // r15
  __int64 v22; // rsi
  __int64 v23; // rbx
  int v24; // eax
  bool v25; // zf
  int v26; // ecx
  unsigned int v27; // edi
  __int64 v28; // rbx
  bool v29; // al
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _ERESOURCE *v32; // rbx
  __int64 *v33; // r12
  struct _ERESOURCE *v34; // rbx
  unsigned __int64 v35; // rdi
  _QWORD *v36; // rbx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  _QWORD *v39; // rcx
  __int64 v40; // rcx
  _QWORD *i; // rbx
  unsigned int v42; // edx
  char v44; // r9
  unsigned int v45; // esi
  unsigned int v46; // edx
  char v47; // al
  DirectComposition::CConnection *v48; // rcx
  __int64 *v49; // r15
  __int64 v50; // rdx
  unsigned int v51; // r9d
  char v52; // r12
  unsigned int v53; // r11d
  char *v54; // r8
  int v55; // eax
  __int64 v57; // r12
  __int64 *v58; // rdx
  __int64 v59; // r9
  int v60; // eax
  unsigned int v61; // r8d
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 *v64; // rbx
  unsigned int v65; // edx
  __int64 v66; // r13
  void *v67; // rcx
  __int64 v68; // rcx
  unsigned int v69; // edi
  __int64 v70; // rsi
  struct _ERESOURCE *v71; // rbx
  __int64 v72; // rcx
  char v73; // [rsp+20h] [rbp-2D8h]
  int v74; // [rsp+28h] [rbp-2D0h]
  _BYTE *v75; // [rsp+30h] [rbp-2C8h]
  __int64 v76; // [rsp+40h] [rbp-2B8h] BYREF
  __int64 v77; // [rsp+48h] [rbp-2B0h] BYREF
  __int64 v78; // [rsp+50h] [rbp-2A8h]
  __int64 *v79; // [rsp+58h] [rbp-2A0h]
  __int128 v80; // [rsp+60h] [rbp-298h] BYREF
  __int128 v81; // [rsp+70h] [rbp-288h]
  void *Src[2]; // [rsp+80h] [rbp-278h]
  unsigned __int64 v83; // [rsp+90h] [rbp-268h]
  __int128 v84; // [rsp+98h] [rbp-260h]
  DirectComposition::CConnection *v85; // [rsp+A8h] [rbp-250h]
  __int128 v86; // [rsp+B0h] [rbp-248h]
  __int128 v87; // [rsp+C0h] [rbp-238h]
  __int128 v88; // [rsp+D0h] [rbp-228h]
  int v89; // [rsp+E0h] [rbp-218h] BYREF
  int v90; // [rsp+E4h] [rbp-214h]
  int v91; // [rsp+E8h] [rbp-210h]
  __int128 v92; // [rsp+ECh] [rbp-20Ch]
  int v93; // [rsp+FCh] [rbp-1FCh]
  int v94; // [rsp+100h] [rbp-1F8h] BYREF
  int v95; // [rsp+104h] [rbp-1F4h]
  int v96; // [rsp+108h] [rbp-1F0h]
  __int128 v97; // [rsp+10Ch] [rbp-1ECh]
  int v98; // [rsp+11Ch] [rbp-1DCh]
  _BYTE v99[416]; // [rsp+120h] [rbp-1D8h] BYREF

  v4 = a2;
  v80 = 0LL;
  v81 = 0LL;
  *(_OWORD *)Src = 0LL;
  v6 = 0LL;
  v75 = 0LL;
  v7 = 0LL;
  if ( PsGetCurrentProcess(a1, a2, a3, a4) != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    return 3221225506LL;
  if ( v4 )
  {
    if ( v4 + 3 < v4 || (unsigned __int64)(v4 + 3) > MmUserProbeAddress )
      v4 = (__int128 *)MmUserProbeAddress;
    v86 = *v4;
    v87 = v4[1];
    v88 = v4[2];
    v80 = v86;
    v81 = v87;
    *(_OWORD *)Src = v88;
    if ( !(_QWORD)v86 )
    {
      v9 = -1073741811;
      v8 = (unsigned int)Src[0];
      goto LABEL_21;
    }
    v8 = 256;
    if ( (unsigned int)v88 > 0x100 )
    {
      LODWORD(Src[0]) = 256;
    }
    else
    {
      if ( (unsigned int)v88 <= 4 )
      {
        v6 = v99;
        v75 = v99;
        v9 = 0;
        v10 = 0;
        v8 = (unsigned int)Src[0];
        goto LABEL_9;
      }
      v8 = (unsigned int)Src[0];
    }
    v6 = (_BYTE *)DirectComposition::Memory::Allocate(104LL * v8, 0x61644344u);
    v75 = v6;
    if ( v6 )
    {
      v9 = 0;
      v10 = 0;
    }
    else
    {
      v9 = -1073741801;
      v10 = -1073741801;
    }
LABEL_9:
    if ( v10 >= 0 )
    {
      v11 = 104LL * v8;
      v12 = Src[1];
      if ( (char *)Src[1] + v11 < Src[1] || (char *)Src[1] + v11 > (void *)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v6, v12, v11);
      Src[1] = v6;
    }
LABEL_21:
    if ( v9 >= 0 )
    {
      KeEnterCriticalRegion();
      v13 = 0LL;
      CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v14);
      if ( CurrentProcessWin32Process )
      {
        if ( !*CurrentProcessWin32Process )
          CurrentProcessWin32Process = 0LL;
        if ( CurrentProcessWin32Process )
          v13 = CurrentProcessWin32Process[32];
      }
      if ( v13 )
      {
        v16 = *(struct _ERESOURCE **)(v13 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v16, 1u);
        v17 = *(volatile signed __int32 **)(v13 + 24);
        if ( v17 && a1 == *(_QWORD *)(v13 + 16) )
        {
          _InterlockedIncrement(v17);
          v7 = *(_QWORD *)(v13 + 24);
          v9 = 0;
          v8 = (unsigned int)Src[0];
          v6 = v75;
        }
        else
        {
          v9 = -1073741790;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v13 + 32));
        KeLeaveCriticalRegion();
      }
      else
      {
        v9 = -1073741823;
      }
      if ( v9 >= 0 )
      {
        v18 = 0LL;
        v76 = 0LL;
        v19 = -1073741275;
        v74 = -1073741275;
        v20 = *(_QWORD *)(v7 + 184);
        v21 = v80;
        v83 = v80;
        if ( v20 )
        {
          v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 32LL))(v20, v80, &v76);
          v74 = v19;
          v18 = v76;
        }
        if ( v19 >= 0 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 8LL))(v76);
        }
        v22 = 0LL;
        v78 = 0LL;
        v23 = v7 + 344;
        ExAcquirePushLockExclusiveEx(v7 + 344, 0LL);
        *(_BYTE *)(v7 + 352) = 1;
        *(_QWORD *)(v7 + 376) = v21;
        v24 = 300 * (v21 / 0x12C);
        v25 = (_DWORD)v80 == v24;
        v26 = v80 - v24;
        *(_DWORD *)(v7 + 360) = v80 - v24;
        if ( v25 )
          v27 = 299;
        else
          v27 = v26 - 1;
        if ( v27 != v26 )
        {
          while ( 1 )
          {
            v28 = v7 + 464LL * v27;
            if ( *(_BYTE *)(v28 + 392) )
              goto LABEL_41;
            v44 = 0;
            v73 = 0;
            v45 = 0;
            v46 = *(_DWORD *)(v28 + 396);
            v47 = 0;
            v48 = (DirectComposition::CConnection *)(v28 + 432);
            if ( !v46 )
              goto LABEL_103;
            v49 = (__int64 *)(v28 + 432);
            do
            {
              v50 = *v49 + 104LL * v45;
              if ( !*(_QWORD *)(v50 + 40) )
                goto LABEL_101;
              v51 = *(_DWORD *)(v50 + 56);
              if ( !v51 || *(_DWORD *)(v50 + 80) )
                goto LABEL_100;
              v52 = 0;
              v53 = 0;
              if ( !v8 )
                goto LABEL_130;
              while ( 1 )
              {
                v54 = (char *)Src[1] + 104 * v53;
                if ( *(_DWORD *)v50 == *(_DWORD *)v54
                  && *(_DWORD *)(v50 + 4) == *((_DWORD *)v54 + 1)
                  && *(_DWORD *)(v50 + 8) == *((_DWORD *)v54 + 2)
                  && *(_DWORD *)(v50 + 12) == *((_DWORD *)v54 + 3)
                  && *(_DWORD *)(v50 + 16) == *((_DWORD *)v54 + 4)
                  && *(_DWORD *)(v50 + 20) == *((_DWORD *)v54 + 5) )
                {
                  v55 = *(_DWORD *)(v50 + 24);
                  v48 = (DirectComposition::CConnection *)*((unsigned int *)v54 + 6);
                  if ( v55 == (_DWORD)v48 || !v55 || !(_DWORD)v48 )
                    break;
                }
                if ( ++v53 >= v8 )
                  goto LABEL_130;
              }
              v52 = 1;
              if ( v51 <= *((_DWORD *)v54 + 20) )
              {
                *(_OWORD *)(v50 + 80) = *((_OWORD *)v54 + 5);
                *(_QWORD *)(v50 + 96) = *((_QWORD *)v54 + 12);
                v44 = 1;
                v73 = 1;
              }
              else
              {
LABEL_130:
                v44 = v73;
              }
              if ( !v45 && !*(_BYTE *)(v28 + 393) )
              {
                if ( v44 )
                {
                  v57 = *v49;
                  v58 = *(__int64 **)(v28 + 400);
                  v79 = v58;
                  v85 = DirectComposition::CConnection::s_pSessionConnection;
                  v59 = 0LL;
                  v77 = 0LL;
                  v60 = -1073741275;
                  v48 = (DirectComposition::CConnection *)*((_QWORD *)DirectComposition::CConnection::s_pSessionConnection
                                                          + 23);
                  if ( v48 )
                  {
                    v60 = (*(__int64 (__fastcall **)(DirectComposition::CConnection *, __int64 *, __int64 *))(*(_QWORD *)v48 + 32LL))(
                            v48,
                            v58,
                            &v77);
                    v59 = v77;
                  }
                  if ( v60 >= 0 )
                  {
                    v94 = *(_DWORD *)(v57 + 80);
                    v95 = *(_DWORD *)(v57 + 88);
                    v96 = v95;
                    v97 = 0LL;
                    v98 = 0;
                    *(_QWORD *)((char *)&v97 + 4) = *(_QWORD *)(v57 + 96);
                    v89 = v94;
                    v90 = *(_DWORD *)(v57 + 84);
                    v91 = v90;
                    v92 = 0LL;
                    v93 = 0;
                    *(_QWORD *)((char *)&v92 + 4) = *(_QWORD *)((char *)&v97 + 4);
                    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v59 + 24LL))(v59, &v94, &v89);
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 8LL))(v77);
                    (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v85 + 23) + 24LL))(
                      *((_QWORD *)v85 + 23),
                      v79);
                  }
                  goto LABEL_99;
                }
                if ( !v52 )
                {
                  DirectComposition::CConnection::DiscardFrame(v48, *(_QWORD *)(v28 + 400));
LABEL_99:
                  *(_BYTE *)(v28 + 393) = 1;
LABEL_100:
                  v44 = v73;
                }
              }
LABEL_101:
              ++v45;
              v46 = *(_DWORD *)(v28 + 396);
            }
            while ( v45 < v46 );
            v21 = v83;
            v47 = *(_BYTE *)(v28 + 392);
            v48 = (DirectComposition::CConnection *)(v28 + 432);
LABEL_103:
            if ( v44 )
            {
              v61 = 0;
              if ( v46 )
              {
                v62 = *(_QWORD *)v48;
                while ( 1 )
                {
                  v63 = 104LL * v61;
                  if ( *(_QWORD *)(v63 + v62 + 40) )
                  {
                    if ( *(_DWORD *)(v63 + v62 + 56) && !*(_DWORD *)(v63 + v62 + 80) )
                      break;
                  }
                  if ( ++v61 >= v46 )
                    goto LABEL_110;
                }
                v47 = 0;
              }
              else
              {
LABEL_110:
                v47 = 1;
              }
              *(_BYTE *)(v28 + 392) = v47;
            }
            v22 = v78;
            if ( !v47 )
            {
              v22 = *(_QWORD *)(v28 + 400);
              v78 = v22;
            }
LABEL_41:
            if ( *(_QWORD *)(v28 + 400) > *(_QWORD *)(v7 + 384) )
            {
              if ( v27 )
                --v27;
              else
                v27 = 299;
              if ( v27 != *(_DWORD *)(v7 + 360) )
                continue;
            }
            v23 = v7 + 344;
            break;
          }
        }
        v29 = DirectComposition::CConnection::CFrameStats::SetCurrentStats(
                (DirectComposition::CConnection::CFrameStats *)(v7 + 464LL * *(unsigned int *)(v7 + 360) + 392),
                (struct tagCOMPOSITION_CONFIRM_FRAME_INFO *)&v80);
        if ( v22 )
        {
          v30 = v22 - 1;
        }
        else
        {
          v30 = *(_QWORD *)(v7 + 376);
          if ( !v29 )
            --v30;
        }
        *(_QWORD *)(v7 + 384) = v30;
        v31 = *(_QWORD *)(v7 + 184);
        if ( v31 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 40LL))(v31);
        if ( *(_BYTE *)(v23 + 8) )
          ExReleasePushLockExclusiveEx(v23, 0LL);
        else
          ExReleasePushLockSharedEx(v23, 0LL);
        v32 = *(struct _ERESOURCE **)(v7 + 8);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v32, 1u);
        v33 = *(__int64 **)(v7 + 120);
        *(_QWORD *)(v7 + 120) = 0LL;
        *(_QWORD *)(v7 + 128) = 0LL;
        if ( v33 )
        {
          do
          {
            v64 = (__int64 *)*v33;
            v79 = (__int64 *)*v33;
            *((_BYTE *)v33 + 32) &= ~2u;
            v65 = *((_DWORD *)v33 + 28);
            if ( v65 )
            {
              DirectComposition::CConnection::ReleaseShellResourceAccess(
                *(DirectComposition::CConnection **)(v33[1] + 40),
                v65);
              *((_DWORD *)v33 + 28) = 0;
            }
            if ( (v33[4] & 4) == 0 )
              DirectComposition::CApplicationChannel::NotifyBatchProcessed(
                (DirectComposition::CApplicationChannel *)v33[1],
                (struct DirectComposition::CBatch *)v33);
            v66 = v33[1];
            v67 = (void *)v33[12];
            if ( v67 )
              ObfDereferenceObject(v67);
            v33[12] = 0LL;
            *((_BYTE *)v33 + 32) &= ~0x20u;
            if ( *((_DWORD *)v33 + 5) == 6 )
            {
              v69 = *(_DWORD *)(v66 + 28);
              v70 = *(_QWORD *)(v66 + 40);
              v71 = *(struct _ERESOURCE **)(v70 + 72);
              KeEnterCriticalRegion();
              ExAcquireResourceExclusiveLite(v71, 1u);
              DirectComposition::CLinearObjectTableBase::ReleaseHandle(
                (DirectComposition::CLinearObjectTableBase *)(v70 + 16),
                v69);
              ExReleaseResourceLite(*(PERESOURCE *)(v70 + 72));
              KeLeaveCriticalRegion();
              NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v33);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v66 + 32LL))(v66, 1LL);
              v64 = v79;
            }
            else
            {
              *(_DWORD *)(v66 + 388) = *((_DWORD *)v33 + 4);
              *(_QWORD *)&v84 = *((unsigned int *)v33 + 4);
              *((_QWORD *)&v84 + 1) = v33[7];
              *(_OWORD *)(v66 + 16 * (v84 & 0x7F) + 536) = v84;
              v68 = *(_QWORD *)(v66 + 360);
              if ( v68 && !*(_QWORD *)(v66 + 368) )
                KeSetEvent(*(PRKEVENT *)(v68 + 8), 1, 0);
              if ( (v33[4] & 8) != 0 )
                *(_BYTE *)(v66 + 242) = 0;
              ExpInterlockedPushEntrySList((PSLIST_HEADER)(v66 + 192), (PSLIST_ENTRY)v33);
              KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v66 + 216) + 8LL), 1, 0);
            }
            v33 = v64;
          }
          while ( v64 );
        }
        v34 = *(struct _ERESOURCE **)(v7 + 72);
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v34, 1u);
        v35 = 0LL;
        v36 = (_QWORD *)(v7 + 48);
        while ( 1 )
        {
          v37 = v35;
          v38 = *(_QWORD *)(v7 + 40);
          if ( v35 < v38 )
          {
            v39 = (_QWORD *)(*(_QWORD *)(v7 + 16) + v35 * *v36);
            do
            {
              if ( *v39 )
                break;
              ++v37;
              v39 = (_QWORD *)((char *)v39 + *v36);
            }
            while ( v37 < v38 );
          }
          if ( v37 >= v38 )
          {
            v40 = 0LL;
            v36 = (_QWORD *)(v7 + 48);
          }
          else
          {
            _mm_lfence();
            v35 = v37 + 1;
            v40 = *(_QWORD *)(*v36 * v37 + *(_QWORD *)(v7 + 16));
            v21 = v80;
          }
          if ( !v40 )
            break;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v40 + 16LL))(v40, v21);
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v7 + 72));
        KeLeaveCriticalRegion();
        for ( i = *(_QWORD **)(v7 + 192); i != (_QWORD *)(v7 + 192); i = (_QWORD *)*i )
        {
          if ( i[6] )
          {
            v72 = *(_QWORD *)(i[2] + 16LL);
            if ( v72 )
              MmUnmapViewOfSection(v72);
            i[6] = 0LL;
          }
          i[4] = 0LL;
          i[5] = 0LL;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v7 + 8));
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'((DirectComposition::CConnection *)v7, v42);
        v6 = 0LL;
        v9 = v74;
      }
      KeLeaveCriticalRegion();
    }
    goto LABEL_68;
  }
  v9 = -1073741811;
LABEL_68:
  if ( v6 )
  {
    if ( v6 != v99 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
  }
  return (unsigned int)v9;
}
