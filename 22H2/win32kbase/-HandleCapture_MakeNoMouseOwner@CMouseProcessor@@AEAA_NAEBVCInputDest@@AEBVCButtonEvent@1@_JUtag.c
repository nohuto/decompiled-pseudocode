/*
 * XREFs of ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C009F078
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004ABB0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0043D04 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0043EC0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00457FC (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0045ED4 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     ApiSetEditionPostInputMessage @ 0x1C004950C (ApiSetEditionPostInputMessage.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C0071530 (PhysicalToLogicalDPIPoint.c)
 *     IsWindowDesktopComposed @ 0x1C007BE60 (IsWindowDesktopComposed.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C009F19C (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C009F28C (-GetInputDestFromForegroundCapture@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C009F36C (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00ADF68 (_anonymous_namespace_--ValidateUIPI.c)
 *     HMValidateSharedHandleNoRip @ 0x1C00B4228 (HMValidateSharedHandleNoRip.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
  char v17; // di
  int v18; // eax
  bool v19; // zf
  int v21; // esi
  __int64 v22; // rcx
  __int64 v23; // rbx
  unsigned int DpiAwarenessContext; // eax
  unsigned __int16 v25; // dx
  int v26; // edx
  int v27; // eax
  int v28; // r8d
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // edx
  unsigned int v36; // ebx
  int v37; // edx
  __int64 PtiFromInputDest; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+68h] [rbp-98h] BYREF
  __int128 v43; // [rsp+70h] [rbp-90h] BYREF
  __int64 v44; // [rsp+80h] [rbp-80h]
  _OWORD v45[7]; // [rsp+90h] [rbp-70h] BYREF
  char v46[112]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v47[20]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v48; // [rsp+1C0h] [rbp+C0h]
  int v49; // [rsp+1CCh] [rbp+CCh]

  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) == 0 )
  {
    InputDestFromForegroundCapture = (_OWORD *)QHelper::GetInputDestFromForegroundCapture(v46);
    v11 = InputDestFromForegroundCapture[1];
    v45[0] = *InputDestFromForegroundCapture;
    v12 = InputDestFromForegroundCapture[2];
    v45[1] = v11;
    v13 = InputDestFromForegroundCapture[3];
    v45[2] = v12;
    v14 = InputDestFromForegroundCapture[4];
    v45[3] = v13;
    v15 = InputDestFromForegroundCapture[5];
    v45[4] = v14;
    v16 = InputDestFromForegroundCapture[6];
    v45[5] = v15;
    v45[6] = v16;
    CInputDest::CInputDest((CInputDest *)v47, (const struct tagINPUTDEST *)v45);
    v17 = 0;
    if ( !v47[0] || CInputDest::IsEqualByQ(a2, (const struct CInputDest *)v47) )
      goto LABEL_3;
    v21 = v49;
    v22 = 0LL;
    v23 = v48;
    if ( v49 == 2 )
      v22 = v48;
    if ( !v22 || (unsigned int)IsWindowDesktopComposed(v22) )
    {
      CInputDest::GetDpiAwarenessContext(a2);
      DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v47);
      if ( (((unsigned __int16)(DpiAwarenessContext >> 8) ^ v25) & 0x1FF) != 0 )
        goto LABEL_23;
      if ( (CInputDest::GetDpiAwarenessContext(a2) & 0xF) == 2 )
        CInputDest::GetDpiAwarenessContext(a2);
      if ( (CInputDest::GetDpiAwarenessContext((CInputDest *)v47) & 0xF) != 2
        || (v27 = CInputDest::GetDpiAwarenessContext((CInputDest *)v47), v19 = (v27 & v28) == 0, v29 = 1, v19) )
      {
        v29 = 0;
      }
      if ( v26 != v29 )
      {
LABEL_23:
        v41 = 0LL;
        v30 = 0LL;
        if ( v21 == 2 )
          v30 = v23;
        if ( v30 )
          v31 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(v30 + 40) + 256LL));
        else
          v31 = 0LL;
        v42 = v31;
        v32 = CInputDest::GetDpiAwarenessContext((CInputDest *)v47);
        PhysicalToLogicalDPIPoint((__int64)&v41, (__int64)&a5, v32, &v42);
        v21 = v49;
        LODWORD(v23) = v48;
        a4 = (unsigned __int16)v41 | (WORD2(v41) << 16);
      }
    }
    v33 = *((_QWORD *)a3 + 1);
    if ( *(_DWORD *)(v33 + 108) != 1 )
    {
      if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v33 + 132), v47) )
        goto LABEL_37;
      v21 = v49;
      LODWORD(v23) = v48;
    }
    v34 = *((_QWORD *)a3 + 1);
    v44 = 0LL;
    v35 = 0;
    if ( v21 == 2 )
      v35 = v23;
    v36 = a6;
    v43 = 0LL;
    ApiSetEditionPostInputMessage((int)v47, v35, a6, 0, a4, 0, 0LL, 0LL, 0, (__int64 *)(v34 + 104), (__int64)&v43);
    v37 = 0;
    if ( v49 == 2 )
      v37 = v48;
    ApiSetEditionPostInputMessage(
      (int)v47,
      v37,
      v36 + 1,
      0,
      a4,
      0,
      0LL,
      0LL,
      0,
      (__int64 *)(*((_QWORD *)a3 + 1) + 104LL),
      (__int64)&v43);
LABEL_37:
    PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)v47, 2);
    if ( PtiFromInputDest )
    {
      if ( *(_QWORD *)(PtiFromInputDest + 672) )
      {
        v39 = anonymous_namespace_::GetPtiFromInputDest((__int64)v47, 2);
        if ( !v39 || (v40 = *(_QWORD *)(v39 + 608)) == 0 || (*(_DWORD *)(v40 + 8) & 1) == 0 )
        {
LABEL_8:
          CInputDest::SetEmpty((CInputDest *)v47);
          return v17;
        }
      }
    }
LABEL_3:
    v18 = *((_DWORD *)a3 + 7);
    if ( !v18 )
    {
      LODWORD(v41) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7103LL);
      v18 = *((_DWORD *)a3 + 7);
    }
    v19 = (v18 | *((_DWORD *)this + 891)) == 0;
    *((_DWORD *)this + 891) |= v18;
    if ( v19 )
    {
      LODWORD(v41) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3959LL);
    }
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3568), a2);
    v17 = 1;
    goto LABEL_8;
  }
  return 1;
}
