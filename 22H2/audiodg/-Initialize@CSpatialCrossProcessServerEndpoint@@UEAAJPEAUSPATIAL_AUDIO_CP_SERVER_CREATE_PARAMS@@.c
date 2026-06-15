/*
 * XREFs of ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x14006CEB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002194 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x14001A624 (-AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x14001B2E0 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$copy_to@UICrossProcessMemory@@@?$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICrossProcessMemory@@@Z @ 0x14001B84C (--$copy_to@UICrossProcessMemory@@@-$com_ptr_t@UICrossProcessMemory@@Uerr_returncode_policy@wil@@.c)
 *     ??8@YA_NAEBU_GUID@@0@Z @ 0x14001BFEC (--8@YA_NAEBU_GUID@@0@Z.c)
 *     memset_0 @ 0x14001DF78 (memset_0.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x1400210DC (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     memcpy_0 @ 0x140029D4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x1400685A0 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14006A23C (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x14006B6D8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14006B73C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??$make_unique@$$BY0A@E$0A@@std@@YA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@0@_K@Z @ 0x14006CDA0 (--$make_unique@$$BY0A@E$0A@@std@@YA-AV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@0@_K.c)
 *     wil::details::lambda_call__lambda_add5652c2373d1431c22ec933018652d___::_lambda_call__lambda_add5652c2373d1431c22ec933018652d___ @ 0x14006CDF4 (wil--details--lambda_call__lambda_add5652c2373d1431c22ec933018652d___--_lambda_call__lambda_add5.c)
 *     ??1?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAA@XZ @ 0x14006CE30 (--1-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@QEAA@XZ.c)
 *     ??4?$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioResourceTaskCompletion@@@Z @ 0x14006CE50 (--4-$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioR.c)
 */

__int64 __fastcall CSpatialCrossProcessServerEndpoint::Initialize(
        CSpatialCrossProcessServerEndpoint *this,
        struct SPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS *a2,
        struct ICrossProcessMemory **a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  void *v12; // rax
  __int64 v13; // rcx
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  int v17; // eax
  int v18; // edx
  int v19; // r8d
  __int128 v20; // xmm0
  void *v21; // r14
  unsigned int v22; // eax
  void **v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  void *v30; // [rsp+50h] [rbp-30h] BYREF
  char *v31; // [rsp+58h] [rbp-28h] BYREF
  char v32; // [rsp+60h] [rbp-20h]
  CSpatialCrossProcessServerEndpoint *v33; // [rsp+68h] [rbp-18h] BYREF
  char v34; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  void *v36; // [rsp+B0h] [rbp+30h] BYREF
  struct ICrossProcessMemory *v37; // [rsp+C8h] [rbp+48h] BYREF

  v34 = 0;
  v33 = (CSpatialCrossProcessServerEndpoint *)((char *)this - 1288);
  ATL::CCritSecLock::Lock((LPCRITICAL_SECTION *)&v33);
  SpatialCPTraceLoggingTracer("CSpatialCrossProcessServerEndpoint::Initialize", 36, v6, v7);
  v37 = 0LL;
  if ( *((_BYTE *)this - 1224) )
  {
    v8 = -2005139440;
    v9 = 41LL;
LABEL_40:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
      (const char *)v8);
    goto LABEL_41;
  }
  if ( !a3 )
  {
    v8 = -2147467261;
    v9 = 44LL;
    goto LABEL_40;
  }
  if ( !a2 )
  {
    v8 = -2147467261;
    v9 = 45LL;
    goto LABEL_40;
  }
  if ( *(_DWORD *)a2 != 160 )
  {
    v8 = -2147024809;
    v9 = 46LL;
    goto LABEL_40;
  }
  *((_QWORD *)this + 11) = *((_QWORD *)a2 + 17);
  *((_DWORD *)this + 24) = 2 * !operator==((_QWORD *)a2 + 18, &GUID_9cf2a70b_f377_403b_bd6b_360863e0355c) + 2;
  v10 = *((unsigned int *)a2 + 21) * (unsigned __int64)*(unsigned __int16 *)(*((_QWORD *)a2 + 16) + 12LL);
  if ( v10 > 0xFFFFFFFF )
  {
    v8 = -2147024362;
    v9 = 57LL;
    goto LABEL_40;
  }
  v11 = (unsigned int)v10;
  v12 = (void *)AERTCreateZoneHeap((unsigned int)v10);
  *((_QWORD *)this - 151) = v12;
  if ( !v12 )
  {
    v8 = -2147024882;
    v9 = 60LL;
    goto LABEL_40;
  }
  v32 = 1;
  v31 = (char *)this - 1320;
  v14 = (void *)AE_ALLOCATE_SAFEMULT(v13, v11, v12, AERTZoneAllocate);
  *((_QWORD *)this - 152) = v14;
  if ( v14 )
  {
    memset_0(v14, 0, v11);
    v17 = CSpatialCrossProcessBaseEndpoint::InitializeCPMemory(
            (CSpatialCrossProcessServerEndpoint *)((char *)this - 1320),
            *((struct ICrossProcessMemoryManager **)a2 + 14),
            *((struct tWAVEFORMATEX **)a2 + 16),
            *((size_t **)a2 + 11),
            *((_DWORD *)a2 + 21),
            *((_DWORD *)a2 + 2),
            *((_DWORD *)a2 + 5),
            *((_DWORD *)a2 + 6),
            *((_DWORD *)a2 + 7),
            &v37);
    v8 = v17;
    if ( v17 < 0 )
    {
      v16 = (unsigned int)v17;
      v15 = 80LL;
      goto LABEL_16;
    }
    v20 = *((_OWORD *)a2 + 2);
    v36 = 0LL;
    v21 = 0LL;
    *(_OWORD *)((char *)this + 56) = v20;
    v22 = *((_DWORD *)a2 + 12);
    *((_DWORD *)this + 18) = v22;
    if ( v22 )
    {
      v23 = (void **)std::make_unique<unsigned char [0],0>(&v30, v22);
      if ( &v36 != v23 )
      {
        v21 = *v23;
        *v23 = 0LL;
        v36 = v21;
      }
      std::unique_ptr<unsigned char [0]>::~unique_ptr<unsigned char [0]>(&v30);
      if ( !v21 )
      {
        v8 = -2147024882;
        v24 = 89LL;
        v25 = 2147942414LL;
        goto LABEL_28;
      }
      memcpy_0(v21, *((const void **)a2 + 7), *((unsigned int *)this + 18));
    }
    _InterlockedExchange(
      (volatile __int32 *)(*((_QWORD *)this - 4) + 44LL),
      (int)((float)((float)*(int *)(*((_QWORD *)a2 + 16) + 8LL)
                  / (float)*(unsigned __int16 *)(*((_QWORD *)a2 + 16) + 12LL))
          * (double)(int)*((_QWORD *)a2 + 9)
          / 10000000.0
          + 0.5));
    v26 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 162) + 24LL))(
            (char *)this - 1296,
            0LL,
            *((unsigned int *)a2 + 16));
    v8 = v26;
    if ( v26 >= 0 )
    {
      v26 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 162) + 32LL))(
              (char *)this - 1296,
              *((unsigned int *)a2 + 16),
              0LL);
      v8 = v26;
      if ( v26 >= 0 )
      {
        v27 = *((_QWORD *)a2 + 13);
        if ( v27 )
        {
          wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((__int64 *)this + 2, v27);
          *((_QWORD *)this + 3) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
          _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this - 4) + 64LL), 0x20u);
        }
        else if ( *((_QWORD *)a2 + 11) )
        {
          v28 = *((_QWORD *)a2 + 12);
          if ( v28 )
          {
            *(_QWORD *)(v28 + 32) = (char *)this + 32;
            *((_DWORD *)this + 11) = *(_DWORD *)(*((_QWORD *)a2 + 12) + 16LL);
          }
        }
        Microsoft::WRL::ComPtr<ISpatialAudioResourceTaskCompletion>::operator=(
          (__int64 *)this - 68,
          *((_QWORD *)a2 + 15));
        v32 = 0;
        if ( v21 )
        {
          v36 = 0LL;
          *((_QWORD *)this + 10) = v21;
        }
        wil::com_ptr_t<ICrossProcessMemory,wil::err_returncode_policy>::copy_to<ICrossProcessMemory>(
          (__int64 *)&v37,
          a3);
        v8 = 0;
        *((_BYTE *)this - 1224) = 1;
        goto LABEL_37;
      }
      v24 = 102LL;
    }
    else
    {
      v24 = 100LL;
    }
    v25 = (unsigned int)v26;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
      (const char *)v25);
LABEL_37:
    std::unique_ptr<unsigned char [0]>::~unique_ptr<unsigned char [0]>(&v36);
    goto LABEL_38;
  }
  v8 = -2147024882;
  v15 = 68LL;
  v16 = 2147942414LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
    (const char *)v16);
LABEL_38:
  wil::details::lambda_call__lambda_add5652c2373d1431c22ec933018652d___::_lambda_call__lambda_add5652c2373d1431c22ec933018652d___(
    &v31,
    v18,
    v19);
LABEL_41:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v37);
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)&v33);
  return v8;
}
