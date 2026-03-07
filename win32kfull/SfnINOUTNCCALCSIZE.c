__int64 __fastcall SfnINOUTNCCALCSIZE(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rsi
  unsigned int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v21; // rcx
  ULONG_PTR v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rcx
  bool v25; // al
  bool v26; // bl
  int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rbx
  ULONG64 v37; // rax
  __int128 *v38; // xmm0_8
  __int128 *v39; // rdi
  __int128 v40; // xmm0
  __int64 v41; // rax
  int v43; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v44; // [rsp+58h] [rbp-1A0h]
  unsigned __int64 v45[3]; // [rsp+78h] [rbp-180h] BYREF
  __int128 v46; // [rsp+90h] [rbp-168h]
  __int64 v47; // [rsp+A0h] [rbp-158h]
  __int64 v48; // [rsp+A8h] [rbp-150h]
  __int128 v49; // [rsp+D0h] [rbp-128h]
  __int128 v50; // [rsp+E0h] [rbp-118h] BYREF
  __int64 v51; // [rsp+F0h] [rbp-108h]
  __int128 v52; // [rsp+F8h] [rbp-100h]
  volatile void *Address; // [rsp+108h] [rbp-F0h]
  __int128 v54; // [rsp+110h] [rbp-E8h]
  __int128 *v55; // [rsp+120h] [rbp-D8h]
  __int64 v56; // [rsp+130h] [rbp-C8h] BYREF
  int v57; // [rsp+138h] [rbp-C0h]
  int v58; // [rsp+13Ch] [rbp-BCh]
  __int64 v59; // [rsp+140h] [rbp-B8h]
  __int64 v60; // [rsp+148h] [rbp-B0h]
  __int64 v61; // [rsp+150h] [rbp-A8h]
  _OWORD v62[3]; // [rsp+158h] [rbp-A0h] BYREF
  __int128 *v63; // [rsp+188h] [rbp-70h]
  __int128 v64; // [rsp+190h] [rbp-68h]
  __int128 v65; // [rsp+1A0h] [rbp-58h]
  __int64 v66; // [rsp+1B0h] [rbp-48h]

  v45[0] = 0LL;
  v43 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v12 = SGDGetUserSessionState(a1);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v12 + 8)) )
  {
    LODWORD(v44) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  }
  v13 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v13 = *ThreadWin32Thread;
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(v13 + 472);
  else
    v15 = 0LL;
  v58 = 0;
  memset_0(v62, 0, 0x60uLL);
  v56 = v15;
  v57 = a2;
  v59 = a3;
  v60 = a5;
  v61 = a6;
  v62[0] = *(_OWORD *)a4;
  if ( a3 )
  {
    v62[1] = *(_OWORD *)(a4 + 16);
    v62[2] = *(_OWORD *)(a4 + 32);
    v63 = *(__int128 **)(a4 + 48);
    *((_DWORD *)v63 + 9) = 0;
    v64 = *v63;
    v65 = v63[1];
    v66 = *((_QWORD *)v63 + 4);
    v63 = 0LL;
    v16 = 136;
  }
  else
  {
    v16 = 56;
  }
  ThreadLock(a1, &v50);
  v17 = *(_QWORD *)(v13 + 480);
  v49 = *(_OWORD *)(v17 + 64);
  v46 = v49;
  v47 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v15;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v19;
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v19);
  if ( CurrentThreadWin32Thread )
  {
    v22 = *(unsigned int *)(CurrentThreadWin32Thread + 48);
    if ( (_DWORD)v22 )
    {
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, v22, 0LL, 0LL, 0LL);
      DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    }
  }
  v23 = SGDGetUserSessionState(v21);
  v25 = ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v23 + 8)) != 1 && IS_USERCRIT_OWNED_AT_ALL(v24);
  v26 = v25;
  UserSessionSwitchLeaveCrit(v24);
  EtwTraceBeginCallback(21LL);
  v27 = KeUserModeCallback(21LL, &v56, v16, v45, &v43);
  EtwTraceEndCallback(21LL);
  if ( v26 )
    EnterSharedCrit(v29, v28, v30);
  else
    EnterCrit(0LL, 0LL);
  ThreadUnlock1(v32, v31, v33);
  v34 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v34 + 64) = v49;
  *(_QWORD *)(v34 + 80) = v47;
  if ( v27 < 0 || v43 != 24 )
    return 0LL;
  v35 = (__int64 *)v45[0];
  if ( v45[0] + 8 < v45[0] || v45[0] + 8 > MmUserProbeAddress )
    v35 = (__int64 *)MmUserProbeAddress;
  v36 = *v35;
  v48 = *v35;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v37 = v45[0];
    if ( v45[0] + 24 < v45[0] || v45[0] + 24 > MmUserProbeAddress )
      v37 = MmUserProbeAddress;
    v52 = *(_OWORD *)v37;
    v38 = *(__int128 **)(v37 + 16);
    Address = v38;
    v54 = v52;
    v55 = v38;
    v39 = v38;
    ProbeForRead(v38, 0x60uLL, 4u);
    v40 = *v38;
    if ( a3 )
    {
      v44 = *(_QWORD *)(a4 + 48);
      v41 = v44;
      *(_OWORD *)a4 = v40;
      *(_OWORD *)(a4 + 16) = v39[1];
      *(_OWORD *)(a4 + 32) = v39[2];
      *(_QWORD *)(a4 + 48) = *((_QWORD *)v39 + 6);
      *(_OWORD *)v41 = *(__int128 *)((char *)v39 + 56);
      *(_OWORD *)(v41 + 16) = *(__int128 *)((char *)v39 + 72);
      *(_QWORD *)(v41 + 32) = *((_QWORD *)v39 + 11);
      *(_QWORD *)(a4 + 48) = v41;
    }
    else
    {
      *(_OWORD *)a4 = v40;
    }
  }
  return v36;
}
