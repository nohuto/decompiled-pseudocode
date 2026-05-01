/*
 * XREFs of ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@_NNPEAN@Z @ 0x18003C4D0
 * Callers:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x18003CF80 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 *     ?GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800D2C0C (-GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundat.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001E864 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020684 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     sqrt @ 0x18009093C (sqrt.c)
 *     ceilf_0 @ 0x180161117 (ceilf_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801AA0BC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x1803DD510 (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall KeyboardHosting::PositionAndSizeOptionsHelper::GetDefaultKeyboardSize(
        RTL_SRWLOCK *a1,
        _DWORD *a2,
        HMONITOR a3,
        __int64 a4,
        int a5,
        char a6,
        double a7,
        double *a8)
{
  double v11; // xmm11_8
  int v12; // r15d
  int v13; // edi
  int v14; // ebx
  double v15; // xmm6_8
  double v16; // xmm7_8
  bool v17; // cc
  __int64 v18; // rax
  _QWORD *Ptr; // rcx
  __int64 *v20; // rax
  double v21; // xmm1_8
  double v22; // xmm2_8
  char v23; // al
  float v24; // xmm6_4
  float v25; // xmm4_4
  float v26; // xmm7_4
  float v27; // xmm3_4
  int v28; // eax
  int v29; // ebx
  double v30; // xmm4_8
  int v31; // eax
  float v32; // xmm3_4
  float v33; // xmm3_4
  int v34; // eax
  float v35; // xmm1_4
  int v36; // ecx
  unsigned int v37; // eax
  double v38; // xmm1_8
  HMONITOR hMonitor; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v41; // [rsp+28h] [rbp-D8h] BYREF
  RTL_SRWLOCK *v42; // [rsp+38h] [rbp-C8h] BYREF
  struct tagMONITORINFO mi; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v44; // [rsp+70h] [rbp-90h] BYREF
  __int128 v45; // [rsp+80h] [rbp-80h]
  __int128 v46; // [rsp+90h] [rbp-70h]
  __int128 v47; // [rsp+A0h] [rbp-60h]
  __int128 v48; // [rsp+B0h] [rbp-50h]
  __int128 v49; // [rsp+C0h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  hMonitor = a3;
  wil::srwlock::lock_exclusive(a1 + 2, &v42);
  v11 = 0.0;
  v12 = 96;
  mi.cbSize = 40;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  if ( GetMonitorInfoW(hMonitor, &mi) )
  {
    if ( (unsigned int)GetCurrentDpiInfo(hMonitor, &v44) )
    {
      v13 = abs32(mi.rcMonitor.right - mi.rcMonitor.left);
      v14 = abs32(mi.rcMonitor.bottom - mi.rcMonitor.top);
      if ( v13 > 0 && v14 > 0 && SDWORD2(v45) > 0 && SHIDWORD(v45) > 0 )
      {
        v15 = (double)(100 * DWORD2(v45)) / 2540.0;
        v16 = (double)(100 * HIDWORD(v45)) / 2540.0;
        v17 = v13 < v14;
        if ( v13 > v14 )
        {
          if ( v16 > v15 )
          {
LABEL_12:
            v15 = (double)(100 * HIDWORD(v45)) / 2540.0;
            v16 = (double)(100 * DWORD2(v45)) / 2540.0;
LABEL_13:
            v11 = sqrt(v16 * v16 + v15 * v15);
            v12 = (int)((double)v14 / v16);
            std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(
              a1,
              &v41,
              &hMonitor);
            v18 = v41;
            *(double *)(v41 + 40) = v11;
            *(_DWORD *)(v18 + 48) = (int)((double)v13 / v15);
            *(_DWORD *)(v18 + 52) = v12;
            goto LABEL_22;
          }
          v17 = v13 < v14;
        }
        if ( !v17 || v15 <= v16 )
          goto LABEL_13;
        goto LABEL_12;
      }
    }
  }
  Ptr = a1->Ptr;
  v20 = (__int64 *)*((_QWORD *)a1->Ptr + 1);
  if ( !*((_BYTE *)v20 + 25) )
  {
    do
    {
      if ( v20[4] >= (unsigned __int64)hMonitor )
      {
        Ptr = v20;
        v20 = (__int64 *)*v20;
      }
      else
      {
        v20 = (__int64 *)v20[2];
      }
    }
    while ( !*((_BYTE *)v20 + 25) );
    if ( Ptr != a1->Ptr && (unsigned __int64)hMonitor >= Ptr[4] )
    {
      std::map<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi>::_Try_emplace<HMONITOR__ * const &,>(a1, &v41, &hMonitor);
      v41 = *(_OWORD *)(v41 + 40);
      v12 = HIDWORD(v41);
      v11 = *(double *)&v41;
    }
  }
LABEL_22:
  if ( a6 )
  {
    v21 = a7;
    v22 = v11 / a7;
    if ( v11 / a7 <= 0.0 )
    {
      v23 = 1;
      goto LABEL_27;
    }
  }
  else
  {
    v21 = v11;
    v22 = DOUBLE_1_0;
  }
  v23 = 0;
LABEL_27:
  if ( v23 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x32,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
    __debugbreak();
  }
  *a8 = v22;
  v24 = *(float *)(a4 + 8);
  if ( a6 )
    v25 = v24 * v22;
  else
    v25 = *(float *)(a4 + 8);
  if ( v25 <= 0.0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x35,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
    __debugbreak();
  }
  v26 = *(float *)(a4 + 12);
  if ( a6 )
    v27 = v26 * v22;
  else
    v27 = *(float *)(a4 + 12);
  if ( v27 <= 0.0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x37,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
    JUMPOUT(0x18003CA3ELL);
  }
  if ( a6 )
    v28 = (int)((double)v12 * v22);
  else
    v28 = v12;
  if ( !v28 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x39,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionshelper.cpp",
      (const char *)retaddr);
    __debugbreak();
  }
  if ( v21 != 0.0 && v21 >= 8.0 )
    v25 = v25 * 0.89999998;
  v29 = (int)v25;
  *a2 = (int)v25;
  if ( v21 == 0.0 || v21 < 8.0 )
  {
    v33 = v27 * 0.5;
  }
  else
  {
    v30 = (double)v28;
    if ( v21 >= 23.5 )
    {
      if ( v21 >= 55.0 )
        v34 = (int)(v30 * 6.299212598425197);
      else
        v34 = (int)((v21 * 260.0 + 1700.0) / 2540.0 * v30);
      v35 = (float)v34;
      if ( a5 )
        v35 = (float)(v35 * 100.0) / (float)a5;
      v33 = ceilf_0(v35);
    }
    else
    {
      v31 = 1900;
      if ( v21 < 19.5 )
        v31 = 1600;
      v32 = (double)v31 / 2540.0 * 4.0 * v30 + v30 * 0.07874015748031496 + (double)v31 / 2540.0 * v30;
      if ( a5 )
        v32 = (float)(v32 * 100.0) / (float)a5;
      v33 = ceilf_0(v32);
    }
  }
  v36 = (int)v33;
  a2[1] = (int)v33;
  if ( (float)v29 > v24 )
    *a2 = (int)v24;
  v37 = (int)(float)(v26 * 0.5);
  if ( v36 > v37 )
  {
    a2[1] = v37;
    v36 = (int)(float)(v26 * 0.5);
  }
  if ( v11 > 8.0 && v11 < 23.5 )
  {
    v38 = v26 * 0.43;
    if ( (double)v36 > v38 )
      a2[1] = (int)v38;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v42);
  return a2;
}
