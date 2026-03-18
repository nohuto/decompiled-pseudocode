/*
 * XREFs of ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C0044884
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0040FFC (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0007E58 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0034524 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ApiSetEditionPostInputMessage @ 0x1C0041768 (ApiSetEditionPostInputMessage.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0041A94 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C00449A8 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C0044A9C (-GetInputDestFromForegroundCapture@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C006DA50 (PhysicalToLogicalDPIPoint.c)
 *     IsWindowDesktopComposed @ 0x1C0087B10 (IsWindowDesktopComposed.c)
 *     HMValidateSharedHandleNoRip @ 0x1C008F240 (HMValidateSharedHandleNoRip.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C00CFE9C (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CMouseProcessor::HandleCapture_MakeNoMouseOwner(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3,
        __int64 a4,
        struct tagPOINT a5,
        unsigned int a6)
{
  _OWORD *InputDestFromForegroundCapture; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  char v20; // di
  int v21; // eax
  bool v22; // zf
  int v24; // esi
  __int64 v25; // rbx
  __int64 v26; // r8
  unsigned int DpiAwarenessContext; // eax
  unsigned __int16 v28; // dx
  __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  unsigned int v34; // ebx
  __int64 v35; // rdx
  __int64 PtiFromInputDest; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 *v39; // [rsp+48h] [rbp-B8h]
  __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h] BYREF
  __int128 v42; // [rsp+70h] [rbp-90h] BYREF
  __int64 v43; // [rsp+80h] [rbp-80h]
  _OWORD v44[7]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v45[112]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v46[20]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v47; // [rsp+1C0h] [rbp+C0h]
  int v48; // [rsp+1CCh] [rbp+CCh]

  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) == 0 )
  {
    InputDestFromForegroundCapture = (_OWORD *)QHelper::GetInputDestFromForegroundCapture(v45);
    v11 = InputDestFromForegroundCapture[1];
    v44[0] = *InputDestFromForegroundCapture;
    v12 = InputDestFromForegroundCapture[2];
    v44[1] = v11;
    v13 = InputDestFromForegroundCapture[3];
    v44[2] = v12;
    v14 = InputDestFromForegroundCapture[4];
    v44[3] = v13;
    v15 = InputDestFromForegroundCapture[5];
    v44[4] = v14;
    v16 = InputDestFromForegroundCapture[6];
    v44[5] = v15;
    v44[6] = v16;
    CInputDest::CInputDest((CInputDest *)v46, (const struct tagINPUTDEST *)v44);
    v20 = 0;
    if ( !v46[0] || CInputDest::IsEqualByQ(a2, (const struct CInputDest *)v46) )
      goto LABEL_3;
    v24 = v48;
    v25 = v47;
    if ( v48 != 2 || !v47 || (unsigned int)IsWindowDesktopComposed(v47) )
    {
      CInputDest::GetDpiAwarenessContext(a2);
      DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v46);
      if ( (((unsigned __int16)(DpiAwarenessContext >> 8) ^ v28) & 0x1FF) != 0 )
      {
        v40 = 0LL;
        if ( v24 == 2 && v25 )
          v29 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(v25 + 40) + 256LL));
        else
          v29 = 0LL;
        v41 = v29;
        v30 = CInputDest::GetDpiAwarenessContext((CInputDest *)v46);
        PhysicalToLogicalDPIPoint(&v40, &a5, v30, &v41);
        v24 = v48;
        v25 = v47;
        a4 = (unsigned __int16)v40 | (WORD2(v40) << 16);
      }
    }
    v31 = *((_QWORD *)a3 + 1);
    if ( *(_DWORD *)(v31 + 108) != 1 )
    {
      if ( !anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v31 + 132), v46, v26) )
        goto LABEL_29;
      v24 = v48;
      v25 = v47;
    }
    v39 = (__int64 *)(*((_QWORD *)a3 + 1) + 104LL);
    v33 = 0LL;
    if ( v24 == 2 )
      v33 = v25;
    v34 = a6;
    v43 = 0LL;
    v42 = 0LL;
    ApiSetEditionPostInputMessage((int)v46, v33, a6, 0, a4, 0, 0LL, 0LL, 0, v39, (__int64)&v42);
    v35 = 0LL;
    if ( v48 == 2 )
      v35 = v47;
    ApiSetEditionPostInputMessage(
      (int)v46,
      v35,
      v34 + 1,
      0,
      a4,
      0,
      0LL,
      0LL,
      0,
      (__int64 *)(*((_QWORD *)a3 + 1) + 104LL),
      (__int64)&v42);
LABEL_29:
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)v46, 2LL, v32);
    if ( PtiFromInputDest )
    {
      if ( *(_QWORD *)(PtiFromInputDest + 672) )
      {
        v37 = anonymous_namespace_::GetPtiFromInputDest((__int64)v46, 2LL, v19);
        if ( !v37 || (v38 = *(_QWORD *)(v37 + 608)) == 0 || (*(_DWORD *)(v38 + 8) & 1) == 0 )
        {
LABEL_8:
          CInputDest::SetEmpty((CInputDest *)v46);
          return v20;
        }
      }
    }
LABEL_3:
    v21 = *((_DWORD *)a3 + 7);
    if ( !v21 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
      v21 = *((_DWORD *)a3 + 7);
    }
    v22 = (v21 | *((_DWORD *)this + 893)) == 0;
    *((_DWORD *)this + 893) |= v21;
    if ( v22 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3576), a2);
    v20 = 1;
    goto LABEL_8;
  }
  return 1;
}
