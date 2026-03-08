/*
 * XREFs of ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x1C03298A0
 * Callers:
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C032C5B0 (OutputDuplProcessRemoteSessionSetPointerShape.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C01D24DC (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0223880 (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C0327ED4 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0328448 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C032E7AC (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPointerShapeChange(
        OUTPUTDUPL_MGR *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        UINT a4,
        UINT a5)
{
  __int64 VidPnSourceId; // rax
  __m128i v9; // xmm1
  __int64 v10; // xmm0_8
  struct DXGFASTMUTEX *v11; // rbx
  OUTPUTDUPL_CONTEXT **v12; // rbx
  __int64 v13; // rsi
  unsigned int v14; // r14d
  int v15; // r12d
  OUTPUTDUPL_CONTEXT *v16; // r9
  OUTPUTDUPL_MGR *v17; // rcx
  int v18; // eax
  _BYTE v21[16]; // [rsp+58h] [rbp-89h] BYREF
  _DXGKARG_SETPOINTERSHAPE v22; // [rsp+68h] [rbp-79h] BYREF
  _DWORD v23[20]; // [rsp+90h] [rbp-51h] BYREF

  VidPnSourceId = a3->VidPnSourceId;
  if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 19) )
  {
    WdLogSingleEntry2(3LL, VidPnSourceId, this);
    return 3221225473LL;
  }
  else
  {
    v9 = *(__m128i *)&a3->VidPnSourceId;
    *(_OWORD *)&v22.Flags.0 = *(_OWORD *)&a3->Flags.0;
    v22.Height = a5;
    v10 = *(_QWORD *)&a3->XHot;
    *(__m128i *)&v22.VidPnSourceId = v9;
    v22.Width = a4;
    *(_QWORD *)&v22.XHot = v10;
    v11 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72LL * (unsigned int)_mm_cvtsi128_si32(v9));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, v11, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
    v12 = (OUTPUTDUPL_CONTEXT **)*((_QWORD *)v11 + 6);
    LODWORD(v13) = 0;
    v14 = 0;
    v15 = 1;
    if ( *((_DWORD *)this + 2) )
    {
      while ( 1 )
      {
        v16 = *v12;
        if ( *v12 && *((_DWORD *)v16 + 79) )
        {
          if ( v15 )
          {
            if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
            {
              memset(v23, 0, sizeof(v23));
              OUTPUTDUPL_MGR::InitializePacketHeader(v17, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v23);
              v23[13] = a3->VidPnSourceId;
              v23[14] = a3->Flags.Value;
              v23[15] = a4;
              v23[16] = a5;
              v23[17] = a3->Pitch;
              v23[18] = a3->XHot;
              v23[19] = a3->YHot;
              v23[1] = 80;
              v23[12] = 3;
              OUTPUTDUPL_MGR::LogEtwAndDiagnostics(
                (DXGDIAGNOSTICS **)this,
                0,
                (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v23,
                1);
              OUTPUTDUPL_MGR::LogPointerPositionChangeParams(this, a2);
              v16 = *v12;
            }
            v15 = 0;
          }
          v18 = OUTPUTDUPL_CONTEXT::ProcessPointerShape(v16, a2, &v22);
          v13 = v18;
          if ( v18 < 0 )
            break;
        }
        ++v14;
        ++v12;
        if ( v14 >= *((_DWORD *)this + 2) )
          goto LABEL_13;
      }
      WdLogSingleEntry3(2LL, v22.VidPnSourceId, v14, v18);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Process pointer shape failed in vidpn: 0x%I64x, idx: 0x%I64x, status: 0x%I64x",
        v22.VidPnSourceId,
        v14,
        v13,
        0LL,
        0LL);
    }
LABEL_13:
    if ( v21[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
    return (unsigned int)v13;
  }
}
