/*
 * XREFs of ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x1400021C0
 * Callers:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140001F4C (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002194 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140007300 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x140012D40 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x140029D4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x14003E868 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x140047E3C (--_GCEndpointInstance@@QEAAPEAXI@Z.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x14004AD1C (McTemplateU0zq_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CEndpointInstance::CreateDeviceEndpointInstance(
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a1,
        struct CEndpointInstance **a2)
{
  struct CEndpointInstance **v2; // r15
  HRESULT v4; // eax
  unsigned int v5; // esi
  int v6; // eax
  int v7; // eax
  unsigned __int16 *v8; // r15
  _DWORD *v9; // rdi
  char *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  BOOL v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // r10d
  int v21; // r11d
  int v22; // esi
  int v23; // r15d
  int v24; // r12d
  int v25; // r13d
  int v26; // ecx
  struct IUnknown *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  CEndpointInstance *v33; // rax
  CEndpointInstance *v34; // rdi
  struct IUnknown *v35; // rdx
  __int64 v36; // rbx
  CEndpointInstance *v37; // rbx
  int v38; // eax
  unsigned int v39; // edx
  int v40; // ecx
  int v41; // r8d
  __int64 v43; // rcx
  int v44; // eax
  struct IUnknown *v45; // rcx
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rdx
  int *ppv; // [rsp+20h] [rbp-E0h]
  int ppva; // [rsp+20h] [rbp-E0h]
  __int64 v53; // [rsp+30h] [rbp-D0h] BYREF
  struct IUnknown *v54; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+40h] [rbp-C0h] BYREF
  int v56[2]; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE hObject; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+58h] [rbp-A8h] BYREF
  int v59; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+68h] [rbp-98h] BYREF
  char v61; // [rsp+71h] [rbp-8Fh]
  __int64 v62; // [rsp+78h] [rbp-88h] BYREF
  CEndpointInstance *v63; // [rsp+80h] [rbp-80h]
  __int128 v64; // [rsp+88h] [rbp-78h] BYREF
  char *v65; // [rsp+98h] [rbp-68h]
  char *v66; // [rsp+A0h] [rbp-60h]
  int v67; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v68; // [rsp+B4h] [rbp-4Ch]
  __int64 v69; // [rsp+B6h] [rbp-4Ah]
  __int64 v70; // [rsp+BEh] [rbp-42h]
  __int16 v71; // [rsp+C6h] [rbp-3Ah]
  __int128 v72; // [rsp+C8h] [rbp-38h]
  int v73; // [rsp+D8h] [rbp-28h]
  int v74; // [rsp+DCh] [rbp-24h]
  __int64 v75; // [rsp+E0h] [rbp-20h]
  __int64 v76; // [rsp+E8h] [rbp-18h]
  int v77; // [rsp+F0h] [rbp-10h]
  int v78; // [rsp+F4h] [rbp-Ch]
  int v79; // [rsp+F8h] [rbp-8h]
  int v80; // [rsp+FCh] [rbp-4h]
  int v81; // [rsp+100h] [rbp+0h]
  int v82; // [rsp+104h] [rbp+4h]
  int v83; // [rsp+108h] [rbp+8h]
  int v84; // [rsp+10Ch] [rbp+Ch]
  int v85; // [rsp+110h] [rbp+10h]
  int v86; // [rsp+114h] [rbp+14h]
  BOOL v87; // [rsp+118h] [rbp+18h]
  int v88; // [rsp+11Ch] [rbp+1Ch]
  int v89; // [rsp+120h] [rbp+20h]
  _QWORD v90[2]; // [rsp+130h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v2 = a2;
  v90[0] = a2;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zq_EtwEventWriteTransfer(a1, a2, *((_QWORD *)a1 + 7), *((unsigned int *)a1 + 25));
  v61 = 1;
  v55 = 0LL;
  v54 = 0LL;
  v53 = 0LL;
  if ( *((_DWORD *)a1 + 25) != 1 )
  {
    hObject = 0LL;
    v4 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &hObject);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x59,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v4,
        ppva);
LABEL_85:
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&hObject);
      goto LABEL_47;
    }
    v58 = 0LL;
    v6 = (*(__int64 (__fastcall **)(HANDLE, _QWORD, __int64 *))(*(_QWORD *)hObject + 40LL))(
           hObject,
           *((_QWORD *)a1 + 7),
           &v58);
    v5 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v6,
        ppva);
LABEL_84:
      wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v58);
      goto LABEL_85;
    }
    v60 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v58)(
           v58,
           &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e,
           &v60);
    v5 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x60,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v7,
        ppva);
    }
    else
    {
      if ( v60 )
      {
        v8 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
        v64 = 0LL;
        v65 = 0LL;
        LOWORD(v64) = 65;
        v9 = 0LL;
        v63 = 0LL;
        v10 = 0LL;
        v66 = 0LL;
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 48LL))(v60);
        v12 = v8[8];
        if ( v11 )
        {
          v9 = CoTaskMemAlloc(v12 + 32);
          v63 = (CEndpointInstance *)v9;
          if ( !v9 )
          {
            v5 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7F,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
              (const char *)0x8007000ELL,
              ppva);
            goto LABEL_79;
          }
          *v9 = v8[8] + 32;
          v9[1] = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
          v9[2] = *((_DWORD *)a1 + 25);
          memcpy_0(v9 + 3, v8, v8[8] + 18LL);
          v13 = v8[8] + 32;
          v65 = (char *)v9;
        }
        else
        {
          v10 = (char *)CoTaskMemAlloc(v12 + 64);
          v66 = v10;
          if ( !v10 )
          {
            v5 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x70,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
              (const char *)0x8007000ELL,
              ppva);
            goto LABEL_79;
          }
          *(_DWORD *)v10 = v8[8] + 64;
          *((_DWORD *)v10 + 1) = GetSessionIdFromEndpointId(*((_QWORD *)a1 + 7));
          *((_DWORD *)v10 + 2) = *((_DWORD *)a1 + 25);
          *(_OWORD *)(v10 + 12) = *(_OWORD *)((char *)a1 + 104);
          *(_OWORD *)(v10 + 28) = *(_OWORD *)((char *)a1 + 152);
          memcpy_0(v10 + 44, v8, v8[8] + 18LL);
          v13 = v8[8] + 64;
          v65 = v10;
        }
        DWORD2(v64) = v13;
        if ( *((_DWORD *)a1 + 18) )
        {
          *(_QWORD *)v56 = 0LL;
          ppv = v56;
          v14 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int128 *))(*(_QWORD *)v58 + 24LL))(
                  v58,
                  &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
                  1LL,
                  &v64);
          v5 = v14;
          if ( v14 >= 0 )
          {
            v48 = v53;
            v53 = 0LL;
            if ( v48 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
            v14 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v56)(
                    *(_QWORD *)v56,
                    &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
                    &v53);
            v5 = v14;
            if ( v14 >= 0 )
              goto LABEL_16;
            v47 = 163LL;
          }
          else
          {
            v47 = 161LL;
          }
        }
        else
        {
          *(_QWORD *)v56 = 0LL;
          ppv = v56;
          v14 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int128 *))(*(_QWORD *)v58 + 24LL))(
                  v58,
                  &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
                  1LL,
                  &v64);
          v5 = v14;
          if ( v14 < 0 )
          {
            v47 = 148LL;
          }
          else
          {
            v15 = v53;
            v53 = 0LL;
            if ( v15 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
            v14 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v56)(
                    *(_QWORD *)v56,
                    &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
                    &v53);
            v5 = v14;
            if ( v14 >= 0 )
            {
LABEL_16:
              wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)v56);
              v17 = *((_DWORD *)a1 + 20) != 0;
              v18 = *((unsigned int *)a1 + 8);
              v19 = v8[1];
              v20 = v8[7];
              v21 = *((_DWORD *)v8 + 1);
              v22 = *v8;
              v23 = *((_DWORD *)a1 + 36);
              v24 = *((_DWORD *)a1 + 18);
              v25 = *((_DWORD *)a1 + 25);
              v26 = *((_DWORD *)a1 + 24);
              if ( g_u32AEWMILogLevel >= 4 )
              {
                v67 = 120;
                v69 = 0LL;
                v70 = 0LL;
                v71 = 0;
                v73 = 0;
                v76 = 0LL;
                v74 = 0x20000;
                v72 = AEWMIGUID_ENDPOINT_ACTIVATION;
                v68 = 1025;
                v75 = 0LL;
                v77 = *((_DWORD *)a1 + 34);
                v78 = v25;
                v79 = v24;
                v80 = v23;
                v81 = v22;
                v82 = v21;
                v83 = v20;
                v84 = v19;
                v85 = v18;
                v86 = *((_DWORD *)a1 + 19);
                v87 = v17;
                v88 = v26;
                v89 = 0;
                EtwLogTraceEvent(g_hAEWMITraceHandle, &v67);
              }
              v27 = v54;
              v54 = 0LL;
              if ( v27 )
                ((void (__fastcall *)(struct IUnknown *, __int64, __int64, __int64))v27->lpVtbl->Release)(
                  v27,
                  v16,
                  v18,
                  v19);
              v28 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IUnknown **, __int64))v53)(
                      v53,
                      &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
                      &v54,
                      v19);
              v5 = v28;
              if ( v28 < 0 )
              {
                v49 = 183LL;
              }
              else
              {
                v29 = v55;
                v55 = 0LL;
                if ( v29 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
                v28 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v54->lpVtbl->QueryInterface)(
                        v54,
                        &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                        &v55);
                v5 = v28;
                if ( v28 >= 0 )
                {
                  if ( v10 )
                    CoTaskMemFree(v10);
                  if ( v9 )
                    CoTaskMemFree(v9);
                  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v60);
                  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v58);
                  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&hObject);
                  v2 = (struct CEndpointInstance **)v90[0];
                  goto LABEL_29;
                }
                v49 = 186LL;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v49,
                (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
                (const char *)(unsigned int)v28,
                (int)v56);
              goto LABEL_79;
            }
            v47 = 150LL;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v47,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
          (const char *)(unsigned int)v14,
          (int)v56);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)v56);
LABEL_79:
        if ( v10 )
          CoTaskMemFree(v10);
        if ( v9 )
          CoTaskMemFree(v9);
        goto LABEL_83;
      }
      v5 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x61,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)0x80070057LL,
        ppva);
    }
LABEL_83:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v60);
    goto LABEL_84;
  }
  v43 = *((_QWORD *)a1 + 8);
  if ( !v43 )
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)0x80070057LL,
      (int)ppv);
    goto LABEL_47;
  }
  v55 = *((_QWORD *)a1 + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
  v53 = 0LL;
  v44 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v55)(
          v55,
          &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
          &v53);
  v5 = v44;
  if ( v44 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v44,
      (int)ppv);
    goto LABEL_47;
  }
  v45 = v54;
  v54 = 0LL;
  if ( v45 )
    ((void (__fastcall *)(struct IUnknown *))v45->lpVtbl->Release)(v45);
  v46 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IUnknown **))v55)(
          v55,
          &GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d,
          &v54);
  v5 = v46;
  if ( v46 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v46,
      (int)ppv);
    goto LABEL_47;
  }
LABEL_29:
  v59 = 0;
  v30 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v53 + 40LL))(v53, &v59);
  v5 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBF,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v30,
      (int)ppv);
    goto LABEL_47;
  }
  if ( v59 )
  {
    v31 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v55 + 48LL))(v55, 0x40000LL);
    v5 = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC5,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v31,
        (int)ppv);
      goto LABEL_47;
    }
  }
  v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v53 + 24LL))(
          v53,
          *((_QWORD *)a1 + 4),
          *((unsigned int *)a1 + 12));
  v5 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v32,
      (int)ppv);
    goto LABEL_47;
  }
  v33 = (CEndpointInstance *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v34 = v33;
  v90[0] = v33;
  if ( v33 )
  {
    v35 = v54;
    v36 = *((_QWORD *)a1 + 4);
    *(_QWORD *)v33 = 0LL;
    *((_QWORD *)v33 + 3) = 0LL;
    if ( *(struct IUnknown **)v33 != v35 )
      ATL::AtlComPtrAssign((struct IUnknown **)v33, v35);
    *((_QWORD *)v34 + 2) = 0LL;
    *((_QWORD *)v34 + 1) = v36;
  }
  else
  {
    v34 = 0LL;
  }
  v37 = v34;
  v63 = v34;
  if ( v34 )
  {
    v62 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v55)(
           v55,
           &GUID_44b2c783_5fa3_4983_9d74_9207de1f9e63,
           &v62) >= 0 )
    {
      hObject = 0LL;
      v38 = (*(__int64 (__fastcall **)(__int64, HANDLE *))(*(_QWORD *)v62 + 64LL))(v62, &hObject);
      v5 = v38;
      if ( v38 < 0 )
      {
        v50 = 223LL;
      }
      else
      {
        v90[0] = hObject;
        v38 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::AudioDeviceModulesManager,Windows::Media::Devices::IAudioDeviceModulesManager,void *>(
                (char *)v34 + 24,
                v90);
        v5 = v38;
        if ( v38 >= 0 )
        {
          if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            CloseHandle(hObject);
          goto LABEL_43;
        }
        v50 = 226LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v50,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
        (const char *)(unsigned int)v38,
        (int)ppv);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      goto LABEL_44;
    }
LABEL_43:
    v37 = 0LL;
    *v2 = v34;
    v5 = 0;
LABEL_44:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v62);
    goto LABEL_45;
  }
  v5 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD3,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
    (const char *)0x8007000ELL,
    (int)ppv);
LABEL_45:
  if ( v37 )
    CEndpointInstance::`scalar deleting destructor'(v37, v39);
LABEL_47:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v53);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v54);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v55);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      v40,
      (unsigned int)&CreateDeviceEndpointInstance_Task_Stop,
      v41,
      1,
      (__int64)v90);
  return v5;
}
