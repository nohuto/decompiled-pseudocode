/*
 * XREFs of ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C022DC78
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C022F50C (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ApiSetEditionPostInputMessage @ 0x1C00072A4 (ApiSetEditionPostInputMessage.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0007574 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C000AD50 (PhysicalToLogicalDPIPoint.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0079840 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C007CE78 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     IsWindowDesktopComposed @ 0x1C009D810 (IsWindowDesktopComposed.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C01E3834 (-IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z.c)
 *     ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C022D25C (-GetInputDestFromForegroundCapture@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C02311F4 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0231A3C (_anonymous_namespace_--ValidateUIPI.c)
 *     HMValidateSharedHandleNoRip @ 0x1C0247060 (HMValidateSharedHandleNoRip.c)
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
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  char v18; // di
  int v19; // esi
  __int64 v20; // rbx
  unsigned int DpiAwarenessContext; // eax
  unsigned __int16 v22; // dx
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // ebx
  __int64 v28; // rdx
  __int64 PtiFromInputDest; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  bool v33; // zf
  __int64 *v34; // [rsp+48h] [rbp-B8h]
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  __int128 v37; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h]
  _OWORD v39[7]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v40[7]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v41[20]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v42; // [rsp+1C0h] [rbp+C0h]
  int v43; // [rsp+1CCh] [rbp+CCh]

  if ( (*(&InputDelegation::CInputDelegationInfo::gInstance + 8) & 2) != 0 )
    return 1;
  InputDestFromForegroundCapture = QHelper::GetInputDestFromForegroundCapture(v40);
  v12 = InputDestFromForegroundCapture[1];
  v39[0] = *InputDestFromForegroundCapture;
  v13 = InputDestFromForegroundCapture[2];
  v39[1] = v12;
  v14 = InputDestFromForegroundCapture[3];
  v39[2] = v13;
  v15 = InputDestFromForegroundCapture[4];
  v39[3] = v14;
  v16 = InputDestFromForegroundCapture[5];
  v39[4] = v15;
  v17 = InputDestFromForegroundCapture[6];
  v39[5] = v16;
  v39[6] = v17;
  CInputDest::CInputDest((CInputDest *)v41, (const struct tagINPUTDEST *)v39);
  v18 = 0;
  if ( !v41[0] || CInputDest::IsEqualByQ(a2, (const struct CInputDest *)v41) )
    goto LABEL_27;
  v19 = v43;
  v20 = v42;
  if ( v43 != 2 || !v42 || (unsigned int)IsWindowDesktopComposed(v42) )
  {
    CInputDest::GetDpiAwarenessContext(a2);
    DpiAwarenessContext = CInputDest::GetDpiAwarenessContext((CInputDest *)v41);
    if ( (((unsigned __int16)(DpiAwarenessContext >> 8) ^ v22) & 0x1FF) != 0 )
    {
      v35 = 0LL;
      if ( v19 == 2 && v20 )
        v23 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(v20 + 40) + 256LL));
      else
        v23 = 0LL;
      v36 = v23;
      v24 = CInputDest::GetDpiAwarenessContext((CInputDest *)v41);
      PhysicalToLogicalDPIPoint(&v35, &a5, v24, &v36);
      v19 = v43;
      v20 = v42;
      a4 = (unsigned __int16)v35 | (WORD2(v35) << 16);
    }
  }
  v25 = *((_QWORD *)a3 + 1);
  if ( *(_DWORD *)(v25 + 108) != 1 )
  {
    if ( !(unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v25 + 132), v41) )
      goto LABEL_22;
    v19 = v43;
    v20 = v42;
  }
  v34 = (__int64 *)(*((_QWORD *)a3 + 1) + 104LL);
  v26 = 0LL;
  if ( v19 == 2 )
    v26 = v20;
  v27 = a6;
  v38 = 0LL;
  v37 = 0LL;
  ApiSetEditionPostInputMessage((int)v41, v26, a6, 0, a4, 0, 0LL, 0LL, 0, v34, (__int64)&v37);
  v28 = 0LL;
  if ( v43 == 2 )
    v28 = v42;
  ApiSetEditionPostInputMessage(
    (int)v41,
    v28,
    v27 + 1,
    0,
    a4,
    0,
    0LL,
    0LL,
    0,
    (__int64 *)(*((_QWORD *)a3 + 1) + 104LL),
    (__int64)&v37);
LABEL_22:
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest((__int64)v41, 2);
  if ( !PtiFromInputDest
    || !*(_QWORD *)(PtiFromInputDest + 672)
    || (v30 = anonymous_namespace_::GetPtiFromInputDest((__int64)v41, 2)) != 0
    && (v31 = *(_QWORD *)(v30 + 608)) != 0
    && (*(_DWORD *)(v31 + 8) & 1) != 0 )
  {
LABEL_27:
    if ( !*((_DWORD *)a3 + 7) )
    {
      LODWORD(v35) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7390);
    }
    v32 = *((_DWORD *)a3 + 7);
    v33 = (v32 | *((_DWORD *)this + 893)) == 0;
    *((_DWORD *)this + 893) |= v32;
    if ( v33 )
    {
      LODWORD(v35) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4117);
    }
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3576), a2);
    v18 = 1;
  }
  CInputDest::SetEmpty((CInputDest *)v41);
  return v18;
}
