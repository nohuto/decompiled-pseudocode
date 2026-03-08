/*
 * XREFs of ?SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z @ 0x180231474
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x180230C64 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800389DC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     _Init_thread_footer @ 0x18010EE80 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18010EEE8 (_Init_thread_header.c)
 */

void __fastcall CConditionalExpression::SetDebugTargetInfo(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rcx

  if ( __TSS0__1__SetDebugTargetInfo_CConditionalExpression__AEAAXUDebugTargetInfo_2__Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) )
  {
    Init_thread_header(&__TSS0__1__SetDebugTargetInfo_CConditionalExpression__AEAAXUDebugTargetInfo_2__Z_4HA);
    if ( __TSS0__1__SetDebugTargetInfo_CConditionalExpression__AEAAXUDebugTargetInfo_2__Z_4HA == -1 )
    {
      dword_1803E7708 = 0;
      Init_thread_footer(&__TSS0__1__SetDebugTargetInfo_CConditionalExpression__AEAAXUDebugTargetInfo_2__Z_4HA);
    }
  }
  v4 = *(_QWORD *)a2 - `CConditionalExpression::SetDebugTargetInfo'::`2'::sc_defaultValue;
  if ( *(_QWORD *)a2 == `CConditionalExpression::SetDebugTargetInfo'::`2'::sc_defaultValue )
    v4 = a2[2] - (unsigned __int64)(unsigned int)dword_1803E7708;
  if ( v4 )
    CSparseStorage::SetData((CSparseStorage *)(a1 + 328), 1u, 0xCu, a2);
  else
    *(_DWORD *)(*(_QWORD *)(a1 + 328) + 4LL) &= ~0x80000000;
}
