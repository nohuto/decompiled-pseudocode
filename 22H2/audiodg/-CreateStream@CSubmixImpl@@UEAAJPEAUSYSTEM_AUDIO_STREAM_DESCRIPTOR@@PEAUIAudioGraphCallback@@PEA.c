/*
 * XREFs of ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007AD0
 * Callers:
 *     ?CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001BB90 (-CreateStream@CProcessSubmix@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@.c)
 *     ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14004D560 (-CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PE.c)
 * Callees:
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x1400016E8 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002194 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x1400041C0 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140007354 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140009E30 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B8B0 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000CA40 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000F210 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J@Z @ 0x140012640 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInsta.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x14001759C (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400195DC (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUICrossProce.c)
 *     ?ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x14001ADA8 (-ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     memset_0 @ 0x14001DF78 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14003DC3C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DD6C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14003DFA0 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140040EDC (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?Add@CAudioHistoryBufferManager@@QEAAJ_KPEAUICrossProcessMemory@@@Z @ 0x14004F8B0 (-Add@CAudioHistoryBufferManager@@QEAAJ_KPEAUICrossProcessMemory@@@Z.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x14004FD84 (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CSubmixImpl::CreateStream(
        CSubmixImpl *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        struct _RTL_CRITICAL_SECTION *a4)
{
  char *v8; // rbx
  struct _RTL_CRITICAL_SECTION *v9; // r12
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  void (__fastcall ***v15)(_QWORD, GUID *, struct ISubmixInternal **); // rcx
  struct ISubmixInternal *v16; // r12
  const struct CPipeInstance *v17; // rbx
  CStreamInstance *v18; // rdi
  __int64 v19; // r9
  int v20; // eax
  CStreamInstance *v21; // rdi
  __int64 v22; // r12
  struct ATL::CAtlPlex *v23; // r8
  int v24; // edx
  _QWORD *v25; // rcx
  int i; // edx
  __int64 *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  LONG *p_LockCount; // rbx
  __int64 v32; // r9
  _OWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // r9
  unsigned int v37; // edx
  unsigned int v38; // edx
  struct _RTL_CRITICAL_SECTION *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned int v43; // edx
  unsigned int v44; // edx
  CStreamInstance *v45; // rcx
  int HistoryBufferManager; // eax
  struct ISubmixInternal *v47; // rdx
  int v48; // eax
  int v49; // eax
  int v50; // [rsp+20h] [rbp-238h]
  int v51; // [rsp+20h] [rbp-238h]
  int v52; // [rsp+20h] [rbp-238h]
  int v53; // [rsp+20h] [rbp-238h]
  CStreamInstance *v54; // [rsp+30h] [rbp-228h] BYREF
  CPipeInstance *v55; // [rsp+38h] [rbp-220h] BYREF
  char *v56; // [rsp+40h] [rbp-218h]
  struct ISubmixInternal *v57; // [rsp+48h] [rbp-210h] BYREF
  struct ICrossProcessMemory *v58; // [rsp+50h] [rbp-208h] BYREF
  struct ICrossProcessEvent *v59; // [rsp+58h] [rbp-200h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-1F8h]
  LPCRITICAL_SECTION v61[5]; // [rsp+68h] [rbp-1F0h] BYREF
  struct _RTL_CRITICAL_SECTION *v62; // [rsp+90h] [rbp-1C8h]
  struct ISubmixInternal **v63; // [rsp+98h] [rbp-1C0h]
  CStreamInstance **v64; // [rsp+A0h] [rbp-1B8h]
  char v65; // [rsp+A8h] [rbp-1B0h]
  char *v66; // [rsp+B0h] [rbp-1A8h]
  _BYTE v67[296]; // [rsp+C0h] [rbp-198h] BYREF
  __int128 v68; // [rsp+1E8h] [rbp-70h]
  __int128 v69; // [rsp+1F8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+0h]

  v61[3] = (LPCRITICAL_SECTION)a2;
  v61[4] = a4;
  v62 = a4;
  v55 = 0LL;
  v8 = (char *)this + 176;
  v56 = (char *)this + 176;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v66 = v8;
  LODWORD(a4[23].SpinCount) = 0;
  if ( !*((_BYTE *)this + 313) )
  {
    v10 = ValidateStreamDescriptor(a2);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FB,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v10,
        v50);
      if ( !v56 )
      {
LABEL_49:
        ATL::CAutoPtr<CPipeInstance>::Free(&v55);
        return (unsigned int)v11;
      }
      goto LABEL_47;
    }
    v68 = *((_OWORD *)a2 + 3);
    v69 = v68;
    EtwEventActivityIdControl(4LL, &v69);
    if ( *((_QWORD *)this + 29) != *((_QWORD *)a2 + 4) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x201,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)0x80070057LL,
        v50);
      EtwEventActivityIdControl(4LL, &v69);
      if ( !v56 )
        goto LABEL_57;
      goto LABEL_56;
    }
    v12 = *(_QWORD *)((char *)a2 + 164) - *((_QWORD *)this + 30);
    if ( !v12 )
      v12 = *(_QWORD *)((char *)a2 + 172) - *((_QWORD *)this + 31);
    if ( v12 )
    {
      v41 = *(_QWORD *)((char *)a2 + 164) - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( !v41 )
        v41 = *(_QWORD *)((char *)a2 + 172) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( v41 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x207,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)0x80070057LL,
          v50);
        EtwEventActivityIdControl(4LL, &v69);
        if ( !v56 )
        {
LABEL_57:
          ATL::CAutoPtr<CPipeInstance>::Free(&v55);
          return 2147942487LL;
        }
LABEL_56:
        LeaveCriticalSection(v9);
        goto LABEL_57;
      }
    }
    v11 = CPipeInstance::CreateStreamPipeInstance(
            *((struct IDeviceGraphObjectCache **)this + 33),
            a2,
            *((struct CPipeInstance **)this + 3),
            *((struct tWAVEFORMATEX **)this + 28),
            (struct SYSTEM_AUDIO_STREAM *)a4,
            &v55);
    if ( v11 < 0 )
    {
      v42 = 526LL;
    }
    else
    {
      v11 = CPipeInstance::Initialize(v55);
      if ( v11 < 0 )
      {
        v42 = 527LL;
      }
      else
      {
        v11 = CPipeInstance::ConnectAPOs(v55, a3);
        if ( v11 >= 0 )
        {
          v59 = 0LL;
          v58 = 0LL;
          v13 = CPipeInstance::CreateStreamInstance(v55, a2, &v58, &v59, (struct SYSTEM_AUDIO_STREAM *)a4);
          v11 = v13;
          if ( v13 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x214,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
              (const char *)(unsigned int)v13,
              v52);
          }
          else
          {
            v54 = 0LL;
            v53 = (int)v55;
            v14 = CStreamInstance::CreateStreamInstance(&v54, *((unsigned int *)a2 + 3), *(unsigned int *)a2);
            v11 = v14;
            if ( v14 >= 0 )
            {
              v55 = 0LL;
              v15 = (void (__fastcall ***)(_QWORD, GUID *, struct ISubmixInternal **))*((_QWORD *)this + 38);
              if ( v15 )
              {
                (**v15)(v15, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, &v57);
                v16 = v57;
              }
              else
              {
                v16 = 0LL;
                v57 = 0LL;
              }
              if ( v16 )
              {
                v17 = (const struct CPipeInstance *)*((_QWORD *)this + 34);
                v18 = v54;
                (*(void (__fastcall **)(CSubmixImpl *))(*(_QWORD *)this + 64LL))(this);
                v20 = CStreamInstance::ConnectToRightSubmix(v18, v16, v17, v19);
                v11 = v20;
                if ( v20 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x226,
                    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                    (const char *)(unsigned int)v20,
                    v53);
                  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v57);
                  v45 = v54;
                  if ( !v54 )
                  {
LABEL_72:
                    v54 = 0LL;
                    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v59);
                    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v58);
                    EtwEventActivityIdControl(4LL, &v69);
                    if ( !v56 )
                      goto LABEL_49;
                    v40 = lpCriticalSection;
                    goto LABEL_48;
                  }
LABEL_71:
                  CStreamInstance::`scalar deleting destructor'(v45, v44);
                  goto LABEL_72;
                }
              }
              v63 = &v57;
              v64 = &v54;
              v65 = 1;
              if ( !*((_QWORD *)a2 + 33) )
                goto LABEL_17;
              v61[0] = 0LL;
              HistoryBufferManager = GetHistoryBufferManager((struct CAudioHistoryBufferManager **)v61);
              v11 = HistoryBufferManager;
              if ( HistoryBufferManager >= 0 )
              {
                v48 = CAudioHistoryBufferManager::Add(v61[0], *((_QWORD *)a2 + 33), v58);
                v11 = v48;
                if ( v48 >= 0 )
                {
LABEL_17:
                  v61[2] = (LPCRITICAL_SECTION)((char *)this + 32);
                  v61[1] = (LPCRITICAL_SECTION)((char *)this + 32);
                  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
                  v61[0] = (LPCRITICAL_SECTION)((char *)this + 32);
                  v21 = v54;
                  v22 = *((_QWORD *)this + 9);
                  if ( !*((_QWORD *)this + 13) )
                  {
                    v23 = ATL::CAtlPlex::Create(
                            (struct ATL::CAtlPlex **)this + 12,
                            *((unsigned int *)this + 28),
                            0x18uLL);
                    if ( !v23 )
                      ATL::AtlThrowImpl(-2147024882);
                    v24 = *((_DWORD *)this + 28);
                    v25 = (_QWORD *)((char *)v23 + 16 * (v24 - 1) + 8 * (unsigned int)(v24 - 1) + 8);
                    for ( i = v24 - 1; i >= 0; --i )
                    {
                      *v25 = *((_QWORD *)this + 13);
                      *((_QWORD *)this + 13) = v25;
                      v25 -= 3;
                    }
                  }
                  v27 = (__int64 *)*((_QWORD *)this + 13);
                  v28 = *v27;
                  v27[2] = (__int64)v21;
                  *((_QWORD *)this + 13) = v28;
                  v27[1] = 0LL;
                  *v27 = v22;
                  ++*((_QWORD *)this + 11);
                  v29 = *((_QWORD *)this + 9);
                  if ( v29 )
                    *(_QWORD *)(v29 + 8) = v27;
                  else
                    *((_QWORD *)this + 10) = v27;
                  *((_QWORD *)this + 9) = v27;
                  if ( this != (CSubmixImpl *)-32LL )
                    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
                  a4->SpinCount = *((_QWORD *)v54 + 1);
                  v54 = 0LL;
                  v65 = 0;
                  v30 = (*(__int64 (__fastcall **)(struct ICrossProcessMemory *, ULONG_PTR *))(*(_QWORD *)v58 + 40LL))(
                          v58,
                          &a4[23].SpinCount);
                  v11 = v30;
                  if ( v30 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x24C,
                      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                      (const char *)(unsigned int)v30,
                      v53);
                  }
                  else
                  {
                    p_LockCount = &v62[16].LockCount;
                    if ( !v59 )
                    {
                      memset_0(v67, 0, sizeof(v67));
                      v33 = v67;
                      v34 = 2LL;
                      do
                      {
                        *(_OWORD *)p_LockCount = *v33;
                        *((_OWORD *)p_LockCount + 1) = v33[1];
                        *((_OWORD *)p_LockCount + 2) = v33[2];
                        *((_OWORD *)p_LockCount + 3) = v33[3];
                        *((_OWORD *)p_LockCount + 4) = v33[4];
                        *((_OWORD *)p_LockCount + 5) = v33[5];
                        *((_OWORD *)p_LockCount + 6) = v33[6];
                        p_LockCount += 32;
                        *((_OWORD *)p_LockCount - 1) = v33[7];
                        v33 += 8;
                        --v34;
                      }
                      while ( v34 );
                      *(_OWORD *)p_LockCount = *v33;
                      *((_OWORD *)p_LockCount + 1) = v33[1];
                      *((_QWORD *)p_LockCount + 4) = *((_QWORD *)v33 + 4);
                      goto LABEL_30;
                    }
                    v49 = (*(__int64 (__fastcall **)(struct ICrossProcessEvent *, LONG *))(*(_QWORD *)v59 + 32LL))(
                            v59,
                            &v62[16].LockCount);
                    v11 = v49;
                    if ( v49 >= 0 )
                    {
LABEL_30:
                      LOBYTE(v32) = 1;
                      TrackSystemEffectBehavior(
                        *((_QWORD *)a2 + 19),
                        1LL,
                        1LL,
                        v32,
                        &GUID_00000000_0000_0000_0000_000000000000,
                        LODWORD(FLOAT_1_0));
                      LOBYTE(v35) = 1;
                      TrackSystemEffectBehavior(
                        *((_QWORD *)a2 + 19),
                        2LL,
                        1LL,
                        v35,
                        &GUID_00000000_0000_0000_0000_000000000000,
                        LODWORD(FLOAT_1_0));
                      LOBYTE(v36) = 1;
                      TrackSystemEffectBehavior(
                        *((_QWORD *)a2 + 19),
                        3LL,
                        1LL,
                        v36,
                        &GUID_00000000_0000_0000_0000_000000000000,
                        LODWORD(FLOAT_1_0));
                      PublishDeviceGraphWnfState();
                      if ( v57 )
                        (*(void (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)v57 + 16LL))(v57);
                      if ( v54 )
                        CStreamInstance::`scalar deleting destructor'(v54, v37);
                      v54 = 0LL;
                      if ( v59 )
                        (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v59 + 16LL))(v59);
                      if ( v58 )
                        (*(void (__fastcall **)(struct ICrossProcessMemory *))(*(_QWORD *)v58 + 16LL))(v58);
                      EtwEventActivityIdControl(4LL, &v69);
                      if ( lpCriticalSection )
                        LeaveCriticalSection(lpCriticalSection);
                      if ( v55 )
                        CPipeInstance::`scalar deleting destructor'(v55, v38);
                      return 0LL;
                    }
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x253,
                      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                      (const char *)(unsigned int)v49,
                      v53);
                  }
LABEL_77:
                  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v57);
                  v45 = v54;
                  if ( !v54 )
                    goto LABEL_72;
                  goto LABEL_71;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x236,
                  (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                  (const char *)(unsigned int)v48,
                  v53);
                v47 = v57;
                if ( !v57 )
                  goto LABEL_77;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x234,
                  (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                  (const char *)(unsigned int)HistoryBufferManager,
                  v53);
                v47 = v57;
                if ( !v57 )
                  goto LABEL_77;
              }
              CStreamInstance::DisconnectFromRightSubmix(v54, v47);
              goto LABEL_77;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x21E,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
              (const char *)(unsigned int)v14,
              v53);
            if ( v54 )
              CStreamInstance::`scalar deleting destructor'(v54, v43);
            v54 = 0LL;
          }
          wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v59);
          wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v58);
          goto LABEL_63;
        }
        v42 = 528LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v42,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v11,
      v51);
LABEL_63:
    EtwEventActivityIdControl(4LL, &v69);
    if ( !v56 )
      goto LABEL_49;
LABEL_47:
    v40 = v9;
LABEL_48:
    LeaveCriticalSection(v40);
    goto LABEL_49;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F8,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)0x8000FFFFLL,
    v50);
  if ( v8 )
    LeaveCriticalSection(v9);
  ATL::CAutoPtr<CPipeInstance>::Free(&v55);
  return 2147549183LL;
}
