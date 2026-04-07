/*
 * XREFs of ?UpdateRect@CProjectionBorderVisual@@QEAAXAEBUtagRECT@@@Z @ 0x180092F84
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x180090E10 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800917B4 (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x180092FEC (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProjectionBorderVisual::UpdateRect(CProjectionBorderVisual *this, const struct tagRECT *a2)
{
  struct tagRECT *v3; // rsi
  void (__fastcall *v5)(CProjectionBorderVisual *, __int64); // rax

  v3 = (struct tagRECT *)((char *)this + 280);
  if ( !EqualRect(a2, (const RECT *)((char *)this + 280)) )
  {
    v5 = *(void (__fastcall **)(CProjectionBorderVisual *, __int64))(*(_QWORD *)this + 24LL);
    *v3 = *a2;
    v5(this, 0x4000LL);
  }
}
