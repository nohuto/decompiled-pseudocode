/*
 * XREFs of ?s_GetRestoreRect@CRecalcState@@CA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C010DE70
 * Callers:
 *     ??0CRecalcState@@QEAA@PEBUtagWND@@PEAVCMonitorTopology@@PEBUtagRECT@@2W4StartRecalcOption@@@Z @ 0x1C015C600 (--0CRecalcState@@QEAA@PEBUtagWND@@PEAVCMonitorTopology@@PEBUtagRECT@@2W4StartRecalcOption@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?GetWindowState@AdvancedWindowPos@@YA?AW4State@1@PEBUtagWND@@@Z @ 0x1C010DEDC (-GetWindowState@AdvancedWindowPos@@YA-AW4State@1@PEBUtagWND@@@Z.c)
 */

struct tagRECT *__fastcall CRecalcState::s_GetRestoreRect(struct tagRECT *__return_ptr retstr, const struct tagWND *a2)
{
  __int64 v4; // rcx
  struct tagRECT v5; // xmm0
  struct tagRECT *result; // rax
  char v7; // si
  struct tagRECT *Prop; // rax
  int v9; // r8d
  int v10; // r9d
  int v11; // edx

  if ( (unsigned int)AdvancedWindowPos::GetWindowState(a2) )
  {
    v7 = 1;
    Prop = (struct tagRECT *)GetProp(v4, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
    if ( Prop )
    {
      v5 = *Prop;
      goto LABEL_3;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 11;
      LOBYTE(v11) = v7;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v9,
        v10,
        2,
        23,
        11,
        (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
        *(_QWORD *)a2);
    }
  }
  v5 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL);
LABEL_3:
  result = retstr;
  *retstr = v5;
  return result;
}
