/*
 * XREFs of ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x1C012ED28
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C004A280 (xxxInterSendMsgEx.c)
 * Callees:
 *     ?TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C012ED44 (-TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 */

void __fastcall CKernelStackSwapAuto::~CKernelStackSwapAuto(CKernelStackSwapAuto *this)
{
  if ( *((_QWORD *)this + 1) )
    CKernelStackSwap::TryEnableStackSwap(this);
}
