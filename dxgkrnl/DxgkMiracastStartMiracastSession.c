/*
 * XREFs of DxgkMiracastStartMiracastSession @ 0x1C00615C4
 * Callers:
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1C02CEC90 (DxgkNetDispStartMiracastDisplayDevice.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B270 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x1C005ED78 (--_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C005EE40 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C005F33C (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C005FF40 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     McTemplateK0pxzqq_EtwWriteTransfer @ 0x1C006266C (McTemplateK0pxzqq_EtwWriteTransfer.c)
 *     McTemplateK0qqqz_EtwWriteTransfer @ 0x1C006274C (McTemplateK0qqqz_EtwWriteTransfer.c)
 *     McTemplateK0qqz_EtwWriteTransfer @ 0x1C006281C (McTemplateK0qqz_EtwWriteTransfer.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C00668BC (TraceLoggingWriteMiracastSessionStart.c)
 *     TraceLoggingWriteMiracastStartSessionEntry @ 0x1C0066EC8 (TraceLoggingWriteMiracastStartSessionEntry.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C01F7DCC (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C0399F0C (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastDdiMiracastCreateContext @ 0x1C039A2E4 (DpiMiracastDdiMiracastCreateContext.c)
 *     DpiMiracastDdiMiracastDestroyContext @ 0x1C039A39C (DpiMiracastDdiMiracastDestroyContext.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C039A4FC (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C039A854 (DpiMiracastGetDeviceContextFromName.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C039B048 (DpiMiracastSendAsyncUserModeRequest.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C039B354 (DpiMiracastSendSyncUserModeRequest.c)
 */

__int64 __fastcall DxgkMiracastStartMiracastSession(unsigned __int16 *a1, struct _KEVENT *a2, int *a3)
{
  __int64 v3; // rbx
  int v5; // r14d
  struct _IO_REMOVE_LOCK *v6; // rsi
  char *v7; // r12
  __int128 v8; // xmm0
  int v9; // r15d
  __int64 DeviceContextFromName; // rdi
  int v11; // ebx
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // r13d
  char *Pool2; // rax
  char v18; // r13
  __int64 v19; // rcx
  struct _IO_REMOVE_LOCK *v20; // rax
  void *v21; // rdx
  int v22; // r8d
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int Lock; // ecx
  int v26; // eax
  int Type; // ecx
  int Signalling; // edx
  int Reserved1; // r9d
  int v30; // eax
  int v31; // r10d
  int Size; // edx
  int v33; // edx
  int v34; // ecx
  char IoCount; // cl
  char v36; // cl
  int v37; // ecx
  _DWORD *v38; // r13
  int v39; // eax
  __int64 v40; // r8
  volatile LONG v41; // eax
  unsigned int v42; // ebx
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rax
  int v46; // ecx
  __int64 v47; // rax
  int v48; // ecx
  __int64 v49; // rax
  __int64 v50; // rdx
  int v51; // ecx
  MIRACAST_CHUNK_LIST *v52; // rcx
  _QWORD *v53; // rax
  MIRACAST_CHUNK_LIST *v54; // rax
  MIRACAST_CHUNK_LIST *v55; // rcx
  __int64 *v56; // r13
  int v57; // eax
  struct _KEVENT *v58; // rsi
  int v59; // ecx
  __int128 v60; // xmm0
  struct _IO_REMOVE_LOCK *v61; // rax
  int v62; // edx
  int v63; // eax
  char v64; // r10
  MIRACAST_CHUNK_LIST *v65; // rcx
  MIRACAST_CHUNK_LIST *v66; // rcx
  MIRACAST_CHUNK_LIST *Flink; // rcx
  MIRACAST_CHUNK_LIST *Blink; // rcx
  MIRACAST_CHUNK_LIST *v69; // rcx
  MIRACAST_CHUNK_LIST *v70; // rcx
  int v71; // ecx
  int v72; // r8d
  __int64 v73; // rax
  PRKEVENT v74; // rdi
  ULONG RemlockSize[2]; // [rsp+20h] [rbp-E0h]
  char v77; // [rsp+60h] [rbp-A0h]
  char v78; // [rsp+60h] [rbp-A0h]
  char v79; // [rsp+61h] [rbp-9Fh]
  char DeviceObject; // [rsp+63h] [rbp-9Dh] BYREF
  char v81; // [rsp+64h] [rbp-9Ch]
  char v82; // [rsp+65h] [rbp-9Bh]
  int v83; // [rsp+68h] [rbp-98h]
  char v84; // [rsp+6Ch] [rbp-94h]
  unsigned int v85; // [rsp+70h] [rbp-90h]
  struct _IO_REMOVE_LOCK *v86; // [rsp+78h] [rbp-88h]
  struct _IO_REMOVE_LOCK *v87; // [rsp+80h] [rbp-80h]
  void *Src; // [rsp+88h] [rbp-78h]
  PRKEVENT Event; // [rsp+90h] [rbp-70h]
  int *v90; // [rsp+98h] [rbp-68h]
  _BYTE v91[20]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v92; // [rsp+B8h] [rbp-48h] BYREF
  __int64 (__fastcall *v93)(_QWORD *, struct DXGK_MIRACAST_CHUNK_INFO *, void *, int); // [rsp+C8h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v95[2]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v96[2]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v97; // [rsp+118h] [rbp+18h]
  __int64 v98; // [rsp+128h] [rbp+28h]
  __int64 v99; // [rsp+130h] [rbp+30h]
  __int64 v100; // [rsp+138h] [rbp+38h]
  int v101; // [rsp+140h] [rbp+40h]
  int v102; // [rsp+144h] [rbp+44h]
  int v103; // [rsp+148h] [rbp+48h]
  int v104; // [rsp+14Ch] [rbp+4Ch]

  LOWORD(v3) = 0;
  v87 = (struct _IO_REMOVE_LOCK *)a1;
  v90 = a3;
  v93 = 0LL;
  v5 = 2;
  Event = a2;
  memset(v91, 0, sizeof(v91));
  v6 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v86 = 0LL;
  v7 = 0LL;
  v8 = *(_OWORD *)(a1 + 268);
  v9 = 0;
  LOBYTE(v83) = 0;
  v95[0] = v8;
  v77 = 0;
  v92 = 0LL;
  v81 = 0;
  v79 = 0;
  v82 = 0;
  DeviceObject = 0;
  Src = a1 + 268;
  TraceLoggingWriteMiracastStartSessionEntry(v95);
  DeviceContextFromName = DpiMiracastGetDeviceContextFromName(a1 + 2);
  if ( !DeviceContextFromName )
  {
    v11 = -1073741275;
    v9 = 2;
    v5 = -2147483642;
    WdLogSingleEntry1(2LL, -2147483642LL);
LABEL_147:
    v74 = Event;
    if ( Event )
    {
      KeSetEvent(Event, 0, 0);
      ObfDereferenceObject(v74);
    }
    goto LABEL_149;
  }
  if ( (int)DxgkMiracastQueryMiracastSupportInternal(v91) >= 0 && !v91[8] )
  {
    v95[1] = 0LL;
    v11 = DpiMiracastSendSyncUserModeRequest(DeviceContextFromName, 2295824LL);
    if ( v11 < 0 )
    {
      AcquireMiniportListMutex();
      v9 = 17;
      v5 = -2147483647;
      goto LABEL_115;
    }
    LOWORD(v3) = 0;
  }
  AcquireMiniportListMutex();
  *(_DWORD *)(DeviceContextFromName + 788) = *((_DWORD *)a1 + 131);
  v13 = *(_QWORD *)(DeviceContextFromName + 336);
  if ( v13 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(v13 + 2 * v14) );
  }
  else
  {
    LOWORD(v14) = 0;
  }
  v15 = *(_QWORD *)(DeviceContextFromName + 344);
  if ( v15 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_WORD *)(v15 + 2 * v3) );
  }
  v85 = (unsigned __int16)v14;
  v16 = 2 * ((unsigned __int16)v14 + (unsigned __int16)v3) + 68;
  Pool2 = (char *)ExAllocatePool2(256LL, v16, 1953656900LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, v16);
    *((_DWORD *)v7 + 1) = v16;
    *((_DWORD *)v7 + 10) = 0;
    *((_QWORD *)v7 + 4) = 0LL;
    *(_DWORD *)v7 = 19;
    *(_OWORD *)(v7 + 8) = 0LL;
    *((_QWORD *)v7 + 3) = 0LL;
    *((_WORD *)v7 + 30) = v14;
    *((_WORD *)v7 + 31) = v3;
    if ( (_WORD)v14 )
      memmove(v7 + 64, *(const void **)(DeviceContextFromName + 336), 2LL * (unsigned __int16)v14);
    if ( (_WORD)v3 )
      memmove(&v7[2 * v85 + 66], *(const void **)(DeviceContextFromName + 344), 2LL * (unsigned __int16)v3);
  }
  v6 = v86;
  v18 = 0;
  if ( (int)DpiMiracastFindDisplayAdapterFdo(*(PVOID *)(DeviceContextFromName + 184)) < 0 || !v86 )
  {
    v5 = -2147483647;
    v11 = -1073741637;
    v9 = 4;
    WdLogSingleEntry1(2LL, -2147483647LL);
LABEL_114:
    v79 = v18;
    v77 = v18;
    goto LABEL_115;
  }
  v83 = 1;
  if ( v86[101].Common.RemoveEvent.Header.WaitListHead.Flink )
  {
    v11 = -1073741637;
    v9 = 6;
LABEL_25:
    v19 = 2LL;
LABEL_26:
    v5 = -2147483647;
    WdLogSingleEntry1(v19, -2147483647LL);
    goto LABEL_115;
  }
  IoAcquireRemoveLockEx(v86 + 2, (PVOID)DeviceContextFromName, File, 1u, 0x20u);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
  *(_QWORD *)(DeviceContextFromName + 88) = KeGetCurrentThread();
  v77 = 1;
  if ( *(_DWORD *)(DeviceContextFromName + 408) )
  {
    v11 = -1073741661;
    v5 = -2147483647;
    v9 = 6;
    WdLogSingleEntry2(2LL, DeviceContextFromName, -2147483647LL);
LABEL_29:
    v6 = v86;
    goto LABEL_115;
  }
  if ( !*(_QWORD *)(DeviceContextFromName + 400) )
  {
    v11 = -1073741275;
    v5 = -2147483642;
    v9 = 2;
    WdLogSingleEntry1(4LL, DeviceContextFromName);
    goto LABEL_29;
  }
  *(_QWORD *)(DeviceContextFromName + 632) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(DeviceContextFromName + 660) = *(_DWORD *)(DeviceContextFromName + 656);
  *(_DWORD *)(DeviceContextFromName + 656) = 0;
  *(_BYTE *)(DeviceContextFromName + 590) = 0;
  *(_DWORD *)(DeviceContextFromName + 652) = 0;
  *(_DWORD *)(DeviceContextFromName + 664) = 0;
  *(_DWORD *)(DeviceContextFromName + 672) = dword_1C013B8D8;
  v20 = v87;
  *(_QWORD *)(DeviceContextFromName + 676) = 0LL;
  *(_DWORD *)(DeviceContextFromName + 648) = 0;
  *(_BYTE *)(DeviceContextFromName + 591) = 0;
  *(_QWORD *)(DeviceContextFromName + 684) = 0LL;
  *(_QWORD *)(DeviceContextFromName + 692) = 0LL;
  *(_QWORD *)(DeviceContextFromName + 780) = 0LL;
  LODWORD(v20) = v20[16].Common.RemoveEvent.Header.SignalState;
  *(_DWORD *)(DeviceContextFromName + 700) = -1;
  *(_DWORD *)(DeviceContextFromName + 788) = (_DWORD)v20;
  *(_DWORD *)(DeviceContextFromName + 704) = 0;
  v79 = 1;
  memset((void *)(DeviceContextFromName + 708), 0, 0x42uLL);
  v21 = Src;
  *(_DWORD *)(DeviceContextFromName + 776) = 256;
  memmove((void *)(DeviceContextFromName + 112), v21, 0x10uLL);
  v6 = v86;
  v23 = *(_DWORD *)(DeviceContextFromName + 440) + 1;
  *(_DWORD *)(DeviceContextFromName + 440) = v23 < 0xFFFFFFFE ? v23 : 0;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    McTemplateK0pxzqq_EtwWriteTransfer(
      v23,
      (unsigned int)&EventMiracastStartMiracastSession,
      v22,
      v6[1].Common.RemoveEvent.Header.WaitListHead.Flink,
      *(_QWORD *)(DeviceContextFromName + 96),
      *(_QWORD *)(DeviceContextFromName + 152),
      *(_DWORD *)(DeviceContextFromName + 656),
      *(_DWORD *)(DeviceContextFromName + 664));
  *(_DWORD *)(DeviceContextFromName + 192) = v6[35].Common.IoCount;
  *(_DWORD *)(DeviceContextFromName + 196) = v6[35].Common.RemoveEvent.Header.Lock;
  v24 = *(_DWORD *)&v6[35].Common.Removed;
  if ( v24 == 1 )
  {
    Lock = (unsigned __int16)v6[35].Common.RemoveEvent.Header.Lock;
    v26 = v6[35].Common.IoCount << 16;
  }
  else
  {
    if ( v24 != 2 )
    {
      v37 = 0;
      goto LABEL_68;
    }
    Type = (char)v6[35].Common.RemoveEvent.Header.Type;
    if ( ((unsigned __int8)(v6[35].Common.RemoveEvent.Header.Type - 48) <= 9u
       || (unsigned __int8)((Type | 0x20) - 97) <= 5u)
      && ((Signalling = (char)v6[35].Common.RemoveEvent.Header.Signalling,
           (unsigned __int8)(v6[35].Common.RemoveEvent.Header.Signalling - 48) <= 9u)
       || (unsigned __int8)((Signalling | 0x20) - 97) <= 5u)
      && ((v22 = (char)v6[35].Common.RemoveEvent.Header.Size,
           (unsigned __int8)(v6[35].Common.RemoveEvent.Header.Size - 48) <= 9u)
       || (unsigned __int8)((v22 | 0x20) - 97) <= 5u)
      && ((Reserved1 = (char)v6[35].Common.RemoveEvent.Header.Reserved1,
           (unsigned __int8)(v6[35].Common.RemoveEvent.Header.Reserved1 - 48) <= 9u)
       || (unsigned __int8)((Reserved1 | 0x20) - 97) <= 5u) )
    {
      if ( (unsigned __int8)(Type - 48) > 9u )
        v30 = ((_BYTE)Type - 7) & 0xF;
      else
        v30 = Type - 48;
      if ( (unsigned __int8)(Signalling - 48) > 9u )
        v31 = ((_BYTE)Signalling - 7) & 0xF;
      else
        v31 = Signalling - 48;
      Size = (char)v6[35].Common.RemoveEvent.Header.Size;
      LOBYTE(v22) = v22 - 48;
      if ( (unsigned __int8)v22 > 9u )
        v33 = ((_BYTE)Size - 7) & 0xF;
      else
        v33 = Size - 48;
      if ( (unsigned __int8)(Reserved1 - 48) > 9u )
        v34 = ((_BYTE)Reserved1 - 7) & 0xF;
      else
        v34 = Reserved1 - 48;
      v26 = v34 | (16 * (v33 | (16 * (v31 | (16 * v30)))));
    }
    else
    {
      v26 = *(unsigned __int16 *)&v6[35].Common.RemoveEvent.Header.Size;
    }
    IoCount = v6[35].Common.IoCount;
    if ( IoCount == 32 || IoCount == 95 )
    {
      v36 = BYTE1(v6[35].Common.IoCount);
      if ( v36 == 32 || v36 == 95 )
        Lock = v6[35].Common.IoCount & 0xFFFF0000;
      else
        Lock = (v6[35].Common.IoCount & 0xFFFFFF00) << 8;
    }
    else
    {
      Lock = v6[35].Common.IoCount << 16;
    }
  }
  v37 = v26 | Lock;
LABEL_68:
  *(_DWORD *)(DeviceContextFromName + 200) = v37;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000000LL) != 0 )
    McTemplateK0qqz_EtwWriteTransfer(
      v37,
      (unsigned int)&EventMiracastPerfTrackStartMiracastSession,
      v22,
      *(_DWORD *)(DeviceContextFromName + 440),
      v37,
      *(_QWORD *)(DeviceContextFromName + 352));
  *(_BYTE *)(DeviceContextFromName + 589) = 0;
  *((_QWORD *)&v92 + 1) = DpiMiracastCbSendUserModeMessage;
  v38 = (_DWORD *)(DeviceContextFromName + 456);
  *(_QWORD *)&v92 = DeviceContextFromName;
  v93 = DpiMiracastCbReportChunkInfo;
  v39 = DpiMiracastDdiMiracastCreateContext(v6, &v92, DeviceContextFromName + 448, DeviceContextFromName + 456);
  v11 = v39;
  if ( v39 < 0 )
  {
    if ( v39 == -1073740024 )
    {
      v9 = 7;
      v5 = -2147483646;
    }
    else
    {
      v9 = 8;
      v5 = -2147483647;
    }
    WdLogSingleEntry1(2LL, v39);
    *v38 = -1;
    v18 = v83;
    *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
    goto LABEL_114;
  }
  DpiMiracastEtwLogStartMiracastSessionStage(DeviceContextFromName, 0, v40);
  v41 = v6[101].Common.RemoveEvent.Header.Lock;
  v42 = v83;
  v81 = v83;
  if ( *v38 != v41 )
  {
    v11 = -1073741811;
    v9 = 9;
    goto LABEL_25;
  }
  *(_DWORD *)(DeviceContextFromName + 420) = PsGetCurrentProcessSessionId();
  *(_BYTE *)(DeviceContextFromName + 588) = 0;
  *(_QWORD *)(DeviceContextFromName + 496) = 0LL;
  *(_WORD *)&v6[102].Common.Removed = 0;
  v6[102].Common.IoCount = 0;
  v43 = operator new[](0x18uLL, 0x4B677844u, 64LL);
  if ( v43 )
  {
    v44 = *(_DWORD *)&v6[101].Common.Removed;
    *(_DWORD *)(v43 + 16) = 0;
    *(_DWORD *)(v43 + 20) = v44;
    *(_QWORD *)(v43 + 8) = v43;
    *(_QWORD *)v43 = v43;
  }
  else
  {
    v43 = 0LL;
  }
  *(_QWORD *)(DeviceContextFromName + 488) = v43;
  v45 = operator new[](0x18uLL, 0x4B677844u, 64LL);
  if ( v45 )
  {
    v46 = *(_DWORD *)&v6[101].Common.Removed;
    *(_DWORD *)(v45 + 16) = 0;
    *(_DWORD *)(v45 + 20) = v46;
    *(_QWORD *)(v45 + 8) = v45;
    *(_QWORD *)v45 = v45;
  }
  else
  {
    v45 = 0LL;
  }
  *(_QWORD *)&v6[102].Common.RemoveEvent.Header.Lock = v45;
  v47 = operator new[](0x18uLL, 0x4B677844u, 64LL);
  if ( v47 )
  {
    v48 = *(_DWORD *)&v6[101].Common.Removed;
    *(_DWORD *)(v47 + 16) = 0;
    *(_DWORD *)(v47 + 20) = v48;
    *(_QWORD *)(v47 + 8) = v47;
    *(_QWORD *)v47 = v47;
  }
  else
  {
    v47 = 0LL;
  }
  v6[102].Common.RemoveEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v47;
  v49 = operator new[](0x18uLL, 0x4B677844u, 64LL);
  v50 = v49;
  if ( v49 )
  {
    v51 = *(_DWORD *)&v6[101].Common.Removed;
    *(_DWORD *)(v49 + 16) = 0;
    *(_DWORD *)(v49 + 20) = v51;
    *(_QWORD *)(v49 + 8) = v49;
    *(_QWORD *)v49 = v49;
  }
  else
  {
    v50 = 0LL;
  }
  v6[102].Common.RemoveEvent.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v50;
  if ( !*(_QWORD *)(DeviceContextFromName + 488) )
    goto LABEL_112;
  v52 = *(MIRACAST_CHUNK_LIST **)&v6[102].Common.RemoveEvent.Header.Lock;
  if ( !v52 || !v6[102].Common.RemoveEvent.Header.WaitListHead.Flink || !v50 )
    goto LABEL_112;
  if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v52, 0x14u) )
  {
LABEL_94:
    v19 = 6LL;
    v11 = -1073741801;
    v9 = 11;
    goto LABEL_26;
  }
  v6[102].Common.IoCount = 20;
  v53 = (_QWORD *)operator new[](0x18uLL, 0x4B677844u, 64LL);
  if ( v53 )
  {
    v53[2] = 0LL;
    v53[1] = v53;
    *v53 = v53;
  }
  else
  {
    v53 = 0LL;
  }
  *(_QWORD *)(DeviceContextFromName + 504) = v53;
  v54 = (MIRACAST_CHUNK_LIST *)operator new[](0x18uLL, 0x4B677844u, 64LL);
  v55 = v54;
  if ( v54 )
  {
    *((_QWORD *)v54 + 2) = 0LL;
    *((_QWORD *)v54 + 1) = v54;
    *(_QWORD *)v54 = v54;
  }
  else
  {
    v55 = 0LL;
  }
  *(_QWORD *)(DeviceContextFromName + 512) = v55;
  if ( !*(_QWORD *)(DeviceContextFromName + 504) || !v55 )
  {
LABEL_112:
    v19 = 6LL;
    v11 = -1073741801;
    v9 = 10;
    goto LABEL_26;
  }
  if ( !MIRACAST_CHUNK_LIST::AllocateNewChunks(v55, 0x14u) )
    goto LABEL_94;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  *(_QWORD *)(DeviceContextFromName + 432) = v6->Common.RemoveEvent.Header.WaitListHead.Blink;
  v6[101].Common.RemoveEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)DeviceContextFromName;
  v6[101].Common.RemoveEvent.Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(DeviceContextFromName + 96);
  *(_QWORD *)(DeviceContextFromName + 376) = *(_QWORD *)&v6[151].Common.Removed;
  *(_QWORD *)(DeviceContextFromName + 384) = *(_QWORD *)&v6[151].Common.RemoveEvent.Header.Lock;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v82 = v42;
  v87 = v6 + 152;
  v85 = *(unsigned __int16 *)&v6[152].Common.Removed + 72;
  Src = (void *)v85;
  v56 = (__int64 *)ExAllocatePool2(256LL, v85, 1953656900LL);
  if ( !v56 )
  {
    v11 = -1073741801;
    v19 = 6LL;
    v9 = 12;
    goto LABEL_26;
  }
  _InterlockedAdd((volatile signed __int32 *)(DeviceContextFromName + 24), v42);
  _InterlockedXor((volatile signed __int32 *)(DeviceContextFromName + 28), DeviceContextFromName);
  v57 = *(_DWORD *)(DeviceContextFromName + 408);
  v58 = Event;
  *(_QWORD *)(DeviceContextFromName + 472) = Event;
  *(_DWORD *)(DeviceContextFromName + 412) = v57;
  *(_DWORD *)(DeviceContextFromName + 408) = v42;
  dword_1C013B8C0 += v42;
  KeClearEvent(*(PRKEVENT *)(DeviceContextFromName + 464));
  if ( v58 )
    KeClearEvent(v58);
  memset(v56, 0, (size_t)Src);
  v59 = *(_DWORD *)(DeviceContextFromName + 440);
  v6 = v86;
  v60 = *(_OWORD *)(DeviceContextFromName + 112);
  *(__int64 *)((char *)v56 + 12) = *(_QWORD *)(DeviceContextFromName + 96);
  *((_DWORD *)v56 + 2) = v59;
  *v56 = DeviceContextFromName;
  *(__int64 *)((char *)v56 + 20) = (__int64)v6[83].Common.RemoveEvent.Header.WaitListHead.Flink;
  *(__int64 *)((char *)v56 + 28) = *(_QWORD *)&v91[12];
  *((_DWORD *)v56 + 10) = dword_1C013B8C4;
  *((_BYTE *)v56 + 44) = 0;
  v61 = v87;
  *((_DWORD *)v56 + 9) = v59;
  *((_OWORD *)v56 + 3) = v60;
  memmove(v56 + 8, *(const void **)&v6[152].Common.RemoveEvent.Header.Lock, *(unsigned __int16 *)&v61->Common.Removed);
  RemlockSize[0] = v85 - 12;
  v63 = DpiMiracastSendAsyncUserModeRequest(
          DeviceContextFromName,
          v62,
          2295812,
          (int)v56 + 12,
          *(size_t *)RemlockSize,
          0LL,
          0,
          (__int64)DpiMiracastStartSessionRequestCallback,
          (__int64)v56,
          (PDEVICE_OBJECT)&DeviceObject,
          DeviceContextFromName + 424);
  v11 = v63;
  if ( v63 >= 0 )
  {
    *(_DWORD *)(DeviceContextFromName + 416) = 2;
    DpiMiracastBroadcastDeviceStateChange(DeviceContextFromName);
LABEL_138:
    *(_QWORD *)(DeviceContextFromName + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(DeviceContextFromName + 32);
    if ( v5 < 0 )
      IoReleaseRemoveLockEx(v6 + 2, (PVOID)DeviceContextFromName, 0x20u);
    goto LABEL_140;
  }
  v5 = -2147483647;
  v9 = 13;
  WdLogSingleEntry1(2LL, v63);
  *(_DWORD *)(DeviceContextFromName + 408) = *(_DWORD *)(DeviceContextFromName + 412);
  --dword_1C013B8C0;
  if ( !DeviceObject )
  {
    ExFreePoolWithTag(v56, 0);
    DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromName, DeviceContextFromName);
  }
LABEL_115:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000000LL) != 0 )
    McTemplateK0qqqz_EtwWriteTransfer(
      *(_DWORD *)(DeviceContextFromName + 200),
      (unsigned int)&EventMiracastStartMiracastSessionFail,
      v12,
      v9,
      v11,
      *(_DWORD *)(DeviceContextFromName + 200),
      *(_QWORD *)(DeviceContextFromName + 352));
  v64 = v77;
  v84 = v77;
  v78 = v83;
  v85 = v11;
  if ( v79 )
  {
    *(_DWORD *)(DeviceContextFromName + 416) = v5;
    *(_DWORD *)(DeviceContextFromName + 784) = v9;
    if ( v81 )
    {
      DpiMiracastDdiMiracastDestroyContext(v6, *(_QWORD *)(DeviceContextFromName + 448));
      *(_DWORD *)(DeviceContextFromName + 456) = -1;
      *(_QWORD *)(DeviceContextFromName + 448) = 0LL;
    }
    if ( v82 )
    {
      *(_QWORD *)(DeviceContextFromName + 472) = 0LL;
      KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
      *(_QWORD *)(DeviceContextFromName + 432) = 0LL;
      v6[101].Common.RemoveEvent.Header.WaitListHead.Flink = 0LL;
      v6[101].Common.RemoveEvent.Header.WaitListHead.Blink = 0LL;
      *(_QWORD *)(DeviceContextFromName + 376) = 0LL;
      *(_QWORD *)(DeviceContextFromName + 384) = 0LL;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      KeFlushQueuedDpcs();
    }
    v65 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 488);
    if ( v65 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v65);
      *(_QWORD *)(DeviceContextFromName + 488) = 0LL;
    }
    v66 = *(MIRACAST_CHUNK_LIST **)&v6[102].Common.RemoveEvent.Header.Lock;
    if ( v66 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v66);
      *(_QWORD *)&v6[102].Common.RemoveEvent.Header.Lock = 0LL;
    }
    Flink = (MIRACAST_CHUNK_LIST *)v6[102].Common.RemoveEvent.Header.WaitListHead.Flink;
    if ( Flink )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(Flink);
      v6[102].Common.RemoveEvent.Header.WaitListHead.Flink = 0LL;
    }
    Blink = (MIRACAST_CHUNK_LIST *)v6[102].Common.RemoveEvent.Header.WaitListHead.Blink;
    if ( Blink )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(Blink);
      v6[102].Common.RemoveEvent.Header.WaitListHead.Blink = 0LL;
    }
    v69 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 504);
    if ( v69 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v69);
      *(_QWORD *)(DeviceContextFromName + 504) = 0LL;
    }
    v70 = *(MIRACAST_CHUNK_LIST **)(DeviceContextFromName + 512);
    if ( v70 )
    {
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v70);
      *(_QWORD *)(DeviceContextFromName + 512) = 0LL;
    }
    KeSetEvent(*(PRKEVENT *)(DeviceContextFromName + 464), 0, 0);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000000LL) != 0 )
      McTemplateK0qqz_EtwWriteTransfer(
        v71,
        (unsigned int)&EventMiracastPerfTrackStartMiracastSessionFailed,
        v72,
        *(_DWORD *)(DeviceContextFromName + 440),
        *(_DWORD *)(DeviceContextFromName + 200),
        *(_QWORD *)(DeviceContextFromName + 352));
    v73 = TraceLoggingWriteMiracastSessionStart(DeviceContextFromName);
    LOBYTE(v73) = v78;
    v11 = v85;
    v64 = v84;
    v83 = v73;
  }
  if ( v64 )
    goto LABEL_138;
LABEL_140:
  if ( (_BYTE)v83 )
  {
    if ( LOBYTE(v6[15].Common.IoCount) )
      DpiEnableD3Requests(v6->Common.RemoveEvent.Header.WaitListHead.Blink);
    ExReleaseResourceLite(*(PERESOURCE *)&v6[5].Common.RemoveEvent.Header.Lock);
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx(v6 + 2, v6, 0x20u);
  }
  if ( v5 < 0 )
    DpiMiracastReleaseMiracastDeviceContext((int *)DeviceContextFromName, DeviceContextFromName);
  _InterlockedExchange64(&qword_1C013B4D8, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v5 < 0 )
    goto LABEL_147;
LABEL_149:
  *v90 = v11;
  if ( v7 )
  {
    *((_DWORD *)v7 + 12) = v11;
    *((_DWORD *)v7 + 13) = v5;
    *((_DWORD *)v7 + 14) = v9;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v7, 0x200000000uLL);
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v100 = 0LL;
    v96[0] = 6;
    v97 = 0LL;
    v98 = 0LL;
    v96[1] = 64;
    v99 = 0LL;
    v101 = 69;
    v102 = v11;
    v103 = v5;
    v104 = v9;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v96, 0x200000000uLL);
  }
  return (unsigned int)v5;
}
