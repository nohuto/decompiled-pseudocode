/*
 * XREFs of ?GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z @ 0x1C032772C
 * Callers:
 *     _lambda_a555c8f1bf148962729f2402570fc0b4_::_lambda_invoker_cdecl_ @ 0x1C03254A0 (_lambda_a555c8f1bf148962729f2402570fc0b4_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C01D24DC (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C022378E (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C0327ED4 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0328448 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetFrameInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_FRAMEINFO@@@Z @ 0x1C032D498 (-GetFrameInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_FRAMEINFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetFrameInfo(OUTPUTDUPL_MGR *this, struct _D3DKMT_OUTPUTDUPL_GET_FRAMEINFO *a2)
{
  struct DXGFASTMUTEX *v4; // rbx
  __int64 v5; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  int v8; // esi
  OUTPUTDUPL_MGR *v9; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  _BYTE v14[16]; // [rsp+20h] [rbp-59h] BYREF
  _QWORD v15[14]; // [rsp+30h] [rbp-49h] BYREF

  v4 = (struct DXGFASTMUTEX *)(*((_QWORD *)this + 2) + 72LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, v4, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v5);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _KTHREAD **)v4, CurrentProcess, 0LL);
  if ( ContextForProcess )
  {
    OUTPUTDUPL_CONTEXT::GetFrameInfo(*ContextForProcess, &a2->FrameInfo);
    v8 = 0;
  }
  else
  {
    v8 = -1073741275;
  }
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) && v8 >= 0 )
  {
    memset(v15, 0, 0x68uLL);
    OUTPUTDUPL_MGR::InitializePacketHeader(v9, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v15);
    VidPnSourceId = a2->VidPnSourceId;
    v11 = *(_OWORD *)&a2->FrameInfo.AccumulatedFrames;
    *(_OWORD *)&v15[7] = *(_OWORD *)&a2->FrameInfo.LastPresentTime.LowPart;
    HIDWORD(v15[0]) = 104;
    v12 = *(_OWORD *)&a2->FrameInfo.PointerPosition.Position.y;
    LODWORD(v15[6]) = 7;
    HIDWORD(v15[6]) = VidPnSourceId;
    *(_OWORD *)&v15[11] = v12;
    *(_OWORD *)&v15[9] = v11;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v15, 1);
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  return (unsigned int)v8;
}
