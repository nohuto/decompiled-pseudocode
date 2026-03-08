/*
 * XREFs of ??0InternalFilterInput@@QEAA@IAEBUtagRECT@@PEAVCResource@@@Z @ 0x180260B44
 * Callers:
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180219C30 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEIN.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

InternalFilterInput *__fastcall InternalFilterInput::InternalFilterInput(
        InternalFilterInput *this,
        int a2,
        const struct tagRECT *a3,
        struct CResource *a4)
{
  *(_DWORD *)this = a2;
  *(struct tagRECT *)((char *)this + 4) = *a3;
  *((_QWORD *)this + 3) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)a4 + 8LL))(a4);
  return this;
}
