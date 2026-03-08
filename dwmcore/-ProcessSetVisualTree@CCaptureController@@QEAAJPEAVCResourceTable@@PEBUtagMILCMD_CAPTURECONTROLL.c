/*
 * XREFs of ?ProcessSetVisualTree@CCaptureController@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURECONTROLLER_SETVISUALTREE@@@Z @ 0x18021D4BC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCaptureController::ProcessSetVisualTree(
        CCaptureController *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURECONTROLLER_SETVISUALTREE *a3)
{
  _QWORD *v3; // rbx
  _QWORD *v5; // rsi
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rcx

  v3 = (_QWORD *)*((_QWORD *)this + 8);
  v5 = (_QWORD *)*((_QWORD *)this + 9);
  v6 = 0;
  while ( v3 != v5 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v3 + 312LL))(*v3, *((_QWORD *)a3 + 1));
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x29u, 0LL);
      return v6;
    }
    ++v3;
  }
  return v6;
}
