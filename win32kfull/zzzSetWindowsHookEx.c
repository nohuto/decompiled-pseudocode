// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowsHookEx(__int64 a1, const char *a2, __int64 a3, int a4, __int64 a5, char a6, _DWORD *a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  char v10; // di
  int v11; // edx
  int v12; // r8d
  PDEVICE_OBJECT v13; // r9
  bool v14; // bl
  __int16 v15; // cx
  struct tagTHREADINFO *v16; // rax
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // r15
  _QWORD *v19; // rsi
  char v20; // al
  int v21; // edx
  int v22; // r8d
  bool v23; // bl
  PDEVICE_OBJECT v24; // r10
  char v25; // bl
  char v26; // r8
  unsigned __int16 v27; // cx
  char *v28; // rbx
  int v29; // edx
  int v30; // r8d
  bool v31; // bl
  ACCESS_MASK v32; // ebx
  bool v33; // zf
  _QWORD *v34; // rbx
  __int64 v35; // r8
  __int64 v36; // rsi
  int HmodTableIndex; // eax
  int v38; // edx
  int v39; // r8d
  bool v40; // bl
  char v41; // bl
  char v42; // bl
  int v43; // edx
  __int64 *v44; // r9
  PRKPROCESS *v45; // rcx
  int v46; // edx
  _DWORD *v47; // r8
  __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // edx
  int v51; // r8d
  _QWORD *v52; // r14
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  _UNKNOWN **v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  char v61; // [rsp+20h] [rbp-188h]
  __int16 v62; // [rsp+30h] [rbp-178h]
  char v63; // [rsp+61h] [rbp-147h]
  PRKPROCESS **v64; // [rsp+68h] [rbp-140h]
  __int64 v66; // [rsp+78h] [rbp-130h] BYREF
  int v67; // [rsp+80h] [rbp-128h]
  int v68; // [rsp+84h] [rbp-124h]
  __int64 v69; // [rsp+88h] [rbp-120h]
  int v70; // [rsp+90h] [rbp-118h]
  int v71; // [rsp+98h] [rbp-110h]
  _DWORD *v72; // [rsp+A0h] [rbp-108h]
  struct tagTHREADINFO *v73; // [rsp+A8h] [rbp-100h]
  __int128 v74; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v75; // [rsp+C0h] [rbp-E8h]
  __int64 v76; // [rsp+C8h] [rbp-E0h]
  struct tagTHREADINFO *v77; // [rsp+D0h] [rbp-D8h]
  __int64 v78; // [rsp+E0h] [rbp-C8h]
  _QWORD *v79; // [rsp+E8h] [rbp-C0h]
  __int64 v80; // [rsp+F0h] [rbp-B8h]
  __int64 v81; // [rsp+F8h] [rbp-B0h]
  _BYTE v82[48]; // [rsp+108h] [rbp-A0h] BYREF
  _BYTE v83[48]; // [rsp+138h] [rbp-70h] BYREF

  v7 = a4;
  v8 = a3;
  v69 = a1;
  v78 = a1;
  v80 = a3;
  v71 = a4;
  v72 = a7;
  v74 = 0LL;
  v75 = 0LL;
  if ( (unsigned int)(a4 + 1) > 0xF )
  {
    UserSetLastError(1426);
    v24 = WPP_GLOBAL_Control;
    v25 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v25 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v27 = 10;
LABEL_192:
    WPP_RECORDER_AND_TRACE_SF_D(
      (__int64)v24->AttachedDevice,
      v25,
      v26,
      (__int64)gFullLog,
      3u,
      0xCu,
      v27,
      (__int64)&WPP_1013231a1d9e37ebe4f7699b849e7296_Traceguids,
      v7);
    return 0LL;
  }
  v10 = byte_1C0319261[a4];
  if ( !a5 )
  {
    UserSetLastError(1427);
    v13 = WPP_GLOBAL_Control;
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = 11;
    goto LABEL_112;
  }
  v16 = PtiCurrentShared((__int64)byte_1C0319261);
  v18 = v16;
  v77 = v16;
  v73 = v16;
  if ( !v8 )
  {
    if ( !a1 && (v10 & 0x24) == 0 )
    {
      UserSetLastError(1428);
      v13 = WPP_GLOBAL_Control;
      v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v62 = 12;
      goto LABEL_113;
    }
    v19 = (_QWORD *)((char *)v16 + 424);
    v64 = (PRKPROCESS **)((char *)v16 + 424);
LABEL_23:
    v20 = v10;
    goto LABEL_24;
  }
  if ( (v10 & 2) == 0 )
  {
    UserSetLastError(1429);
    v24 = WPP_GLOBAL_Control;
    v25 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v25 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v27 = 13;
    goto LABEL_192;
  }
  if ( *(_QWORD *)(v8 + 456) != *((_QWORD *)v16 + 57) )
  {
    UserSetLastError(5);
    v13 = WPP_GLOBAL_Control;
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v11 = 14;
    v62 = 14;
    goto LABEL_113;
  }
  v28 = (char *)v16 + 424;
  v19 = (_QWORD *)((char *)v16 + 424);
  v64 = (PRKPROCESS **)((char *)v16 + 424);
  if ( *((_QWORD *)v16 + 53) == *(_QWORD *)(v8 + 424) )
    goto LABEL_23;
  if ( !a1 && (v10 & 0x24) == 0 )
  {
    UserSetLastError(5);
    v13 = WPP_GLOBAL_Control;
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v62 = 15;
    goto LABEL_113;
  }
  if ( !(unsigned __int8)Enforced(v17) )
  {
    v17 = *(_QWORD *)(v8 + 424);
    if ( (*(_DWORD *)(v17 + 772) != *(_DWORD *)(*(_QWORD *)v28 + 772LL)
       || *(_DWORD *)(v17 + 776) != *(_DWORD *)(*(_QWORD *)v28 + 776LL))
      && (*(_DWORD *)(v8 + 488) & 0x400000) == 0 )
    {
      UserSetLastError(5);
      v13 = WPP_GLOBAL_Control;
      v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v62 = 16;
      goto LABEL_113;
    }
  }
  v64 = (PRKPROCESS **)((char *)v18 + 424);
  v20 = v10;
  if ( (*(_DWORD *)(v8 + 488) & 0xC) != 0 )
  {
    v64 = (PRKPROCESS **)((char *)v18 + 424);
    if ( (v10 & 0x10) == 0 )
    {
      UserSetLastError(1458);
      v31 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v29) = v31;
        LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_l(WPP_GLOBAL_Control->AttachedDevice, v29, v30, (_DWORD)WPP_GLOBAL_Control);
      }
      return 0LL;
    }
  }
LABEL_24:
  v79 = v19;
  v63 = v20 & 4;
  LOBYTE(v17) = v20 & 4;
  v68 = v17;
  v70 = v17;
  if ( (v20 & 4) != 0 )
  {
    v66 = 0xFFFFFFFF00004000uLL;
    if ( *(int *)(*v19 + 12LL) >= 0 && !(unsigned __int8)CheckAccess(*v19 + 864LL, &v66) )
    {
      UserSetLastError(5);
      v23 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = v23;
        LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v21,
          v22,
          (_DWORD)WPP_GLOBAL_Control,
          3,
          12,
          18,
          (__int64)&WPP_1013231a1d9e37ebe4f7699b849e7296_Traceguids);
      }
      EtwTraceUIPISystemError(*v19, 0LL, 4LL);
      return 0LL;
    }
  }
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 == 1 )
      v32 = 32;
    else
      v32 = 8;
  }
  else
  {
    v32 = 16;
  }
  if ( !RtlAreAllAccessesGranted(*((_DWORD *)v18 + 224), v32) )
  {
    UserSetLastError(5);
    v13 = WPP_GLOBAL_Control;
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = 20;
    goto LABEL_112;
  }
  v33 = v32 == 8;
  v34 = (_QWORD *)((char *)v18 + 456);
  if ( !v33 && (*(_DWORD *)(*(_QWORD *)(*v34 + 40LL) + 64LL) & 4) != 0 )
  {
    UserSetLastError(1459);
    v13 = WPP_GLOBAL_Control;
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v15 = 21;
LABEL_112:
    v62 = v15;
LABEL_113:
    v61 = 3;
LABEL_123:
    LOBYTE(v11) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      v13->AttachedDevice,
      v11,
      v12,
      (_DWORD)v13,
      v61,
      12,
      v62,
      (__int64)&WPP_1013231a1d9e37ebe4f7699b849e7296_Traceguids);
    return 0LL;
  }
  DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>(v83);
  LOBYTE(v35) = 5;
  v66 = HMAllocObject(v18, *v34, v35);
  v36 = v66;
  v76 = v66;
  v81 = v66;
  DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v83);
  if ( !v36 )
  {
    v13 = WPP_GLOBAL_Control;
    v14 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v62 = 22;
    v61 = 2;
    goto LABEL_123;
  }
  *(_DWORD *)(v36 + 68) = -1;
  if ( v69 )
  {
    HmodTableIndex = GetHmodTableIndex(a2);
    *(_DWORD *)(v36 + 68) = HmodTableIndex;
    if ( HmodTableIndex == -1 )
    {
      UserSetLastError(126);
      if ( (unsigned int)Feature_Servicing_HooksTracingInvalidDeref__private_IsEnabledDeviceUsage() )
      {
        v40 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v38) = v40;
          LOBYTE(v39) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v38,
            v39,
            (_DWORD)WPP_GLOBAL_Control,
            3,
            12,
            23,
            (__int64)&WPP_1013231a1d9e37ebe4f7699b849e7296_Traceguids);
        }
      }
      else
      {
        v41 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_S(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v41,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)WPP_GLOBAL_Control,
            3u,
            0xCu,
            0x18u,
            (__int64)&WPP_1013231a1d9e37ebe4f7699b849e7296_Traceguids,
            a2);
      }
      DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::ObjectLock<>(v82);
      HMFreeObject(v36);
      DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v82);
      return 0LL;
    }
    if ( HmodTableIndex >= 0 )
      AddHmodDependency((unsigned int)HmodTableIndex);
  }
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::ObjectLock<>(v82);
  v42 = 1;
  v43 = 1 << (v7 + 1);
  if ( v8 )
  {
    v44 = (__int64 *)(v8 + 8 * (v7 + 116));
    *(_DWORD *)(v8 + 680) |= v43;
    if ( *(_QWORD *)(v8 + 480) )
    {
      v45 = *(PRKPROCESS **)(v8 + 424);
      if ( v45 == *v64 )
      {
        v46 = 0;
      }
      else
      {
        KeAttachProcess(*v45);
        v46 = 1;
        v44 = (__int64 *)(v8 + 8 * (v7 + 116));
      }
      v67 = v46;
      *(_DWORD *)(*(_QWORD *)(v8 + 480) + 56LL) = *(_DWORD *)(v8 + 680);
      if ( v46 )
      {
        KeDetachProcess();
        v44 = (__int64 *)(v8 + 8 * (v7 + 116));
      }
    }
    v47 = (_DWORD *)(v81 + 64);
    v48 = v66;
  }
  else
  {
    v44 = (__int64 *)(*((_QWORD *)v18 + 58) + 8 * (v7 + 6));
    v47 = (_DWORD *)(v36 + 64);
    *(_DWORD *)(v36 + 64) |= 1u;
    *(_DWORD *)(**((_QWORD **)v18 + 58) + 16LL) |= v43;
    v8 = 0LL;
    v48 = v36;
  }
  *(_QWORD *)(v48 + 72) = v8;
  *v47 |= a6 & 0x42;
  *(_DWORD *)(v36 + 48) = v7;
  *(_QWORD *)(v36 + 56) = a5 - v69;
  v49 = *v44;
  *(_QWORD *)(v36 + 40) = *v44;
  if ( v72 )
    *v72 = v49 == 0;
  *v44 = v36;
  DomainShared<>::DomainExclusive<DLT_HOOK>::ObjectLock<>::~ObjectLock<>(v82);
  if ( (_BYTE)v68 )
  {
    v52 = (_QWORD *)((char *)v18 + 416);
    *(_QWORD *)&v74 = *((_QWORD *)v18 + 52);
    *((_QWORD *)v18 + 52) = &v74;
    *((_QWORD *)&v74 + 1) = v36;
    HMLockObject(v36);
    if ( !(unsigned int)zzzJournalAttach(v18, 1) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v42 = 0;
      }
      v56 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v55) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v42,
          v55,
          (__int64)WPP_GLOBAL_Control,
          3u,
          0xCu,
          0x19u,
          (__int64)&WPP_1013231a1d9e37ebe4f7699b849e7296_Traceguids,
          v36);
      if ( ThreadUnlock1(v56, v53, v55) )
        zzzUnhookWindowsHookEx((struct tagHOOK *)v36);
      return 0LL;
    }
    v36 = ThreadUnlock1(v54, v53, v55);
    if ( !v36 )
      return 0LL;
  }
  else
  {
    v52 = (_QWORD *)((char *)v73 + 416);
  }
  if ( (*(_DWORD *)(v36 + 64) & 1) != 0 && (v10 & 0x10) != 0 )
  {
    *((_DWORD *)v18 + 122) |= 0x40000u;
    KeSetPriorityThread(*(PKTHREAD *)v18, 14);
    if ( v63 )
    {
      *(_QWORD *)&v74 = *v52;
      *v52 = &v74;
      *((_QWORD *)&v74 + 1) = v36;
      HMLockObject(v36);
      GenerateMouseMove(0LL);
      v36 = ThreadUnlock1(v58, v57, v59);
      if ( (_DWORD)v7 == 1 )
        gppiInputProvider = *v64;
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v42 = 0;
  }
  if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v50) = v42;
    LOBYTE(v51) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qDD(WPP_GLOBAL_Control->AttachedDevice, v50, v51, (_DWORD)gFullLog);
  }
  return v36;
}
