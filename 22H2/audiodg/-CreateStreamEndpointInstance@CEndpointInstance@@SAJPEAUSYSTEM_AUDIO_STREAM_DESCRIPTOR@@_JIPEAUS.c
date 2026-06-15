/*
 * XREFs of ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x140009780
 * Callers:
 *     ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400196E4 (-CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAPEAUICr.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002194 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140007300 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemoryManager@@AEAPEBG@Z @ 0x14001156C (--$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@W.c)
 *     ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140016AD8 (-privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PE.c)
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140018470 (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CEndpointInstance::CreateStreamEndpointInstance(
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1,
        int a2,
        unsigned int a3,
        struct SYSTEM_AUDIO_STREAM *a4,
        struct ICrossProcessMemory **a5,
        struct ICrossProcessEvent **a6,
        struct CEndpointInstance **a7)
{
  __int64 v9; // r13
  BOOL v10; // r14d
  __int64 v11; // r8
  unsigned int v12; // eax
  int v13; // eax
  double v14; // xmm0_8
  unsigned int v15; // edx
  double v16; // xmm0_8
  unsigned int v17; // eax
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  int started; // edi
  void (__fastcall ***v21)(_QWORD, __int64); // rcx
  const IID *v22; // rcx
  __int64 v23; // rax
  HRESULT v24; // eax
  __int64 v25; // r8
  int v26; // eax
  struct IUnknown *v27; // rbx
  int v28; // eax
  struct CEndpointInstance *v29; // rax
  struct CEndpointInstance *v30; // rdi
  void (__fastcall ***v31)(_QWORD, __int64); // rsi
  void (__fastcall ***v32)(_QWORD, __int64); // rcx
  void *v33; // rcx
  unsigned __int64 v35; // r9
  __int64 v36; // rdx
  HRESULT v37; // eax
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rdx
  int v41; // r11d
  __int64 v42; // rdx
  int ppv; // [rsp+20h] [rbp-B1h]
  struct IUnknown *v44; // [rsp+80h] [rbp-51h] BYREF
  void (__fastcall ***v45)(_QWORD, __int64); // [rsp+88h] [rbp-49h] BYREF
  LPVOID v46; // [rsp+90h] [rbp-41h] BYREF
  __int64 v47[2]; // [rsp+98h] [rbp-39h] BYREF
  char v48; // [rsp+A8h] [rbp-29h]
  GUID v49; // [rsp+B0h] [rbp-21h] BYREF
  struct HandleSendReceiveServer *v50[2]; // [rsp+C0h] [rbp-11h] BYREF
  char v51; // [rsp+D0h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+47h]
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v53; // [rsp+120h] [rbp+4Fh] BYREF
  LPVOID v54; // [rsp+128h] [rbp+57h] BYREF

  v53 = a1;
  v47[1] = (__int64)&v53;
  v48 = 1;
  v9 = *((_QWORD *)a1 + 16);
  v10 = *(_DWORD *)a1 != 0;
  v11 = *(unsigned __int16 *)(v9 + 12);
  v12 = *(_DWORD *)(v9 + 8);
  if ( (_DWORD)v11 == 4 )
    v13 = v12 >> 2;
  else
    v13 = v12 / (unsigned int)v11;
  v14 = (double)a2 * (double)v13 / 10000000.0 + 0.5;
  if ( v14 >= 4294967295.0 )
  {
    v42 = 295LL;
    goto LABEL_77;
  }
  v15 = (int)v14 + a3;
  if ( v15 < (int)v14 )
  {
    v42 = 296LL;
    goto LABEL_77;
  }
  v16 = (double)(int)*((_QWORD *)a1 + 3) * (double)v13 / 10000000.0 + 0.5;
  if ( v16 >= 4294967295.0 )
  {
    v42 = 300LL;
    goto LABEL_77;
  }
  v17 = (int)v16;
  if ( *((_DWORD *)a1 + 2) != 1 && v15 > v17 )
    v17 = v15;
  v18 = v17 * v11;
  if ( v18 > 0xFFFFFFFF )
  {
    v42 = 309LL;
LABEL_77:
    started = -2147024362;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v42,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)0x80070216LL,
      ppv);
    goto LABEL_41;
  }
  v47[0] = *((_QWORD *)a1 + 2);
  v45 = 0LL;
  v46 = 0LL;
  if ( (*((_DWORD *)a1 + 34) & 0x40000) == 0 )
    goto LABEL_19;
  v19 = *((_QWORD *)a1 + 10) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( !v19 )
    v19 = *((_QWORD *)a1 + 11) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v19 )
  {
    v46 = 0LL;
    v37 = CoCreateInstance((const IID *const)a1 + 5, 0LL, 0x17u, &GUID_c4e70434_407d_416b_94be_9717b79065fb, &v46);
    started = v37;
    if ( v37 >= 0 )
    {
      v37 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v46 + 24LL))(v46, (__int64)v53 + 96);
      started = v37;
      if ( v37 >= 0 )
      {
LABEL_18:
        a1 = v53;
LABEL_19:
        v54 = 0LL;
        v22 = (const IID *)((char *)a1 + 64);
        v23 = *(_QWORD *)&v22->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
        if ( *(_QWORD *)&v22->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
          v23 = *(_QWORD *)v22->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
        v54 = 0LL;
        if ( v23 )
        {
          v24 = CoCreateInstance(v22, 0LL, 0x17u, &GUID_6b7f3699_f0ab_4184_bfd4_383e1520e0c9, &v54);
          started = v24;
          if ( v24 >= 0 )
          {
            v24 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v54 + 24LL))(v54, (__int64)v53 + 96);
            started = v24;
            if ( v24 >= 0 )
            {
LABEL_23:
              if ( v10 )
              {
                v44 = 0LL;
                v49 = (GUID)*((_OWORD *)v53 + 3);
                *(GUID *)v50 = GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6;
                v39 = privateCreateCrossProcessEndpoint(v50, &v49, v25, &v44);
                started = v39;
                if ( v39 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x17B,
                    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
                    (const char *)(unsigned int)v39,
                    ppv);
                  v27 = v44;
                  goto LABEL_33;
                }
                v47[0] = 0LL;
                v27 = v44;
                v28 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v44->lpVtbl->QueryInterface)(
                        v44,
                        &GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572,
                        v47);
                started = v28;
                if ( v28 >= 0 )
                {
                  v41 = 0;
                  if ( *((_QWORD *)v53 + 33) || *((_QWORD *)v53 + 35) )
                    v41 = (int)((double)(int)*((_QWORD *)v53 + 34) * (double)*(int *)(v9 + 4) / 10000000.0 + 0.5);
                  ppv = v41;
                  v28 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v47[0] + 24LL))(
                          v47[0],
                          v9,
                          (unsigned int)v18,
                          a3);
                  started = v28;
                  if ( v28 >= 0 )
                  {
                    *(GUID *)a4 = GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538;
                    *((_DWORD *)a4 + 236) = 0;
                    *((_DWORD *)a4 + 4) = v18;
                    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v47);
LABEL_29:
                    v29 = (struct CEndpointInstance *)operator new(
                                                        0x20uLL,
                                                        (const struct std::nothrow_t *)&std::nothrow);
                    v30 = v29;
                    v47[0] = (__int64)v29;
                    if ( v29 )
                    {
                      v31 = v45;
                      *(_QWORD *)v29 = 0LL;
                      *((_QWORD *)v29 + 3) = 0LL;
                      if ( *(struct IUnknown **)v29 != v27 )
                        ATL::AtlComPtrAssign((struct IUnknown **)v29, v27);
                      *((_QWORD *)v30 + 2) = v31;
                      *((_QWORD *)v30 + 1) = 0LL;
                      v45 = 0LL;
                      *a7 = v30;
                      started = 0;
                    }
                    else
                    {
                      started = -2147024882;
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x1A8,
                        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
                        (const char *)0x8007000ELL,
                        ppv);
                    }
                    goto LABEL_33;
                  }
                  v40 = 404LL;
                }
                else
                {
                  v40 = 382LL;
                }
              }
              else
              {
                v44 = 0LL;
                *(_OWORD *)v50 = *((_OWORD *)v53 + 3);
                v49 = GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561;
                v26 = privateCreateCrossProcessEndpoint(&v49, v50, v25, &v44);
                started = v26;
                if ( v26 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x15D,
                    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
                    (const char *)(unsigned int)v26,
                    ppv);
                  v27 = v44;
LABEL_33:
                  if ( v27 )
                    ((void (__fastcall *)(struct IUnknown *))v27->lpVtbl->Release)(v27);
                  goto LABEL_35;
                }
                v47[0] = 0LL;
                v27 = v44;
                v28 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v44->lpVtbl->QueryInterface)(
                        v44,
                        &GUID_8a2ae4dd_6b2e_4225_9174_9d02b5e8f572,
                        v47);
                started = v28;
                if ( v28 < 0 )
                {
                  v40 = 352LL;
                }
                else
                {
                  ppv = 0;
                  v28 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v47[0] + 24LL))(
                          v47[0],
                          v9,
                          (unsigned int)v18,
                          a3);
                  started = v28;
                  if ( v28 >= 0 )
                  {
                    *(GUID *)a4 = GUID_cd773740_b187_4974_a1d5_e0ff91372277;
                    *((_DWORD *)a4 + 236) = 0;
                    *((_DWORD *)a4 + 4) = v18;
                    if ( v47[0] )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47[0] + 16LL))(v47[0]);
                    goto LABEL_29;
                  }
                  v40 = 367LL;
                }
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v40,
                (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
                (const char *)(unsigned int)v28,
                ppv);
              wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(v47);
              goto LABEL_33;
            }
            v38 = 335LL;
          }
          else
          {
            v38 = 334LL;
          }
        }
        else
        {
          v24 = Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessMemoryManager,ICrossProcessMemoryManager,unsigned short const * &>(
                  &v54,
                  v47);
          started = v24;
          if ( v24 >= 0 )
            goto LABEL_23;
          v38 = 340LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v38,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
          (const char *)(unsigned int)v24,
          ppv);
LABEL_35:
        if ( v54 )
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v54 + 16LL))(v54);
        goto LABEL_37;
      }
      v36 = 326LL;
    }
    else
    {
      v36 = 325LL;
    }
    v35 = (unsigned int)v37;
  }
  else
  {
    v50[0] = (struct HandleSendReceiveServer *)&v45;
    v50[1] = 0LL;
    v51 = 1;
    started = CEndpointInstance::StartALPCHandleServer(a1, &v50[1]);
    if ( v51 )
    {
      v21 = *(void (__fastcall ****)(_QWORD, __int64))v50[0];
      *(_QWORD *)v50[0] = v50[1];
      if ( v21 )
        (**v21)(v21, 1LL);
    }
    if ( started >= 0 )
      goto LABEL_18;
    v35 = (unsigned int)started;
    v36 = 320LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v36,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
    (const char *)v35,
    ppv);
LABEL_37:
  if ( v46 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v46 + 16LL))(v46);
  v32 = v45;
  v45 = 0LL;
  if ( v32 )
    (**v32)(v32, 1LL);
LABEL_41:
  v33 = (void *)*((_QWORD *)v53 + 18);
  if ( v33 )
  {
    CoTaskMemFree(v33);
    *((_QWORD *)v53 + 18) = 0LL;
  }
  return (unsigned int)started;
}
