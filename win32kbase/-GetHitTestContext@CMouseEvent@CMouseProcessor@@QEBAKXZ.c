/*
 * XREFs of ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1C007C900
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C007C470 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMouseProcessor::CMouseEvent::GetHitTestContext(CMouseProcessor::CMouseEvent *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 1);
  if ( *(_DWORD *)(v1 + 148) == 2 )
    return *(unsigned int *)(v1 + 152);
  else
    return 0LL;
}
