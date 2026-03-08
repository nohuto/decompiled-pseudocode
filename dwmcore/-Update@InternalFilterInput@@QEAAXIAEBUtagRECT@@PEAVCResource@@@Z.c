/*
 * XREFs of ?Update@InternalFilterInput@@QEAAXIAEBUtagRECT@@PEAVCResource@@@Z @ 0x180260BA0
 * Callers:
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180219C30 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEIN.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall InternalFilterInput::Update(
        InternalFilterInput *this,
        int a2,
        const struct tagRECT *a3,
        struct CResource *a4)
{
  __int64 v6; // rcx
  LONG top; // ecx
  LONG right; // edx
  LONG bottom; // r8d

  v6 = *((_QWORD *)this + 3);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_QWORD *)this + 3) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)a4 + 8LL))(a4);
  *(_DWORD *)this = a2;
  top = a3->top;
  right = a3->right;
  bottom = a3->bottom;
  *((_DWORD *)this + 1) = a3->left;
  *((_DWORD *)this + 2) = top;
  *((_DWORD *)this + 3) = right;
  *((_DWORD *)this + 4) = bottom;
}
