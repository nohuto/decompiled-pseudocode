/*
 * XREFs of ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x1C013C7E4
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C004D920 (xxxInterSendMsgEx.c)
 * Callees:
 *     ?TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ @ 0x1C013C800 (-TryEnableStackSwap@CKernelStackSwap@@QEAAXXZ.c)
 */

void __fastcall CKernelStackSwapAuto::~CKernelStackSwapAuto(CKernelStackSwapAuto *this)
{
  if ( *((_QWORD *)this + 1) )
    CKernelStackSwap::TryEnableStackSwap(this);
}
