/*
 * XREFs of ?ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x1C0081570
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C00812D0 (NtDCompositionConfirmFrame.c)
 * Callees:
 *     ?SetCurrentStats@CFrameStats@CConnection@DirectComposition@@QEAA_NPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x1C0081A9C (-SetCurrentStats@CFrameStats@CConnection@DirectComposition@@QEAA_NPEAUtagCOMPOSITION_CONFIRM_FRA.c)
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C0081BE0 (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ??8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z @ 0x1C0081D30 (--8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z.c)
 *     ?TargetStatsCompleted@CFrameStats@CConnection@DirectComposition@@QEBA_NXZ @ 0x1C0081D84 (-TargetStatsCompleted@CFrameStats@CConnection@DirectComposition@@QEBA_NXZ.c)
 *     ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C0081DC8 (-NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C0081EE0 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CConnection::ConfirmFrame(
        DirectComposition::CConnection *this,
        struct tagCOMPOSITION_CONFIRM_FRAME_INFO *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rcx
  unsigned int v8; // esi
  char *v9; // rbx
  unsigned __int64 v10; // rax
  bool v11; // al
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  char *v14; // rcx
  struct _ERESOURCE *v15; // rbx
  __int64 *v16; // rbx
  struct _ERESOURCE *v17; // rbx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *i; // rbx
  char v25; // r13
  unsigned int v26; // ebp
  __int64 v27; // rcx
  unsigned int v28; // edx
  __int64 v29; // r11
  __int64 v30; // r12
  unsigned int v31; // r10d
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // r12
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned int v39; // edx
  __int64 *v40; // rsi
  __int64 v41; // rcx
  int v42; // [rsp+20h] [rbp-98h]
  unsigned int v43; // [rsp+28h] [rbp-90h]
  __int64 v44; // [rsp+28h] [rbp-90h]
  unsigned int v45; // [rsp+30h] [rbp-88h]
  DirectComposition::CConnection *v46; // [rsp+30h] [rbp-88h]
  __int64 v47; // [rsp+38h] [rbp-80h] BYREF
  __int64 v48; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v49; // [rsp+48h] [rbp-70h]
  int v50; // [rsp+50h] [rbp-68h] BYREF
  int v51; // [rsp+54h] [rbp-64h]
  int v52; // [rsp+58h] [rbp-60h]
  __int128 v53; // [rsp+5Ch] [rbp-5Ch]
  int v54; // [rsp+6Ch] [rbp-4Ch]

  v3 = *((_QWORD *)this + 23);
  v47 = 0LL;
  v5 = *(_QWORD *)a2;
  v42 = -1073741275;
  if ( v3 )
  {
    v42 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v3 + 32LL))(v3, v5, &v47);
    if ( v42 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 8LL))(v47);
    }
  }
  v49 = 0LL;
  v6 = 0LL;
  ExAcquirePushLockExclusiveEx((char *)this + 328, 0LL);
  *((_BYTE *)this + 336) = 1;
  *((_QWORD *)this + 45) = *(_QWORD *)a2;
  v7 = *(_QWORD *)a2 % 0x12CuLL;
  *((_DWORD *)this + 86) = v7;
  if ( (_DWORD)v7 )
    v8 = v7 - 1;
  else
    v8 = 299;
  do
  {
    v9 = (char *)this + 464 * v8 + 376;
    if ( !*v9 )
    {
      v25 = 0;
      v26 = 0;
      if ( *((_DWORD *)v9 + 1) )
      {
        do
        {
          v27 = *((_QWORD *)v9 + 5) + 104LL * v26;
          if ( *(_QWORD *)(v27 + 40) && *(_DWORD *)(v27 + 56) && !*(_DWORD *)(v27 + 80) )
          {
            v28 = 0;
            v43 = 0;
            v45 = *((_DWORD *)a2 + 8);
            if ( v45 )
            {
              v29 = *((_QWORD *)a2 + 5);
              while ( 1 )
              {
                v30 = v28;
                if ( (unsigned __int8)tagCOMPOSITION_TARGET_ID::operator==(v27, v29 + 104LL * v28) )
                  break;
                v28 = v43 + 1;
                v43 = v28;
                if ( v28 >= v45 )
                  goto LABEL_41;
              }
              v32 = 104 * v30;
              if ( v31 <= *(_DWORD *)(104 * v30 + v29 + 80) )
              {
                v25 = 1;
                *(_OWORD *)(v27 + 80) = *(_OWORD *)(v32 + v29 + 80);
                *(_QWORD *)(v27 + 96) = *(_QWORD *)(v32 + v29 + 96);
              }
            }
LABEL_41:
            if ( !v26 && v25 )
            {
              v33 = 0LL;
              v34 = *((_QWORD *)v9 + 1);
              v35 = -1073741275;
              v36 = *((_QWORD *)v9 + 5);
              v46 = DirectComposition::CConnection::s_pSessionConnection;
              v48 = 0LL;
              v37 = *((_QWORD *)DirectComposition::CConnection::s_pSessionConnection + 23);
              v44 = v34;
              if ( v37 )
              {
                v35 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v37 + 32LL))(v37, v34, &v48);
                v33 = v48;
              }
              if ( v35 >= 0 )
              {
                v50 = *(_DWORD *)(v36 + 80);
                v51 = *(_DWORD *)(v36 + 88);
                v52 = v51;
                v54 = 0;
                v38 = *(_QWORD *)(v36 + 96);
                v53 = 0LL;
                *(_QWORD *)((char *)&v53 + 4) = v38;
                (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v33 + 24LL))(v33, &v50);
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 8LL))(v48);
                (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v46 + 23) + 24LL))(*((_QWORD *)v46 + 23), v44);
              }
            }
          }
          ++v26;
        }
        while ( v26 < *((_DWORD *)v9 + 1) );
        if ( v25 )
          *v9 = DirectComposition::CConnection::CFrameStats::TargetStatsCompleted((DirectComposition::CConnection::CFrameStats *)v9);
      }
      if ( !*v9 )
      {
        v6 = *((_QWORD *)v9 + 1);
        v49 = v6;
        v10 = v6;
        goto LABEL_8;
      }
      v6 = v49;
    }
    v10 = *((_QWORD *)v9 + 1);
LABEL_8:
    if ( v10 <= *((_QWORD *)this + 46) )
      break;
    if ( v8 )
      --v8;
    else
      v8 = 299;
  }
  while ( v8 != *((_DWORD *)this + 86) );
  v11 = DirectComposition::CConnection::CFrameStats::SetCurrentStats(
          (DirectComposition::CConnection *)((char *)this + 464 * *((unsigned int *)this + 86) + 376),
          a2);
  if ( v6 )
  {
    v12 = v6 - 1;
  }
  else
  {
    v12 = *((_QWORD *)this + 45);
    if ( !v11 )
      --v12;
  }
  *((_QWORD *)this + 46) = v12;
  v13 = *((_QWORD *)this + 23);
  if ( v13 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 40LL))(v13, *((_QWORD *)this + 46));
  v14 = (char *)this + 328;
  if ( *((_BYTE *)this + 336) )
    ExReleasePushLockExclusiveEx(v14, 0LL);
  else
    ExReleasePushLockSharedEx(v14, 0LL);
  v15 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v15, 1u);
  v16 = (__int64 *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  if ( v16 )
  {
    do
    {
      *((_BYTE *)v16 + 32) &= ~2u;
      v39 = *((_DWORD *)v16 + 28);
      v40 = (__int64 *)*v16;
      if ( v39 )
      {
        DirectComposition::CConnection::ReleaseShellResourceAccess(
          *(DirectComposition::CConnection **)(v16[1] + 40),
          v39);
        *((_DWORD *)v16 + 28) = 0;
      }
      if ( (v16[4] & 4) == 0 )
        DirectComposition::CApplicationChannel::NotifyBatchProcessed(
          (DirectComposition::CApplicationChannel *)v16[1],
          (struct DirectComposition::CBatch *)v16);
      DirectComposition::CApplicationChannel::ReturnProcessedBatch(
        (DirectComposition::CApplicationChannel *)v16[1],
        (struct DirectComposition::CBatch *)v16);
      v16 = v40;
    }
    while ( v40 );
  }
  v17 = (struct _ERESOURCE *)*((_QWORD *)this + 9);
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(v17, 1u);
  v18 = 0LL;
  while ( 1 )
  {
    v19 = *((_QWORD *)this + 5);
    if ( v18 >= v19 )
      break;
    v20 = (_QWORD *)(*((_QWORD *)this + 2) + v18 * *((_QWORD *)this + 6));
    while ( 1 )
    {
      v21 = v18++;
      if ( *v20 )
        break;
      v20 = (_QWORD *)((char *)v20 + *((_QWORD *)this + 6));
      if ( v18 >= v19 )
        goto LABEL_24;
    }
    _mm_lfence();
    v22 = *(_QWORD *)(v21 * *((_QWORD *)this + 6) + *((_QWORD *)this + 2));
    if ( !v22 )
      break;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
LABEL_24:
  ExReleaseResourceLite(*((PERESOURCE *)this + 9));
  KeLeaveCriticalRegion();
  for ( i = (_QWORD *)*((_QWORD *)this + 24); i != (_QWORD *)((char *)this + 192); i = (_QWORD *)*i )
  {
    if ( i[6] )
    {
      v41 = *(_QWORD *)(i[2] + 16LL);
      if ( v41 )
        MmUnmapViewOfSection(v41);
      i[6] = 0LL;
    }
    i[4] = 0LL;
    i[5] = 0LL;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return (unsigned int)v42;
}
