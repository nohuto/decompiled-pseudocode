/*
 * XREFs of ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x1C015C1E4
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C00517B0 (xxxInterSendMsgEx.c)
 * Callees:
 *     ?TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C015C230 (-TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 */

void __fastcall CKernelStackSwapAuto::~CKernelStackSwapAuto(CKernelStackSwapAuto *this)
{
  if ( *((_QWORD *)this + 1) )
    CKernelStackSwap::TryEnableStackSwap(this);
}
