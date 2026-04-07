/*
 * XREFs of ?UpdateShowContact@CTouchDragVisual@@QEAAXW4DWM_SHOWCONTACT@@@Z @ 0x1800A4A18
 * Callers:
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18009F4C8 (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800A01C4 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     <none>
 */

void __fastcall CTouchDragVisual::UpdateShowContact(__int64 a1, int a2)
{
  float v2; // xmm0_4

  *(_DWORD *)(a1 + 456) = a2;
  if ( (a2 & 4) != 0 )
    v2 = *(float *)(a1 + 312);
  else
    v2 = 0.0;
  CVisual::SetOpacity((CVisual *)a1, v2);
}
