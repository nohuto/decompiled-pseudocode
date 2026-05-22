/*
 * XREFs of ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180192980
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011A40 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x18004B25B (memcpy_0.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006B0DC (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B454 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18006B79C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B958 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006BAC4 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006BDC0 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x18006CB10 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x18006CD40 (-ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ.c)
 *     ?ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z @ 0x18006CD90 (-ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAUInputInfo@@@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CB88 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180083870 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x180084A7C (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAUInputInfo@@W4MPCDownLevel.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180085174 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     ?ComputeTimeScale@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801923DC (-ComputeTimeScale@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x180192478 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x180193558 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180194438 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801946E4 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 */

void __fastcall MPCGamepadProcessor::OnGazeUpdate(unsigned __int64 this, struct InputInfo *a2)
{
  __int64 v4; // rcx
  MPCGamepadInputHelper *Instance; // rax
  __int64 v6; // rcx
  struct MPCGestureHandlerManager *v7; // rbx
  __int64 *v8; // rax
  MPCGamepadInputHelper *v9; // rax
  char ShouldUseGazeAndCommit; // al
  __int64 v11; // rcx
  __int64 v12; // r12
  _OWORD *v13; // rsi
  _OWORD *v14; // rcx
  _OWORD *v15; // rax
  __int64 v16; // rdx
  __int128 v17; // xmm1
  __int64 v18; // rcx
  struct MPCGestureHandlerManager *v19; // rbx
  _QWORD *v20; // rax
  char IsInjecting; // bl
  char *v22; // rcx
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rax
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 *v36; // rbx
  _QWORD *v37; // rax
  const char *v38; // r9
  struct MPCGestureHandlerManager *v39; // rbx
  _QWORD *v40; // rax
  __int64 v41; // rcx
  struct MPCGestureHandlerManager *v42; // rbx
  __int64 *v43; // rax
  float v44; // xmm2_4
  float v45; // xmm3_4
  float v46; // xmm5_4
  float v47; // xmm4_4
  float v48; // xmm1_4
  struct MPCHolographicInputManager *v49; // rax
  float v50; // xmm10_4
  float v51; // xmm11_4
  float v52; // xmm12_4
  float v53; // xmm13_4
  float v54; // xmm14_4
  float v55; // xmm15_4
  __int64 v56; // rcx
  const char *v57; // r9
  float v58; // xmm6_4
  float v59; // xmm7_4
  __int64 *v60; // rsi
  const char *v61; // r9
  float v62; // xmm7_4
  const char *v63; // r9
  float v64; // xmm0_4
  float v65; // xmm2_4
  float v66; // xmm1_4
  float v67; // xmm7_4
  float v68; // xmm7_4
  const char *v69; // r9
  float v70; // xmm7_4
  const char *v71; // r9
  float v72; // xmm0_4
  float v73; // xmm2_4
  float v74; // xmm1_4
  float v75; // xmm7_4
  float v76; // xmm7_4
  const char *v77; // r9
  float v78; // xmm7_4
  const char *v79; // r9
  float v80; // xmm0_4
  float v81; // xmm2_4
  float v82; // xmm1_4
  float v83; // xmm0_4
  float v84; // xmm7_4
  float v85; // xmm7_4
  __int64 v86; // rcx
  const char *v87; // r9
  float v88; // xmm7_4
  int v89; // eax
  __int64 v90; // xmm1_8
  struct MPCGestureHandlerManager *v91; // rbx
  _QWORD *v92; // rax
  _QWORD v93[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v94; // [rsp+40h] [rbp-C8h]
  _QWORD v95[2]; // [rsp+48h] [rbp-C0h] BYREF
  float v96[16]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v97[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v98[24]; // [rsp+D8h] [rbp-30h] BYREF
  int v99; // [rsp+F0h] [rbp-18h]
  char v100; // [rsp+170h] [rbp+68h] BYREF
  int v101; // [rsp+368h] [rbp+260h]
  int v102; // [rsp+378h] [rbp+270h]
  int v103; // [rsp+37Ch] [rbp+274h]
  __int128 v104; // [rsp+490h] [rbp+388h]
  __int128 v105; // [rsp+4A0h] [rbp+398h]
  __int128 v106; // [rsp+4B0h] [rbp+3A8h]
  __int128 v107; // [rsp+4C0h] [rbp+3B8h]
  wil::details::in1diag3 *retaddr; // [rsp+AA0h] [rbp+998h]

  *(_DWORD *)(*(_QWORD *)(this + 4632) + 8LL) = *((_DWORD *)a2 + 2);
  *(_QWORD *)(*(_QWORD *)(this + 4632) + 16LL) = *((_QWORD *)a2 + 2);
  MPCSlateDeadzoneHelper::UpdateState(
    *(MPCSlateDeadzoneHelper **)(this + 5136),
    (*(_DWORD *)(this + 4644) & 4) != 0,
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 39),
    *((float *)a2 + 40),
    *((float *)a2 + 54));
  Instance = MPCGamepadInputHelper::GetInstance(v4);
  if ( MPCGamepadInputHelper::ShouldHandleMPCInput(Instance) )
  {
    v9 = MPCGamepadInputHelper::GetInstance(v6);
    ShouldUseGazeAndCommit = MPCGamepadInputHelper::ShouldUseGazeAndCommit(v9, a2);
    *(_BYTE *)(this + 5036) = ShouldUseGazeAndCommit;
    if ( ShouldUseGazeAndCommit && *((_BYTE *)a2 + 152) && MPCInputProviderBase::IsPrimary(this)
      || *(_DWORD *)(this + 5032) )
    {
      v12 = 2LL;
      v13 = (_OWORD *)((char *)a2 + 152);
      if ( *((_BYTE *)a2 + 152) )
      {
        v14 = (_OWORD *)(this + 4704);
        v15 = (_OWORD *)((char *)a2 + 152);
        v16 = 2LL;
        do
        {
          *v14 = *v15;
          v14[1] = v15[1];
          v14[2] = v15[2];
          v14[3] = v15[3];
          v14[4] = v15[4];
          v14[5] = v15[5];
          v14[6] = v15[6];
          v14 += 8;
          v17 = v15[7];
          v15 += 8;
          *(v14 - 1) = v17;
          --v16;
        }
        while ( v16 );
        *v14 = *v15;
        v14[1] = v15[1];
        v14[2] = v15[2];
        v14[3] = v15[3];
        *((_QWORD *)v14 + 8) = *((_QWORD *)v15 + 8);
      }
      if ( *((_BYTE *)a2 + 154) || *(_DWORD *)(this + 5032) )
      {
        MPCGamepadProcessor::UpdateScroll((MPCGamepadProcessor *)(this - 32), a2);
        MPCGamepadProcessor::UpdateZoom((MPCGamepadProcessor *)(this - 32), a2);
        if ( !*(_DWORD *)(this + 5032) )
        {
          if ( *(_BYTE *)v13 )
          {
            v19 = MPCGestureHandlerManager::GetInstance(v18);
            v20 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    v95,
                    this & -(__int64)(this != 32));
            IsInjecting = MPCGestureHandlerManager::IsInjecting((__int64)v19, v20);
            memset_0(v98, 0, 0x7F0uLL);
            v22 = &v100;
            v99 = 2032;
            do
            {
              v23 = v13[1];
              *(_OWORD *)v22 = *v13;
              v24 = v13[2];
              *((_OWORD *)v22 + 1) = v23;
              v25 = v13[3];
              *((_OWORD *)v22 + 2) = v24;
              v26 = v13[4];
              *((_OWORD *)v22 + 3) = v25;
              v27 = v13[5];
              *((_OWORD *)v22 + 4) = v26;
              v28 = v13[6];
              *((_OWORD *)v22 + 5) = v27;
              v29 = v13[7];
              v13 += 8;
              *((_OWORD *)v22 + 6) = v28;
              v22 += 128;
              *((_OWORD *)v22 - 1) = v29;
              --v12;
            }
            while ( v12 );
            v30 = *((_QWORD *)v13 + 8);
            v31 = v13[1];
            *(_OWORD *)v22 = *v13;
            v32 = v13[2];
            *((_OWORD *)v22 + 1) = v31;
            v33 = v13[3];
            *((_OWORD *)v22 + 2) = v32;
            *((_OWORD *)v22 + 3) = v33;
            *((_QWORD *)v22 + 8) = v30;
            MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult((__int64)v22, (__int64)v98, 4);
            if ( IsInjecting )
            {
              v35 = *(_QWORD *)(this + 5136);
              v101 = 7;
              if ( !*(_BYTE *)(v35 + 13) )
              {
                v102 = *(_DWORD *)(v35 + 4);
                v103 = *(_DWORD *)(v35 + 8);
              }
            }
            v36 = (__int64 *)MPCGestureHandlerManager::GetInstance(v34);
            v37 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    v95,
                    this & -(__int64)(this != 32));
            MPCGestureHandlerManager::DownLevelTo2D(v36, (__int64)v98, v37, v38);
          }
        }
      }
    }
    else
    {
      v39 = MPCGestureHandlerManager::GetInstance(v11);
      v40 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              v95,
              this & -(__int64)(this != 32));
      if ( MPCGestureHandlerManager::IsInjecting((__int64)v39, v40) && (*(_BYTE *)(this + 4644) & 4) == 0
        || (v42 = MPCGestureHandlerManager::GetInstance(v41),
            v43 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    v95,
                    this & -(__int64)(this != 32)),
            MPCGestureHandlerManager::IsHovering((__int64)v42, v43)) )
      {
        MPCGamepadProcessor::EndGesture((MPCGamepadProcessor *)(this - 32));
      }
    }
    v44 = 0.0;
    if ( (*(_DWORD *)(this + 4644) & 0x400) != 0 )
      v45 = FLOAT_N1_0;
    else
      v45 = 0.0;
    if ( (*(_DWORD *)(this + 4644) & 0x800) != 0 )
      v44 = FLOAT_1_0;
    v46 = (float)(*(float *)(this + 4656) + *(float *)(this + 5064)) * 0.5;
    v47 = (float)(*(float *)(this + 4660) + *(float *)(this + 5068)) * 0.5;
    v48 = (float)((float)(COERCE_FLOAT(*(_DWORD *)(this + 4652) ^ _xmm) + *(float *)(this + 4648))
                + *(float *)(this + 5072))
        * 0.5;
    *(float *)(this + 5076) = (float)((float)(v44 + v45) + *(float *)(this + 5076)) * 0.5;
    *(float *)(this + 5064) = v46;
    *(float *)(this + 5068) = v47;
    *(float *)(this + 5072) = v48;
    v49 = MPCHolographicInputManager::GetInstance();
    memcpy_0(v98, v49, 0x8F0uLL);
    v97[0] = v104;
    v97[1] = v105;
    v97[2] = v106;
    v97[3] = v107;
    MPCMath::OrientToGravity(v96, v97);
    v50 = v96[4];
    v51 = v96[5];
    v52 = v96[6];
    v53 = v96[8];
    v54 = v96[9];
    v55 = v96[10];
    MPCGamepadProcessor::ComputeTimeScale((MPCGamepadProcessor *)(this - 32), a2);
    v58 = *(float *)(this + 5112);
    LODWORD(v59) = *(_DWORD *)(this + 5064) & _xmm;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v57);
      __debugbreak();
    }
    v93[1] = L"ThumbstickDeadzone";
    v94 = 18LL;
    v60 = (__int64 *)(this & -(__int64)(v56 != 0));
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v60, (__int128 *)&v93[1]);
    if ( v59 >= COERCE_FLOAT(L"ThumbstickDeadzone") )
    {
      v62 = *(float *)(this + 5064);
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v61);
        __debugbreak();
      }
      v93[1] = L"PointScaleFactor";
      v94 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v60, (__int128 *)&v93[1]);
      v64 = COERCE_FLOAT(L"PointScaleFactor") * v62;
      v65 = (float)((float)(v64 * v96[1]) * v58) + *(float *)(this + 5056);
      v66 = (float)((float)(v64 * v96[2]) * v58) + *(float *)(this + 5060);
      *(float *)(this + 5052) = (float)((float)(v64 * v96[0]) * v58) + *(float *)(this + 5052);
      *(float *)(this + 5056) = v65;
      *(float *)(this + 5060) = v66;
      v67 = *(float *)(this + 5064);
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v63);
        __debugbreak();
      }
      v93[1] = L"PointScaleFactor";
      v94 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v60, (__int128 *)&v93[1]);
      *(float *)(this + 5080) = (float)((float)(COERCE_FLOAT(L"PointScaleFactor") * v67) * v58)
                              + *(float *)(this + 5080);
    }
    LODWORD(v68) = *(_DWORD *)(this + 5068) & _xmm;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v61);
      __debugbreak();
    }
    v93[1] = L"ThumbstickDeadzone";
    v94 = 18LL;
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v60, (__int128 *)&v93[1]);
    if ( v68 >= COERCE_FLOAT(L"ThumbstickDeadzone") )
    {
      v70 = *(float *)(this + 5068);
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v69);
        __debugbreak();
      }
      v93[1] = L"PointScaleFactor";
      v94 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v60, (__int128 *)&v93[1]);
      v72 = COERCE_FLOAT(L"PointScaleFactor") * v70;
      v73 = (float)((float)(v72 * v51) * v58) + *(float *)(this + 5056);
      v74 = (float)((float)(v72 * v52) * v58) + *(float *)(this + 5060);
      *(float *)(this + 5052) = (float)((float)(v72 * v50) * v58) + *(float *)(this + 5052);
      *(float *)(this + 5056) = v73;
      *(float *)(this + 5060) = v74;
      v75 = *(float *)(this + 5068);
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v71);
        __debugbreak();
      }
      v93[1] = L"PointScaleFactor";
      v94 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v60, (__int128 *)&v93[1]);
      *(float *)(this + 5084) = (float)((float)(COERCE_FLOAT(L"PointScaleFactor") * v75) * v58)
                              + *(float *)(this + 5084);
    }
    LODWORD(v76) = *(_DWORD *)(this + 5072) & _xmm;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v69);
      __debugbreak();
    }
    v93[1] = L"ThumbstickDeadzone";
    v94 = 18LL;
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v60, (__int128 *)&v93[1]);
    if ( v76 >= COERCE_FLOAT(L"ThumbstickDeadzone") )
    {
      v78 = *(float *)(this + 5072);
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v77);
        __debugbreak();
      }
      v93[1] = L"PointScaleFactor";
      v94 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v60, (__int128 *)&v93[1]);
      LODWORD(v80) = COERCE_UNSIGNED_INT(COERCE_FLOAT(L"PointScaleFactor") * v78) ^ _xmm;
      v81 = (float)((float)(v80 * v53) * v58) + *(float *)(this + 5052);
      v82 = (float)((float)(v80 * v54) * v58) + *(float *)(this + 5056);
      v83 = (float)((float)(v80 * v55) * v58) + *(float *)(this + 5060);
      *(float *)(this + 5052) = v81;
      *(float *)(this + 5056) = v82;
      *(float *)(this + 5060) = v83;
      v84 = *(float *)(this + 5072);
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v79);
        __debugbreak();
      }
      v93[1] = L"PointScaleFactor";
      v94 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v60, (__int128 *)&v93[1]);
      *(float *)(this + 5088) = (float)((float)(COERCE_FLOAT(L"PointScaleFactor") * v84) * v58)
                              + *(float *)(this + 5088);
    }
    LODWORD(v85) = *(_DWORD *)(this + 5076) & _xmm;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v77);
      __debugbreak();
    }
    v93[1] = L"ThumbstickDeadzone";
    v94 = 18LL;
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v60, (__int128 *)&v93[1]);
    if ( v85 >= COERCE_FLOAT(L"ThumbstickDeadzone") )
    {
      v88 = *(float *)(this + 5076);
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v87);
        __debugbreak();
      }
      v93[1] = L"PointScaleFactor";
      v94 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v60, (__int128 *)&v93[1]);
      *(float *)(this + 5092) = (float)((float)(COERCE_FLOAT(L"PointScaleFactor") * v88) * v58)
                              + *(float *)(this + 5092);
    }
    v89 = *(_DWORD *)(this + 4668);
    v90 = *(_QWORD *)(this + 4660);
    *(_OWORD *)(this + 4672) = *(_OWORD *)(this + 4644);
    *(_QWORD *)(this + 4688) = v90;
    *(_DWORD *)(this + 4696) = v89;
    v91 = MPCGestureHandlerManager::GetInstance(v86);
    v92 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            v95,
            (__int64)v60);
    MPCGestureHandlerManager::OnGazeUpdate((__int64)v91, v92);
  }
  else if ( *(_DWORD *)(this + 5032)
         || (v7 = MPCGestureHandlerManager::GetInstance(v6),
             v8 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    v95,
                    this & -(__int64)(this != 32)),
             MPCGestureHandlerManager::IsHovering((__int64)v7, v8)) )
  {
    MPCGamepadProcessor::EndGesture((MPCGamepadProcessor *)(this - 32));
  }
}
